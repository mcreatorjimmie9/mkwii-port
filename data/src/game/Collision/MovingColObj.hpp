#pragma once
// MovingColObj.hpp — Dynamic Collision Objects Manager
// GENESIS Phase 29: Manages moving/animated collision objects such as:
//   - Piranha Plant chomping zones (Mario Circuit, GC Peach Gardens)
//   - Thwomp falling/slamming obstacles (Bowser Castle)
//   - Moving road segments (DK Summit boulder path)
//   - Shy Guy car crashes (Moonview Highway)
//   - Paddle platforms (Mushroom Gorge)
// Original addresses: 0x804Exxxx-0x804Fxxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Collision {

// Moving collision object behavior type
enum MovingColObjType {
    MCOBJ_PIRANHA_PLANT   = 0,  // Chomping hazard
    MCOBJ_THWOMP          = 1,  // Falling/slamming obstacle
    MCOBJ_MOVING_PLATFORM = 2,  // Moving road/platform
    MCOBJ_SHY_GUY_CAR     = 3,  // Highway vehicle obstacle
    MCOBJ_BULLET_BILL     = 4,  // Bullet Bill cannon target
    MCOBJ_ICICLE          = 5,  // Falling icicle (Sherbet Land)
    MCOBJ_CRusher         = 6,  // Crushing wall (Bowser Castle)
    MCOBJ_PADDLE          = 7,  // Rotating paddle platform
};

// Moving collision object state
enum MovingColObjState {
    MCOBJ_STATE_IDLE       = 0,
    MCOBJ_STATE_MOVING     = 1,
    MCOBJ_STATE_ATTACKING  = 2,
    MCOBJ_STATE_RETRACTING = 3,
    MCOBJ_STATE_STUNNED    = 4,
    MCOBJ_STATE_DISABLED   = 5,
};

// Moving collision object definition
struct MovingColObj {
    EGG::Vector3f position;       // Current world position
    EGG::Vector3f initialPos;    // Starting position (for animation reset)
    EGG::Vector3f targetPos;     // Target position (for moving objects)
    EGG::Vector3f velocity;      // Current velocity
    EGG::Vector3f size;           // Bounding box half-extents
    EGG::Matrix34f rotation;      // Current rotation matrix
    f32 boundingRadius;           // Sphere bounding radius for quick test
    s32 objType;                 // MovingColObjType enum value
    s32 state;                   // MovingColObjState enum value
    f32 timer;                   // State timer (for animation sequencing)
    f32 animDuration;            // Duration of current animation phase
    u32 damageFlags;              // Effect on player (spin, squash, item loss)
    u32 invulnFlags;             // Items that can destroy this object
    s32 objId;                   // Instance ID
    s32 routeId;                 // Movement route ID (JMap path)
    s32 groupId;                 // JMap group this object belongs to
    bool isActive;               // Object is currently active
    bool mbHasCollision;         // Has collision volume when active

    // Per-object methods
    void init(s32 id, MovingColObjType typeVal, const EGG::Vector3f& pos, f32 radius);
    void update(f32 dt);
    void setVelocity(const EGG::Vector3f& vel);
    const EGG::Vector3f& getVelocity() const { return velocity; }
    bool isMoving() const;
    MovingColObjType getObjectType() const { return (MovingColObjType)objType; }
    void calcBounds(EGG::Vector3f& outMin, EGG::Vector3f& outMax) const;
    bool testCollision(const EGG::Vector3f& point, f32 pointRadius) const;
    void activate();
    void deactivate();
};

// Per-player interaction state with moving objects
struct PlayerMovingColState {
    s32 lastHitObjId;           // Object that last hit this player (-1 = none)
    f32 hitCooldown;            // Invulnerability timer after being hit
    u32 lastDamageFlags;        // What happened on last hit
    bool mbOnMovingPlatform;    // Standing on a moving platform
    s32 platformObjId;          // Which platform the player is on
};

// MovingColObjManager — manages all dynamic collision objects
class MovingColObjManager {
public:
    /* MovingColObjManager_ctor @ 0x804E1000 */
    MovingColObjManager();
    /* MovingColObjManager_dtor @ 0x804E1040 */
    ~MovingColObjManager();

    // Initialize for a course
    /* MovingColObjManager_init @ 0x804E1080 */
    void init(u32 courseId);

    // Load moving objects from course JMap
    /* MovingColObjManager_loadObjects @ 0x804E1100 */
    bool loadObjects();

    // Update all moving objects — advance animations, move along routes
    /* MovingColObjManager_update @ 0x804E1200 */
    void update();

    // Check a player against all moving objects
    /* MovingColObjManager_checkPlayerCol @ 0x804E1300 */
    bool checkPlayerCol(s32 playerIdx, const EGG::Vector3f& playerPos,
                         f32 boundingRadius);

    // Get a moving object by ID
    const MovingColObj* getObject(s32 objId) const;

    // Get number of active objects
    s32 getActiveCount() const { return mActiveCount; }

    // Get total object count
    s32 getObjectCount() const { return mObjectCount; }

    // Reset all object states (for race restart)
    void reset();

    // Disable an object (after star/mega mushroom)
    /* MovingColObjManager_disableObject @ 0x804E1400 */
    void disableObject(s32 objId);

    // Get moving platform position for camera target
    EGG::Vector3f getPlatformPosition(s32 objId) const;

    // Per-player interaction state
    const PlayerMovingColState& getPlayerState(s32 playerIdx) const;

private:
    static const s32 MAX_OBJECTS = 32;

    // Update a specific object's animation
    void updateObjectAnimation(s32 objIdx);

    // Check AABB overlap between player and object
    bool testOverlap(const EGG::Vector3f& posA, f32 radiusA,
                     const EGG::Vector3f& posB, f32 radiusB) const;

    MovingColObj mObjects[MAX_OBJECTS];
    s32 mObjectCount;
    s32 mActiveCount;
    PlayerMovingColState mPlayerStates[MAX_PLAYER_COUNT];
    u32 mCourseId;
};

} // namespace Collision
