// KartDrift.cpp — Drift State Machine Implementation
// GENESIS Phase 30
// Original addresses: 0x805Cxxxx-0x805Dxxxx

#include "KartDrift.hpp"
#include <cmath>

namespace Kart {

/* KartDrift_ctor @ 0x805C1000 */
KartDrift::KartDrift() {
    mState.mState = DRIFT_STATE_NONE;
    mState.driftDirection = 0;
    mState.turboCharge = 0.0f;
    mState.turboLevel = TURBO_LEVEL_NONE;
    mState.chargeTimer = 0.0f;
    mState.stateTimer = 0.0f;
    mState.boostTimer = 0.0f;
    mState.outsideDriftAmount = 0.0f;
    mState.mbCanRelease = false;
    mState.mbIsBoosting = false;
    mConfig = getDefaultKartConfig();

    // Initialize turbo boost data per level
    mTurboData[TURBO_LEVEL_NONE] = { 1.0f, 0, 0.0f };
    mTurboData[TURBO_LEVEL_BLUE] = { 1.15f, 10, 0.5f };
    mTurboData[TURBO_LEVEL_ORANGE] = { 1.25f, 20, 0.8f };
    mTurboData[TURBO_LEVEL_RED] = { 1.40f, 30, 1.2f };
}

/* KartDrift_dtor @ 0x805C1040 */
KartDrift::~KartDrift() {}

/* KartDrift_init @ 0x805C1080 */
void KartDrift::init(const DriftConfig& config) {
    mConfig = config;
    mState.mState = DRIFT_STATE_NONE;
    mState.driftDirection = 0;
    mState.turboCharge = 0.0f;
    mState.turboLevel = TURBO_LEVEL_NONE;
    mState.chargeTimer = 0.0f;
    mState.mbCanRelease = false;
    mState.mbIsBoosting = false;
}

/* KartDrift_update @ 0x805C1100 */
void KartDrift::update(bool driftInput, f32 steerInput, f32 currentSpeed,
                       f32 /* groundNormal */) {
    const f32 dt = 1.0f / 60.0f;

    switch (mState.mState) {
    case DRIFT_STATE_NONE:
        // Can enter drift if: drift button held, turning significantly,
        // speed above minimum, and on a valid surface
        if (driftInput && std::fabs(steerInput) > 0.5f &&
            currentSpeed >= mConfig.minDriftSpeed) {
            mState.mState = DRIFT_STATE_STARTING;
            mState.driftDirection = (steerInput > 0.0f) ? 1 : -1;
            mState.stateTimer = 0.0f;
            mState.turboCharge = 0.0f;
            mState.turboLevel = TURBO_LEVEL_NONE;
            mState.chargeTimer = 0.0f;
            mState.mbCanRelease = false;
            mState.mbIsBoosting = false;
        }
        break;

    case DRIFT_STATE_STARTING:
        // Transition into drift
        mState.stateTimer += dt;

        // Cancel if drift button released or steering reversed
        if (!driftInput || mState.driftDirection * steerInput < 0.0f) {
            mState.mState = DRIFT_STATE_CANCELLED;
            mState.stateTimer = 0.0f;
            break;
        }

        if (mState.stateTimer >= mConfig.entryTime) {
            mState.mState = DRIFT_STATE_ACTIVE;
            mState.stateTimer = 0.0f;
        }
        break;

    case DRIFT_STATE_ACTIVE:
    case DRIFT_STATE_CHARGING:
        {
            // Actively drifting — accumulate turbo charge
            mState.stateTimer += dt;
            mState.chargeTimer += dt;

            // Calculate charge rate based on drift direction match
            f32 optimalFactor = 1.0f;
            if (mState.driftDirection * steerInput < 0.0f) {
                mState.outsideDriftAmount = std::fabs(steerInput);
                optimalFactor = 0.3f;
            } else {
                mState.outsideDriftAmount = 0.0f;
            }

            // Accumulate turbo charge
            f32 chargeAmount = mConfig.chargeRate * optimalFactor * dt;
            mState.turboCharge += chargeAmount;
            if (mState.turboCharge > 1.0f) {
                mState.turboCharge = 1.0f;
            }

            // Determine turbo level based on charge time
            if (mConfig.isBike) {
                if (mState.turboCharge >= 0.5f) {
                    mState.turboLevel = TURBO_LEVEL_ORANGE;
                    mState.mbCanRelease = true;
                }
            } else {
                if (mState.turboCharge >= 1.0f) {
                    mState.turboLevel = TURBO_LEVEL_RED;
                    mState.mbCanRelease = true;
                } else if (mState.turboCharge >= 0.55f) {
                    mState.turboLevel = TURBO_LEVEL_ORANGE;
                    mState.mbCanRelease = true;
                } else if (mState.turboCharge >= 0.2f) {
                    mState.turboLevel = TURBO_LEVEL_BLUE;
                    mState.mbCanRelease = true;
                }
            }

            // Cancel if drift button released or steering reversed
            if (!driftInput) {
                if (mState.mbCanRelease) {
                    mState.mState = DRIFT_STATE_BOOSTING;
                    mState.stateTimer = 0.0f;
                    mState.mbIsBoosting = true;
                    const TurboBoostData& boost = mTurboData[mState.turboLevel];
                    mState.boostTimer = (f32)boost.durationFrames * dt;
                } else {
                    mState.mState = DRIFT_STATE_CANCELLED;
                    mState.stateTimer = 0.0f;
                }
            }
        }
        break;

    case DRIFT_STATE_BOOSTING:
        // Mini-turbo boost active
        mState.stateTimer += dt;
        mState.boostTimer -= dt;

        if (mState.boostTimer <= 0.0f) {
            mState.mState = DRIFT_STATE_NONE;
            mState.mbIsBoosting = false;
            mState.turboLevel = TURBO_LEVEL_NONE;
            mState.turboCharge = 0.0f;
            mState.chargeTimer = 0.0f;
        }
        break;

    case DRIFT_STATE_CANCELLED:
        // Drift cancelled — brief recovery
        mState.stateTimer += dt;
        if (mState.stateTimer >= mConfig.exitTime) {
            mState.mState = DRIFT_STATE_NONE;
            mState.turboLevel = TURBO_LEVEL_NONE;
            mState.turboCharge = 0.0f;
            mState.chargeTimer = 0.0f;
            mState.mbCanRelease = false;
        }
        break;
    }
}

/* KartDrift_cancel @ 0x805C1200 */
void KartDrift::cancel() {
    if (mState.mState == DRIFT_STATE_ACTIVE ||
        mState.mState == DRIFT_STATE_CHARGING ||
        mState.mState == DRIFT_STATE_STARTING) {
        mState.mState = DRIFT_STATE_CANCELLED;
        mState.stateTimer = 0.0f;
    }
}

/* KartDrift_getSpeedBoost */
f32 KartDrift::getSpeedBoost() const {
    if (mState.mState == DRIFT_STATE_BOOSTING && mState.mbIsBoosting) {
        return mTurboData[mState.turboLevel].speedMultiplier;
    }
    return 1.0f;
}

/* KartDrift_getTurnBonus */
f32 KartDrift::getTurnBonus() const {
    if (mState.mState == DRIFT_STATE_ACTIVE ||
        mState.mState == DRIFT_STATE_CHARGING) {
        // Inside drift gets full bonus, outside gets reduced
        f32 outsidePenalty = 1.0f - mState.outsideDriftAmount * 0.5f;
        return mConfig.turnBonus * outsidePenalty;
    }
    return 0.0f;
}

/* KartDrift_getTurboBoostData */
TurboBoostData KartDrift::getTurboBoostData(TurboLevel level) {
    switch (level) {
    case TURBO_LEVEL_BLUE:   return { 1.15f, 10, 0.5f };
    case TURBO_LEVEL_ORANGE: return { 1.25f, 20, 0.8f };
    case TURBO_LEVEL_RED:    return { 1.40f, 30, 1.2f };
    default:                 return { 1.0f, 0, 0.0f };
    }
}

/* KartDrift_getDefaultKartConfig */
DriftConfig KartDrift::getDefaultKartConfig() {
    DriftConfig config;
    config.entryTime = 8.0f / 60.0f;
    config.exitTime = 5.0f / 60.0f;
    config.chargeRate = 1.0f;
    config.maxChargeTime = 2.0f;
    config.turnBonus = 1.3f;
    config.minDriftSpeed = 20.0f;
    config.outsideDriftPenalty = 0.3f;
    config.isBike = false;
    return config;
}

/* KartDrift_getDefaultBikeConfig */
DriftConfig KartDrift::getDefaultBikeConfig() {
    DriftConfig config = getDefaultKartConfig();
    config.isBike = true;
    config.chargeRate = 1.5f; // Bikes charge faster
    config.turnBonus = 1.2f;  // Less turn bonus
    return config;
}

} // namespace Kart
