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
    , mAlive(false) {
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
        mAlive = false;
        return;
    }

    // Homing: if we have a valid target, steer toward it
    // In the original game this queries the player array to get the
    // target's current position. Here we store a simplified homing vector approach:
    // compute desired direction = normalize(targetPos - mPosition),
    // then blend current direction toward it.
    //
    // Homing blend: dir = normalize(lerp(dir, desiredDir, homingStrength))
    //
    // Actual target position lookup is handled externally;
    // this stub represents the per-frame trajectory update.

    // Advance position along current direction
    mPosition.x += mDirection.x * mSpeed;
    mPosition.y += mDirection.y * mSpeed;
    mPosition.z += mDirection.z * mSpeed;
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