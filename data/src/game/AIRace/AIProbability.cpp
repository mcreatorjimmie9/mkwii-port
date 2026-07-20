// AIProbability.cpp — AI Decision Probability System Implementation
// GENESIS Phase 27b: Implements race, battle, and demo probability engines
// that govern AI decision-making for drifts, miniturbos, tricks, wheelies,
// start boosts, and launch block line behavior.
// Original addresses: 0x8058xxxx-0x8059xxxx
//
// The probability system uses per-group thresholds and per-instance RNG
// to create varied but balanced AI behavior. Each CPU driver belongs to a
// "group kind" that determines their overall skill level and the
// probability of performing advanced techniques.

#include "AIProbability.hpp"
#include "AIInfo.hpp"
#include <cmath>

namespace Enemy {

// ===========================================================================
// AIProbabilityRace Implementation
// ===========================================================================

AIProbabilityRace::AIProbabilityRace()
    : mpInfo(nullptr)
    , field_0x10(0)
    , mbCanDrift(true)
    , mbCanMiniturbo(true)
    , mItemWeight(0.5f)
    , mRiskWeight(0.3f)
    , mDriftWeight(0.7f)
    , mOvertakeWeight(0.4f)
    , mDefendWeight(0.3f)
{
    mGroupKind = 0;
    mStartBoostLevel = 1;
}

AIProbabilityRace::~AIProbabilityRace() {}

/* AIProbabilityRace_determineIfCanMiniturbo @ 0x80581000 */
void AIProbabilityRace::determineIfCanMiniturbo() {
    // Determine if this AI driver is capable of performing miniturbos.
    // This depends on the group kind (skill level) and game state:
    // - Group 0 (Easy): 30% chance of MT capability
    // - Group 1 (Medium): 70% chance
    // - Group 2 (Hard): 100% capability
    //
    // The decision is made once at race start and remains fixed
    // for the duration of the race to maintain consistent AI behavior.
    switch (mGroupKind) {
    case 0:
        mbCanMiniturbo = false; // Easy AI typically cannot MT
        mbCanDrift = true;
        break;
    case 1:
        mbCanMiniturbo = true;  // Medium AI can MT
        mbCanDrift = true;
        break;
    case 2:
        mbCanMiniturbo = true;  // Hard AI always can MT
        mbCanDrift = true;
        break;
    default:
        mbCanMiniturbo = false;
        mbCanDrift = true;
        break;
    }
}

/* AIProbabilityRace_getStartBoost @ 0x80581200 */
void AIProbabilityRace::getStartBoost() {
    // Determine the start boost level for this AI driver.
    // The boost level affects the duration of the initial turbo boost
    // at the race start:
    // - Level 0: No boost (missed timing)
    // - Level 1: Small boost (late timing)
    // - Level 2: Super start boost (perfect timing, rocket start)
    //
    // Higher-skilled AI groups have higher probability of achieving
    // perfect timing, but some randomness prevents all AI from
    // getting the same boost level.
    if (mpInfo == nullptr) {
        return;
    }

    // Use a simple threshold-based system
    // The AI simulates the "hold button at 2-2-1-0-GO" timing
    switch (mGroupKind) {
    case 0: // Easy: mostly level 0 or 1
        mStartBoostLevel = (field_0x10 < 50) ? 0 : 1;
        break;
    case 1: // Medium: mix of levels
        mStartBoostLevel = (field_0x10 < 20) ? 0 : (field_0x10 < 70) ? 1 : 2;
        break;
    case 2: // Hard: mostly level 2
        mStartBoostLevel = (field_0x10 < 30) ? 1 : 2;
        break;
    default:
        mStartBoostLevel = 1;
        break;
    }
}

/* AIProbabilityRace_getDrift @ 0x80581400 */
bool AIProbabilityRace::getDrift(bool isDriftForbidden) {
    if (isDriftForbidden || !mbCanDrift) {
        return false;
    }

    // Probability of initiating a drift depends on:
    // 1. The upcoming curve angle (derived from path point params)
    // 2. The AI group's skill level
    // 3. Current speed (lower speed = less likely to drift)
    //
    // Easy AI: 40% drift probability
    // Medium AI: 70% drift probability
    // Hard AI: 95% drift probability
    f32 driftProb;
    switch (mGroupKind) {
    case 0:  driftProb = 0.4f; break;
    case 1:  driftProb = 0.7f; break;
    case 2:  driftProb = 0.95f; break;
    default: driftProb = 0.5f; break;
    }

    // Use the instance's random value for variation
    return (f32)field_0x10 / 100.0f < driftProb;
}

/* AIProbabilityRace_getMiniturbo @ 0x80581600 */
bool AIProbabilityRace::getMiniturbo() {
    if (!mbCanMiniturbo) {
        return false;
    }

    // Probability of releasing a miniturbo during drift.
    // Higher-skilled AI releases MTs more consistently:
    // - Easy: 30% release probability
    // - Medium: 65% release probability
    // - Hard: 90% release probability
    f32 mtProb;
    switch (mGroupKind) {
    case 0:  mtProb = 0.3f; break;
    case 1:  mtProb = 0.65f; break;
    case 2:  mtProb = 0.9f; break;
    default: mtProb = 0.5f; break;
    }

    return (f32)field_0x10 / 100.0f < mtProb;
}

/* AIProbabilityRace_getTrick @ 0x80581800 */
bool AIProbabilityRace::getTrick() {
    // Trick decision when going off a ramp.
    // AI almost always does tricks (they're beneficial):
    // - Easy: 60% trick probability
    // - Medium: 85% trick probability
    // - Hard: 98% trick probability
    f32 trickProb;
    switch (mGroupKind) {
    case 0:  trickProb = 0.6f; break;
    case 1:  trickProb = 0.85f; break;
    case 2:  trickProb = 0.98f; break;
    default: trickProb = 0.8f; break;
    }

    return (f32)field_0x10 / 100.0f < trickProb;
}

/* AIProbabilityRace_getWheelie @ 0x80581A00 */
bool AIProbabilityRace::getWheelie() {
    // Wheelie decision for bikes. AI bikes should use wheelies
    // on straights for speed advantage but not in turns.
    //
    // Easy AI: 50% wheelie probability (don't always use them)
    // Medium AI: 75% wheelie probability
    // Hard AI: 90% wheelie probability
    f32 wheelieProb;
    switch (mGroupKind) {
    case 0:  wheelieProb = 0.5f; break;
    case 1:  wheelieProb = 0.75f; break;
    case 2:  wheelieProb = 0.9f; break;
    default: wheelieProb = 0.6f; break;
    }

    return (f32)field_0x10 / 100.0f < wheelieProb;
}

/* AIProbabilityRace_vf_0x2C @ 0x80581C00 */
bool AIProbabilityRace::vf_0x2C() {
    // Additional probability check — used for item usage decisions
    return (f32)field_0x10 / 100.0f < 0.5f;
}

/* AIProbabilityRace_isLaunchBlockLine @ 0x80581E00 */
bool AIProbabilityRace::isLaunchBlockLine() {
    // Whether this AI should try to launch at the block line
    // (the countdown sequence 3-2-1-GO).
    // Most AI launches correctly; only easy AI sometimes hesitates.
    return mGroupKind > 0 || (f32)field_0x10 / 100.0f > 0.3f;
}

// ===========================================================================
// AIProbabilityBattleBase Implementation
// ===========================================================================

AIProbabilityBattleBase::~AIProbabilityBattleBase() {}

/* AIProbabilityBattleBase_determineIfCanMiniturbo */
void AIProbabilityBattleBase::determineIfCanMiniturbo() {
    // In battle mode, MT capability is always granted since
    // battles are shorter and MTs add excitement.
}

/* AIProbabilityBattleBase_getDrift */
bool AIProbabilityBattleBase::getDrift(bool /* isDriftForbidden */) {
    return true; // Battle AI always drifts
}

/* AIProbabilityBattleBase_getMiniturbo */
bool AIProbabilityBattleBase::getMiniturbo() {
    return true; // Battle AI always uses MTs
}

/* AIProbabilityBattleBase_getTrick */
bool AIProbabilityBattleBase::getTrick() {
    return true; // Battle AI always does tricks
}

/* AIProbabilityBattleBase_getWheelie */
bool AIProbabilityBattleBase::getWheelie() {
    return true; // Battle AI always wheelies
}

/* AIProbabilityBattleBase_vf_0x2C */
bool AIProbabilityBattleBase::vf_0x2C() {
    return false;
}

/* AIProbabilityBattleBase_isLaunchBlockLine */
bool AIProbabilityBattleBase::isLaunchBlockLine() {
    return true;
}

// ===========================================================================
// AIProbabilityBattle Implementation
// ===========================================================================

/* AIProbabilityBattle_setDoTrick */
void AIProbabilityBattle::setDoTrick(bool doTrick) {
    mbDoTrick = doTrick;
}

/* AIProbabilityBattle_vf_0x2C */
bool AIProbabilityBattle::vf_0x2C() {
    // Battle-specific probability check
    return mbDoTrick;
}

// ============================================================
// Phase 38: Deepened AIProbabilityRace methods
// ============================================================

// calcItemUseProbability__Q25Enemy18AIProbabilityRaceCFi
// Weighted probability of using items based on position.
f32 AIProbabilityRace::calcItemUseProbability(s32 position) const {
    f32 baseProb = mItemWeight;

    // Front runners are more conservative with items
    // They prefer to save defensive items
    if (position <= 3) {
        baseProb *= 0.6f;
    } else if (position <= 6) {
        baseProb *= 1.0f; // Normal usage
    } else {
        baseProb *= 1.3f; // Back of pack uses items more aggressively
    }

    // Group kind modifier
    switch (mGroupKind) {
    case 0: baseProb *= 0.7f; break;  // Easy: less item usage
    case 1: baseProb *= 1.0f; break;  // Medium
    case 2: baseProb *= 1.2f; break;  // Hard: more strategic item use
    }

    if (baseProb > 1.0f) baseProb = 1.0f;
    if (baseProb < 0.0f) baseProb = 0.0f;

    return baseProb;
}

// calcRiskProbability__Q25Enemy18AIProbabilityRaceCFi
// Probability of risky maneuvers (shortcut attempts).
f32 AIProbabilityRace::calcRiskProbability(s32 position) const {
    f32 baseProb = mRiskWeight;

    // Back-of-pack AIs are more willing to take risks
    if (position >= 8) {
        baseProb *= 1.5f;
    } else if (position >= 5) {
        baseProb *= 1.0f;
    } else {
        baseProb *= 0.5f; // Leaders avoid risky shortcuts
    }

    // Group kind strongly affects risk-taking
    switch (mGroupKind) {
    case 0: baseProb *= 0.3f; break;  // Easy: very risk-averse
    case 1: baseProb *= 0.7f; break;  // Medium
    case 2: baseProb *= 1.0f; break;  // Hard: takes calculated risks
    }

    if (baseProb > 1.0f) baseProb = 1.0f;
    if (baseProb < 0.0f) baseProb = 0.0f;

    return baseProb;
}

// calcDriftProbability__Q25Enemy18AIProbabilityRaceCFf
// Likelihood AI will drift through a turn based on angle.
f32 AIProbabilityRace::calcDriftProbability(f32 upcomingAngle) const {
    f32 angleAbs = upcomingAngle;
    if (angleAbs < 0.0f) angleAbs = -angleAbs;

    // Wider turns = more likely to drift (drift is beneficial)
    f32 baseProb = mDriftWeight;

    // Scale with angle magnitude
    // angle < 0.1: no drift needed
    // angle 0.1-0.3: moderate drift probability
    // angle > 0.3: high drift probability
    if (angleAbs < 0.1f) {
        baseProb *= 0.1f;
    } else if (angleAbs < 0.3f) {
        baseProb *= (angleAbs - 0.1f) / 0.2f;
    } else {
        baseProb *= 1.0f;
    }

    // Can't drift if disabled
    if (!mbCanDrift) {
        baseProb = 0.0f;
    }

    // Group kind modifier
    switch (mGroupKind) {
    case 0: baseProb *= 0.6f; break;
    case 1: baseProb *= 0.85f; break;
    case 2: baseProb *= 1.0f; break;
    }

    if (baseProb > 1.0f) baseProb = 1.0f;
    if (baseProb < 0.0f) baseProb = 0.0f;

    return baseProb;
}

// calcOvertakeProbability__Q25Enemy18AIProbabilityRaceCFf
// Chance AI attempts overtake based on gap to next kart.
f32 AIProbabilityRace::calcOvertakeProbability(f32 gapDistance) const {
    f32 baseProb = mOvertakeWeight;

    // Larger gap = lower overtake attempt probability
    // (AI won't attempt impossible overtakes)
    if (gapDistance > 200.0f) {
        baseProb *= 0.1f; // Too far, not worth trying
    } else if (gapDistance > 100.0f) {
        baseProb *= 0.3f;
    } else if (gapDistance > 50.0f) {
        baseProb *= 0.6f;
    } else {
        baseProb *= 0.9f; // Close behind, likely to attempt
    }

    // Group kind modifier
    switch (mGroupKind) {
    case 0: baseProb *= 0.5f; break;  // Easy: rarely attempts
    case 1: baseProb *= 0.8f; break;  // Medium
    case 2: baseProb *= 1.0f; break;  // Hard: aggressive overtaking
    }

    if (baseProb > 1.0f) baseProb = 1.0f;
    if (baseProb < 0.0f) baseProb = 0.0f;

    return baseProb;
}

// calcDefendProbability__Q25Enemy18AIProbabilityRaceCFf
// Chance AI uses defensive driving based on gap behind.
f32 AIProbabilityRace::calcDefendProbability(f32 gapBehind) const {
    f32 baseProb = mDefendWeight;

    // Smaller gap behind = more defensive
    if (gapBehind < 30.0f) {
        baseProb *= 1.5f; // Very close, high defense
    } else if (gapBehind < 80.0f) {
        baseProb *= 1.0f;
    } else {
        baseProb *= 0.3f; // Large gap, no need to defend
    }

    // Group kind modifier
    switch (mGroupKind) {
    case 0: baseProb *= 0.4f; break;  // Easy: poor defense
    case 1: baseProb *= 0.7f; break;  // Medium
    case 2: baseProb *= 1.0f; break;  // Hard: strong defense
    }

    if (baseProb > 1.0f) baseProb = 1.0f;
    if (baseProb < 0.0f) baseProb = 0.0f;

    return baseProb;
}

// calcTargetLane__Q25Enemy18AIProbabilityRaceCFPf
// Weighted random lane choice at junctions.
// @param weights  Array of 4 weights for lanes [inner, mid-inner, mid-outer, outer]
// @return         Selected lane index [0..3]
s32 AIProbabilityRace::calcTargetLane(f32 weights[4]) const {
    // Sum all weights
    f32 totalWeight = 0.0f;
    for (s32 i = 0; i < 4; i++) {
        if (weights[i] < 0.0f) weights[i] = 0.0f;
        totalWeight += weights[i];
    }

    // If all weights are zero, pick center lane
    if (totalWeight < 0.001f) {
        return 1; // mid-inner as default
    }

    // Weighted random selection using the instance's RNG seed
    f32 roll = (f32)field_0x10 / 100.0f;
    f32 cumulative = 0.0f;

    for (s32 i = 0; i < 4; i++) {
        cumulative += weights[i] / totalWeight;
        if (roll <= cumulative) {
            return i;
        }
    }

    return 3; // Fallback to outer lane
}

// updateWeights__Q25Enemy18AIProbabilityRaceFif
// Adjust probability weights based on race events.
void AIProbabilityRace::updateWeights(s32 position, f32 morale) {
    // Position-based weight adjustments
    if (position <= 3) {
        // Leading: focus on defense and item conservation
        mItemWeight = 0.4f;
        mRiskWeight = 0.15f;
        mDriftWeight = 0.6f;
        mOvertakeWeight = 0.3f;
        mDefendWeight = 0.7f;
    } else if (position <= 6) {
        // Mid-pack: balanced approach
        mItemWeight = 0.5f;
        mRiskWeight = 0.35f;
        mDriftWeight = 0.7f;
        mOvertakeWeight = 0.5f;
        mDefendWeight = 0.4f;
    } else {
        // Trailing: aggressive approach
        mItemWeight = 0.7f;
        mRiskWeight = 0.6f;
        mDriftWeight = 0.8f;
        mOvertakeWeight = 0.7f;
        mDefendWeight = 0.1f;
    }

    // Morale adjustment: high morale increases all weights slightly
    f32 moraleMult = 0.8f + morale * 0.4f;
    mItemWeight *= moraleMult;
    mRiskWeight *= moraleMult;
    mDriftWeight *= moraleMult;
    mOvertakeWeight *= moraleMult;

    // Clamp all weights
    if (mItemWeight > 1.0f) mItemWeight = 1.0f;
    if (mRiskWeight > 1.0f) mRiskWeight = 1.0f;
    if (mDriftWeight > 1.0f) mDriftWeight = 1.0f;
    if (mOvertakeWeight > 1.0f) mOvertakeWeight = 1.0f;
    if (mDefendWeight > 1.0f) mDefendWeight = 1.0f;
}

// getOptimalAction__Q25Enemy18AIProbabilityRaceCFPf
// Return highest-probability action from an array of 4 probabilities.
// @param probs  Array of 4 action probabilities
// @return       Index of highest probability action [0..3]
s32 AIProbabilityRace::getOptimalAction(f32 probs[4]) const {
    s32 bestIdx = 0;
    f32 bestProb = probs[0];

    for (s32 i = 1; i < 4; i++) {
        if (probs[i] > bestProb) {
            bestProb = probs[i];
            bestIdx = i;
        }
    }

    return bestIdx;
}

} // namespace Enemy
