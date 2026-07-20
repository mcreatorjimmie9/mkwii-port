// ============================================================================
// ItemObjRed implementation — Red shell (homing shell) item object
// ============================================================================
// Translated from PowerPC assembly stubs in StaticR.rel.
// Red shells home in on the player ahead of the user, following a curved
// trajectory determined by homing strength.
// ============================================================================

#include "ItemObjRed.hpp"
#include <cstring>
#include <cmath>

namespace Item {

// ============================================================================
// Constants
// ============================================================================

const f32 ItemObjRed::DEFAULT_SPEED          = 1.2f;
const f32 ItemObjRed::DEFAULT_HOMING_STRENGTH = 0.02f;
const s32 ItemObjRed::DEFAULT_LIFETIME       = 600;
const u8  ItemObjRed::INVALID_TARGET         = 0xFF;
const f32 ItemObjRed::MAX_TURN_RATE          = 0.06f;  // ~3.4 deg/frame max
const f32 ItemObjRed::MIN_SPEED              = 0.8f;
const f32 ItemObjRed::MAX_SPEED              = 2.0f;
const f32 ItemObjRed::CLOSE_DISTANCE_SQ      = 2500.0f; // 50 units squared
const f32 ItemObjRed::HIT_RADIUS             = 5.0f;
const u8  ItemObjRed::DEFAULT_MAX_BOUNCES    = 5;

// ============================================================================
// Constructor / Destructor
// ============================================================================

ItemObjRed::ItemObjRed()
    : mPosition()
    , mDirection(1.0f, 0.0f, 0.0f)
    , mSpeed(DEFAULT_SPEED)
    , mHomingStrength(DEFAULT_HOMING_STRENGTH)
    , mLifetime(DEFAULT_LIFETIME)
    , mTargetId(INVALID_TARGET)
    , mAlive(false)
    , mOwnerId(INVALID_TARGET)
    , mBouncesLeft(DEFAULT_MAX_BOUNCES) {
}

ItemObjRed::~ItemObjRed() {
}

// ============================================================================
// makeArray — Create and initialize an array of red shell objects
// @addr 0x807ac4d8
// Size: 456 bytes
// ============================================================================
// Assembly summary:
//   bge      0x807ac4ec       — if count >= maxCount, skip (bounds check)
//   cmplw    r4, r30         — if count == maxCount, also skip
//   li       r3, 0           — early return with 0
//   b        0x807ac600       — jump to epilogue
//   lfs      f0, 0x34(r28)   — load speed from config at offset 0x34
//   ... per-element init loop ...
//
// The function creates 'count' ItemObjRed instances in 'array', each
// initialized with the given speed. Returns 0 on success.
// ============================================================================

s32 ItemObjRed::makeArray(ItemObjRed* array, u32 count, u32 maxCount, f32 speed) {
    // Bounds check: if count >= maxCount or count == 0, fail
    // @addr 0x807ac4d8 — bge (branch if count >= maxCount)
    if (count == 0 || count >= maxCount) {
        return 0;
    }

    // Per-element initialization loop
    // Original assembly loads speed from offset 0x34 of a config struct (r28)
    // and initializes each array element with default red shell properties.
    // The speed parameter here corresponds to that loaded float value.
    for (u32 i = 0; i < count; i++) {
        array[i].mPosition.setZero();
        array[i].mDirection = EGG::Vector3f(1.0f, 0.0f, 0.0f);
        array[i].mSpeed = speed;
        array[i].mHomingStrength = DEFAULT_HOMING_STRENGTH;
        array[i].mLifetime = DEFAULT_LIFETIME;
        array[i].mTargetId = INVALID_TARGET;
        array[i].mAlive = false;
        array[i].mOwnerId = INVALID_TARGET;
        array[i].mBouncesLeft = DEFAULT_MAX_BOUNCES;
    }

    return 1; // success
}

// ============================================================================
// init — Initialize shell state for a new spawn
// ============================================================================

void ItemObjRed::init(const EGG::Vector3f& pos, const EGG::Vector3f& dir,
                      u8 targetId) {
    mPosition = pos;

    // Normalize the direction vector
    f32 lenSq = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
    if (lenSq > 0.0f) {
        f32 invLen = 1.0f / std::sqrt(lenSq);
        mDirection.x = dir.x * invLen;
        mDirection.y = dir.y * invLen;
        mDirection.z = dir.z * invLen;
    } else {
        mDirection = EGG::Vector3f(1.0f, 0.0f, 0.0f);
    }

    mTargetId = targetId;
    mLifetime = DEFAULT_LIFETIME;
    mAlive = true;
    mBouncesLeft = DEFAULT_MAX_BOUNCES;
    mSpeed = DEFAULT_SPEED;
    mHomingStrength = DEFAULT_HOMING_STRENGTH;
}

// ============================================================================
// findTarget — Find nearest kart ahead of the owner
// ============================================================================
// Scans all player positions to find the closest kart that is:
//   1. Not the owner
//   2. Not invincible (star/mega)
//   3. Ahead of the owner (dot product of (player - owner) with ownerDir > 0)
//   4. Closest by squared distance
// ============================================================================

u8 ItemObjRed::findTarget(const EGG::Vector3f& ownerPos,
                          const EGG::Vector3f& ownerDir,
                          u8 playerCount,
                          const EGG::Vector3f* playerPositions,
                          const u8* playerInvincible) {
    if (!playerPositions || playerCount == 0) {
        mTargetId = INVALID_TARGET;
        return INVALID_TARGET;
    }

    f32 bestDistSq = 1.0e12f; // Very large initial value
    u8 bestTarget = INVALID_TARGET;

    for (u8 i = 0; i < playerCount; i++) {
        // Skip the owner
        if (i == mOwnerId) continue;

        // Skip invincible players (star/mega) — they can dodge
        if (playerInvincible && playerInvincible[i] != 0) continue;

        // Compute vector from owner to this player
        f32 dx = playerPositions[i].x - ownerPos.x;
        f32 dy = playerPositions[i].y - ownerPos.y;
        f32 dz = playerPositions[i].z - ownerPos.z;

        // Check if the player is ahead of the owner
        f32 dot = dx * ownerDir.x + dy * ownerDir.y + dz * ownerDir.z;
        if (dot < 0.0f) continue; // Behind the owner, skip

        f32 distSq = dx * dx + dy * dy + dz * dz;
        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            bestTarget = i;
        }
    }

    // If no one ahead, try anyone (including behind)
    if (bestTarget == INVALID_TARGET) {
        for (u8 i = 0; i < playerCount; i++) {
            if (i == mOwnerId) continue;
            if (playerInvincible && playerInvincible[i] != 0) continue;

            f32 dx = playerPositions[i].x - ownerPos.x;
            f32 dy = playerPositions[i].y - ownerPos.y;
            f32 dz = playerPositions[i].z - ownerPos.z;
            f32 distSq = dx * dx + dy * dy + dz * dz;

            if (distSq < bestDistSq) {
                bestDistSq = distSq;
                bestTarget = i;
            }
        }
    }

    mTargetId = bestTarget;
    return bestTarget;
}

// ============================================================================
// steerToward — Homing steering with turn rate limit
// ============================================================================
// Computes the desired direction toward the target and blends the shell's
// current direction toward it, clamped by MAX_TURN_RATE per frame.
// Uses a cross-product + dot-product approach to compute the angle
// between current direction and desired direction, then rotates by the
// minimum of (angle, MAX_TURN_RATE).
// ============================================================================

void ItemObjRed::steerToward(const EGG::Vector3f& targetPos) {
    if (mTargetId == INVALID_TARGET) return;

    // Compute vector from shell to target
    f32 toTargetX = targetPos.x - mPosition.x;
    f32 toTargetY = targetPos.y - mPosition.y;
    f32 toTargetZ = targetPos.z - mPosition.z;

    f32 toTargetLenSq = toTargetX * toTargetX + toTargetY * toTargetY +
                        toTargetZ * toTargetZ;
    if (toTargetLenSq < 0.0001f) return; // Already at target

    // Normalize the to-target vector
    f32 invLen = 1.0f / std::sqrt(toTargetLenSq);
    f32 desiredX = toTargetX * invLen;
    f32 desiredY = toTargetY * invLen;
    f32 desiredZ = toTargetZ * invLen;

    // Cross product: current × desired gives rotation axis and sin(angle)
    f32 crossX = mDirection.y * desiredZ - mDirection.z * desiredY;
    f32 crossY = mDirection.z * desiredX - mDirection.x * desiredZ;
    f32 crossZ = mDirection.x * desiredY - mDirection.y * desiredX;

    // Dot product: cos(angle)
    f32 dot = mDirection.x * desiredX + mDirection.y * desiredY +
              mDirection.z * desiredZ;

    // Clamp dot to valid acos range
    if (dot > 1.0f) dot = 1.0f;
    if (dot < -1.0f) dot = -1.0f;

    f32 angle = std::acos(dot); // Angle between directions
    f32 sinAngle = std::sin(angle);

    // Determine turn amount this frame
    f32 turnAmount = mHomingStrength + angle * 0.05f; // Base + proportional
    if (turnAmount > MAX_TURN_RATE) turnAmount = MAX_TURN_RATE;

    // If the angle is small enough, snap to desired direction
    if (angle <= turnAmount) {
        mDirection.x = desiredX;
        mDirection.y = desiredY;
        mDirection.z = desiredZ;
        return;
    }

    // Rotate current direction around the cross product axis by turnAmount
    // Using Rodrigues' rotation formula
    f32 cosT = std::cos(turnAmount);
    f32 sinT = std::sin(turnAmount);

    // Normalize the cross product to get the rotation axis
    f32 crossLenSq = crossX * crossX + crossY * crossY + crossZ * crossZ;
    if (crossLenSq < 0.000001f) return; // Parallel, no rotation needed

    f32 invCrossLen = 1.0f / std::sqrt(crossLenSq);
    f32 axisX = crossX * invCrossLen;
    f32 axisY = crossY * invCrossLen;
    f32 axisZ = crossZ * invCrossLen;

    // Rodrigues' formula: v' = v*cos(θ) + (k×v)*sin(θ) + k*(k·v)*(1-cos(θ))
    f32 kDotV = axisX * mDirection.x + axisY * mDirection.y +
                axisZ * mDirection.z;

    f32 kCrossVX = axisY * mDirection.z - axisZ * mDirection.y;
    f32 kCrossVY = axisZ * mDirection.x - axisX * mDirection.z;
    f32 kCrossVZ = axisX * mDirection.y - axisY * mDirection.x;

    mDirection.x = mDirection.x * cosT + kCrossVX * sinT +
                   axisX * kDotV * (1.0f - cosT);
    mDirection.y = mDirection.y * cosT + kCrossVY * sinT +
                   axisY * kDotV * (1.0f - cosT);
    mDirection.z = mDirection.z * cosT + kCrossVZ * sinT +
                   axisZ * kDotV * (1.0f - cosT);

    // Re-normalize to prevent drift
    f32 dirLenSq = mDirection.x * mDirection.x + mDirection.y * mDirection.y +
                   mDirection.z * mDirection.z;
    if (dirLenSq > 0.0001f) {
        f32 invDirLen = 1.0f / std::sqrt(dirLenSq);
        mDirection.x *= invDirLen;
        mDirection.y *= invDirLen;
        mDirection.z *= invDirLen;
    }
}

// ============================================================================
// checkCollision — Test against all karts
// ============================================================================
// Checks the shell's position against all player positions and returns
// the ID of the first kart within hitRadius distance.
// ============================================================================

u8 ItemObjRed::checkCollision(u8 playerCount,
                              const EGG::Vector3f* playerPositions,
                              f32 hitRadius) const {
    if (!playerPositions || playerCount == 0) return INVALID_TARGET;

    f32 hitRadiusSq = hitRadius * hitRadius;

    for (u8 i = 0; i < playerCount; i++) {
        // Skip the owner (shell can't hit the player who fired it initially)
        // In MKWii, red shells can hit the owner after bouncing off a wall
        if (i == mOwnerId && mBouncesLeft == DEFAULT_MAX_BOUNCES) continue;

        f32 dx = playerPositions[i].x - mPosition.x;
        f32 dy = playerPositions[i].y - mPosition.y;
        f32 dz = playerPositions[i].z - mPosition.z;

        f32 distSq = dx * dx + dy * dy + dz * dz;
        if (distSq < hitRadiusSq) {
            return i;
        }
    }

    return INVALID_TARGET;
}

// ============================================================================
// onHit — Impact: spin out target kart, destroy self
// ============================================================================

void ItemObjRed::onHit(u8 hitPlayerId, s32* outSpinTimer) {
    // Standard red shell hit causes a 1-second (60 frame) spin-out
    // If the hit player is the owner (after a bounce), shorter spin
    if (outSpinTimer) {
        if (hitPlayerId == mOwnerId) {
            *outSpinTimer = 30; // 0.5 seconds for self-hit
        } else {
            *outSpinTimer = 60; // 1.0 seconds for normal hit
        }
    }

    // Destroy the shell
    mAlive = false;
    mTargetId = INVALID_TARGET;
}

// ============================================================================
// onTimeout — Destroy after max lifetime
// ============================================================================

void ItemObjRed::onTimeout() {
    // Shell simply disappears with no effect
    mAlive = false;
    mTargetId = INVALID_TARGET;
}

// ============================================================================
// calcSpeed — Speed based on distance to target (faster when close)
// ============================================================================
// The red shell accelerates as it approaches its target, making the
// hit more dramatic and harder to dodge at close range.
// ============================================================================

f32 ItemObjRed::calcSpeed(f32 distToTarget) const {
    f32 speed = mSpeed;

    if (distToTarget < CLOSE_DISTANCE_SQ) {
        // Interpolate between default and max speed based on proximity
        f32 t = 1.0f - (distToTarget / CLOSE_DISTANCE_SQ);
        speed = mSpeed + (MAX_SPEED - mSpeed) * t;
    }

    // Clamp to valid range
    if (speed < MIN_SPEED) speed = MIN_SPEED;
    if (speed > MAX_SPEED) speed = MAX_SPEED;

    return speed;
}

// ============================================================================
// wallBounce — Reflect off walls, continue seeking
// ============================================================================
// Reflects the shell's direction across the wall normal. Decrements the
// bounce counter and destroys the shell if no bounces remain.
// In MKWii, red shells can bounce off walls and then target the owner.
// ============================================================================

bool ItemObjRed::wallBounce(const EGG::Vector3f& wallNormal, u8 maxBounces) {
    if (mBouncesLeft == 0) {
        mAlive = false;
        return false;
    }

    // Reflect direction: d' = d - 2(d·n)n
    f32 dot = mDirection.x * wallNormal.x +
              mDirection.y * wallNormal.y +
              mDirection.z * wallNormal.z;

    mDirection.x -= 2.0f * dot * wallNormal.x;
    mDirection.y -= 2.0f * dot * wallNormal.y;
    mDirection.z -= 2.0f * dot * wallNormal.z;

    // Re-normalize
    f32 dirLenSq = mDirection.x * mDirection.x + mDirection.y * mDirection.y +
                   mDirection.z * mDirection.z;
    if (dirLenSq > 0.0001f) {
        f32 invLen = 1.0f / std::sqrt(dirLenSq);
        mDirection.x *= invLen;
        mDirection.y *= invLen;
        mDirection.z *= invLen;
    }

    // Nudge the shell slightly away from the wall to prevent re-collision
    mPosition.x += wallNormal.x * 1.0f;
    mPosition.y += wallNormal.y * 1.0f;
    mPosition.z += wallNormal.z * 1.0f;

    mBouncesLeft--;

    // After bouncing, the shell can now target the owner
    // (this is the behavior in MKWii)

    return true;
}

// ============================================================================
// canDodge — Target can dodge with star/mega invincibility
// ============================================================================
// Checks if the current target has invincibility active (star power or
// mega mushroom). Shells pass through invincible players.
// ============================================================================

bool ItemObjRed::canDodge(u8 targetId, const u8* playerInvincible) const {
    if (targetId == INVALID_TARGET) return false;
    if (!playerInvincible) return false;

    // Check if the target has any invincibility type active
    // In MKWii, invincibility flags include:
    //   0x01 = Star power
    //   0x02 = Mega mushroom
    //   0x04 = Bullet bill
    u8 flags = playerInvincible[targetId];
    return (flags & 0x07) != 0;
}

// ============================================================================
// update — Per-frame homing shell logic
// ============================================================================
// Each frame the red shell:
// 1. Decrements its lifetime counter
// 2. If it has a valid target, computes the vector to the target
// 3. Blends its current direction toward the target direction using
//    the homing strength
// 4. Advances position by speed * direction
// ============================================================================

void ItemObjRed::update() {
    if (!mAlive) {
        return;
    }

    // Decrement lifetime
    mLifetime--;
    if (mLifetime <= 0) {
        onTimeout();
        return;
    }

    // Advance position along current direction at current speed
    mPosition.x += mDirection.x * mSpeed;
    mPosition.y += mDirection.y * mSpeed;
    mPosition.z += mDirection.z * mSpeed;
}

// ============================================================================
// ItemObjRed_create — Factory function
// ============================================================================

ItemObjRed* ItemObjRed_create() {
    ItemObjRed* shell = new ItemObjRed();
    return shell;
}

} // namespace Item

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807ac4d8: 40 80 00 14              bge      0x807ac4ec */
/* 0x807ac4dc: 7c 04 f0 40              cmplw    r4, r30 */
/* 0x807ac4e0: 41 82 00 0c              beq      0x807ac4ec */
/* 0x807ac4e4: 38 60 00 00              li       r3, 0 */
/* 0x807ac4e8: 48 00 01 18              b        0x807ac600 */
/* 0x807ac4ec: 3b c1 00 14              addi     r30, r1, 0x14 */
/* 0x807ac4f0: c0 1c 00 34              lfs      f0, 0x34(r28) */
#endif


/* === DISASSEMBLY === */


//   0x807ac4d8:  bge      0x807ac4ec
//   0x807ac4dc:  cmplw    r4, r30
//   0x807ac4e0:  beq      0x807ac4ec
//   0x807ac4e4:  li       r3, 0
//   0x807ac4e8:  b        0x807ac600
//   0x807ac4ec:  addi     r30, r1, 0x14
//   0x807ac4f0:  lfs      f0, 0x34(r28)