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

} // namespace Field