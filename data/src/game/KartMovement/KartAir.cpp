// KartAir.cpp — Airborne / Trick State Machine Implementation
// GENESIS Phase 30
// Original addresses: 0x805Dxxxx-0x805Exxxx

#include "KartAir.hpp"
#include <cmath>

namespace Kart {

/* KartAir_ctor @ 0x805D1000 */
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
}

/* KartAir_dtor @ 0x805D1040 */
KartAir::~KartAir() {}

/* KartAir_init @ 0x805D1080 */
void KartAir::init(const AirConfig& config) {
    mConfig = config;
    mState.mState = AIR_STATE_GROUNDED;
    mState.airTime = 0.0f;
    mState.mbTrickPerformed = false;
    mState.mbTrickWindowOpen = false;
}

/* KartAir_launch @ 0x805D1100 */
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

    // Set vertical velocity based on launch type
    mState.velocity = velocity;
    mState.velocity.y = fromBoostRamp ? mConfig.boostRampUpSpeed : upSpeed;

    // Trick window opens after a brief delay
    // (prevents accidental tricks from the shake of launching)
}

/* KartAir_update @ 0x805D1200 */
void KartAir::update(const EGG::Vector3f& position, bool groundContact,
                     f32 groundHeight) {
    const f32 dt = 1.0f / 60.0f;

    // Update trick boost timer
    if (mState.trickBoostTimer > 0.0f) {
        mState.trickBoostTimer -= dt;
        if (mState.trickBoostTimer <= 0.0f) {
            mState.trickBoostMultiplier = 1.0f;
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

/* KartAir_attemptTrick @ 0x805D1300 */
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

    return true;
}

/* KartAir_getLastTrickResult */
TrickResult KartAir::getLastTrickResult() const {
    if (!mState.mbTrickPerformed) {
        return getTrickResult(TRICK_NONE);
    }
    return getTrickResult(mState.trickType);
}

/* KartAir_getTrickResult */
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

/* KartAir_getDefaultConfig */
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

} // namespace Kart
