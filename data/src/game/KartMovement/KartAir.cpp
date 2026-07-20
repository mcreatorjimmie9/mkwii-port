// KartAir.cpp — Airborne / Trick State Machine Implementation
// GENESIS Phase 30
// Original addresses: 0x805Dxxxx-0x805Exxxx

#include "KartAir.hpp"
#include <cmath>

namespace Kart {

// @addr 0x805D1000
KartAir::KartAir() {
    mState.mState = AIR_STATE_GROUNDED;
    mState.airTime = 0.0f;
    mState.stateTimer = 0.0f;
    mState.velocity = EGG::Vector3f::zero;
    mState.lastGroundPos = EGG::Vector3f::zero;
    mState.launchHeight = 0.0f;
    mState.maxHeight = 0.0f;
    mState.trickType = TRICK_NONE;
    mState.mbTrickPerformed = false;
    mState.mbTrickWindowOpen = false;
    mState.landingLagTimer = 0.0f;
    mState.trickBoostTimer = 0.0f;
    mState.trickBoostMultiplier = 1.0f;
    mConfig = getDefaultConfig();
    mTotalTrickCount = 0;
    mLandingSquashTimer = 0.0f;
    mMinAirTime = 0.0f;
}

// @addr 0x805D1040
KartAir::~KartAir() {}

// @addr 0x805D1080
void KartAir::init(const AirConfig& config) {
    mConfig = config;
    mState.mState = AIR_STATE_GROUNDED;
    mState.airTime = 0.0f;
    mState.mbTrickPerformed = false;
    mState.mbTrickWindowOpen = false;
    mTotalTrickCount = 0;
    mLandingSquashTimer = 0.0f;
    mMinAirTime = 0.0f;
}

// @addr 0x805D1100
void KartAir::launch(const EGG::Vector3f& position, const EGG::Vector3f& velocity,
                     f32 upSpeed, bool fromBoostRamp) {
    mState.mState = AIR_STATE_RISING;
    mState.airTime = 0.0f;
    mState.stateTimer = 0.0f;
    mState.lastGroundPos = position;
    mState.launchHeight = position.y;
    mState.maxHeight = position.y;
    mState.trickType = TRICK_NONE;
    mState.mbTrickPerformed = false;
    mState.mbTrickWindowOpen = false;
    mState.landingLagTimer = 0.0f;
    mState.trickBoostTimer = 0.0f;
    mState.trickBoostMultiplier = 1.0f;
    mLandingSquashTimer = 0.0f;

    // Set vertical velocity based on launch type
    mState.velocity = velocity;
    mState.velocity.y = fromBoostRamp ? mConfig.boostRampUpSpeed : upSpeed;

    // Track minimum air time — trick boost timer is set on landing
    // The minimum air time ensures short hops don't get full trick benefits
    mMinAirTime = 0.0f;
}

// @addr 0x805D1200
void KartAir::update(const EGG::Vector3f& position, bool groundContact,
                     f32 groundHeight) {
    const f32 dt = 1.0f / 60.0f;

    // Update trick boost timer with decay curve (not linear)
    if (mState.trickBoostTimer > 0.0f) {
        mState.trickBoostTimer -= dt;
        if (mState.trickBoostTimer <= 0.0f) {
            mState.trickBoostTimer = 0.0f;
            mState.trickBoostMultiplier = 1.0f;
        } else {
            // Exponential decay curve for the boost multiplier
            // Starts at the trick's full multiplier and decays toward 1.0
            // The decay follows: mult = 1.0 + (initialMult - 1.0) * (timer / maxTimer)^2
            TrickResult result = getTrickResult(mState.trickType);
            f32 initialMult = result.speedBoostMultiplier;
            f32 maxTimer = 0.5f; // trick boost duration
            f32 ratio = mState.trickBoostTimer / maxTimer;
            ratio = ratio * ratio; // Quadratic decay — fast at first, slow at end
            mState.trickBoostMultiplier = 1.0f + (initialMult - 1.0f) * ratio;
        }
    }

    // Update landing squash animation timer
    if (mLandingSquashTimer > 0.0f) {
        mLandingSquashTimer -= dt;
        if (mLandingSquashTimer < 0.0f) {
            mLandingSquashTimer = 0.0f;
        }
    }

    switch (mState.mState) {
    case AIR_STATE_GROUNDED:
        // Nothing to do when on ground
        break;

    case AIR_STATE_LANDED:
        // Landing recovery
        mState.landingLagTimer -= dt;
        if (mState.landingLagTimer <= 0.0f) {
            mState.mState = AIR_STATE_GROUNDED;
        }
        break;

    case AIR_STATE_RISING:
        // Going up — apply gravity
        mState.airTime += dt;
        mState.stateTimer += dt;
        mMinAirTime += dt;
        mState.velocity.y -= mConfig.gravity * dt;

        // Clamp fall speed
        if (mState.velocity.y < -mConfig.maxFallSpeed) {
            mState.velocity.y = -mConfig.maxFallSpeed;
        }

        // Track maximum height
        if (position.y > mState.maxHeight) {
            mState.maxHeight = position.y;
        }

        // Open trick window after initial delay
        if (mState.stateTimer >= mConfig.trickWindowStart * dt &&
            !mState.mbTrickWindowOpen) {
            mState.mbTrickWindowOpen = true;
        }

        // Transition to apex when vertical velocity reaches zero
        if (mState.velocity.y <= 0.0f) {
            mState.mState = AIR_STATE_APEX;
            mState.stateTimer = 0.0f;
        }

        // Check for premature ground contact (shouldn't happen normally)
        if (groundContact && position.y <= groundHeight + 5.0f) {
            mState.mState = AIR_STATE_LANDED;
            mState.landingLagTimer = mConfig.landingLagTime * dt;
            mLandingSquashTimer = 0.15f; // 9-frame squash animation
            mState.airTime = 0.0f;
            if (mState.mbTrickPerformed) {
                TrickResult result = getTrickResult(mState.trickType);
                mState.trickBoostMultiplier = result.speedBoostMultiplier;
                mState.trickBoostTimer = 0.5f;
            }
        }
        break;

    case AIR_STATE_APEX:
        {
            mState.airTime += dt;
            mState.stateTimer += dt;
            mState.velocity.y -= mConfig.gravity * dt;
            if (mState.velocity.y < -mConfig.maxFallSpeed) {
                mState.velocity.y = -mConfig.maxFallSpeed;
            }

            f32 remainingAirEstimate = 2.0f * std::fabs(mState.velocity.y) / mConfig.gravity;
            if (remainingAirEstimate < mConfig.trickWindowEnd * dt) {
                mState.mbTrickWindowOpen = false;
            }

            mState.mState = AIR_STATE_FALLING;
            mState.stateTimer = 0.0f;
        }
        break;

    case AIR_STATE_FALLING:
        {
            mState.airTime += dt;
            mState.stateTimer += dt;
            mState.velocity.y -= mConfig.gravity * dt;
            if (mState.velocity.y < -mConfig.maxFallSpeed) {
                mState.velocity.y = -mConfig.maxFallSpeed;
            }

            f32 remAir = 2.0f * std::fabs(mState.velocity.y) / mConfig.gravity;
            if (remAir < mConfig.trickWindowEnd * dt) {
                mState.mbTrickWindowOpen = false;
            }

            if (groundContact && position.y <= groundHeight + 5.0f) {
                mState.mState = AIR_STATE_LANDED;
                mState.landingLagTimer = mConfig.landingLagTime * dt;
                mLandingSquashTimer = 0.15f; // 9-frame squash animation

                if (mState.mbTrickPerformed) {
                    TrickResult result = getTrickResult(mState.trickType);
                    mState.trickBoostMultiplier = result.speedBoostMultiplier;
                    mState.trickBoostTimer = 0.5f;
                }
                mState.airTime = 0.0f;
                mState.mbTrickWindowOpen = false;
            }
        }
        break;

    case AIR_STATE_TRICK:
        // Performing a trick — animation plays, then resume falling
        mState.airTime += dt;
        mState.stateTimer += dt;
        mState.velocity.y -= mConfig.gravity * dt;

        if (mState.stateTimer >= 0.4f) { // 0.4 second trick animation
            mState.mState = AIR_STATE_FALLING;
            mState.stateTimer = 0.0f;
        }
        break;
    }
}

// @addr 0x805D1300
bool KartAir::attemptTrick(TrickType trickType) {
    if (!mState.mbTrickWindowOpen || mState.mbTrickPerformed) {
        return false;
    }
    if (mState.mState != AIR_STATE_RISING && mState.mState != AIR_STATE_FALLING) {
        return false;
    }

    mState.trickType = trickType;
    mState.mbTrickPerformed = true;
    mState.mbTrickWindowOpen = false;
    mState.mState = AIR_STATE_TRICK;
    mState.stateTimer = 0.0f;

    // Increment total trick count for this race
    mTotalTrickCount++;

    return true;
}

// @addr 0x805D1370
// Returns the peak height above the launch point.
// Positive value means the kart went higher than where it launched.
f32 KartAir::getHeightDifference() const {
    return mState.maxHeight - mState.launchHeight;
}

// @addr 0x805D1380
bool KartAir::isTrickWindowOpenImpl() const {
    return mState.mbTrickWindowOpen && isAirborne();
}

// @addr 0x805D1390
const EGG::Vector3f& KartAir::getVelocity() const {
    return mState.velocity;
}

// @addr 0x805D13A0
// Forces immediate landing regardless of air state.
// Used by Lakitu rescue system when the kart is picked up
// and placed back on the track.
void KartAir::forceLand() {
    mState.mState = AIR_STATE_LANDED;
    mState.landingLagTimer = mConfig.landingLagTime * (1.0f / 60.0f);
    mState.airTime = 0.0f;
    mState.mbTrickWindowOpen = false;
    mState.velocity.setAll(0);
    mLandingSquashTimer = 0.15f;

    // Cancel any pending trick boost if forced to land
    // (Lakitu rescue doesn't carry over trick bonuses)
    if (!mState.mbTrickPerformed) {
        mState.trickBoostTimer = 0.0f;
        mState.trickBoostMultiplier = 1.0f;
    }
}

// @addr 0x805D13B0
const char* KartAir::getAirStateName() const {
    switch (mState.mState) {
    case AIR_STATE_GROUNDED: return "GROUNDED";
    case AIR_STATE_RISING:   return "RISING";
    case AIR_STATE_APEX:     return "APEX";
    case AIR_STATE_FALLING:  return "FALLING";
    case AIR_STATE_TRICK:    return "TRICK";
    case AIR_STATE_LANDED:   return "LANDED";
    default:                 return "UNKNOWN";
    }
}

// @addr 0x805D13C0
// Returns a speed penalty (multiplier < 1.0) applied on landing.
// Longer air time with no trick results in a heavier penalty,
// while successful tricks can provide a speed bonus (> 1.0).
// The minimum air time check ensures very short hops get less penalty.
f32 KartAir::calcLandingPenalty() const {
    if (mState.mState == AIR_STATE_GROUNDED) {
        return 1.0f;
    }

    // Base penalty: 1.0 (no penalty) if air time is short
    // Penalty increases with longer air time
    f32 airTime = mState.airTime;
    f32 penalty = 1.0f;

    // If air time exceeds a threshold, start applying a speed penalty
    // This discourages going airborne for too long without tricks
    const f32 penaltyThreshold = 1.5f; // 1.5 seconds before penalty kicks in
    if (airTime > penaltyThreshold) {
        f32 excessTime = airTime - penaltyThreshold;
        // Penalty is quadratic: heavier penalty for much longer air times
        penalty = 1.0f - 0.05f * excessTime * excessTime;
        // Clamp: minimum 0.5x speed (50% speed loss)
        if (penalty < 0.5f) {
            penalty = 0.5f;
        }
    }

    // If a trick was performed, offset the penalty with the trick boost
    if (mState.mbTrickPerformed) {
        TrickResult result = getTrickResult(mState.trickType);
        f32 trickBonus = result.speedBoostMultiplier;
        // The trick bonus partially or fully counteracts the penalty
        penalty *= trickBonus;
    }

    // Minimum air time check: very short hops (< 0.2s) get no penalty
    if (mMinAirTime < 0.2f) {
        penalty = std::max(penalty, 0.98f); // Minimal penalty for short hops
    }

    return penalty;
}

// @addr 0x805D1400
TrickResult KartAir::getLastTrickResult() const {
    if (!mState.mbTrickPerformed) {
        return getTrickResult(TRICK_NONE);
    }
    return getTrickResult(mState.trickType);
}

// @addr 0x805D1410
TrickResult KartAir::getTrickResult(TrickType type) {
    switch (type) {
    case TRICK_FRONT_FLIP:
    case TRICK_BACK_FLIP:
        return { type, 1.05f, 10.0f, 24 }; // +5% speed, 10 points
    case TRICK_LEFT_SPIN:
    case TRICK_RIGHT_SPIN:
        return { type, 1.03f, 6.0f, 20 };   // +3% speed, 6 points
    case TRICK_SIDE_FLIP_L:
    case TRICK_SIDE_FLIP_R:
        return { type, 1.04f, 8.0f, 22 };   // +4% speed, 8 points
    default:
        return { TRICK_NONE, 1.0f, 0.0f, 0 };
    }
}

// @addr 0x805D1450
AirConfig KartAir::getDefaultConfig() {
    AirConfig config;
    config.gravity = 0.8f;                // Per frame gravity
    config.maxFallSpeed = -3.0f;           // Terminal velocity
    config.trickWindowStart = 5;           // 5 frames after launch
    config.trickWindowEnd = 10;            // 10 frames before landing
    config.landingLagTime = 5;            // 5 frames landing recovery
    config.bumpLaunchUpSpeed = 1.5f;      // Launch speed from bump
    config.normalLaunchUpSpeed = 1.8f;    // Normal ramp launch
    config.boostRampUpSpeed = 2.2f;        // Boost ramp launch
    return config;
}

// @addr 0x805D14A0
// Free function: returns the trick type name string for debug/logging.
const char* KartAir_getTrickName(TrickType type) {
    switch (type) {
    case TRICK_NONE:        return "NONE";
    case TRICK_FRONT_FLIP:  return "FRONT_FLIP";
    case TRICK_BACK_FLIP:   return "BACK_FLIP";
    case TRICK_LEFT_SPIN:   return "LEFT_SPIN";
    case TRICK_RIGHT_SPIN:  return "RIGHT_SPIN";
    case TRICK_SIDE_FLIP_L: return "SIDE_FLIP_L";
    case TRICK_SIDE_FLIP_R: return "SIDE_FLIP_R";
    default:                return "UNKNOWN";
    }
}

} // namespace Kart