#pragma once
// =============================================================================
// CollisionSystem.hpp — KCL Collision Queries for Kart Physics
// MAESTRO Phase 7, Milestone M6: Physics Loop
// =============================================================================
//
// Provides efficient spatial queries against the KCL collision triangle mesh:
//   - Ground raycast (find Y height below kart)
//   - Wall collision detection (prevent kart from passing through walls)
//   - Surface type detection (road, off-road, boost, etc.)
//
// Uses a uniform grid spatial index for O(1) expected query time instead of
// brute-force O(n) against all triangles.
//
// Dependencies: rk_types.h, loaders/kcl_loader.hpp (KclTriangle, KCLType)
// =============================================================================

#include <rk_types.h>
#include <vector>
#include "loaders/kcl_loader.hpp"  // Loaders::KclTriangle, Loaders::KCLType

namespace Game {

// =============================================================================
// CollisionQueryResult — Output of a collision query
// =============================================================================
struct CollisionQueryResult {
    f32  groundY;         ///< Y height of the ground surface below the query point
    u16  surfaceType;     ///< KCL collision type flags of the ground triangle
    bool  hitGround;       ///< True if a ground triangle was found
    bool  hitWall;         ///< True if the query point is inside a wall triangle
    f32  wallNormalX;     ///< Average wall push direction X (if hitWall)
    f32  wallNormalZ;     ///< Average wall push direction Z (if hitWall)

    CollisionQueryResult()
        : groundY(0.0f)
        , surfaceType(0)
        , hitGround(false)
        , hitWall(false)
        , wallNormalX(0.0f)
        , wallNormalZ(0.0f) {}
};

// =============================================================================
// CollisionSystem — Spatial index over KCL triangles + query methods
// =============================================================================
//
// Usage:
//   Game::CollisionSystem collision;
//   collision.build(trackManager.getCollisionTriangles());
//
//   // Each frame, query collision for the kart:
//   auto result = collision.query(kartPos.x, kartPos.y, kartPos.z);
//   if (result.hitGround) kartPos.y = result.groundY;
//   if (result.hitWall) { /* push kart out */ }
//
class CollisionSystem {
public:
    CollisionSystem();
    ~CollisionSystem() = default;

    // Non-copyable, movable
    CollisionSystem(const CollisionSystem&) = delete;
    CollisionSystem& operator=(const CollisionSystem&) = delete;
    CollisionSystem(CollisionSystem&&) = default;
    CollisionSystem& operator=(CollisionSystem&&) = default;

    // -----------------------------------------------------------------
    // Build
    // -----------------------------------------------------------------

    /// Build the spatial index from a vector of KCL triangles.
    /// Computes bounding box and grid cell assignments.
    void build(const std::vector<Loaders::KclTriangle>& triangles);

    /// Clear all data.
    void clear();

    /// Returns true if the collision system has been built with triangles.
    bool isBuilt() const { return !m_triangles.empty(); }

    /// Returns total triangle count.
    u32 getTriangleCount() const { return static_cast<u32>(m_triangles.size()); }

    // -----------------------------------------------------------------
    // Queries
    // -----------------------------------------------------------------

    /// Perform a full collision query at the given position.
    /// Combines ground raycast + wall check + surface detection.
    /// @param x  World X position of the kart
    /// @param y  World Y position of the kart (current height)
    /// @param z  World Z position of the kart
    /// @param kartHalfWidth  Half-width of the kart for wall proximity check
    /// @param rayMaxDist     Maximum distance to search below for ground
    CollisionQueryResult query(f32 x, f32 y, f32 z,
                               f32 kartHalfWidth = 40.0f,
                               f32 rayMaxDist = 5000.0f) const;

    /// Perform a downward raycast to find ground height.
    /// Casts from (x, y, z) downward along Y axis.
    /// Returns the Y of the highest triangle intersection below y.
    /// @param outSurfaceType  Receives the surface type flags of the hit triangle
    f32 raycastGround(f32 x, f32 y, f32 z,
                      f32 maxDist = 5000.0f,
                      u16* outSurfaceType = nullptr) const;

    /// Check if a horizontal disc (position + radius) intersects any wall
    /// triangle. Returns true if wall collision detected.
    /// @param pushX  Receives the X push direction to resolve collision
    /// @param pushZ  Receives the Z push direction to resolve collision
    bool checkWalls(f32 x, f32 y, f32 z, f32 radius,
                    f32& pushX, f32& pushZ) const;

    /// Sphere-based collision query for kart-kart and kart-object detection.
    /// Finds the nearest surface point within the sphere radius and returns
    /// the push direction and penetration depth.
    /// @param cx, cy, cz  Sphere center (kart position)
    /// @param radius       Sphere radius (kart hitbox radius)
    /// @param outPushX     Receives X push direction to resolve collision
    /// @param outPushY     Receives Y push direction (for floor/ceiling)
    /// @param outPushZ     Receives Z push direction to resolve collision
    /// @param outDepth     Receives penetration depth (0 if no collision)
    /// @param outSurfaceType Receives surface type of hit triangle
    /// @return true if collision detected
    bool querySphere(f32 cx, f32 cy, f32 cz, f32 radius,
                     f32& outPushX, f32& outPushY, f32& outPushZ,
                     f32& outDepth, u16& outSurfaceType) const;

    /// Sphere-vs-triangle overlap test (from the original MKWii KCollision).
    /// Tests a sphere against a single triangle and computes push-out vector.
    /// @param tri       The triangle to test against
    /// @param cx,cy,cz  Sphere center
    /// @param radius    Sphere radius
    /// @param outPushX/Y/Z  Receives the push-out direction
    /// @param outDepth       Receives penetration depth
    /// @return true if the sphere overlaps the triangle
    static bool sphereTriangleTest(const Loaders::KclTriangle& tri,
                                    f32 cx, f32 cy, f32 cz, f32 radius,
                                    f32& outPushX, f32& outPushY, f32& outPushZ,
                                    f32& outDepth);

    /// Get the triangle normal for a given triangle index.
    void getTriangleNormal(u32 triIdx, f32& nx, f32& ny, f32& nz) const;

    // -----------------------------------------------------------------
    // Diagnostics
    // -----------------------------------------------------------------

    /// Print spatial index statistics to stdout.
    void printStats() const;

private:
    // -----------------------------------------------------------------
    // Spatial index internals
    // -----------------------------------------------------------------

    /// Convert world position to grid cell coordinates.
    void worldToCell(f32 x, f32 z, s32& cellX, s32& cellZ) const;

    /// Get the list of triangle indices in a grid cell.
    /// Returns nullptr if cell is empty.
    const std::vector<u32>* getCell(s32 cellX, s32 cellZ) const;

    // -- Ray-triangle intersection (Möller–Trumbore algorithm) ---------------
    /// Test ray against a single triangle.
    /// Ray: origin + t * dir, t in [tMin, tMax]
    /// Returns true on hit, sets outT to the intersection parameter.
    static bool rayTriangleIntersect(
        f32 ox, f32 oy, f32 oz,    // ray origin
        f32 dx, f32 dy, f32 dz,    // ray direction
        const Loaders::KclTriangle& tri,
        f32 tMin, f32 tMax,
        f32& outT);

    /// Test if a point is inside a triangle (XZ projection only).
    static bool pointInTriangleXZ(
        f32 px, f32 pz,
        const Loaders::KclTriangle& tri);

    /// Compute triangle normal (cross product of two edges).
    static void triangleNormal(const Loaders::KclTriangle& tri,
                               f32& nx, f32& ny, f32& nz);

    // -----------------------------------------------------------------
    // Data
    // -----------------------------------------------------------------
    std::vector<Loaders::KclTriangle> m_triangles;  // All triangles (ref copy)

    // Grid spatial index
    f32  m_gridCellSize;     // Size of each grid cell in world units
    f32  m_minX, m_minZ;     // Grid origin (world coordinates)
    f32  m_maxX, m_maxZ;     // Grid bounds
    s32  m_gridW, m_gridH;   // Grid dimensions in cells

    // Flat array of cell buckets: cell[cellZ * gridW + cellX] = vector<u32>
    std::vector<std::vector<u32>> m_cells;
};

} // namespace Game
