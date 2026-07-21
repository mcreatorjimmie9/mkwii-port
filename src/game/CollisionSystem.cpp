// =============================================================================
// CollisionSystem.cpp — KCL Collision Queries Implementation
// MAESTRO Phase 7, Milestone M6: Physics Loop
// =============================================================================

#include "game/CollisionSystem.hpp"
#include <cstdio>
#include <cmath>
#include <algorithm>

namespace Game {

// =============================================================================
// Constants
// =============================================================================
static const f32 GRID_CELL_SIZE = 500.0f;  // 500-unit cells (MKW tracks span ~16000 units)

// =============================================================================
// Constructor
// =============================================================================

CollisionSystem::CollisionSystem()
    : m_gridCellSize(GRID_CELL_SIZE)
    , m_minX(0.0f), m_minZ(0.0f)
    , m_maxX(0.0f), m_maxZ(0.0f)
    , m_gridW(0), m_gridH(0) {
}

// =============================================================================
// build — Construct spatial index from KCL triangles
// =============================================================================

void CollisionSystem::build(const std::vector<Loaders::KclTriangle>& triangles) {
    m_triangles = triangles;
    if (m_triangles.empty()) return;

    // Compute bounding box of all triangle vertices
    m_minX = m_minZ = 1e30f;
    m_maxX = m_maxZ = -1e30f;

    for (const auto& tri : m_triangles) {
        // Check all 3 vertices
        f32 xs[3] = { tri.vertexA.x, tri.vertexB.x, tri.vertexC.x };
        f32 zs[3] = { tri.vertexA.z, tri.vertexB.z, tri.vertexC.z };
        for (int i = 0; i < 3; i++) {
            if (xs[i] < m_minX) m_minX = xs[i];
            if (xs[i] > m_maxX) m_maxX = xs[i];
            if (zs[i] < m_minZ) m_minZ = zs[i];
            if (zs[i] > m_maxZ) m_maxZ = zs[i];
        }
    }

    // Add padding to avoid edge cases
    m_minX -= m_gridCellSize;
    m_minZ -= m_gridCellSize;
    m_maxX += m_gridCellSize;
    m_maxZ += m_gridCellSize;

    // Compute grid dimensions
    m_gridW = static_cast<s32>(std::ceil((m_maxX - m_minX) / m_gridCellSize));
    m_gridH = static_cast<s32>(std::ceil((m_maxZ - m_minZ) / m_gridCellSize));

    // Clamp grid size to avoid huge allocations
    if (m_gridW > 512) m_gridW = 512;
    if (m_gridH > 512) m_gridH = 512;

    // Allocate grid
    m_cells.resize(static_cast<size_t>(m_gridW) * m_gridH);

    // Assign each triangle to all grid cells its bounding box overlaps
    for (u32 triIdx = 0; triIdx < m_triangles.size(); triIdx++) {
        const auto& tri = m_triangles[triIdx];

        // Triangle bounding box
        f32 triMinX = std::min({tri.vertexA.x, tri.vertexB.x, tri.vertexC.x});
        f32 triMaxX = std::max({tri.vertexA.x, tri.vertexB.x, tri.vertexC.x});
        f32 triMinZ = std::min({tri.vertexA.z, tri.vertexB.z, tri.vertexC.z});
        f32 triMaxZ = std::max({tri.vertexA.z, tri.vertexB.z, tri.vertexC.z});

        // Grid cells that overlap this bounding box
        s32 cellMinX, cellMinZ, cellMaxX, cellMaxZ;
        cellMinX = static_cast<s32>((triMinX - m_minX) / m_gridCellSize);
        cellMinZ = static_cast<s32>((triMinZ - m_minZ) / m_gridCellSize);
        cellMaxX = static_cast<s32>((triMaxX - m_minX) / m_gridCellSize);
        cellMaxZ = static_cast<s32>((triMaxZ - m_minZ) / m_gridCellSize);

        // Clamp to grid bounds
        if (cellMinX < 0) cellMinX = 0;
        if (cellMinZ < 0) cellMinZ = 0;
        if (cellMaxX >= m_gridW) cellMaxX = m_gridW - 1;
        if (cellMaxZ >= m_gridH) cellMaxZ = m_gridH - 1;

        // Insert triangle index into all overlapping cells
        for (s32 cz = cellMinZ; cz <= cellMaxZ; cz++) {
            for (s32 cx = cellMinX; cx <= cellMaxX; cx++) {
                m_cells[static_cast<size_t>(cz) * m_gridW + cx].push_back(triIdx);
            }
        }
    }

    printf("  Collision: Built grid %dx%d (%.0f-unit cells), %u triangles, "
           "%.0f avg tris/cell\n",
           m_gridW, m_gridH, m_gridCellSize,
           static_cast<u32>(m_triangles.size()),
           m_triangles.empty() ? 0.0f :
               static_cast<f32>(m_triangles.size()) /
               static_cast<f32>(m_gridW * m_gridH));
}

// =============================================================================
// clear
// =============================================================================

void CollisionSystem::clear() {
    m_triangles.clear();
    m_cells.clear();
    m_gridW = m_gridH = 0;
}

// =============================================================================
// worldToCell — Convert world position to grid cell coordinates
// =============================================================================

void CollisionSystem::worldToCell(f32 x, f32 z, s32& cellX, s32& cellZ) const {
    cellX = static_cast<s32>((x - m_minX) / m_gridCellSize);
    cellZ = static_cast<s32>((z - m_minZ) / m_gridCellSize);
}

// =============================================================================
// getCell — Get triangle list for a grid cell
// =============================================================================

const std::vector<u32>* CollisionSystem::getCell(s32 cellX, s32 cellZ) const {
    if (cellX < 0 || cellX >= m_gridW || cellZ < 0 || cellZ >= m_gridH) {
        return nullptr;
    }
    return &m_cells[static_cast<size_t>(cellZ) * m_gridW + cellX];
}

// =============================================================================
// rayTriangleIntersect — Möller–Trumbore ray-triangle intersection
// =============================================================================

bool CollisionSystem::rayTriangleIntersect(
    f32 ox, f32 oy, f32 oz,
    f32 dx, f32 dy, f32 dz,
    const Loaders::KclTriangle& tri,
    f32 tMin, f32 tMax,
    f32& outT) {

    // Triangle edge vectors
    f32 edge1x = tri.vertexB.x - tri.vertexA.x;
    f32 edge1y = tri.vertexB.y - tri.vertexA.y;
    f32 edge1z = tri.vertexB.z - tri.vertexA.z;

    f32 edge2x = tri.vertexC.x - tri.vertexA.x;
    f32 edge2y = tri.vertexC.y - tri.vertexA.y;
    f32 edge2z = tri.vertexC.z - tri.vertexA.z;

    // Determinant: h = rayDir x edge2
    f32 hx = dy * edge2z - dz * edge2y;
    f32 hy = dz * edge2x - dx * edge2z;
    f32 hz = dx * edge2y - dy * edge2x;

    // a = f * edge1
    f32 a = edge1x * hx + edge1y * hy + edge1z * hz;

    // Parallel test
    if (a > -1e-6f && a < 1e-6f) return false;

    f32 f = 1.0f / a;

    // s = origin - vertexA
    f32 sx = ox - tri.vertexA.x;
    f32 sy = oy - tri.vertexA.y;
    f32 sz = oz - tri.vertexA.z;

    // u = f * (s . h)
    f32 u = f * (sx * hx + sy * hy + sz * hz);
    if (u < 0.0f || u > 1.0f) return false;

    // q = s x edge1
    f32 qx = sy * edge1z - sz * edge1y;
    f32 qy = sz * edge1x - sx * edge1z;
    f32 qz = sx * edge1y - sy * edge1x;

    // v = f * (rayDir . q)
    f32 v = f * (dx * qx + dy * qy + dz * qz);
    if (v < 0.0f || u + v > 1.0f) return false;

    // t = f * (edge2 . q)
    f32 t = f * (edge2x * qx + edge2y * qy + edge2z * qz);

    if (t > tMin && t < tMax) {
        outT = t;
        return true;
    }
    return false;
}

// =============================================================================
// pointInTriangleXZ — Test if (px, pz) is inside triangle's XZ projection
// =============================================================================

bool CollisionSystem::pointInTriangleXZ(
    f32 px, f32 pz,
    const Loaders::KclTriangle& tri) {

    // Barycentric coordinate method in XZ plane
    f32 v0x = tri.vertexC.x - tri.vertexA.x;
    f32 v0z = tri.vertexC.z - tri.vertexA.z;
    f32 v1x = tri.vertexB.x - tri.vertexA.x;
    f32 v1z = tri.vertexB.z - tri.vertexA.z;

    f32 vpx = px - tri.vertexA.x;
    f32 vpz = pz - tri.vertexA.z;

    f32 d00 = v0x * v0x + v0z * v0z;
    f32 d01 = v0x * v1x + v0z * v1z;
    f32 d11 = v1x * v1x + v1z * v1z;
    f32 d20 = vpx * v0x + vpz * v0z;
    f32 d21 = vpx * v1x + vpz * v1z;

    f32 denom = d00 * d11 - d01 * d01;
    if (denom > -1e-6f && denom < 1e-6f) return false;

    f32 inv = 1.0f / denom;
    f32 u = (d11 * d20 - d01 * d21) * inv;
    f32 v = (d00 * d21 - d01 * d20) * inv;

    return (u >= 0.0f && v >= 0.0f && (u + v) <= 1.0f);
}

// =============================================================================
// triangleNormal — Compute face normal from cross product of two edges
// =============================================================================

void CollisionSystem::triangleNormal(const Loaders::KclTriangle& tri,
                                     f32& nx, f32& ny, f32& nz) {
    f32 e1x = tri.vertexB.x - tri.vertexA.x;
    f32 e1y = tri.vertexB.y - tri.vertexA.y;
    f32 e1z = tri.vertexB.z - tri.vertexA.z;

    f32 e2x = tri.vertexC.x - tri.vertexA.x;
    f32 e2y = tri.vertexC.y - tri.vertexA.y;
    f32 e2z = tri.vertexC.z - tri.vertexA.z;

    // Cross product: e1 x e2
    nx = e1y * e2z - e1z * e2y;
    ny = e1z * e2x - e1x * e2z;
    nz = e1x * e2y - e1y * e2x;

    // Normalize
    f32 len = std::sqrt(nx * nx + ny * ny + nz * nz);
    if (len > 1e-6f) {
        nx /= len;
        ny /= len;
        nz /= len;
    }
}

// =============================================================================
// raycastGround — Downward raycast to find ground Y
// =============================================================================

f32 CollisionSystem::raycastGround(f32 x, f32 y, f32 z,
                                   f32 maxDist,
                                   u16* outSurfaceType) const {
    if (m_triangles.empty()) {
        if (outSurfaceType) *outSurfaceType = 0;
        return y;  // No collision data, return current height
    }

    // Ray direction: straight down (0, -1, 0)
    // Search for highest triangle intersection below the kart

    f32 bestT = maxDist;  // Maximum search distance
    u16 bestType = 0;
    bool found = false;

    // Check grid cell at query position + nearby cells for safety
    s32 cx, cz;
    worldToCell(x, z, cx, cz);

    // Check 3x3 neighborhood of cells
    for (s32 dz = -1; dz <= 1; dz++) {
        for (s32 dx = -1; dx <= 1; dx++) {
            const auto* cell = getCell(cx + dx, cz + dz);
            if (!cell) continue;

            for (u32 triIdx : *cell) {
                const auto& tri = m_triangles[triIdx];

                // Skip wall-type triangles for ground raycast
                if (tri.collisionType & (Loaders::KCLType::WALL |
                                         Loaders::KCLType::WALL_SLOW |
                                         Loaders::KCLType::INVISIBLE_WALL)) {
                    continue;
                }

                f32 t;
                if (rayTriangleIntersect(x, y, z,
                                          0.0f, -1.0f, 0.0f,
                                          tri, 0.001f, bestT, t)) {
                    bestT = t;
                    bestType = tri.collisionType;
                    found = true;
                }
            }
        }
    }

    if (found) {
        if (outSurfaceType) *outSurfaceType = bestType;
        return y - bestT;  // Ground Y = origin Y - t (since direction is -Y)
    }

    if (outSurfaceType) *outSurfaceType = 0;
    return y;  // No ground found
}

// =============================================================================
// checkWalls — Check for wall collisions near kart
// =============================================================================

bool CollisionSystem::checkWalls(f32 x, f32 y, f32 z, f32 radius,
                                   f32& pushX, f32& pushZ) const {
    if (m_triangles.empty()) {
        pushX = pushZ = 0.0f;
        return false;
    }

    pushX = pushZ = 0.0f;
    bool anyWall = false;

    s32 cx, cz;
    worldToCell(x, z, cx, cz);

    // Check 3x3 neighborhood
    for (s32 dz = -1; dz <= 1; dz++) {
        for (s32 dx = -1; dx <= 1; dx++) {
            const auto* cell = getCell(cx + dx, cz + dz);
            if (!cell) continue;

            for (u32 triIdx : *cell) {
                const auto& tri = m_triangles[triIdx];

                // Only check wall-type triangles
                if (!(tri.collisionType & (Loaders::KCLType::WALL |
                                             Loaders::KCLType::WALL_SLOW |
                                             Loaders::KCLType::INVISIBLE_WALL))) {
                    continue;
                }

                // Compute triangle Y extent
                f32 triMinY = std::min({tri.vertexA.y, tri.vertexB.y, tri.vertexC.y});
                f32 triMaxY = std::max({tri.vertexA.y, tri.vertexB.y, tri.vertexC.y});

                // Quick Y range check: skip if kart is far above/below wall
                if (y + 50.0f < triMinY || y - 50.0f > triMaxY) continue;

                // Check if kart center is near the wall triangle (XZ projection)
                // Expanded check: also check points at radius distance
                f32 nx, ny, nz;
                triangleNormal(tri, nx, ny, nz);

                // For walls, the normal should be mostly horizontal
                if (std::fabs(ny) > 0.7f) continue;  // Skip near-vertical/ceiling tris

                // Check 4 cardinal points around the kart for wall penetration
                f32 testPoints[4][2] = {
                    { x + radius, z },
                    { x - radius, z },
                    { x, z + radius },
                    { x, z - radius }
                };

                for (int p = 0; p < 4; p++) {
                    if (pointInTriangleXZ(testPoints[p][0], testPoints[p][1], tri)) {
                        // Push kart away from wall along the triangle's normal
                        pushX += nx;
                        pushZ += nz;
                        anyWall = true;
                        break;
                    }
                }
            }
        }
    }

    // Normalize push direction
    if (anyWall) {
        f32 len = std::sqrt(pushX * pushX + pushZ * pushZ);
        if (len > 1e-6f) {
            pushX /= len;
            pushZ /= len;
        }
    }

    return anyWall;
}

// =============================================================================
// query — Combined ground + wall collision query
// =============================================================================

CollisionQueryResult CollisionSystem::query(f32 x, f32 y, f32 z,
                                             f32 kartHalfWidth,
                                             f32 rayMaxDist) const {
    CollisionQueryResult result;

    if (m_triangles.empty()) {
        result.hitGround = false;
        result.hitWall = false;
        return result;
    }

    // Ground raycast
    result.groundY = raycastGround(x, y, z, rayMaxDist, &result.surfaceType);
    result.hitGround = (result.groundY < y - 0.1f);  // Only count if below kart

    // Wall check
    result.hitWall = checkWalls(x, y, z, kartHalfWidth,
                                 result.wallNormalX, result.wallNormalZ);

    return result;
}

// =============================================================================
// printStats
// =============================================================================

void CollisionSystem::printStats() const {
    printf("  Collision System: %u triangles, grid %dx%d (%.0f-unit cells)\n",
           static_cast<u32>(m_triangles.size()), m_gridW, m_gridH,
           m_gridCellSize);

    // Count empty cells
    u32 empty = 0;
    u32 maxTris = 0;
    f32 totalTris = 0.0f;
    for (const auto& cell : m_cells) {
        if (cell.empty()) empty++;
        u32 sz = static_cast<u32>(cell.size());
        if (sz > maxTris) maxTris = sz;
        totalTris += sz;
    }
    u32 totalCells = static_cast<u32>(m_cells.size());
    printf("    Cells: %u total, %u empty (%.0f%%), max %u tris/cell, avg %.1f tris/cell\n",
           totalCells, empty,
           totalCells > 0 ? 100.0f * static_cast<f32>(empty) / totalCells : 0.0f,
           maxTris,
           totalCells > 0 ? totalTris / totalCells : 0.0f);
}

} // namespace Game
