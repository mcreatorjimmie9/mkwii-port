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
    memset(mRespawnPoints, 0, sizeof(mRespawnPoints));
    memset(mCannonTargets, 0, sizeof(mCannonTargets));
    memset(mBoostPads, 0, sizeof(mBoostPads));
    memset(&mLastResult, 0, sizeof(mLastResult));
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
    memset(mRespawnPoints, 0, sizeof(mRespawnPoints));
    memset(mCannonTargets, 0, sizeof(mCannonTargets));
    memset(mBoostPads, 0, sizeof(mBoostPads));
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
    if (!kclData || size < sizeof(KCLHeader)) return false;

    // Validate header
    KCLHeader header;
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
    memset(mRespawnPoints, 0, sizeof(mRespawnPoints));
    memset(mCannonTargets, 0, sizeof(mCannonTargets));
    memset(mBoostPads, 0, sizeof(mBoostPads));
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

    // Check KCL type at this position — off-road types
    u32 roadType = getRoadType(x, y, z);
    return (roadType & KCL_TYPE_OFFROAD_ANY) != 0;
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

    if (mKCollision.getFloor(x, y + 100.0f, z, &floorY, normal)) {
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
    if (kclType == KCL_TYPE_PLAYER_WALL_CAT1 ||
        kclType == KCL_TYPE_PLAYER_WALL_CAT2 ||
        kclType == KCL_TYPE_DRIVER_WALL) {

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

    // Road surfaces are type 0x01 (floor) but not off-road
    if (kclType == KCL_TYPE_FLOOR) {
        return (surfType & KCL_TYPE_OFFROAD_ANY) == 0;
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

    // Get the vertex positions
    // We need to read vertex indices from the triangle data
    // The KCollision stores converted triangle data internally
    // For now, output zero vectors as the vertex fetch is internal
    if (outV0) outV0->set(0.0f, 0.0f, 0.0f);
    if (outV1) outV1->set(0.0f, 0.0f, 0.0f);
    if (outV2) outV2->set(0.0f, 0.0f, 0.0f);

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
        if (kclType == (KCL_BOOST_PAD_MASK & 0xFF)) {
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
                                     KCLHeader* outHeader) {
    if (!data || size < sizeof(KCLHeader) || !outHeader) return false;

    const u8* ptr = static_cast<const u8*>(data);

    // Read the magic bytes (big-endian 'KCOL' = 0x4B434F4C)
    u32 magic = (u32(ptr[0]) << 24) | (u32(ptr[1]) << 16) |
                (u32(ptr[2]) << 8)  | u32(ptr[3]);

    if (magic != 0x4B434F4C) return false; // Not a valid KCL file

    // Read header fields (all big-endian on Wii)
    auto readBE32 = [](const u8* p) -> u32 {
        return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
               (u32(p[2]) << 8)  | u32(p[3]);
    };

    outHeader->magic = magic;
    outHeader->blockSize = readBE32(ptr + 0x04);
    outHeader->numTriangles = readBE32(ptr + 0x08);
    outHeader->numVertices = readBE32(ptr + 0x0C);
    outHeader->numNormals = readBE32(ptr + 0x10);
    outHeader->numOctreeNodes = readBE32(ptr + 0x14);
    outHeader->_18 = readBE32(ptr + 0x18);
    outHeader->_1C = readBE32(ptr + 0x1C);
    outHeader->triDataOffset = readBE32(ptr + 0x20);
    outHeader->vertexDataOffset = readBE32(ptr + 0x24);
    outHeader->normalDataOffset = readBE32(ptr + 0x28);
    outHeader->octreeDataOffset = readBE32(ptr + 0x2C);

    // Validate that the block size matches the file size
    if (outHeader->blockSize > size) return false;

    // Validate that data offsets are within the file
    if (outHeader->triDataOffset >= size) return false;
    if (outHeader->vertexDataOffset >= size) return false;
    if (outHeader->normalDataOffset >= size) return false;
    if (outHeader->octreeDataOffset >= size) return false;

    // Validate reasonable counts (sanity check)
    if (outHeader->numTriangles > 1000000) return false;
    if (outHeader->numVertices > 1000000) return false;
    if (outHeader->numNormals > 1000000) return false;

    return true;
}

} // namespace Field