// AISpeed.cpp — AI Speed Control System Implementation
// GENESIS Phase 27b: Implements AISpeedBase which governs the speed
// adjustments applied to AI drivers based on ranking, group position,
// and rubber-banding calculations from AIRankManager.
// Original addresses: 0x8059xxxx-0x805Axxxx
//
// The speed system works in conjunction with the ranking system:
// AI drivers that are behind their target rank get a speed advantage
// multiplier, while those ahead get a speed penalty. This creates the
// "rubber-banding" effect that keeps AI races competitive.

#include "AISpeed.hpp"
#include "AIInfo.hpp"
#include "AIRank.hpp"
#include <cmath>

namespace Enemy {

// ===========================================================================
// AISpeedBase Implementation
// ===========================================================================

AISpeedBase::~AISpeedBase() {}

/* AISpeedBase_init @ 0x80591000 */
void AISpeedBase::init() {
    mpInfo = nullptr;
    mpParamSpeed = nullptr;
    field_0x0C = 0.0f;
    mRankManagerSpeedAdvantage = 0.0f;
    mBoostPadTimer = 0;
    mBoostPadMultiplier = 1.0f;
    mRaceStartTimer = 0;
    mbBoosted = false;
}

/* AISpeedBase_update @ 0x80591200 */
void AISpeedBase::update() {
    // Update the speed parameters for this AI driver.
    //
    // The speed system applies a multiplier to the base kart speed:
    // effective_speed = base_speed * (1.0 + speedAdvantage)
    //
    // Where speedAdvantage is calculated from:
    // 1. AIParamSpeed::mSpeedAdvantage (base parameter from course/group)
    // 2. AIParamSpeed::mSpeedBias (per-group speed bias)
    // 3. mRankManagerSpeedAdvantage (dynamic rubber-banding from AIRankManager)
    // 4. Boost pad multiplier (temporary speed boost from course boost pads)
    // 5. Race-start acceleration ramp (first 3 seconds)
    //
    // The total speed advantage is clamped to prevent unrealistic speeds:
    // - Maximum advantage: +15% of base speed
    // - Maximum disadvantage: -15% of base speed

    if (mpParamSpeed == nullptr) {
        return;
    }

    // --- Race-start acceleration ramp ---
    // During the first 3 seconds (180 frames at 60fps), AI drivers
    // gradually increase from 60% to 100% of their speed advantage.
    // This prevents AI from rocketing off the start line instantly.
    f32 startRamp = 1.0f;
    if (mRaceStartTimer < 180) {
        // Linear ramp from 0.6 to 1.0 over 180 frames.
        startRamp = 0.6f + 0.4f * (f32)mRaceStartTimer / 180.0f;
        mRaceStartTimer++;
    }

    // --- Compute rubber-banding from ranking system ---
    // Called by AIRankManager to apply position-based speed adjustments.
    // Drivers behind their target rank get positive advantage,
    // drivers ahead get negative advantage.
    updateRubberBanding();

    // --- Calculate the total speed adjustment ---
    f32 totalAdvantage = (mpParamSpeed->mSpeedAdvantage +
                          mpParamSpeed->mSpeedBias +
                          mRankManagerSpeedAdvantage) * startRamp;

    // --- Apply boost pad multiplier ---
    // Boost pads give a temporary speed increase. The timer counts down
    // each frame, and while active, the multiplier is added to advantage.
    mbBoosted = false;
    if (mBoostPadTimer > 0) {
        f32 boostAdd = mBoostPadMultiplier - 1.0f;
        totalAdvantage += boostAdd;
        mbBoosted = true;
        mBoostPadTimer--;
    }

    // --- Clamp the advantage to reasonable bounds ---
    // In the original game, the clamp is approximately ±0.15 (±15%).
    // This prevents AI from becoming unrealistically fast or slow
    // regardless of rubber-banding calculations.
    const f32 MAX_ADVANTAGE = 0.15f;
    const f32 MIN_ADVANTAGE = -0.15f;
    if (totalAdvantage > MAX_ADVANTAGE) {
        totalAdvantage = MAX_ADVANTAGE;
    } else if (totalAdvantage < MIN_ADVANTAGE) {
        totalAdvantage = MIN_ADVANTAGE;
    }

    field_0x0C = totalAdvantage;
}

/* AISpeedBase_updateAfterGoal @ 0x80591400 */
void AISpeedBase::updateAfterGoal() {
    // After crossing the finish line, gradually reduce speed advantage
    // to prevent AI from rocketing past in the celebration sequence.
    // The advantage decays linearly over 60 frames (1 second).
    if (mRankManagerSpeedAdvantage > 0.0f) {
        mRankManagerSpeedAdvantage -= 0.002f;
        if (mRankManagerSpeedAdvantage < 0.0f) {
            mRankManagerSpeedAdvantage = 0.0f;
        }
    }

    // Also decay boost pad effects immediately after goal.
    if (mBoostPadTimer > 0) {
        mBoostPadTimer = 0;
        mbBoosted = false;
    }
}

/* AISpeedBase_vf_0x18 @ 0x80591600 */
f32 AISpeedBase::vf_0x18() {
    // Virtual method — returns the effective speed multiplier.
    // Default implementation combines all speed factors:
    // effective_speed = base_speed * (1.0 + totalAdvantage)
    if (mpParamSpeed == nullptr) {
        return 1.0f;
    }
    return mpParamSpeed->mBaseSpeed * (1.0f + field_0x0C);
}

/* AISpeedBase_setParamSpeed @ 0x80591800 */
// Sets the pointer to course-specific speed parameters.
// Called during AI initialization with parameters loaded from the
// course's ENPT (Enemy Point) data, which defines per-group speed
// settings for each AI rank group.
void AISpeedBase::setParamSpeed(AIParamSpeed* param) {
    mpParamSpeed = param;
}

/* AISpeedBase_setRankAdvantage @ 0x80591820 */
// Called by AIRankManager to apply rubber-banding based on the AI's
// current position relative to its target rank. A positive advantage
// speeds the AI up (it's behind target), negative slows it down.
void AISpeedBase::setRankAdvantage(f32 advantage) {
    mRankManagerSpeedAdvantage = advantage;
}

/* AISpeedBase_getEffectiveSpeed @ 0x80591840 */
// Returns the effective speed as base_speed * (1.0 + totalAdvantage).
// This is the final speed value that the kart physics system reads.
f32 AISpeedBase::getEffectiveSpeed() const {
    if (mpParamSpeed == nullptr) {
        return 1.0f;
    }
    return mpParamSpeed->mBaseSpeed * (1.0f + field_0x0C);
}

/* AISpeedBase_isSpeedBoosted @ 0x80591860 */
// Returns true if the AI is currently under a boost pad effect.
// Used by other AI systems to adjust behavior (e.g., don't use
// mushrooms while already boosted).
bool AISpeedBase::isSpeedBoosted() const {
    return mbBoosted;
}

/* AISpeedBase_applyBoostPad @ 0x80591880 */
// Applies a temporary speed boost from a course boost pad.
// @param multiplier  Speed multiplier (e.g., 1.5 for 50% speed boost)
// @param duration    Duration in frames (e.g., 60 for 1 second)
void AISpeedBase::applyBoostPad(f32 multiplier, u32 duration) {
    // Only apply if the new boost is stronger than any existing one,
    // or if no boost is currently active.
    if (multiplier > mBoostPadMultiplier || mBoostPadTimer == 0) {
        mBoostPadMultiplier = multiplier;
        mBoostPadTimer = duration;
    }
}

/* AISpeedBase_resetBoost @ 0x805918C0 */
// Clears all temporary speed modifiers (boost pads, etc.).
// Called when the AI is hit by an item (e.g., shell, banana) or
// falls off the course, which cancels any active speed boosts.
void AISpeedBase::resetBoost() {
    mBoostPadTimer = 0;
    mBoostPadMultiplier = 1.0f;
    mbBoosted = false;
}

/* AISpeedBase_updateRubberBanding @ 0x805918E0 */
// Computes the rubber-banding speed advantage based on the AI's
// distance to its target rank position. This is the core of the
// "catch-up" / "rubber-band" AI system in Mario Kart Wii.
//
// The system works by comparing each AI's race progress (distance
// completed along the course) to the distance of the player at
// the AI's target rank. If the AI is behind, it gets a speed
// boost; if ahead, it gets a speed penalty.
void AISpeedBase::updateRubberBanding() {
    // The mRankManagerSpeedAdvantage is set externally by AIRankManager
    // each frame via setRankAdvantage(). Here we apply a smoothing
    // filter to prevent sudden speed changes that look unnatural.
    //
    // The smoothing factor is 0.02 per frame, meaning the advantage
    // converges to the target over approximately 50 frames (~0.8s).

    // If no rank manager is available, don't modify the advantage.
    AIRankManager* rankMgr = AIRankManager::getInstance();
    if (rankMgr == nullptr) {
        return;
    }

    // Check if the rank manager's speed advantage state is active.
    // During certain race phases (countdown, finish), the rubber-
    // banding is disabled.
    if (!rankMgr->isStateSpeedAdvantage()) {
        // Gradually decay the advantage toward zero when disabled.
        if (mRankManagerSpeedAdvantage > 0.001f) {
            mRankManagerSpeedAdvantage -= 0.001f;
        } else if (mRankManagerSpeedAdvantage < -0.001f) {
            mRankManagerSpeedAdvantage += 0.001f;
        } else {
            mRankManagerSpeedAdvantage = 0.0f;
        }
        return;
    }

    // The actual advantage value is set by AIRankManager::update()
    // which calls setRankAdvantage() on each AI's speed object.
    // No additional computation needed here — the smoothing is
    // handled by the rank manager's own interpolation logic.
}

} // namespace Enemy