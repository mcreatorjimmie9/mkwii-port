// KartWheelie.cpp — Bike Wheelie Mechanics Implementation
// GENESIS Phase 30
// Original addresses: 0x805Bxxxx-0x805Cxxxx

#include "KartWheelie.hpp"
#include <cmath>

namespace Kart {

/* KartWheelie_ctor @ 0x805B1000 */
KartWheelie::KartWheelie()
    : mbIsBike(false)
{
    mState.mState = WHEELIE_STATE_NONE;
    mState.timer = 0.0f;
    mState.currentAngle = 0.0f;
    mState.currentBoost = 1.0f;
    mState.bumpCooldownTimer = 0.0f;
    mState.mbCanBeBumped = false;
    mState.mbIsBike = false;
    mConfig = getDefaultConfig();
}

/* KartWheelie_dtor @ 0x805B1040 */
KartWheelie::~KartWheelie() {}

/* KartWheelie_init @ 0x805B1080 */
void KartWheelie::init(bool isBike, const WheelieConfig& config) {
    mbIsBike = isBike;
    mConfig = config;
    mState.mbIsBike = isBike;
    mState.mState = WHEELIE_STATE_NONE;
    mState.timer = 0.0f;
    mState.currentAngle = 0.0f;
    mState.currentBoost = 1.0f;
    mState.mbCanBeBumped = false;
    mState.bumpCooldownTimer = 0.0f;
}

/* KartWheelie_update @ 0x805B1100 */
void KartWheelie::update(bool inputUp, f32 currentSpeed, f32 steerInput,
                         bool isBeingBumped) {
    if (!mbIsBike) {
        return; // Only bikes can wheelie
    }

    // Decay bump cooldown
    if (mState.bumpCooldownTimer > 0.0f) {
        mState.bumpCooldownTimer -= 1.0f / 60.0f;
    }

    // Check for forced bump cancel
    if (mState.mbCanBeBumped && isBeingBumped) {
        forceCancel();
        return;
    }

    switch (mState.mState) {
    case WHEELIE_STATE_NONE:
        // Can start wheelie if: input held up, speed above minimum, not turning
        if (inputUp && currentSpeed >= mConfig.minSpeed &&
            std::fabs(steerInput) < 0.3f &&
            mState.bumpCooldownTimer <= 0.0f) {
            mState.mState = WHEELIE_STATE_STARTING;
            mState.timer = 0.0f;
        }
        break;

    case WHEELIE_STATE_STARTING:
        // Transition from normal to wheelie
        mState.timer += 1.0f / 60.0f;
        // Update angle smoothly using the dedicated method
        updateAngle();
        // Cancel if input released or turning too hard
        if (!inputUp || std::fabs(steerInput) > 0.5f) {
            endWheelie();
        }
        break;

    case WHEELIE_STATE_ACTIVE:
        // Full wheelie — speed boost active, vulnerable to bumps
        mState.mbCanBeBumped = true;
        mState.currentAngle = mConfig.maxWheelieAngle;
        // Active boost: +1.5% per frame above normal speed
        mState.currentBoost = mConfig.speedBoost;

        // Apply wobble at low speeds (visual instability)
        if (currentSpeed < mConfig.minSpeed * 1.5f) {
            f32 wobbleFactor = 1.0f - (currentSpeed / (mConfig.minSpeed * 1.5f));
            f32 wobble = std::sin(mState.timer * 30.0f) *
                         mConfig.wobbleAmplitude * wobbleFactor;
            mState.currentAngle += wobble;
        }

        // Cancel conditions
        if (!inputUp || std::fabs(steerInput) > 0.5f ||
            currentSpeed < mConfig.minSpeed * 0.5f) {
            endWheelie();
        }
        break;

    case WHEELIE_STATE_ENDING:
        // Transition back to normal
        mState.mbCanBeBumped = false;
        mState.timer += 1.0f / 60.0f;
        // Update angle smoothly using the dedicated method
        updateAngle();
        {
            f32 progress = mState.timer / mConfig.endLagTime;
            if (progress >= 1.0f) {
                mState.mState = WHEELIE_STATE_NONE;
                mState.timer = 0.0f;
                mState.currentAngle = 0.0f;
                mState.currentBoost = 1.0f;
                return;
            }
            // Interpolate boost back to 1.0
            f32 remaining = 1.0f - progress;
            mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * remaining;
        }
        break;

    case WHEELIE_STATE_CANCELLED:
        // Forced cancel — quick recovery
        mState.mbCanBeBumped = false;
        mState.timer += 1.0f / 60.0f;
        if (mState.timer >= 0.3f) { // 0.3 second recovery
            mState.mState = WHEELIE_STATE_NONE;
            mState.timer = 0.0f;
            mState.currentAngle = 0.0f;
            mState.currentBoost = 1.0f;
            mState.bumpCooldownTimer = 0.5f; // Can't re-wheelie for 0.5s
        } else {
            // Quick angle dump during cancelled state
            f32 progress = mState.timer / 0.3f;
            mState.currentAngle = mConfig.maxWheelieAngle * (1.0f - progress);
            mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * (1.0f - progress);
        }
        break;
    }
}

/* KartWheelie_forceCancel @ 0x805B1200 */
void KartWheelie::forceCancel() {
    if (mState.mState == WHEELIE_STATE_ACTIVE ||
        mState.mState == WHEELIE_STATE_STARTING) {
        mState.mState = WHEELIE_STATE_CANCELLED;
        mState.timer = 0.0f;
        mState.mbCanBeBumped = false;
    }
}

/* startWheelie — begin wheelie: set state to rising, start angle animation */
void KartWheelie::startWheelie() {
    if (!mbIsBike) {
        return;
    }
    if (mState.mState == WHEELIE_STATE_NONE) {
        mState.mState = WHEELIE_STATE_STARTING;
        mState.timer = 0.0f;
        mState.currentAngle = 0.0f;
        mState.currentBoost = 1.0f;
        mState.mbCanBeBumped = false;
    }
}

/* endWheelie — end wheelie: set state to falling, restore normal angle */
void KartWheelie::endWheelie() {
    if (mState.mState == WHEELIE_STATE_STARTING ||
        mState.mState == WHEELIE_STATE_ACTIVE) {
        mState.mState = WHEELIE_STATE_ENDING;
        mState.timer = 0.0f;
        mState.mbCanBeBumped = false;
    }
}

/* updateAngle — smoothly animate wheelie angle based on current state */
void KartWheelie::updateAngle() {
    switch (mState.mState) {
    case WHEELIE_STATE_STARTING: {
        // Rising: 0° to maxWheelieAngle over startupTime frames
        // Typically ~10 frames = 0.2s to reach ~20° (~0.35 rad)
        f32 progress = mState.timer / mConfig.startupTime;
        if (progress >= 1.0f) {
            progress = 1.0f;
            mState.mState = WHEELIE_STATE_ACTIVE;
        }
        // Ease-out curve for natural feel (decelerate as angle increases)
        f32 easedProgress = 1.0f - (1.0f - progress) * (1.0f - progress);
        mState.currentAngle = mConfig.maxWheelieAngle * easedProgress;
        // Interpolate speed boost alongside angle
        mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * easedProgress;
        break;
    }

    case WHEELIE_STATE_ACTIVE: {
        // Maintaining: hold at maxWheelieAngle
        mState.currentAngle = mConfig.maxWheelieAngle;
        mState.currentBoost = mConfig.speedBoost;
        break;
    }

    case WHEELIE_STATE_ENDING: {
        // Falling: maxWheelieAngle to 0° over endLagTime frames
        // Typically ~10 frames = 0.15s to return to flat
        f32 progress = mState.timer / mConfig.endLagTime;
        if (progress >= 1.0f) {
            progress = 1.0f;
        }
        // Ease-in curve for natural feel (accelerate as angle decreases)
        f32 remaining = 1.0f - progress * progress;
        mState.currentAngle = mConfig.maxWheelieAngle * remaining;
        mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * remaining;
        break;
    }

    case WHEELIE_STATE_CANCELLED: {
        // Cancelled: rapid angle dump over 0.3s
        f32 progress = mState.timer / 0.3f;
        if (progress >= 1.0f) {
            progress = 1.0f;
        }
        mState.currentAngle = mConfig.maxWheelieAngle * (1.0f - progress);
        mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * (1.0f - progress);
        break;
    }

    default:
    case WHEELIE_STATE_NONE: {
        mState.currentAngle = 0.0f;
        mState.currentBoost = 1.0f;
        break;
    }
    }
}

/* isActive — check if wheelie is in progress (any non-NONE state) */
bool KartWheelie::isActive() const {
    return mState.mState != WHEELIE_STATE_NONE;
}

/* canStartWheelie — check all conditions for wheelie initiation */
bool KartWheelie::canStartWheelie(f32 currentSpeed, f32 steerInput) const {
    // Must be a bike
    if (!mbIsBike) {
        return false;
    }
    // Must have sufficient speed
    if (currentSpeed < mConfig.minSpeed) {
        return false;
    }
    // Must not be turning too hard (would break the wheelie)
    if (std::fabs(steerInput) > 0.3f) {
        return false;
    }
    // Must not already be in a wheelie
    if (mState.mState != WHEELIE_STATE_NONE) {
        return false;
    }
    // Must be outside bump cooldown
    if (mState.bumpCooldownTimer > 0.0f) {
        return false;
    }
    return true;
}

/* setWheelieParams — configure wheelie from vehicle stats */
void KartWheelie::setWheelieParams(f32 angleMax, u32 riseFrames, f32 speedThreshold) {
    if (angleMax > 0.0f) {
        mConfig.maxWheelieAngle = angleMax;
    }
    if (riseFrames > 0) {
        mConfig.startupTime = static_cast<f32>(riseFrames) / 60.0f;
        // End lag is typically 75% of startup time
        mConfig.endLagTime = mConfig.startupTime * 0.75f;
    }
    if (speedThreshold > 0.0f) {
        mConfig.minSpeed = speedThreshold;
    }
}

/* cancelWheelie — force-cancel from being hit, off-road, etc. */
void KartWheelie::cancelWheelie() {
    forceCancel();
}

/* KartWheelie_getTurnRateMultiplier */
f32 KartWheelie::getTurnRateMultiplier() const {
    if (mState.mState == WHEELIE_STATE_ACTIVE ||
        mState.mState == WHEELIE_STATE_STARTING) {
        return mConfig.turnRateMultiplier;
    }
    return 1.0f;
}

/* KartWheelie_getDefaultConfig */
WheelieConfig KartWheelie::getDefaultConfig() {
    WheelieConfig config;
    config.startupTime = 12.0f / 60.0f;     // 12 frames = 0.2s
    config.endLagTime = 9.0f / 60.0f;        // 9 frames = 0.15s
    config.speedBoost = 1.15f;               // +15% speed
    config.turnRateMultiplier = 0.3f;        // -70% turning
    config.bumpVulnerability = 1.0f;          // Always spin out
    config.minSpeed = 30.0f;                  // 30 km/h minimum
    config.wobbleAmplitude = 0.02f;           // Visual wobble
    config.maxWheelieAngle = 0.35f;           // ~20 degrees
    return config;
}

} // namespace Kart