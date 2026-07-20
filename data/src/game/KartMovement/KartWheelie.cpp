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
        {
            f32 progress = mState.timer / mConfig.startupTime;
            if (progress >= 1.0f) {
                progress = 1.0f;
                mState.mState = WHEELIE_STATE_ACTIVE;
            }
            // Interpolate angle and boost
            mState.currentAngle = mConfig.maxWheelieAngle * progress;
            mState.currentBoost = 1.0f + (mConfig.speedBoost - 1.0f) * progress;
        }
        // Cancel if input released or turning too hard
        if (!inputUp || std::fabs(steerInput) > 0.5f) {
            mState.mState = WHEELIE_STATE_ENDING;
            mState.timer = 0.0f;
        }
        break;

    case WHEELIE_STATE_ACTIVE:
        // Full wheelie — speed boost active, vulnerable to bumps
        mState.mbCanBeBumped = true;
        mState.currentAngle = mConfig.maxWheelieAngle;
        mState.currentBoost = mConfig.speedBoost;

        // Cancel conditions
        if (!inputUp || std::fabs(steerInput) > 0.5f ||
            currentSpeed < mConfig.minSpeed * 0.5f) {
            mState.mState = WHEELIE_STATE_ENDING;
            mState.timer = 0.0f;
            mState.mbCanBeBumped = false;
        }
        break;

    case WHEELIE_STATE_ENDING:
        // Transition back to normal
        mState.mbCanBeBumped = false;
        mState.timer += 1.0f / 60.0f;
        {
            f32 progress = mState.timer / mConfig.endLagTime;
            if (progress >= 1.0f) {
                mState.mState = WHEELIE_STATE_NONE;
                mState.timer = 0.0f;
                mState.currentAngle = 0.0f;
                mState.currentBoost = 1.0f;
                return;
            }
            // Interpolate back
            f32 remaining = 1.0f - progress;
            mState.currentAngle = mConfig.maxWheelieAngle * remaining;
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
