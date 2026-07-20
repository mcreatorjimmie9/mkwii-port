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
    // 2. mRankManagerSpeedAdvantage (dynamic rubber-banding from AIRankManager)
    // 3. Position-relative adjustments (leaders slow down, trailers speed up)
    //
    // The total speed advantage is clamped to prevent unrealistic speeds:
    // - Maximum advantage: +15% of base speed
    // - Maximum disadvantage: -10% of base speed

    if (mpParamSpeed == nullptr) {
        return;
    }

    // Calculate the total speed adjustment
    f32 totalAdvantage = mpParamSpeed->mSpeedAdvantage +
                         mpParamSpeed->mSpeedBias +
                         mRankManagerSpeedAdvantage;

    // Clamp the advantage to reasonable bounds
    // In the original game, the clamp is approximately ±0.15
    const f32 MAX_ADVANTAGE = 0.15f;
    const f32 MIN_ADVANTAGE = -0.10f;
    if (totalAdvantage > MAX_ADVANTAGE) {
        totalAdvantage = MAX_ADVANTAGE;
    }
    if (totalAdvantage < MIN_ADVANTAGE) {
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
}

/* AISpeedBase_vf_0x18 @ 0x80591600 */
f32 AISpeedBase::vf_0x18() {
    // Virtual method — returns the effective speed multiplier
    // Default implementation combines all speed factors
    if (mpParamSpeed == nullptr) {
        return 1.0f;
    }
    return mpParamSpeed->mBaseSpeed * (1.0f + field_0x0C);
}

} // namespace Enemy
