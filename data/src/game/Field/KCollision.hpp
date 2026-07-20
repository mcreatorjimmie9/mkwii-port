#pragma once
// KCollision.hpp — KCL Collision Detection Engine
// GENESIS Phase 16: Full implementation of Mario Kart Wii's KCL collision system
// Original addresses: 0x8049xxxx-0x804Axxxx

#include <rk_types.h>
#include <egg/math/eggVector.hpp>
#include <game/field/CollisionEntries.hpp>

namespace Field {

// KCL binary header (0x30 bytes)
struct KCLHeader {
    u32 magic;           // 0x00: 'KCOL' magic
    u32 blockSize;       // 0x04: total file size
    u32 numTriangles;    // 0x08: number of triangle entries
    u32 numVertices;     // 0x0C: number of vertex entries
    u32 numNormals;      // 0x10: number of normal entries
    u32 numOctreeNodes;  // 0x14: number of octree nodes
    u32 _18;             // 0x18: unknown
    u32 _1C;             // 0x1C: unknown
    u32 triDataOffset;   // 0x20: offset to triangle data block
    u32 vertexDataOffset;// 0x24: offset to vertex data block
    u32 normalDataOffset;// 0x28: offset to normal data block
    u32 octreeDataOffset;// 0x2C: offset to octree data block
};

// KCL triangle entry (12 bytes)
// Packed: 3 vertex indices (10-bit each) + 1 normal index (10-bit) + padding
struct KCLTriangle {
    u16 vertexIndices[3]; // 0x00-0x05: vertex index array (big-endian)
    u16 normalIndex;      // 0x06: normal index (big-endian)
    u32 attribute;        // 0x08: KCL attribute (type, variant, sink depth)
};

// Octree node bounding box
struct OctreeNode {
    f32 min[3];    // AABB minimum
    f32 max[3];    // AABB maximum
    u16 childIdx;  // Index of first child (-1 if leaf)
    u16 triStart;  // Start index in triangle range
    u16 triCount;  // Number of triangles in this leaf
};

// Collision result for sphere test
struct SphereColResult {
    f32 dist;              // Distance to closest triangle (negative = penetration)
    EGG::Vector3f normal;  // Collision normal
    u32 attribute;         // KCL attribute of hit triangle
    u32 triIdx;            // Index of hit triangle
    bool hit;              // Whether a collision was found
};

// Collision result for ray test
struct RayColResult {
    f32 t;                 // Ray parameter at hit point
    EGG::Vector3f pos;     // Hit position
    EGG::Vector3f normal;  // Hit normal
    u32 attribute;         // KCL attribute of hit triangle
    bool hit;              // Whether ray hit anything
};

// Collision result for capsule test
struct CapsuleColResult {
    f32 dist;              // Closest distance (negative = penetration)
    EGG::Vector3f normal;  // Collision normal
    EGG::Vector3f contact; // Contact point
    u32 attribute;         // KCL attribute
    bool hit;              // Whether collision found
};

class KCollision {
public:
    /* KCollision_ctor @ 0x8049A540 */
    KCollision();
    /* KCollision_dtor @ 0x8049A570 */
    ~KCollision();

    // Initialize from pre-loaded KCL data (big-endian)
    /* KCollision_init @ 0x8049A580 */
    void init();

    // Load and parse KCL binary data
    /* KCollision_loadKCL @ 0x8049A600 */
    bool loadKCL(const u8* data, u32 size);

    // Sphere-vs-triangle collision test
    // Returns true if collision found, fills out result
    /* KCollision_checkSphere @ 0x8049AB00 */
    bool checkSphereCollision(f32 x, f32 y, f32 z, f32 radius,
                              SphereColResult* result);

    // Ray cast against collision triangles
    /* KCollision_checkRay @ 0x8049B100 */
    bool checkRayCollision(f32* origin, f32* dir, f32 maxDist,
                           RayColResult* result);

    // Capsule collision test (line segment + radius)
    /* KCollision_checkCapsule @ 0x8049B800 */
    bool checkCapsuleCollision(f32* p1, f32* p2, f32 radius,
                               CapsuleColResult* result);

    // Get the normal of a triangle by index
    /* KCollision_getTriNormal @ 0x8049BE00 */
    void getTriangleNormal(u32 triIdx, f32* outNormal);

    // Get the KCL attribute of a triangle
    /* KCollision_getTriAttr @ 0x8049BE80 */
    u32 getTriangleAttribute(u32 triIdx);

    // Floor detection: find the highest floor triangle below given Y
    /* KCollision_getFloor @ 0x8049BF00 */
    bool getFloor(f32 x, f32 y, f32 z, f32* outY, f32* outNormal);

    // Get vertex position for a given vertex index
    /* KCollision_getVertex @ 0x8049C100 */
    void getVertex(u32 vertIdx, EGG::Vector3f& out) const;

    // Get number of loaded triangles
    u32 getTriangleCount() const { return mNumTriangles; }

    // Check if KCL data is loaded
    bool isLoaded() const { return mTriangles != nullptr; }

    // Get the raw KCL data pointer
    const u8* getRawData() const { return mRawData; }

private:
    // Internal: traverse octree, collect candidate triangles
    void collectTriangles(const f32* bmin, const f32* bmax,
                          u32* triBuf, u32* triCount, u32 maxTris) const;

    // Internal: test sphere against a single triangle
    bool testSphereTriangle(f32 cx, f32 cy, f32 cz, f32 radius,
                            u32 triIdx, f32* outDist,
                            EGG::Vector3f* outNormal) const;

    // Internal: test ray against a single triangle (Möller-Trumbore)
    bool testRayTriangle(const f32* origin, const f32* dir,
                         u32 triIdx, f32* outT, f32* outU, f32* outV) const;

    // Internal: closest point on triangle to a point
    void closestPointOnTriangle(const EGG::Vector3f& p,
                                const EGG::Vector3f& a,
                                const EGG::Vector3f& b,
                                const EGG::Vector3f& c,
                                EGG::Vector3f& closest) const;

    // Internal: point-to-triangle signed distance
    f32 pointTriangleDist(const EGG::Vector3f& p,
                          const EGG::Vector3f& n,
                          const EGG::Vector3f& a) const;

    // Internal: AABB vs AABB overlap test
    static bool aabbOverlap(const f32* aMin, const f32* aMax,
                            const f32* bMin, const f32* bMax);

    // Big-endian read helpers (Wii KCL is big-endian)
    static u16 readBE16(const u8* p) {
        return (u16(p[0]) << 8) | u16(p[1]);
    }
    static u32 readBE32(const u8* p) {
        return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
               (u32(p[2]) << 8) | u32(p[3]);
    }

    // Data pointers (into mRawData or copies)
    const u8* mRawData;        // 0x04: raw KCL binary
    u32 mRawDataSize;          // 0x08: size of raw data

    u32 mNumTriangles;         // 0x0C: parsed triangle count
    u32 mNumVertices;          // 0x10: parsed vertex count
    u32 mNumNormals;           // 0x14: parsed normal count
    u32 mNumOctreeNodes;       // 0x18: parsed octree node count

    EGG::Vector3f* mVertices;  // 0x1C: vertex array (converted to native endian)
    EGG::Vector3f* mNormals;   // 0x20: normal array (converted to native endian)
    KCLTriangle* mTriangles;   // 0x24: triangle array (converted to native endian)
    OctreeNode* mOctree;       // 0x28: octree node array (converted to native endian)

    // Bounding box of entire collision
    f32 mBboxMin[3];           // 0x2C
    f32 mBboxMax[3];           // 0x38

    bool mOwnsData;            // 0x44: whether we allocated the arrays
};

} // namespace Field