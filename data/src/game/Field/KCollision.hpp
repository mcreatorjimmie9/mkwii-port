#pragma once
// KCollision.hpp — KCL Collision Detection Engine
// GENESIS Phase 16: Full implementation of Mario Kart Wii's KCL collision system
// Original addresses: 0x8049xxxx-0x804Axxxx
//
// KCL file format (community-verified from decompiled game binary):
//   Header (0x3C bytes): offsets to pos/nrm/prism/block data + spatial params
//   Position data: Groups of 3 vertices each (36 bytes/entry)
//   Normal data: Individual normal vectors (12 bytes/entry)
//   Prism data: Collision prisms (16 bytes/entry) with height + indices
//   Block data: Octree spatial index (variable-length blocks with prism lists)

#include <rk_types.h>
#include <egg/math/eggVector.hpp>
#include <game/field/CollisionEntries.hpp>

namespace Field {

// =============================================================================
// KCL File Header (0x3C = 60 bytes)
// Matches the struct extracted from the original game binary.
// No magic number — the first 4 bytes are pos_data_offset.
// =============================================================================
struct KCLFileHeader {
    u32 pos_data_offset;       // 0x00: Offset to vertex position data
    u32 nrm_data_offset;       // 0x04: Offset to normal vector data
    u32 prism_data_offset;     // 0x08: Offset to collision prism data
    u32 block_data_offset;     // 0x0C: Offset to octree block data
    f32 prism_thickness;       // 0x10: Collision prism thickness parameter
    EGG::Vector3f area_min_pos;// 0x14: World-space bounding box minimum
    u32 area_x_width_mask;     // 0x20: X dimension width mask for block indexing
    u32 area_y_width_mask;     // 0x24: Y dimension width mask
    u32 area_z_width_mask;     // 0x28: Z dimension width mask
    u32 block_width_shift;     // 0x2C: Block width shift (log2 of block width)
    u32 area_x_blocks_shift;   // 0x30: Shift for X blocks in linear index
    u32 area_xy_blocks_shift;  // 0x34: Shift for XY blocks in linear index
    f32 sphere_radius;         // 0x38: Sphere radius parameter
};
// Total: 0x3C = 60 bytes

// =============================================================================
// KCL Collision Prism (16 bytes)
// Each prism represents a triangular collision volume.
// pos_i indexes into the position data array (each entry = 3 vertices).
// =============================================================================
struct KCLPrism {
    f32 height;       // 0x00: Prism height (extrusion along face normal)
    u16 pos_i;        // 0x04: Position group index (3 vertices per group)
    u16 fnrm_i;       // 0x06: Face normal index
    u16 enrm1_i;      // 0x08: Edge normal 1 index
    u16 enrm2_i;      // 0x0A: Edge normal 2 index
    u16 enrm3_i;      // 0x0C: Edge normal 3 index
    u16 attribute;    // 0x0E: KCL attribute (5-bit type + 3-bit variant + flags)
};

// =============================================================================
// Internal expanded triangle (for collision queries)
// Prisms are expanded into these for ray/sphere/capsule tests.
// =============================================================================
struct KCLTri {
    u16 vertexIndices[3]; // Indices into mVertices (expanded from pos groups)
    u16 normalIndex;       // Face normal index
    u32 attribute;         // KCL attribute
};

// Collision result for sphere test
struct SphereColResult {
    f32 dist;              // Distance to closest triangle (negative = penetration)
    EGG::Vector3f normal;  // Collision normal
    u32 attribute;         // KCL attribute of hit triangle
    u32 triIdx;            // Index of hit prism
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

    // Load and parse KCL binary data (real Nintendo KCL format)
    /* KCollision_loadKCL @ 0x8049A600 */
    bool loadKCL(const u8* data, u32 size);

    // Sphere-vs-triangle collision test
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

    // Get the KCL attribute of a prism
    /* KCollision_getTriAttr @ 0x8049BE80 */
    u32 getTriangleAttribute(u32 triIdx);

    // Floor detection: find the highest floor triangle below given Y
    /* KCollision_getFloor @ 0x8049BF00 */
    bool getFloor(f32 x, f32 y, f32 z, f32* outY, f32* outNormal);

    // Get vertex position for a given vertex index
    /* KCollision_getVertex @ 0x8049C100 */
    void getVertex(u32 vertIdx, EGG::Vector3f& out) const;

    // Get number of loaded prisms
    u32 getTriangleCount() const { return mNumPrisms; }

    // Check if KCL data is loaded
    bool isLoaded() const { return mPrisms != nullptr; }

    // Get the raw KCL data pointer
    const u8* getRawData() const { return mRawData; }

    // Get prism thickness from KCL header
    f32 getPrismThickness() const { return mPrismThickness; }

    // Get the area minimum position from KCL header
    const EGG::Vector3f& getAreaMinPos() const { return mAreaMinPos; }

    // Get sphere radius from KCL header
    f32 getSphereRadius() const { return mSphereRadius; }

    // =========================================================================
    // Cached Sphere Collision (matches RKGndCol::lookupSphereCached)
    //
    // Caches the last block lookup result. If the new query position is within
    // the cached sphere, reuses the previous prism iterator instead of
    // performing a new octree traversal. This is a significant optimization
    // since karts typically move small distances between frames.
    // =========================================================================

    // Set up a cached sphere query. If pos is within cachedPos + cachedRadius,
    // reuse the cached prism iterator. Otherwise perform a fresh searchBlock.
    void lookupSphereCached(const EGG::Vector3f& pos, const EGG::Vector3f& prevPos,
                             u32 typeMask, f32 radius);

    // Check collision using the cached prism list from lookupSphereCached.
    // Returns true if any prism in the cached list collides with the sphere.
    // Iterates through prisms and returns the closest hit.
    bool checkSphereCachedCollision(f32* distOut, EGG::Vector3f* fnrmOut,
                                    u32* attributeOut);

    // Narrow-scope local check: collect prisms around pos within radius
    // and store them in the prism cache for subsequent checks.
    void narrowScopeLocal(const EGG::Vector3f& pos, f32 radius, u32 typeMask);

    // Check if prism cache has entries
    bool prismCacheEmpty() const { return mPrismCacheCount == 0; }

    // Get cached prism at index
    u32 getPrismCache(u32 i) const {
        if (i < mPrismCacheCount) return mPrismCache[i];
        return 0;
    }

    // Callback type for searchMultiBlock (member function pointer)
    typedef void (KCollision::*PrismListVisitor)(u16* prismArray);
    typedef void (KCollision::*ConstPrismListVisitor)(u16* prismArray) const;

private:
    // Internal: parse block data and build offset table
    void parseBlockData(const u8* blockData, u32 blockSize);
    void parseBlockDataRecursive(const u8* blockData, u32 blockSize);

    // Recursive octree traversal helpers
    void searchMultiBlockRecursive(const u8* prismArrayBase, u32 index,
                                   ConstPrismListVisitor visitor) const;
    void searchMultiBlockRecursiveAll(const u8* prismArrayBase, u32 index,
                                       ConstPrismListVisitor visitor,
                                       s32 xmin, s32 ymin, s32 zmin,
                                       s32 xmax, s32 ymax, s32 zmax) const;

    // Internal: look up block at world position using recursive octree
    // Returns pointer to u16 prism list (null-terminated after count prefix)
    // Matches original RKGndCol::searchBlock algorithm
    const u16* searchBlock(const EGG::Vector3f& pos) const;

    // Internal: search multiple blocks for sphere radius
    // Matches original RKGndCol::searchMultiBlock algorithm
    void searchMultiBlock(const EGG::Vector3f& pos, f32 radius,
                           ConstPrismListVisitor visitor) const;

    // Internal: process prism list from searchBlock/searchMultiBlock
    void collectPrismList(u16* prismArray) const;

    // Legacy flat block lookup (kept for fallback)
    const u16* lookupBlock(f32 x, f32 y, f32 z, u16* outCount) const;

    // Internal: traverse octree, collect candidate prism indices
    void collectPrisms(f32 x, f32 y, f32 z, f32 radius,
                       u32* prismBuf, u32* prismCount, u32 maxPrisms) const;

    // Internal: collect prisms for a ray AABB query
    void collectPrismsRay(const f32* origin, const f32* dir, f32 maxDist,
                          u32* prismBuf, u32* prismCount, u32 maxPrisms) const;

    // Internal: test sphere against a single prism's triangle
    bool testSphereTriangle(f32 cx, f32 cy, f32 cz, f32 radius,
                            u32 prismIdx, f32* outDist,
                            EGG::Vector3f* outNormal) const;

    // Internal: test ray against a single prism's triangle (Möller-Trumbore)
    bool testRayTriangle(const f32* origin, const f32* dir,
                         u32 prismIdx, f32* outT, f32* outU, f32* outV) const;

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
    static f32 readBE32f(const u8* p) {
        u32 raw = readBE32(p);
        f32 result;
        __builtin_memcpy(&result, &raw, 4);
        return result;
    }

    // Data pointers
    const u8* mRawData;        // Raw KCL binary (not owned)
    u32 mRawDataSize;          // Size of raw data

    // Expanded data (owned, allocated from heap)
    u32 mNumPrisms;            // Number of collision prisms
    u32 mNumVertices;          // Number of expanded vertices
    u32 mNumNormals;           // Number of normal vectors

    EGG::Vector3f* mVertices;  // Vertex array (expanded from position groups)
    EGG::Vector3f* mNormals;   // Normal array
    KCLTri* mPrisms;           // Expanded prism array (vertex indices + attr)

    // Octree spatial index (recursive binary octree)
    u8* mBlockDataCopy;       // Copy of block data section (owned)
    u32 mBlockDataSize;       // Size of block data section

    // Cached prism collection buffer (for searchMultiBlock visitor pattern)
    static const u32 MAX_COLLECTED_PRISMS = 1024;
    mutable u32 mCollectedPrisms[MAX_COLLECTED_PRISMS];
    mutable u32 mCollectedCount;

    // Cached sphere query state (matches RKGndCol cache pattern)
    static const u32 PRISM_CACHE_SIZE = 256;
    u32 mPrismCache[PRISM_CACHE_SIZE];  // Cached prism indices
    u32 mPrismCacheCount;               // Number of cached prisms
    EGG::Vector3f mCachedPos;           // Cached query position
    f32 mCachedRadius;                  // Cached query radius
    u32 mCachedTypeMask;                // Cached type mask

    // Current query state (set by lookupSphereCached, used by checkSphereCached)
    EGG::Vector3f mQueryPos;            // Current query position
    EGG::Vector3f mQueryPrevPos;        // Previous position (for movement check)
    EGG::Vector3f mQueryMovement;       // pos - prevPos
    f32 mQueryRadius;                   // Current query radius
    u32 mQueryTypeMask;                 // Current type mask

    // Legacy flat block support
    u32 mNumBlocks;
    u32* mBlockOffsets;

    // Header spatial parameters (cached for block queries)
    f32 mPrismThickness;       // Prism thickness
    EGG::Vector3f mAreaMinPos; // Area minimum position
    u32 mAreaXWidthMask;       // X width mask
    u32 mAreaYWidthMask;       // Y width mask
    u32 mAreaZWidthMask;       // Z width mask
    u32 mBlockWidthShift;      // Block width shift
    u32 mAreaXBlocksShift;     // X blocks shift
    u32 mAreaXYBlocksShift;    // XY blocks shift
    f32 mSphereRadius;         // Sphere radius

    // Bounding box of entire collision
    f32 mBboxMin[3];
    f32 mBboxMax[3];

    bool mOwnsData;            // Whether we allocated the arrays
};

} // namespace Field
