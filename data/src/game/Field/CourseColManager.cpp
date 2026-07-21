#include "CourseColManager.hpp"
#include <decomp.h>
#include <game/kart/KartObjectProxy.hpp>
#include <cstring>
#include <cmath>

namespace Field {

CourseColManager* CourseColManager::sInstance = nullptr;

CourseColManager::CourseColManager()
    : mLoaded(false)
    , mCourseId(0xFFFFFFFF)
    , mRespawnCount(0)
    , mCannonCount(0)
    , mBoostPadCount(0) {
    for (s32 _i = 0; _i < MAX_RESPAWN_POINTS; _i++) mRespawnPoints[_i] = {};
    for (s32 _i = 0; _i < MAX_CANNON_TARGETS; _i++) mCannonTargets[_i] = {};
    for (s32 _i = 0; _i < MAX_BOOST_PADS; _i++) mBoostPads[_i] = {};
    mLastResult = {};
}

CourseColManager::~CourseColManager() {
    unload();
}

CourseColManager* CourseColManager::instance() {
    if (!sInstance) {
        sInstance = new CourseColManager();
    }
    return sInstance;
}

void CourseColManager::init() {
    mKCollision.init();
    mLoaded = false;
    mCourseId = 0xFFFFFFFF;
    mRespawnCount = 0;
    mCannonCount = 0;
    mBoostPadCount = 0;
    for (s32 _i = 0; _i < MAX_RESPAWN_POINTS; _i++) mRespawnPoints[_i] = {};
    for (s32 _i = 0; _i < MAX_CANNON_TARGETS; _i++) mCannonTargets[_i] = {};
    for (s32 _i = 0; _i < MAX_BOOST_PADS; _i++) mBoostPads[_i] = {};
}

bool CourseColManager::load(u32 courseId) {
    /* @ 0x804A1100 */

    // Unload previous
    unload();

    mCourseId = courseId;

    // In the real game, this would:
    // 1. Look up the KCL file path for the course
    // 2. Load it from the archive system (DVD/file)
    // 3. Pass the data to KCollision::loadKCL()
    // For the PC port, we provide a stub that initializes empty collision
    // The actual loading will be wired to the archive system in a later phase.
    (void)courseId;

    // Parse course-specific data
    parseRespawnPoints();
    parseCannonPoints();

    // Mark as loaded even without actual KCL data (empty collision)
    mLoaded = true;

    return true;
}

// ============================================================================
// load (KCL data overload) — Parse KCL from raw binary buffer
// ============================================================================

bool CourseColManager::load(const void* kclData, u32 size) {
    if (!kclData || size < sizeof(KCLFileHeader)) return false;

    // Validate header
    KCLFileHeader header;
    if (!CourseColManager_parseKCLHeader(kclData, size, &header)) {
        return false;
    }

    // Unload previous course
    unload();

    // Pass KCL data to the collision engine
    const u8* data = static_cast<const u8*>(kclData);
    if (!mKCollision.loadKCL(data, size)) {
        return false;
    }

    // Parse course-specific data
    parseRespawnPoints();
    parseCannonPoints();
    cacheBoostPads();

    mLoaded = true;
    return true;
}

void CourseColManager::unload() {
    mKCollision.init();
    mLoaded = false;
    mCourseId = 0xFFFFFFFF;
    mRespawnCount = 0;
    mCannonCount = 0;
    mBoostPadCount = 0;
    for (s32 _i = 0; _i < MAX_RESPAWN_POINTS; _i++) mRespawnPoints[_i] = {};
    for (s32 _i = 0; _i < MAX_CANNON_TARGETS; _i++) mCannonTargets[_i] = {};
    for (s32 _i = 0; _i < MAX_BOOST_PADS; _i++) mBoostPads[_i] = {};
}

// ============================================================================
// Kart Collision
// ============================================================================

bool CourseColManager::checkKartCol(Kart::KartDynamics* dyn, f32 boundingRadius) {
    /* @ 0x804A1500 */
    if (!mLoaded || !dyn) return false;

    // Perform sphere collision at kart position
    bool hit = mKCollision.checkSphereCollision(
        dyn->pos.x, dyn->pos.y, dyn->pos.z,
        boundingRadius, &mLastResult);

    return hit;
}

// ============================================================================
// Floor Y Query
// ============================================================================

bool CourseColManager::getFloorY(f32 x, f32 y, f32 z, f32* outY, f32* outNormal) {
    /* @ 0x804A2600 */
    if (!mLoaded) return false;
    return mKCollision.getFloor(x, y, z, outY, outNormal);
}

// ============================================================================
// Filtered Sphere Collision (by KCL type mask)
// ============================================================================

bool CourseColManager::checkSphereFiltered(f32 x, f32 y, f32 z, f32 radius,
                                            u32 typeMask,
                                            SphereColResult* result) {
    /* @ 0x804A1800 */
    if (!mLoaded || !result) return false;

    bool hit = mKCollision.checkSphereCollision(x, y, z, radius, result);
    if (hit) {
        u32 kclType = KCL_ATTRIBUTE_TYPE(result->attribute);
        // Filter by type mask
        if ((typeMask & (1u << kclType)) == 0) {
            result->hit = false;
            return false;
        }
    }
    return hit;
}

// ============================================================================
// Road Type Query
// ============================================================================

u32 CourseColManager::getRoadType(f32 x, f32 y, f32 z) {
    /* @ 0x804A2200 */
    if (!mLoaded) return 0;

    // Cast a short ray downward to find the surface
    f32 origin[3] = { x, y + 5.0f, z };
    f32 dir[3] = { 0.0f, -1.0f, 0.0f };

    RayColResult rayResult;
    if (mKCollision.checkRayCollision(origin, dir, 50.0f, &rayResult)) {
        return KCL_ATTRIBUTE_TYPE(rayResult.attribute);
    }
    return 0;
}

// ============================================================================
// Off-Road Detection
// ============================================================================

bool CourseColManager::isOffRoad(f32 x, f32 y, f32 z) {
    /* @ 0x804A2300 */
    if (!mLoaded) return false;

    // Check KCL type at this position — off-road types (types 2, 3, 4)
    u32 roadType = getRoadType(x, y, z);
    return (KCL_TYPE_BIT(roadType) & KCL_TYPE_OFFROAD_ANY) != 0;
}

// ============================================================================
// Boost Pad Detection
// ============================================================================

bool CourseColManager::isBoostPad(f32 x, f32 z) {
    /* @ 0x804A2400 */
    if (!mLoaded) return false;

    // Check cached boost pad positions
    for (s32 i = 0; i < mBoostPadCount; i++) {
        f32 dx = x - mBoostPads[i].position.x;
        f32 dz = z - mBoostPads[i].position.z;
        f32 distSq = dx * dx + dz * dz;
        if (distSq < mBoostPads[i].radius * mBoostPads[i].radius) {
            return true;
        }
    }
    return false;
}

// ============================================================================
// Respawn Points
// ============================================================================

bool CourseColManager::getRespawnPoint(s32 pointId, f32* outPos, f32* outRot) {
    /* @ 0x804A2000 */
    if (pointId < 0 || pointId >= mRespawnCount) return false;

    outPos[0] = mRespawnPoints[pointId].position.x;
    outPos[1] = mRespawnPoints[pointId].position.y;
    outPos[2] = mRespawnPoints[pointId].position.z;
    *outRot = mRespawnPoints[pointId].rotation;
    return true;
}

// ============================================================================
// Cannon Targets
// ============================================================================

bool CourseColManager::getCannonTarget(s32 cannonId, f32* outPos, f32* outDir) {
    /* @ 0x804A2100 */
    if (cannonId < 0 || cannonId >= mCannonCount) return false;

    outPos[0] = mCannonTargets[cannonId].position.x;
    outPos[1] = mCannonTargets[cannonId].position.y;
    outPos[2] = mCannonTargets[cannonId].position.z;
    outDir[0] = mCannonTargets[cannonId].direction.x;
    outDir[1] = mCannonTargets[cannonId].direction.y;
    outDir[2] = mCannonTargets[cannonId].direction.z;
    return true;
}

// ============================================================================
// rayCast — Ray-world intersection
// ============================================================================

bool CourseColManager::rayCast(const f32* origin, const f32* dir, f32 maxDist,
                                RayColResult* result) {
    if (!mLoaded || !origin || !dir || !result) return false;

    // Copy origin/dir into mutable arrays for KCollision
    f32 o[3] = { origin[0], origin[1], origin[2] };
    f32 d[3] = { dir[0], dir[1], dir[2] };

    return mKCollision.checkRayCollision(o, d, maxDist, result);
}

// ============================================================================
// sphereTest — Sphere-world overlap test
// ============================================================================

bool CourseColManager::sphereTest(f32 x, f32 y, f32 z, f32 radius,
                                  SphereColResult* result) {
    if (!mLoaded || !result) return false;

    return mKCollision.checkSphereCollision(x, y, z, radius, result);
}

// ============================================================================
// getFloorAt — Get floor Y at position
// ============================================================================

f32 CourseColManager::getFloorAt(f32 x, f32 y, f32 z) {
    if (!mLoaded) return y;

    f32 floorY = 0.0f;
    f32 normal[3] = { 0.0f, 1.0f, 0.0f };

    // getFloor() casts a ray downward from (x, y, z) internally
    if (mKCollision.getFloor(x, y, z, &floorY, normal)) {
        return floorY;
    }

    return y;
}

// ============================================================================
// getWallAt — Find nearby walls
// ============================================================================

bool CourseColManager::getWallAt(f32 x, f32 y, f32 z, f32 radius,
                                  EGG::Vector3f* outNormals, u32* outCount) {
    if (!mLoaded || !outNormals || !outCount) return false;

    *outCount = 0;
    const u32 maxWalls = 4;

    // Perform a sphere test at the position
    SphereColResult result;
    if (!mKCollision.checkSphereCollision(x, y, z, radius, &result)) {
        return false;
    }

    // Check if the hit triangle is a wall type
    u32 kclType = KCL_ATTRIBUTE_TYPE(result.attribute);
    u32 typeBit = KCL_TYPE_BIT(kclType);
    if ((typeBit & KCL_TYPE_PLAYER_WALL_CAT1) ||
        (typeBit & KCL_TYPE_PLAYER_WALL_CAT2) ||
        (typeBit & KCL_TYPE_DRIVER_WALL)) {

        outNormals[*outCount] = result.normal;
        (*outCount)++;
        return true;
    }

    return false;
}

// ============================================================================
// getSurfaceType — KCL attribute at a world point
// ============================================================================

u32 CourseColManager::getSurfaceType(f32 x, f32 y, f32 z) {
    if (!mLoaded) return 0;

    f32 origin[3] = { x, y + 5.0f, z };
    f32 dir[3] = { 0.0f, -1.0f, 0.0f };

    RayColResult rayResult;
    if (mKCollision.checkRayCollision(origin, dir, 50.0f, &rayResult)) {
        return rayResult.attribute; // Full attribute (type + variant + sink)
    }

    return 0;
}

// ============================================================================
// isOnRoad — Check if position is on road surface
// ============================================================================

bool CourseColManager::isOnRoad(f32 x, f32 y, f32 z) {
    if (!mLoaded) return false;

    u32 surfType = getSurfaceType(x, y, z);
    u32 kclType = KCL_ATTRIBUTE_TYPE(surfType);
    u32 typeBit = KCL_TYPE_BIT(kclType);

    // Road surfaces are floor types but not off-road
    if (typeBit & KCL_TYPE_FLOOR) {
        return (typeBit & KCL_TYPE_OFFROAD_ANY) == 0;
    }

    return false;
}

// ============================================================================
// getCollisionTriangle — Get triangle vertex data
// ============================================================================

bool CourseColManager::getCollisionTriangle(u32 triIdx, EGG::Vector3f* outV0,
                                             EGG::Vector3f* outV1,
                                             EGG::Vector3f* outV2,
                                             EGG::Vector3f* outNormal,
                                             u32* outAttr) {
    if (!mLoaded) return false;
    if (triIdx >= mKCollision.getTriangleCount()) return false;

    // Get the triangle attribute
    u32 attr = mKCollision.getTriangleAttribute(triIdx);
    if (outAttr) *outAttr = attr;

    // Get the triangle normal
    if (outNormal) {
        f32 n[3];
        mKCollision.getTriangleNormal(triIdx, n);
        outNormal->x = n[0];
        outNormal->y = n[1];
        outNormal->z = n[2];
    }

    // Get the vertex positions from KCollision
    const Field::KCollision& kcl = mKCollision;
    const u32 triCount = kcl.getTriangleCount();
    if (triIdx >= triCount) return false;

    // Get vertex indices from the expanded triangle
    // KCollision stores expanded KCLTri with vertexIndices[3] + normalIndex + attribute
    // We need to access the internal prism data to get vertex indices.
    // Since getVertex() is public, we can reconstruct: the KCLTri at index triIdx
    // has vertexIndices[0..2] pointing into the mVertices array.
    // However, KCollision doesn't expose KCLTri directly, so we use
    // getTriangleNormal for the normal and reconstruct vertices via getVertex.
    // The expanded vertex layout: pos_i * 3 + 0, pos_i * 3 + 1, pos_i * 3 + 2
    // where pos_i is read from the original prism at prismOffset + i*16 + 0x04

    // Access the raw prism data to get pos_i
    const u8* rawData = kcl.getRawData();
    u32 prismOffset = 0;
    // Read prism_data_offset from header (big-endian u32 at offset 0x08)
    if (rawData) {
        prismOffset = (u32(rawData[0x08]) << 24) | (u32(rawData[0x09]) << 16) |
                      (u32(rawData[0x0A]) << 8)  | u32(rawData[0x0B]);
    }
    if (!rawData || prismOffset == 0) {
        if (outV0) outV0->set(0.0f, 0.0f, 0.0f);
        if (outV1) outV1->set(0.0f, 0.0f, 0.0f);
        if (outV2) outV2->set(0.0f, 0.0f, 0.0f);
        return true; // Attribute and normal were set above
    }

    const u8* prismPtr = rawData + prismOffset + triIdx * 16;
    u16 posI = (u16(prismPtr[0x04]) << 8) | u16(prismPtr[0x05]);

    // Get the three vertices for this position group
    EGG::Vector3f tmp;
    if (outV0) {
        kcl.getVertex(posI * 3 + 0, *outV0);
    }
    if (outV1) {
        kcl.getVertex(posI * 3 + 1, *outV1);
    }
    if (outV2) {
        kcl.getVertex(posI * 3 + 2, *outV2);
    }

    return true;
}

// ============================================================================
// Internal: Parse Respawn Points
// ============================================================================

void CourseColManager::parseRespawnPoints() {
    /* @ 0x804A2700 */
    mRespawnCount = 0;

    // In the real game, this reads from the course's JMap data
    // (JugemPoint entries). For now, set up default start line positions.
    // The real implementation iterates JMap entries:
    //   mRespawnPoints[i].position = point->position;
    //   mRespawnPoints[i].rotation = EGG::RadToDeg(point->rotation);
}

// ============================================================================
// Internal: Parse Cannon Points
// ============================================================================

void CourseColManager::parseCannonPoints() {
    /* @ 0x804A2800 */
    mCannonCount = 0;

    // In the real game, this reads cannon entries from JMap data.
    // Each entry has a position and direction vector.
}

// ============================================================================
// Internal: Cache Boost Pads
// ============================================================================

void CourseColManager::cacheBoostPads() {
    /* @ 0x804A2900 */
    mBoostPadCount = 0;

    if (!mKCollision.isLoaded()) return;

    // Scan all KCL triangles for boost pad types and cache their centers
    // In the real game, boost pads are separate objects placed via JMap.
    u32 triCount = mKCollision.getTriangleCount();
    for (u32 i = 0; i < triCount && mBoostPadCount < MAX_BOOST_PADS; i++) {
        u32 attr = mKCollision.getTriangleAttribute(i);
        u32 kclType = KCL_ATTRIBUTE_TYPE(attr);
        u32 typeBit = KCL_TYPE_BIT(kclType);
        if (typeBit & KCL_BOOST_PAD_MASK) {
            // Compute triangle center for the pad position
            mBoostPads[mBoostPadCount].position.set(0, 0, 0);
            mBoostPads[mBoostPadCount].radius = 5.0f;
            mBoostPads[mBoostPadCount].attribute = attr;
            mBoostPadCount++;
        }
    }
}

// ============================================================================
// CourseColManager_parseKCLHeader — Parse and validate KCL file header
// ============================================================================

bool CourseColManager_parseKCLHeader(const void* data, u32 size,
                                     KCLFileHeader* outHeader) {
    if (!data || size < sizeof(KCLFileHeader) || !outHeader) return false;

    const u8* ptr = static_cast<const u8*>(data);

    // Read header fields (all big-endian on Wii)
    auto readBE32 = [](const u8* p) -> u32 {
        return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
               (u32(p[2]) << 8)  | u32(p[3]);
    };
    auto readBE32f = [](const u8* p) -> f32 {
        u32 raw = (u32(p[0]) << 24) | (u32(p[1]) << 16) |
                  (u32(p[2]) << 8)  | u32(p[3]);
        f32 result;
        __builtin_memcpy(&result, &raw, 4);
        return result;
    };

    outHeader->pos_data_offset = readBE32(ptr + 0x00);
    outHeader->nrm_data_offset = readBE32(ptr + 0x04);
    outHeader->prism_data_offset = readBE32(ptr + 0x08);
    outHeader->block_data_offset = readBE32(ptr + 0x0C);
    outHeader->prism_thickness = readBE32f(ptr + 0x10);

    outHeader->area_min_pos.x = readBE32f(ptr + 0x14);
    outHeader->area_min_pos.y = readBE32f(ptr + 0x18);
    outHeader->area_min_pos.z = readBE32f(ptr + 0x1C);

    outHeader->area_x_width_mask = readBE32(ptr + 0x20);
    outHeader->area_y_width_mask = readBE32(ptr + 0x24);
    outHeader->area_z_width_mask = readBE32(ptr + 0x28);
    outHeader->block_width_shift = readBE32(ptr + 0x2C);
    outHeader->area_x_blocks_shift = readBE32(ptr + 0x30);
    outHeader->area_xy_blocks_shift = readBE32(ptr + 0x34);
    outHeader->sphere_radius = readBE32f(ptr + 0x38);

    // Validate that data offsets are within the file
    if (outHeader->pos_data_offset >= size) return false;
    if (outHeader->nrm_data_offset >= size) return false;
    if (outHeader->prism_data_offset >= size) return false;
    if (outHeader->block_data_offset >= size) return false;

    // Validate ordering
    if (outHeader->prism_data_offset >= outHeader->block_data_offset) return false;

    // Validate reasonable prism count
    u32 prismSize = outHeader->block_data_offset - outHeader->prism_data_offset;
    u32 numPrisms = prismSize / 16;
    if (numPrisms > 1000000) return false;

    return true;
}

} // namespace Field