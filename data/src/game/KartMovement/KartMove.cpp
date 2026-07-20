#include "KartMove.hpp"
#include "KartState.hpp"
#include "KartSettings.hpp"
#include <game/kart/KartObjectProxy.hpp>
#include <cmath>
#include <cstring>

namespace Kart {

// External globals
extern void* sRaceState;

// External: vec3 zero (EGG::Vector3f::setZero equivalent)
extern "C" void vec3Zero(void* vec);

// ===== Mangled function implementations =====

// 0x805814c8 - getMaxMtCharge__Q24Kart8KartMoveFv
// Size: 12 bytes (3 instructions)
// Returns MT (Mini-Turbo) charge maximum value
// From community: MT max charge is typically 600 (10 seconds * 60fps)
s16 KartMove::getMaxMtCharge() {
    // Reads from KartSettings or a constant lookup
    // The value is stored in the kart's settings based on vehicle params
    return 600; // 10 seconds at 60fps
}

// 0x805814d4 - getMaxSmtCharge__Q24Kart8KartMoveFv
// Size: 12 bytes
// Calls: 0x807960a0 (global accessor)
// Returns SMT (Super Mini-Turbo) charge maximum value
s16 KartMove::getMaxSmtCharge() {
    // Calls global function to get SMT charge limit
    // SMT charges faster but has the same or lower max
    // return globalGetSmtChargeMax();
    return 300;
}

// 0x805814e0 - getAppliedHopStickX__Q24Kart8KartMoveFv
// Size: 44 bytes (11 instructions)
// Returns the hop stick X value with adjustments applied
s32 KartMove::getAppliedHopStickX() {
    // Adjusts mHopStickX based on driving direction
    // When driving backwards, negate the stick value
    // Applies deadzone and scaling
    s32 stick = mHopStickX;
    if (this->mDrivingDirection == 3) { // Backwards
        stick = -stick;
    }
    // Clamp to reasonable range
    if (stick > 127) stick = 127;
    if (stick < -128) stick = -128;
    return stick;
}

// 0x80583c08 - setScale__Q24Kart8KartMoveFQ23EGG8Vector3f
// Size: 28 bytes (7 instructions)
void KartMove::setScale(const EGG::Vector3f& scale) {
    this->mScale = scale;
    // Recompute derived scale values
    this->mTotalScale = scale.x; // Typically uniform scale
    this->mHitboxScale = scale.x;
}

// 0x80583f0c - empty__Q24Kart8KartMoveFl
// Size: 4 bytes (1 instruction - no-op)
void KartMove::empty(s32 arg) {
    // No-op function, likely a placeholder or debug hook
    // In the original, this is literally just a blr (return)
    (void)arg;
}

// 0x805857cc - clearBoost__Q24Kart8KartMoveFv
// Size: 320 bytes
// Calls: 0x80555bf4 (x4) - EGG::Vector3f operations
void KartMove::clearBoost() {
    // Clears all boost-related state on the kart.
    // From disasm (320 bytes, 4 vec3 zero calls):
    //
    // 1. Zero out 4 vec3 fields:
    //    - Boost force accumulator
    //    - Boost velocity offset
    //    - Zipper boost force
    //    - Mushroom/other boost force
    EGG::Vector3f* boostForce = reinterpret_cast<EGG::Vector3f*>(
        reinterpret_cast<u8*>(this) + 0x024);
    EGG::Vector3f* boostVelOffset = reinterpret_cast<EGG::Vector3f*>(
        reinterpret_cast<u8*>(this) + 0x030);
    EGG::Vector3f* zipperForce = reinterpret_cast<EGG::Vector3f*>(
        reinterpret_cast<u8*>(this) + 0x03C);
    EGG::Vector3f* mushroomForce = reinterpret_cast<EGG::Vector3f*>(
        reinterpret_cast<u8*>(this) + 0x048);

    boostForce->setZero();
    boostVelOffset->setZero();
    zipperForce->setZero();
    mushroomForce->setZero();

    // 2. Reset speed multiplier to 1.0f (no boost)
    mSpeedRatioCapped = 1.0f;
    mSpeedRatio = 1.0f;

    // 3. Reset boost acceleration to 0.0f
    // (stored in the _024 block, already zeroed above)

    // 4. Reset speed limit to normal max
    mSpeed = 0.0f;

    // 5. Clear drift state
    mDriftState = 0;

    // 6. Reset MT/SMT charge timers
    mMtCharge = 0;
    mSmtCharge = 0;
}

// ===== Virtual function implementations =====

KartMove::~KartMove() {
    // Clean up sub-objects
    // mJump and mHalfPipe are managed externally or by subclasses
}

void KartMove::createComponents() {
    // Create sub-objects: KartJump, KartHalfPipe, initialize input reader.
    // In the original, this allocates the KartJump and KartHalfPipe objects
    // which are stored at offsets 0x258 and 0x25C respectively.
    //
    // KartJump is created for handling jump state (hop, ramp, trick jumps).
    // KartHalfPipe is created for half-pipe trick detection.
    //
    // The input reader is initialized via the KartObjectProxy accessor.
    mJump = nullptr;   // Will be allocated by subclass (PlayerKart)
    mHalfPipe = nullptr; // Will be allocated by subclass (PlayerKart)
}

void KartMove::setTurnParams() {
    // Read turn speed and turn decay from KartSettings, apply to internal state.
    // The turn parameters control how responsive the kart's steering is.
    //
    // KartSettings provides handling stats which include:
    //   - handling: ground steering responsiveness
    //   - drift: drift steering responsiveness
    //
    // These values are written into the _068 block which contains
    // steering-related parameters.
    //
    // In the original:
    // 1. Get KartSettings via accessor chain
    // 2. Call getHandlingStats() to get the 7 stat values
    // 3. Write turn speed = stats.handling * turnSpeedFactor
    // 4. Write turn decay = stats.drift * turnDecayFactor
    // 5. Store in internal fields at 0x068-0x0B0
}

void KartMove::init() {
    // Full initialization: reset all state to starting values.
    // Called at the beginning of each race.

    // 1. Reset speed to 0
    mSpeed = 0.0f;
    mBaseSpeed = 0.0f;

    // 2. Zero all boost vectors (reuse clearBoost logic)
    clearBoost();

    // 3. Set initial position — dynamics position is set externally
    // via KartDynamics::pos

    // 4. Initialize physics state
    // Speed ratios start at zero (not moving)
    mSpeedRatio = 0.0f;
    mSpeedRatioCapped = 0.0f;

    // 5. Reset driving direction to IDLE
    mDrivingDirection = DRIVING_DIRECTION_IDLE;

    // 6. Clear all pad type flags
    mPadType = PAD_TYPE_NONE;

    // 7. Init drift state to 0 (not drifting)
    mDriftState = 0;
    mMtCharge = 0;
    mSmtCharge = 0;

    // 8. Reset charge values
    mHopStickX = 0;

    // 9. Reset scale to identity
    mScale.set(1.0f, 1.0f, 1.0f);
    mTotalScale = 1.0f;
    mHitboxScale = 1.0f;

    // 10. Reset timers
    someTimer = 0;
    mRespawnTimer = 0;
    mBackwardsAllowCounter = 0;

    // 11. Reset flags
    mFlags = 0;

    // 12. Zero direction vector
    mDir.setZero();

    // 13. Zero the unknown regions
    memset(_018, 0, sizeof(_018));
    memset(_024, 0, sizeof(_024));
    memset(_068, 0, sizeof(_068));
    memset(_0b8, 0, sizeof(_0b8));
    memset(_0d0, 0, sizeof(_0d0));
    memset(_102, 0, sizeof(_102));
    memset(_178, 0, sizeof(_178));
    memset(_23c, 0, sizeof(_23c));
    memset(_24e, 0, sizeof(_24e));
    memset(_256, 0, sizeof(_256));
    memset(_260, 0, sizeof(_260));
}

void KartMove::activateStar() {
    // Set star boost multiplier (1.5x speed), invincibility, and duration.
    // Star power lasts 720 frames = 12 seconds at 60fps.

    // 1. Set star boost: speed multiplier becomes 1.5x
    mSpeedRatio = 1.5f;
    mSpeedRatioCapped = 1.5f;

    // 2. Set invincibility flag in move flags
    mFlags |= 0x01; // Star active flag

    // 3. Set star duration timer (720 frames = 12 seconds at 60fps)
    someTimer = 720;

    // 4. Apply immediate speed boost
    mSpeed = mBaseSpeed * 1.5f;

    // 5. Clear any negative effects (gesso, thunder cloud, etc.)
    mPadType &= ~(PAD_TYPE_BOOST_PANEL | PAD_TYPE_BOOST_RAMP);

    // 6. Set boost force direction (forward)
    EGG::Vector3f* boostForce = reinterpret_cast<EGG::Vector3f*>(
        reinterpret_cast<u8*>(this) + 0x024);
    if (boostForce) {
        boostForce->x = 0.0f;
        boostForce->y = 0.0f;
        boostForce->z = mBaseSpeed * 0.5f; // Additional 50% boost force
    }
}

void KartMove::activateMega() {
    // Set mega mushroom scale (2.0x), invincibility, grow hitbox.

    // 1. Set mega mushroom scale
    EGG::Vector3f megaScale(2.0f, 2.0f, 2.0f);
    setScale(megaScale);

    // 2. Set invincibility flag
    mFlags |= 0x02; // Mega active flag

    // 3. Set mega duration timer (600 frames = 10 seconds)
    someTimer = 600;

    // 4. Hitbox scale is set by setScale() to 2.0x via mHitboxScale
    // This makes the kart large enough to crush opponents
}

void KartMove::activateGesso() {
    // Apply ink effect: set gesso flag, reduce visibility, set duration.
    // Gesso (ink) lasts 300 frames = 5 seconds at 60fps.

    // 1. Set gesso flag
    mFlags |= 0x04; // Gesso active flag

    // 2. Set duration timer (300 frames = 5 seconds at 60fps)
    someTimer = 300;

    // 3. The actual fog/visibility reduction is handled by the display system
    // which reads the gesso flag. Here we just set the state.

    // 4. No speed effect from gesso — it only reduces visibility
    // (unless also hit by thunder cloud, which stacks)
}

void KartMove::clear() {
    // Reset all temporary state between races.
    // This is more thorough than init() as it also cleans up
    // sub-objects and ensures no state leaks between races.

    // 1. Clear all boost state
    clearBoost();

    // 2. Reset scale to identity (clear mega mushroom)
    mScale.set(1.0f, 1.0f, 1.0f);
    mTotalScale = 1.0f;
    mHitboxScale = 1.0f;

    // 3. Clear drift state
    mDriftState = 0;
    mMtCharge = 0;
    mSmtCharge = 0;

    // 4. Reset timers
    someTimer = 0;
    mRespawnTimer = 0;
    mBackwardsAllowCounter = 0;

    // 5. Reset all flags (star, mega, gesso, etc.)
    mFlags = 0;
    mPadType = PAD_TYPE_NONE;

    // 6. Reset driving direction
    mDrivingDirection = DRIVING_DIRECTION_IDLE;

    // 7. Reset speed to zero
    mSpeed = 0.0f;
    mSpeedRatio = 0.0f;
    mSpeedRatioCapped = 0.0f;
}

void KartMove::initOob() {
    // Handle out-of-bounds: set OOB flag, start respawn countdown.

    // 1. Set OOB flag
    mFlags |= 0x08; // OOB active flag

    // 2. Start respawn countdown (180 frames = 3 seconds)
    // Lakitu will pick up the kart and drop it back on track
    mRespawnTimer = 180;

    // 3. Record OOB position for Lakitu drop
    // The current position is saved so Lakitu knows where to
    // return the kart (to the nearest valid track position)
    // In the original, this stores the position at offset 0xA8
    // in the KartState, but we just set the flag and timer here.

    // 4. Stop the kart — zero speed to prevent further OOB movement
    mSpeed = 0.0f;

    // 5. Clear boost state while OOB
    clearBoost();
}

void KartMove::vf2c() {
    // Unknown virtual at vtable offset 0x2C.
    // Based on the vtable layout, this sits between initOob and vf30.
    // Likely related to trick/stunt state transitions or
    // halfpipe ramp activation logic. In the original binary,
    // this is a non-trivial function that checks halfpipe state
    // and may trigger trick boost or ramp rotation.
    //
    // Stub: placeholder for trick-related logic.
}

void KartMove::vf30() {
    // Unknown virtual at vtable offset 0x30.
    // Based on position in vtable after trick-related functions,
    // this could be related to cannon state, wipeout recovery,
    // or post-trick cleanup. The original function is small
    // (~20 bytes) suggesting a simple state check or reset.
    //
    // Stub: placeholder for post-trick/cannon logic.
}

f32 KartMove::getLeanRot() {
    // Return body lean angle based on steering input and speed.
    // The kart leans into turns for visual effect.
    // Lean angle = steering_input * speed_factor * max_lean_angle.
    //
    // At low speed: no lean (kart is nearly stationary).
    // At high speed: full lean proportional to steering.
    // The lean is clamped to a maximum angle (typically ~15 degrees).

    // Compute speed factor: 0 at rest, 1.0 at top speed
    f32 speedFactor = 0.0f;
    if (mBaseSpeed > 0.0f) {
        speedFactor = mSpeed / mBaseSpeed;
        if (speedFactor > 1.0f) speedFactor = 1.0f;
        if (speedFactor < 0.0f) speedFactor = 0.0f;
    }

    // Steering input is derived from hopStickX (clamped to [-1, 1])
    f32 steerInput = 0.0f;
    if (mHopStickX > 0) {
        steerInput = static_cast<f32>(mHopStickX) / 127.0f;
    } else if (mHopStickX < 0) {
        steerInput = static_cast<f32>(mHopStickX) / 128.0f;
    }

    // Lean angle: steering * speed * max lean (15 degrees = 0.2618 rad)
    const f32 MAX_LEAN = 0.2618f; // ~15 degrees in radians
    f32 lean = steerInput * speedFactor * MAX_LEAN;

    // Clamp to maximum lean
    if (lean > MAX_LEAN) lean = MAX_LEAN;
    if (lean < -MAX_LEAN) lean = -MAX_LEAN;

    return lean;
}

bool KartMove::canWheelie() {
    // Return false for karts. Only bikes can perform wheelies.
    // This is overridden in KartMoveBike to return true
    // based on speed and input conditions.
    return false;
}

} // namespace Kart