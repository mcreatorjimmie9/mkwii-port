// MovingColObj.cpp — Dynamic Collision Objects Implementation
// GENESIS Phase 29
// Original addresses: 0x804Exxxx-0x804Fxxxx

#include "MovingColObj.hpp"
#include <cmath>
#include <cstring>

namespace Collision {

/* MovingColObjManager_ctor @ 0x804E1000 */
MovingColObjManager::MovingColObjManager()
    : mObjectCount(0)
    , mActiveCount(0)
    , mCourseId(0)
{
    for (s32 i = 0; i < MAX_OBJECTS; i++) {
        mObjects[i].position = EGG::Vector3f::zero;
        mObjects[i].initialPos = EGG::Vector3f::zero;
        mObjects[i].targetPos = EGG::Vector3f::zero;
        mObjects[i].velocity = EGG::Vector3f::zero;
        mObjects[i].size = EGG::Vector3f(10.0f, 10.0f, 10.0f);
        mObjects[i].boundingRadius = 10.0f;
        mObjects[i].objType = 0;
        mObjects[i].state = MCOBJ_STATE_IDLE;
        mObjects[i].timer = 0.0f;
        mObjects[i].animDuration = 1.0f;
        mObjects[i].damageFlags = 0x01; // Default: spin out
        mObjects[i].invulnFlags = 0;
        mObjects[i].objId = i;
        mObjects[i].routeId = -1;
        mObjects[i].groupId = 0;
        mObjects[i].isActive = false;
        mObjects[i].mbHasCollision = false;
    }
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].lastHitObjId = -1;
        mPlayerStates[i].hitCooldown = 0.0f;
        mPlayerStates[i].lastDamageFlags = 0;
        mPlayerStates[i].mbOnMovingPlatform = false;
        mPlayerStates[i].platformObjId = -1;
    }
}

/* MovingColObjManager_dtor @ 0x804E1040 */
MovingColObjManager::~MovingColObjManager() {}

/* MovingColObjManager_init @ 0x804E1080 */
void MovingColObjManager::init(u32 courseId) {
    mCourseId = courseId;
    mObjectCount = 0;
    mActiveCount = 0;
    reset();
    loadObjects();
}

/* MovingColObjManager_loadObjects @ 0x804E1100 */
bool MovingColObjManager::loadObjects() {
    // Moving collision objects are defined in JMap "obj" group entries.
    // Each course has a different set:
    //   - Bowser Castle (7): Thwomps, crushers
    //   - Moonview Highway (9): Shy Guy cars, trucks
    //   - DK Summit (5): Moving platforms on boulder path
    //   - Mushroom Gorge (5): Moving paddle platforms
    //   - GC Peach Gardens: Piranha plants
    //   - Sherbet Land (18): Falling icicles

    switch (mCourseId) {
    case 7: // Bowser Castle — Thwomps and crushers
        mObjects[0].objType = MCOBJ_THWOMP;
        mObjects[0].position = EGG::Vector3f(100.0f, 50.0f, -200.0f);
        mObjects[0].initialPos = mObjects[0].position;
        mObjects[0].size = EGG::Vector3f(15.0f, 20.0f, 15.0f);
        mObjects[0].boundingRadius = 20.0f;
        mObjects[0].animDuration = 2.0f; // 2 second cycle
        mObjects[0].damageFlags = 0x01; // Spin out
        mObjects[0].isActive = true;
        mObjects[0].mbHasCollision = true;
        mObjectCount = 1;
        break;
    case 9: // Moonview Highway — Shy Guy cars
        mObjectCount = 0;
        for (s32 i = 0; i < 6 && mObjectCount < MAX_OBJECTS; i++) {
            MovingColObj& obj = mObjects[mObjectCount];
            obj.objType = MCOBJ_SHY_GUY_CAR;
            obj.position = EGG::Vector3f(-200.0f + i * 80.0f, 5.0f, 300.0f);
            obj.initialPos = obj.position;
            obj.targetPos = EGG::Vector3f(400.0f, 5.0f, 300.0f);
            obj.size = EGG::Vector3f(8.0f, 6.0f, 12.0f);
            obj.boundingRadius = 10.0f;
            obj.velocity = EGG::Vector3f(60.0f, 0.0f, 0.0f);
            obj.animDuration = 8.0f;
            obj.damageFlags = 0x01; // Spin out
            obj.invulnFlags = 0x04; // Star can destroy
            obj.isActive = true;
            obj.mbHasCollision = true;
            obj.objId = mObjectCount;
            mObjectCount++;
        }
        break;
    case 18: // Sherbet Land — Falling icicles
        mObjectCount = 0;
        for (s32 i = 0; i < 4 && mObjectCount < MAX_OBJECTS; i++) {
            MovingColObj& obj = mObjects[mObjectCount];
            obj.objType = MCOBJ_ICICLE;
            obj.position = EGG::Vector3f(-150.0f + i * 100.0f, 80.0f, -100.0f);
            obj.initialPos = obj.position;
            obj.targetPos = EGG::Vector3f(obj.position.x, -20.0f, obj.position.z);
            obj.size = EGG::Vector3f(5.0f, 15.0f, 5.0f);
            obj.boundingRadius = 8.0f;
            obj.animDuration = 1.5f;
            obj.damageFlags = 0x02; // Squash
            obj.isActive = true;
            obj.mbHasCollision = true;
            obj.objId = mObjectCount;
            mObjectCount++;
        }
        break;
    default:
        mObjectCount = 0;
        break;
    }

    mActiveCount = mObjectCount;
    return true;
}

/* MovingColObjManager_update @ 0x804E1200 */
void MovingColObjManager::update() {
    for (s32 i = 0; i < mObjectCount; i++) {
        if (!mObjects[i].isActive) {
            continue;
        }
        updateObjectAnimation(i);

        // Update player cooldown timers
        for (s32 p = 0; p < MAX_PLAYER_COUNT; p++) {
            if (mPlayerStates[p].hitCooldown > 0.0f) {
                mPlayerStates[p].hitCooldown -= 1.0f / 60.0f;
                if (mPlayerStates[p].hitCooldown < 0.0f) {
                    mPlayerStates[p].hitCooldown = 0.0f;
                }
            }
        }
    }
}

/* MovingColObjManager_updateObjectAnimation @ 0x804E1250 (internal) */
void MovingColObjManager::updateObjectAnimation(s32 objIdx) {
    MovingColObj& obj = mObjects[objIdx];
    obj.timer += 1.0f / 60.0f;

    switch (obj.objType) {
    case MCOBJ_THWOMP:
        // Thwomp animation: rise → pause → slam → pause → repeat
        // Timer cycle: [0, 0.5] rise, [0.5, 1.0] pause at top,
        //             [1.0, 1.5] slam down, [1.5, 2.0] pause at bottom
        {
            f32 t = obj.timer / obj.animDuration; // Normalize to [0,1]
            if (t >= 1.0f) {
                obj.timer -= obj.animDuration;
                t = 0.0f;
            }
            if (t < 0.25f) {
                // Rising phase
                f32 phase = t / 0.25f;
                obj.position.y = obj.initialPos.y + 40.0f * phase;
                obj.state = MCOBJ_STATE_MOVING;
                obj.mbHasCollision = true;
            } else if (t < 0.5f) {
                // Pause at top
                obj.position.y = obj.initialPos.y + 40.0f;
                obj.state = MCOBJ_STATE_IDLE;
                obj.mbHasCollision = false;
            } else if (t < 0.75f) {
                // Slamming down
                f32 phase = (t - 0.5f) / 0.25f;
                obj.position.y = obj.initialPos.y + 40.0f * (1.0f - phase);
                obj.state = MCOBJ_STATE_ATTACKING;
                obj.mbHasCollision = true;
            } else {
                // Pause at bottom
                obj.position.y = obj.initialPos.y;
                obj.state = MCOBJ_STATE_IDLE;
                obj.mbHasCollision = false;
            }
        }
        break;

    case MCOBJ_SHY_GUY_CAR:
        // Car moves along X axis, then loops back
        {
            f32 t = obj.timer / obj.animDuration;
            if (t >= 1.0f) {
                obj.timer -= obj.animDuration;
                t = 0.0f;
            }
            obj.position.x = obj.initialPos.x +
                             (obj.targetPos.x - obj.initialPos.x) * t;
            obj.state = MCOBJ_STATE_MOVING;
            obj.mbHasCollision = true;
        }
        break;

    case MCOBJ_ICICLE:
        // Icicle falls after a delay, then resets
        {
            f32 t = obj.timer / obj.animDuration;
            if (t >= 1.0f) {
                obj.timer -= obj.animDuration;
                obj.position = obj.initialPos;
                t = 0.0f;
            }
            // Linear fall
            obj.position.y = obj.initialPos.y +
                             (obj.targetPos.y - obj.initialPos.y) * t;
            obj.state = (t > 0.1f) ? MCOBJ_STATE_ATTACKING : MCOBJ_STATE_IDLE;
            obj.mbHasCollision = (t > 0.1f);
        }
        break;

    default:
        break;
    }
}

/* MovingColObjManager_checkPlayerCol @ 0x804E1300 */
bool MovingColObjManager::checkPlayerCol(s32 playerIdx,
                                           const EGG::Vector3f& playerPos,
                                           f32 boundingRadius) {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return false;
    }

    PlayerMovingColState& pState = mPlayerStates[playerIdx];
    if (pState.hitCooldown > 0.0f) {
        return false; // Still invulnerable from last hit
    }

    for (s32 i = 0; i < mObjectCount; i++) {
        const MovingColObj& obj = mObjects[i];
        if (!obj.isActive || !obj.mbHasCollision) {
            continue;
        }

        if (testOverlap(playerPos, boundingRadius, obj.position, obj.boundingRadius)) {
            pState.lastHitObjId = obj.objId;
            pState.lastDamageFlags = obj.damageFlags;
            pState.hitCooldown = 1.0f; // 1 second invulnerability
            return true;
        }
    }

    return false;
}

/* MovingColObjManager_testOverlap @ 0x804E1350 (internal) */
bool MovingColObjManager::testOverlap(const EGG::Vector3f& posA, f32 radiusA,
                                        const EGG::Vector3f& posB, f32 radiusB) const {
    f32 dx = posA.x - posB.x;
    f32 dy = posA.y - posB.y;
    f32 dz = posA.z - posB.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    f32 combinedRadius = radiusA + radiusB;
    return distSq <= combinedRadius * combinedRadius;
}

/* MovingColObjManager_getObject */
const MovingColObj* MovingColObjManager::getObject(s32 objId) const {
    if (objId < 0 || objId >= mObjectCount) {
        return nullptr;
    }
    return &mObjects[objId];
}

/* MovingColObjManager_reset */
void MovingColObjManager::reset() {
    for (s32 i = 0; i < MAX_OBJECTS; i++) {
        mObjects[i].position = mObjects[i].initialPos;
        mObjects[i].velocity = EGG::Vector3f::zero;
        mObjects[i].state = MCOBJ_STATE_IDLE;
        mObjects[i].timer = 0.0f;
        mObjects[i].isActive = (i < mObjectCount);
    }
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].lastHitObjId = -1;
        mPlayerStates[i].hitCooldown = 0.0f;
        mPlayerStates[i].lastDamageFlags = 0;
        mPlayerStates[i].mbOnMovingPlatform = false;
        mPlayerStates[i].platformObjId = -1;
    }
    mActiveCount = mObjectCount;
}

/* MovingColObjManager_disableObject @ 0x804E1400 */
void MovingColObjManager::disableObject(s32 objId) {
    if (objId < 0 || objId >= mObjectCount) {
        return;
    }
    mObjects[objId].isActive = false;
    mObjects[objId].mbHasCollision = false;
    mActiveCount--;
    if (mActiveCount < 0) mActiveCount = 0;
}

/* MovingColObjManager_getPlatformPosition */
EGG::Vector3f MovingColObjManager::getPlatformPosition(s32 objId) const {
    if (objId < 0 || objId >= mObjectCount || !mObjects[objId].isActive) {
        return EGG::Vector3f::zero;
    }
    return mObjects[objId].position;
}

/* MovingColObjManager_getPlayerState */
const PlayerMovingColState& MovingColObjManager::getPlayerState(s32 playerIdx) const {
    return mPlayerStates[playerIdx];
}

// ============================================================================
// MovingColObj — Per-object methods
// ============================================================================

/* MovingColObj::init */
void MovingColObj::init(s32 id, MovingColObjType typeVal,
                          const EGG::Vector3f& pos, f32 radius) {
    objId = id;
    objType = (s32)typeVal;
    position = pos;
    initialPos = pos;
    targetPos = pos;
    velocity = EGG::Vector3f::zero;
    size = EGG::Vector3f(radius, radius, radius);
    boundingRadius = radius;
    state = MCOBJ_STATE_IDLE;
    timer = 0.0f;
    animDuration = 1.0f;
    damageFlags = 0x01;
    invulnFlags = 0;
    routeId = -1;
    groupId = 0;
    isActive = true;
    mbHasCollision = true;
}

/* MovingColObj::update */
void MovingColObj::update(f32 dt) {
    if (!isActive) {
        return;
    }
    // Apply velocity to position
    position.x += velocity.x * dt;
    position.y += velocity.y * dt;
    position.z += velocity.z * dt;

    // Update state timer
    timer += dt;

    // Check if the object has reached its target
    if (velocity.squaredLength() > 0.0001f) {
        state = MCOBJ_STATE_MOVING;

        // Check proximity to target
        EGG::Vector3f toTarget(
            targetPos.x - position.x,
            targetPos.y - position.y,
            targetPos.z - position.z
        );
        if (toTarget.squaredLength() < 1.0f) {
            // Reached target — stop and optionally reverse
            velocity = EGG::Vector3f::zero;
            state = MCOBJ_STATE_IDLE;
            mbHasCollision = (objType == MCOBJ_MOVING_PLATFORM);
        }
    }
}

/* MovingColObj::setVelocity */
void MovingColObj::setVelocity(const EGG::Vector3f& vel) {
    velocity = vel;
}

/* MovingColObj::isMoving */
bool MovingColObj::isMoving() const {
    return isActive && velocity.squaredLength() > 0.0001f;
}

/* MovingColObj::calcBounds — Compute AABB from position and size */
void MovingColObj::calcBounds(EGG::Vector3f& outMin,
                               EGG::Vector3f& outMax) const {
    outMin = EGG::Vector3f(
        position.x - size.x,
        position.y - size.y,
        position.z - size.z
    );
    outMax = EGG::Vector3f(
        position.x + size.x,
        position.y + size.y,
        position.z + size.z
    );
}

/* MovingColObj::testCollision — Sphere vs this object's bounding sphere */
bool MovingColObj::testCollision(const EGG::Vector3f& point,
                                  f32 pointRadius) const {
    if (!isActive || !mbHasCollision) {
        return false;
    }
    f32 dx = point.x - position.x;
    f32 dy = point.y - position.y;
    f32 dz = point.z - position.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    f32 combinedRadius = pointRadius + boundingRadius;
    return distSq <= combinedRadius * combinedRadius;
}

/* MovingColObj::activate */
void MovingColObj::activate() {
    isActive = true;
    mbHasCollision = true;
    state = MCOBJ_STATE_IDLE;
    timer = 0.0f;
}

/* MovingColObj::deactivate */
void MovingColObj::deactivate() {
    isActive = false;
    mbHasCollision = false;
    state = MCOBJ_STATE_DISABLED;
    velocity = EGG::Vector3f::zero;
}

} // namespace Collision
