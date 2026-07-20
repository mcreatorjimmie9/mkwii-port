#include "KCollision.hpp"
#include <decomp.h>
#include <cmath>
#include <cstring>
#include <algorithm>

namespace Field {

// ============================================================================
// Construction / Destruction
// ============================================================================

KCollision::KCollision()
    : mRawData(nullptr)
    , mRawDataSize(0)
    , mNumTriangles(0)
    , mNumVertices(0)
    , mNumNormals(0)
    , mNumOctreeNodes(0)
    , mVertices(nullptr)
    , mNormals(nullptr)
    , mTriangles(nullptr)
    , mOctree(nullptr)
    , mOwnsData(false) {
    for (int i = 0; i < 3; i++) {
        mBboxMin[i] = 0.0f;
        mBboxMax[i] = 0.0f;
    }
}

KCollision::~KCollision() {
    if (mOwnsData) {
        delete[] mVertices;
        delete[] mNormals;
        delete[] mTriangles;
        delete[] mOctree;
    }
    // mRawData is not owned by KCollision (managed externally)
}

void KCollision::init() {
    if (mOwnsData) {
        delete[] mVertices;
        delete[] mNormals;
        delete[] mTriangles;
        delete[] mOctree;
    }
    mRawData = nullptr;
    mRawDataSize = 0;
    mNumTriangles = 0;
    mNumVertices = 0;
    mNumNormals = 0;
    mNumOctreeNodes = 0;
    mVertices = nullptr;
    mNormals = nullptr;
    mTriangles = nullptr;
    mOctree = nullptr;
    mOwnsData = false;
    for (int i = 0; i < 3; i++) {
        mBboxMin[i] = 0.0f;
        mBboxMax[i] = 0.0f;
    }
}

// ============================================================================
// KCL Binary Loading
// ============================================================================

bool KCollision::loadKCL(const u8* data, u32 size) {
    if (!data || size < 0x30) return false;

    // Parse header (big-endian)
    u32 magic = readBE32(data + 0x00);
    if (magic != 0x4B434F4C) return false; // 'KCOL'

    u32 blockSize = readBE32(data + 0x04);
    if (blockSize > size) return false;

    mNumTriangles = readBE32(data + 0x08);
    mNumVertices = readBE32(data + 0x0C);
    mNumNormals = readBE32(data + 0x10);
    mNumOctreeNodes = readBE32(data + 0x14);

    u32 triOffset = readBE32(data + 0x20);
    u32 vertOffset = readBE32(data + 0x24);
    u32 normalOffset = readBE32(data + 0x28);
    u32 octreeOffset = readBE32(data + 0x2C);

    // Store raw data pointer
    mRawData = data;
    mRawDataSize = size;

    // ---- Convert vertices (big-endian f32 arrays → native EGG::Vector3f) ----
    mVertices = new EGG::Vector3f[mNumVertices];
    for (u32 i = 0; i < mNumVertices; i++) {
        const u8* vp = data + vertOffset + i * 12;
        f32 x, y, z;
        memcpy(&x, vp + 0, 4);
        memcpy(&y, vp + 4, 4);
        memcpy(&z, vp + 8, 4);
        // Byte-swap each f32 from big-endian
        u32 ix, iy, iz;
        memcpy(&ix, &x, 4);
        memcpy(&iy, &y, 4);
        memcpy(&iz, &z, 4);
        ix = __builtin_bswap32(ix);
        iy = __builtin_bswap32(iy);
        iz = __builtin_bswap32(iz);
        memcpy(&x, &ix, 4);
        memcpy(&y, &iy, 4);
        memcpy(&z, &iz, 4);
        mVertices[i] = EGG::Vector3f(x, y, z);
    }

    // ---- Convert normals ----
    mNormals = new EGG::Vector3f[mNumNormals];
    for (u32 i = 0; i < mNumNormals; i++) {
        const u8* np = data + normalOffset + i * 12;
        f32 nx, ny, nz;
        memcpy(&nx, np + 0, 4);
        memcpy(&ny, np + 4, 4);
        memcpy(&nz, np + 8, 4);
        u32 inx, iny, inz;
        memcpy(&inx, &nx, 4);
        memcpy(&iny, &ny, 4);
        memcpy(&inz, &nz, 4);
        inx = __builtin_bswap32(inx);
        iny = __builtin_bswap32(iny);
        inz = __builtin_bswap32(inz);
        memcpy(&nx, &inx, 4);
        memcpy(&ny, &iny, 4);
        memcpy(&nz, &inz, 4);
        mNormals[i] = EGG::Vector3f(nx, ny, nz);
    }

    // ---- Convert triangles ----
    mTriangles = new KCLTriangle[mNumTriangles];
    for (u32 i = 0; i < mNumTriangles; i++) {
        const u8* tp = data + triOffset + i * 12;
        // Vertex indices: each is a 16-bit big-endian value
        mTriangles[i].vertexIndices[0] = readBE16(tp + 0x00);
        mTriangles[i].vertexIndices[1] = readBE16(tp + 0x02);
        mTriangles[i].vertexIndices[2] = readBE16(tp + 0x04);
        mTriangles[i].normalIndex = readBE16(tp + 0x06);
        mTriangles[i].attribute = readBE32(tp + 0x08);
    }

    // ---- Convert octree nodes ----
    if (mNumOctreeNodes > 0 && octreeOffset + mNumOctreeNodes * sizeof(OctreeNode) <= size) {
        mOctree = new OctreeNode[mNumOctreeNodes];
        for (u32 i = 0; i < mNumOctreeNodes; i++) {
            const u8* op = data + octreeOffset + i * 32;
            for (int j = 0; j < 3; j++) {
                f32 v;
                memcpy(&v, op + j * 4, 4);
                u32 iv;
                memcpy(&iv, &v, 4);
                iv = __builtin_bswap32(iv);
                memcpy(&v, &iv, 4);
                mOctree[i].min[j] = v;
            }
            for (int j = 0; j < 3; j++) {
                f32 v;
                memcpy(&v, op + 12 + j * 4, 4);
                u32 iv;
                memcpy(&iv, &v, 4);
                iv = __builtin_bswap32(iv);
                memcpy(&v, &iv, 4);
                mOctree[i].max[j] = v;
            }
            mOctree[i].childIdx = readBE16(op + 24);
            mOctree[i].triStart = readBE16(op + 26);
            mOctree[i].triCount = readBE16(op + 28);
        }

        // Root node gives us the world bounding box
        if (mNumOctreeNodes > 0) {
            for (int j = 0; j < 3; j++) {
                mBboxMin[j] = mOctree[0].min[j];
                mBboxMax[j] = mOctree[0].max[j];
            }
        }
    }

    mOwnsData = true;
    return true;
}

// ============================================================================
// Vertex/Triangle/Normals Access
// ============================================================================

void KCollision::getVertex(u32 vertIdx, EGG::Vector3f& out) const {
    if (vertIdx < mNumVertices) {
        out = mVertices[vertIdx];
    } else {
        out.setZero();
    }
}

void KCollision::getTriangleNormal(u32 triIdx, f32* outNormal) {
    if (triIdx >= mNumTriangles || !mNormals) {
        outNormal[0] = outNormal[1] = 0.0f;
        outNormal[2] = 1.0f;
        return;
    }
    u16 nIdx = mTriangles[triIdx].normalIndex;
    if (nIdx < mNumNormals) {
        outNormal[0] = mNormals[nIdx].x;
        outNormal[1] = mNormals[nIdx].y;
        outNormal[2] = mNormals[nIdx].z;
    } else {
        outNormal[0] = outNormal[1] = 0.0f;
        outNormal[2] = 1.0f;
    }
}

u32 KCollision::getTriangleAttribute(u32 triIdx) {
    if (triIdx >= mNumTriangles) return 0;
    return mTriangles[triIdx].attribute;
}

// ============================================================================
// AABB Overlap
// ============================================================================

bool KCollision::aabbOverlap(const f32* aMin, const f32* aMax,
                              const f32* bMin, const f32* bMax) {
    return (aMin[0] <= bMax[0] && aMax[0] >= bMin[0]) &&
           (aMin[1] <= bMax[1] && aMax[1] >= bMin[1]) &&
           (aMin[2] <= bMax[2] && aMax[2] >= bMin[2]);
}

// ============================================================================
// Octree Traversal — collect candidate triangles for a query AABB
// ============================================================================

void KCollision::collectTriangles(const f32* bmin, const f32* bmax,
                                   u32* triBuf, u32* triCount,
                                   u32 maxTris) const {
    *triCount = 0;
    if (!mOctree || mNumOctreeNodes == 0) return;

    // Simple stack-based recursive traversal
    // Stack holds node indices to visit
    u32 stack[64];
    s32 stackTop = 0;
    stack[stackTop++] = 0; // start at root

    while (stackTop > 0 && *triCount < maxTris) {
        u32 nodeIdx = stack[--stackTop];
        const OctreeNode& node = mOctree[nodeIdx];

        // Check AABB overlap
        if (!aabbOverlap(bmin, bmax, node.min, node.max)) continue;

        // If this node has children (childIdx != 0xFFFF), push them
        if (node.childIdx != 0xFFFF) {
            // Octree: 8 children per node
            for (u32 c = 0; c < 8; c++) {
                u32 childIdx = node.childIdx + c;
                if (childIdx < mNumOctreeNodes) {
                    if (stackTop < 63) {
                        stack[stackTop++] = childIdx;
                    }
                }
            }
        }

        // Leaf node: add triangles
        if (node.triCount > 0 && *triCount < maxTris) {
            u32 count = node.triCount;
            if (*triCount + count > maxTris) {
                count = maxTris - *triCount;
            }
            for (u32 i = 0; i < count; i++) {
                triBuf[*triCount] = node.triStart + i;
                (*triCount)++;
            }
        }
    }
}

// ============================================================================
// Closest Point on Triangle
// ============================================================================

void KCollision::closestPointOnTriangle(const EGG::Vector3f& p,
                                         const EGG::Vector3f& a,
                                         const EGG::Vector3f& b,
                                         const EGG::Vector3f& c,
                                         EGG::Vector3f& closest) const {
    EGG::Vector3f ab = b - a;
    EGG::Vector3f ac = c - a;
    EGG::Vector3f ap = p - a;

    f32 d1 = ab.dot(ap);
    f32 d2 = ac.dot(ap);
    if (d1 <= 0.0f && d2 <= 0.0f) {
        closest = a;
        return;
    }

    EGG::Vector3f bp = p - b;
    f32 d3 = ab.dot(bp);
    f32 d4 = ac.dot(bp);
    if (d3 >= 0.0f && d4 <= d3) {
        closest = b;
        return;
    }

    f32 vc = d1 * d4 - d3 * d2;
    if (vc <= 0.0f && d1 >= 0.0f && d3 <= 0.0f) {
        f32 v = d1 / (d1 - d3);
        closest = a + ab * v;
        return;
    }

    EGG::Vector3f cp = p - c;
    f32 d5 = ab.dot(cp);
    f32 d6 = ac.dot(cp);
    if (d6 >= 0.0f && d5 <= d6) {
        closest = c;
        return;
    }

    f32 vb = d5 * d2 - d1 * d6;
    if (vb <= 0.0f && d2 >= 0.0f && d6 <= 0.0f) {
        f32 w = d2 / (d2 - d6);
        closest = a + ac * w;
        return;
    }

    f32 va = d3 * d6 - d5 * d4;
    if (va <= 0.0f && (d4 - d3) >= 0.0f && (d5 - d6) >= 0.0f) {
        f32 w = (d4 - d3) / ((d4 - d3) + (d5 - d6));
        closest = b + (c - b) * w;
        return;
    }

    f32 denom = 1.0f / (va + vb + vc);
    f32 v = vb * denom;
    f32 w = vc * denom;
    closest = a + ab * v + ac * w;
}

// ============================================================================
// Point-Triangle Signed Distance
// ============================================================================

f32 KCollision::pointTriangleDist(const EGG::Vector3f& p,
                                   const EGG::Vector3f& n,
                                   const EGG::Vector3f& a) const {
    return (p - a).dot(n);
}

// ============================================================================
// Sphere-Triangle Test
// ============================================================================

bool KCollision::testSphereTriangle(f32 cx, f32 cy, f32 cz, f32 radius,
                                     u32 triIdx, f32* outDist,
                                     EGG::Vector3f* outNormal) const {
    if (triIdx >= mNumTriangles) return false;

    const KCLTriangle& tri = mTriangles[triIdx];

    // Get triangle vertices
    EGG::Vector3f a, b, c;
    if (tri.vertexIndices[0] >= mNumVertices) return false;
    if (tri.vertexIndices[1] >= mNumVertices) return false;
    if (tri.vertexIndices[2] >= mNumVertices) return false;
    a = mVertices[tri.vertexIndices[0]];
    b = mVertices[tri.vertexIndices[1]];
    c = mVertices[tri.vertexIndices[2]];

    EGG::Vector3f center(cx, cy, cz);

    // Get triangle normal
    EGG::Vector3f triNormal;
    if (tri.normalIndex < mNumNormals) {
        triNormal = mNormals[tri.normalIndex];
    } else {
        // Compute from cross product
        EGG::Vector3f e1 = b - a;
        EGG::Vector3f e2 = c - a;
        triNormal = EGG::TVector3<f32>::cross(e1, e2);
        f32 len = std::sqrt(triNormal.squaredLength());
        if (len > 0.0001f) {
            triNormal = triNormal * (1.0f / len);
        } else {
            return false; // degenerate triangle
        }
    }

    // Find closest point on triangle to sphere center
    EGG::Vector3f closest;
    closestPointOnTriangle(center, a, b, c, closest);

    EGG::Vector3f diff = center - closest;
    f32 distSq = diff.squaredLength();

    if (distSq > radius * radius) return false;

    f32 dist = std::sqrt(distSq);
    if (dist < 0.0001f) {
        // Sphere center is inside/on triangle plane — use triangle normal
        *outNormal = triNormal;
        *outDist = -radius; // fully penetrating
    } else {
        *outNormal = diff * (1.0f / dist);
        *outDist = dist - radius; // negative = penetration
    }

    return true;
}

// ============================================================================
// Ray-Triangle Test (Möller–Trumbore)
// ============================================================================

bool KCollision::testRayTriangle(const f32* origin, const f32* dir,
                                  u32 triIdx, f32* outT, f32* outU, f32* outV) const {
    if (triIdx >= mNumTriangles) return false;

    const KCLTriangle& tri = mTriangles[triIdx];
    if (tri.vertexIndices[0] >= mNumVertices) return false;
    if (tri.vertexIndices[1] >= mNumVertices) return false;
    if (tri.vertexIndices[2] >= mNumVertices) return false;

    const EGG::Vector3f& v0 = mVertices[tri.vertexIndices[0]];
    const EGG::Vector3f& v1 = mVertices[tri.vertexIndices[1]];
    const EGG::Vector3f& v2 = mVertices[tri.vertexIndices[2]];

    EGG::Vector3f o(origin[0], origin[1], origin[2]);
    EGG::Vector3f d(dir[0], dir[1], dir[2]);

    EGG::Vector3f e1 = v1 - v0;
    EGG::Vector3f e2 = v2 - v0;
    EGG::Vector3f h = EGG::TVector3<f32>::cross(d, e2);
    f32 a = e1.dot(h);

    if (a > -0.00001f && a < 0.00001f) return false; // parallel

    f32 f = 1.0f / a;
    EGG::Vector3f s = o - v0;
    f32 u = f * s.dot(h);
    if (u < 0.0f || u > 1.0f) return false;

    EGG::Vector3f q = EGG::TVector3<f32>::cross(s, e1);
    f32 v = f * d.dot(q);
    if (v < 0.0f || u + v > 1.0f) return false;

    f32 t = f * e2.dot(q);
    if (t < 0.0f) return false;

    *outT = t;
    *outU = u;
    *outV = v;
    return true;
}

// ============================================================================
// Sphere Collision — Public
// ============================================================================

bool KCollision::checkSphereCollision(f32 x, f32 y, f32 z, f32 radius,
                                       SphereColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->dist = 999999.0f;
    result->attribute = 0;
    result->triIdx = 0xFFFFFFFF;
    result->normal.setZero();

    // Build query AABB
    f32 qmin[3] = { x - radius, y - radius, z - radius };
    f32 qmax[3] = { x + radius, y + radius, z + radius };

    // Collect candidate triangles from octree
    static const u32 MAX_CANDIDATES = 256;
    u32 triBuf[MAX_CANDIDATES];
    u32 triCount = 0;
    collectTriangles(qmin, qmax, triBuf, &triCount, MAX_CANDIDATES);

    // Test each candidate
    for (u32 i = 0; i < triCount; i++) {
        f32 dist;
        EGG::Vector3f normal;
        if (testSphereTriangle(x, y, z, radius, triBuf[i], &dist, &normal)) {
            // Keep the closest penetration (most negative dist = deepest)
            if (dist < result->dist) {
                result->dist = dist;
                result->normal = normal;
                result->attribute = mTriangles[triBuf[i]].attribute;
                result->triIdx = triBuf[i];
                result->hit = true;
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Ray Collision — Public
// ============================================================================

bool KCollision::checkRayCollision(f32* origin, f32* dir, f32 maxDist,
                                    RayColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->t = maxDist;
    result->attribute = 0;

    // Build a large AABB along the ray for octree query
    f32 qmin[3], qmax[3];
    for (int i = 0; i < 3; i++) {
        f32 end = origin[i] + dir[i] * maxDist;
        qmin[i] = std::min(origin[i], end) - 1.0f;
        qmax[i] = std::max(origin[i], end) + 1.0f;
    }

    static const u32 MAX_CANDIDATES = 512;
    u32 triBuf[MAX_CANDIDATES];
    u32 triCount = 0;
    collectTriangles(qmin, qmax, triBuf, &triCount, MAX_CANDIDATES);

    for (u32 i = 0; i < triCount; i++) {
        f32 t, u, v;
        if (testRayTriangle(origin, dir, triBuf[i], &t, &u, &v)) {
            if (t < result->t && t >= 0.0f) {
                result->t = t;
                result->pos = EGG::Vector3f(
                    origin[0] + dir[0] * t,
                    origin[1] + dir[1] * t,
                    origin[2] + dir[2] * t
                );
                getTriangleNormal(triBuf[i], (f32*)&result->normal);
                result->attribute = mTriangles[triBuf[i]].attribute;
                result->hit = true;
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Capsule Collision — Public
// ============================================================================

bool KCollision::checkCapsuleCollision(f32* p1, f32* p2, f32 radius,
                                        CapsuleColResult* result) {
    if (!isLoaded() || !result) return false;

    result->hit = false;
    result->dist = 999999.0f;
    result->attribute = 0;

    EGG::Vector3f segA(p1[0], p1[1], p1[2]);
    EGG::Vector3f segB(p2[0], p2[1], p2[2]);
    EGG::Vector3f segDir = segB - segA;
    f32 segLen = std::sqrt(segDir.squaredLength());
    if (segLen < 0.0001f) {
        // Degenerate capsule → sphere
        SphereColResult sRes;
        bool hit = checkSphereCollision(p1[0], p1[1], p1[2], radius, &sRes);
        if (hit) {
            result->dist = sRes.dist;
            result->normal = sRes.normal;
            result->contact = segA;
            result->attribute = sRes.attribute;
            result->hit = true;
        }
        return hit;
    }
    segDir = segDir * (1.0f / segLen);

    // Build AABB around capsule
    f32 qmin[3], qmax[3];
    for (int i = 0; i < 3; i++) {
        qmin[i] = std::min(p1[i], p2[i]) - radius;
        qmax[i] = std::max(p1[i], p2[i]) + radius;
    }

    static const u32 MAX_CANDIDATES = 256;
    u32 triBuf[MAX_CANDIDATES];
    u32 triCount = 0;
    collectTriangles(qmin, qmax, triBuf, &triCount, MAX_CANDIDATES);

    for (u32 i = 0; i < triCount; i++) {
        // For each triangle, compute closest point on capsule segment to triangle
        // then check distance
        u32 tIdx = triBuf[i];

        // Simplified: test multiple sphere samples along capsule
        const s32 SAMPLES = 4;
        for (s32 s = 0; s <= SAMPLES; s++) {
            f32 t = f32(s) / f32(SAMPLES);
            EGG::Vector3f samplePt = segA + (segB - segA) * t;

            SphereColResult sRes;
            if (testSphereTriangle(samplePt.x, samplePt.y, samplePt.z,
                                   radius, tIdx, &sRes.dist, &sRes.normal)) {
                if (sRes.dist < result->dist) {
                    result->dist = sRes.dist;
                    result->normal = sRes.normal;
                    result->contact = samplePt + sRes.normal * (-sRes.dist);
                    result->attribute = mTriangles[tIdx].attribute;
                    result->hit = true;
                }
            }
        }
    }

    return result->hit;
}

// ============================================================================
// Floor Detection
// ============================================================================

bool KCollision::getFloor(f32 x, f32 y, f32 z, f32* outY, f32* outNormal) {
    if (!isLoaded()) return false;

    // Search for floor triangles below the given point
    // Cast a ray downward from (x, y, z) in -Y direction
    f32 origin[3] = { x, y, z };
    f32 dir[3] = { 0.0f, -1.0f, 0.0f };
    f32 maxDist = 2000.0f; // generous search range

    RayColResult result;
    if (checkRayCollision(origin, dir, maxDist, &result)) {
        u32 kclType = KCL_ATTRIBUTE_TYPE(result.attribute);
        if (kclType == KCL_TYPE_FLOOR) {
            if (outY) *outY = result.pos.y;
            if (outNormal) {
                outNormal[0] = result.normal.x;
                outNormal[1] = result.normal.y;
                outNormal[2] = result.normal.z;
            }
            return true;
        }
    }

    return false;
}

} // namespace Field