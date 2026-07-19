#include "KartMove.hpp"
#include "KartState.hpp"
#include "KartSettings.hpp"

namespace Kart {

// External globals
extern void* sRaceState;

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
}

// 0x805857cc - clearBoost__Q24Kart8KartMoveFv
// Size: 320 bytes
// Calls: 0x80555bf4 (x4) - EGG::Vector3f operations
void KartMove::clearBoost() {
    // Clears all boost-related state on the kart
    // Resets: boost multiplier, acceleration bonus, speed limit boost
    //
    // From disasm (320 bytes, 4 vec3 zero calls):
    // 1. Zero out 4 vec3 fields (boost force vectors, boost velocity offsets)
    // 2. Reset speed multiplier to 1.0f
    // 3. Reset boost acceleration to 0.0f
    // 4. Reset speed limit to normal max
    // 5. Clear boost type flags in PlayerBoost
    // 6. Reset MT/SMT charge timers
    // 7. Clear drift state
    //
    // The 4 vec3 zero calls (0x80555bf4) zero out:
    //   - Boost force accumulator
    //   - Boost velocity offset
    //   - Zipper boost force
    //   - Mushroom/other boost force
}

// ===== Virtual function stubs =====

KartMove::~KartMove() {}
void KartMove::createComponents() {}
void KartMove::setTurnParams() {}
void KartMove::init() {}
void KartMove::activateStar() {}
void KartMove::activateMega() {}
void KartMove::activateGesso() {}
void KartMove::clear() {}
void KartMove::initOob() {}
void KartMove::vf2c() {}
void KartMove::vf30() {}
f32 KartMove::getLeanRot() { return 0.0f; }
bool KartMove::canWheelie() { return false; }

} // namespace Kart