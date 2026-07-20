#pragma once
// CourseColManager.hpp — Course Collision Manager
// GENESIS Phase 16: Manages KCL collision data per course and provides
// kart collision queries, respawn points, cannon targets, and surface queries.
// Original addresses: 0x804Axxxx-0x804Bxxxx

#include <rk_types.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>

#include "KCollision.hpp"
#include <game/field/CollisionEntries.hpp>

namespace Kart {
class KartDynamics;
} // namespace Kart

namespace Field {

// Respawn point data (from course JMap/BGInfo)
struct RespawnPoint {
    EGG::Vector3f position;  // World position
    f32 rotation;            // Y-axis rotation (radians)
};

// Cannon target data
struct CannonTarget {
    EGG::Vector3f position;  // Cannon exit position
    EGG::Vector3f direction; // Launch direction (normalized)
};

// Boost pad entry (pre-cached)
struct BoostPadEntry {
    EGG::Vector3f position;
    f32 radius;
    u32 attribute;
};

class CourseColManager {
public:
    /* CourseColManager_ctor @ 0x804A1000 */
    CourseColManager();
    /* CourseColManager_dtor @ 0x804A1040 */
    ~CourseColManager();

    // Singleton access
    /* CourseColManager_instance @ 0x804A1080 */
    static CourseColManager* instance();

    // Initialize the manager
    /* CourseColManager_init @ 0x804A10A0 */
    void init();

    // Load KCL collision data for a given course
    // Returns true on success
    /* CourseColManager_load @ 0x804A1100 */
    bool load(u32 courseId);

    // Perform full kart collision check against course KCL
    // Returns true if collision was found
    /* CourseColManager_checkKartCol @ 0x804A1500 */
    bool checkKartCol(Kart::KartDynamics* dyn, f32 boundingRadius);

    // Get respawn point by index
    /* CourseColManager_getRespawnPt @ 0x804A2000 */
    bool getRespawnPoint(s32 pointId, f32* outPos, f32* outRot);

    // Get cannon target by ID
    /* CourseColManager_getCannonTarget @ 0x804A2100 */
    bool getCannonTarget(s32 cannonId, f32* outPos, f32* outDir);

    // Query the KCL road/surface type at a world position
    /* CourseColManager_getRoadType @ 0x804A2200 */
    u32 getRoadType(f32 x, f32 y, f32 z);

    // Check if a position is off-road
    /* CourseColManager_isOffRoad @ 0x804A2300 */
    bool isOffRoad(f32 x, f32 y, f32 z);

    // Check if a position is on a boost pad
    /* CourseColManager_isBoostPad @ 0x804A2400 */
    bool isBoostPad(f32 x, f32 z);

    // Direct KCollision access for advanced queries
    KCollision* getKCollision() { return &mKCollision; }
    const KCollision* getKCollision() const { return &mKCollision; }

    // Get the last collision result info
    const SphereColResult& getLastColResult() const { return mLastResult; }

    // Unload current course data
    /* CourseColManager_unload @ 0x804A2500 */
    void unload();

    // Load KCL data from a raw binary buffer
    // @param kclData  Pointer to KCL file data (big-endian)
    // @param size     Size of the KCL data in bytes
    // @return true if KCL was parsed successfully
    bool load(const void* kclData, u32 size);

    // Ray-world intersection test
    // @param origin    Ray start point
    // @param dir       Ray direction (normalized)
    // @param maxDist   Maximum ray distance
    // @param result    Output collision result
    // @return true if ray hit something
    bool rayCast(const f32* origin, const f32* dir, f32 maxDist,
                 RayColResult* result);

    // Sphere-world overlap test (general purpose)
    // @param x, y, z   Sphere center
    // @param radius    Sphere radius
    // @param result    Output collision result
    // @return true if sphere overlaps any triangle
    bool sphereTest(f32 x, f32 y, f32 z, f32 radius,
                    SphereColResult* result);

    // Get floor Y position at a world position
    // Casts downward from (x, y+range, z) to find the highest floor below.
    // @return Floor Y coordinate, or y if no floor found
    f32 getFloorAt(f32 x, f32 y, f32 z);

    // Find nearby wall triangles around a position
    // @param x, y, z   Search center
    // @param radius    Search radius
    // @param outNormals  Output normal array (max 4 entries)
    // @param outCount  Number of walls found
    // @return true if any walls found
    bool getWallAt(f32 x, f32 y, f32 z, f32 radius,
                   EGG::Vector3f* outNormals, u32* outCount);

    // Get the KCL surface type/attribute at a world point
    // Casts a short ray downward to sample the surface.
    u32 getSurfaceType(f32 x, f32 y, f32 z);

    // Check if a position is on a road surface (KCL type floor)
    bool isOnRoad(f32 x, f32 y, f32 z);

    // Get collision triangle data by index
    // @param triIdx   Triangle index
    // @param outV0, outV1, outV2  Output vertex positions
    // @param outNormal  Output triangle normal
    // @param outAttr    Output KCL attribute
    // @return true if index is valid
    bool getCollisionTriangle(u32 triIdx, EGG::Vector3f* outV0,
                              EGG::Vector3f* outV1, EGG::Vector3f* outV2,
                              EGG::Vector3f* outNormal, u32* outAttr);

    // Check if course data is loaded
    bool isLoaded() const { return mLoaded; }

    // Get number of respawn points
    s32 getRespawnCount() const { return mRespawnCount; }

    // Get number of cannon targets
    s32 getCannonCount() const { return mCannonCount; }

    // Get floor Y at position
    /* CourseColManager_getFloorY @ 0x804A2600 */
    bool getFloorY(f32 x, f32 y, f32 z, f32* outY, f32* outNormal);

    // Check sphere collision with type mask filtering
    /* CourseColManager_checkSphereFiltered @ 0x804A1800 */
    bool checkSphereFiltered(f32 x, f32 y, f32 z, f32 radius,
                             u32 typeMask, SphereColResult* result);

private:
    // Cache boost pad positions from KCL data
    void cacheBoostPads();
    // Parse respawn points from JMap
    void parseRespawnPoints();
    // Parse cannon points from JMap
    void parseCannonPoints();

    KCollision mKCollision;           // 0x04: KCL collision engine
    bool mLoaded;                     // 0xXX: course data loaded flag
    u32 mCourseId;                    // 0xXX: currently loaded course ID

    // Respawn point data
    static const s32 MAX_RESPAWN_POINTS = 64;
    RespawnPoint mRespawnPoints[MAX_RESPAWN_POINTS];
    s32 mRespawnCount;

    // Cannon target data
    static const s32 MAX_CANNON_TARGETS = 16;
    CannonTarget mCannonTargets[MAX_CANNON_TARGETS];
    s32 mCannonCount;

    // Boost pad cache
    static const s32 MAX_BOOST_PADS = 256;
    BoostPadEntry mBoostPads[MAX_BOOST_PADS];
    s32 mBoostPadCount;

    // Last collision result (for external queries)
    SphereColResult mLastResult;

    // Singleton instance
    static CourseColManager* sInstance;
};

// Parse a KCL file header and validate it
// @param data  Pointer to KCL file data
// @param size  Size of the data
// @param outHeader  Output parsed header
// @return true if header is valid (magic = 'KCOL')
bool CourseColManager_parseKCLHeader(const void* data, u32 size,
                                     KCLHeader* outHeader);

} // namespace Field