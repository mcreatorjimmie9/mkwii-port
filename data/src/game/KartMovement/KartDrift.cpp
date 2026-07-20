// KartDrift.cpp — Drift State Machine Implementation
// GENESIS Phase 30
// Original addresses: 0x805Cxxxx-0x805Dxxxx

#include "KartDrift.hpp"
#include <cmath>
#include <cstring>

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

/* KartDrift_reset @ 0x805C1250 */
// Full state reset to initial values. Called on race restart or
// when the kart respawns after falling off the course.
void KartDrift::reset() {
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
}

/* KartDrift_update @ 0x805C1100 */
void KartDrift::update(bool driftInput, f32 steerInput, f32 currentSpeed,
                       f32 /* groundNormal */) {
    const f32 dt = 1.0f / 60.0f;

    // Track previous turbo level for MT sound effect trigger
    TurboLevel prevTurboLevel = mState.turboLevel;

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

            // Trigger drift sparks audio when turbo level changes
            // (In the real game this calls SE_DRIFT_SPARKS_BLUE/ORANGE/RED)
            if (mState.turboLevel != prevTurboLevel && mState.turboLevel != TURBO_LEVEL_NONE) {
                // Audio trigger: drift level up sound
                // sePlay(static_cast<s32>(0x500 + mState.turboLevel));
            }

            // Visual drift angle tilt (cosmetic lean toward drift direction)
            // Applied in KartBody calc as a rotation offset

            // Cancel if drift button released or steering reversed
            if (!driftInput) {
                if (mState.mbCanRelease) {
                    mState.mState = DRIFT_STATE_BOOSTING;
                    mState.stateTimer = 0.0f;
                    mState.mbIsBoosting = true;
                    const TurboBoostData& boost = mTurboData[mState.turboLevel];
                    mState.boostTimer = (f32)boost.durationFrames * dt;

                    // MT release sound effect
                    // sePlay(0x503 + static_cast<s32>(mState.turboLevel));
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

/* KartDrift_getDriftAngle @ 0x805C1280 */
// Returns the current drift angle in radians.
// Computed from driftDirection and outsideDriftAmount.
// Positive = right drift, Negative = left drift.
// In MKWii the visual drift angle is typically 5-15 degrees depending
// on outside drift amount and speed.
f32 KartDrift::getDriftAngle() const {
    if (mState.mState != DRIFT_STATE_ACTIVE &&
        mState.mState != DRIFT_STATE_CHARGING) {
        return 0.0f;
    }

    // Base drift angle: ~8 degrees in the drift direction
    const f32 baseAngle = 0.14f; // ~8 degrees in radians

    // Outside drift increases the visual angle
    // MKWii: maximum drift angle is about 15 degrees (0.262 rad)
    f32 outsideBoost = mState.outsideDriftAmount * 0.12f; // up to ~7 extra degrees

    f32 angle = (baseAngle + outsideBoost) * static_cast<f32>(mState.driftDirection);

    // Turbo charge increases the angle slightly as the MT builds
    angle *= (1.0f + mState.turboCharge * 0.2f);

    return angle;
}

/* KartDrift_getDriftParticles @ 0x805C12B0 */
// Returns a particle emission rate factor based on the current turbo level.
// Higher turbo levels produce more particles (sparks):
//   None:  0.0 (no particles)
//   Blue:  0.3 (light sparks)
//   Orange: 0.6 (medium sparks)
//   Red:   1.0 (heavy sparks + flame)
f32 KartDrift::getDriftParticles() const {
    if (!isDrifting()) {
        return 0.0f;
    }

    switch (mState.turboLevel) {
    case TURBO_LEVEL_BLUE:   return 0.3f;
    case TURBO_LEVEL_ORANGE: return 0.6f;
    case TURBO_LEVEL_RED:    return 1.0f;
    default:
        // No turbo yet — emit minimal smoke particles while in active drift
        if (mState.mState == DRIFT_STATE_ACTIVE ||
            mState.mState == DRIFT_STATE_CHARGING) {
            return 0.1f;
        }
        return 0.0f;
    }
}

/* KartDrift_isActive @ 0x805C12E0 */
// Returns true if the kart is in ANY drift-related state, including
// the boosting phase where the mini-turbo has been released.
bool KartDrift::isActive() const {
    return mState.mState != DRIFT_STATE_NONE;
}

/* KartDrift_setConfig @ 0x805C1300 */
// Allows runtime configuration changes, e.g. when switching between
// kart and bike, or applying vehicle-specific drift parameters.
void KartDrift::setConfig(const DriftConfig& config) {
    mConfig = config;
}

/* KartDrift_getDriftStateName @ 0x805C1310 */
// Debug helper returning the name of the current drift state as a
// C string. Used in debug displays and logging.
const char* KartDrift::getDriftStateName() const {
    switch (mState.mState) {
    case DRIFT_STATE_NONE:      return "NONE";
    case DRIFT_STATE_STARTING:  return "STARTING";
    case DRIFT_STATE_ACTIVE:    return "ACTIVE";
    case DRIFT_STATE_CHARGING:  return "CHARGING";
    case DRIFT_STATE_BOOSTING:  return "BOOSTING";
    case DRIFT_STATE_CANCELLED: return "CANCELLED";
    default:                    return "UNKNOWN";
    }
}

/* KartDrift_calcDriftScore @ 0x805C1340 */
// Calculates a drift score used for ranking/time-trial leaderboards.
// The score is based on:
//   - Time spent charging (longer = more points)
//   - Charge level reached (higher level = multiplier)
//   - Whether the boost was successfully released (penalty if cancelled)
f32 KartDrift::calcDriftScore() const {
    if (mState.mState == DRIFT_STATE_NONE && mState.chargeTimer <= 0.0f) {
        return 0.0f;
    }

    // Base score from charge time
    f32 timeScore = mState.chargeTimer * 10.0f;

    // Multiplier based on turbo level achieved
    f32 levelMult = 1.0f;
    switch (mState.turboLevel) {
    case TURBO_LEVEL_BLUE:   levelMult = 1.5f; break;
    case TURBO_LEVEL_ORANGE: levelMult = 2.5f; break;
    case TURBO_LEVEL_RED:    levelMult = 4.0f; break;
    default:                 levelMult = 0.5f; break;
    }

    // Penalty for cancelled drifts
    f32 cancelPenalty = 1.0f;
    if (mState.mState == DRIFT_STATE_CANCELLED) {
        cancelPenalty = 0.3f;
    }

    return timeScore * levelMult * cancelPenalty;
}

// @addr 0x805C1360 (estimated)
// getBoostColor — Get the color associated with the current turbo level.
// Returns RGB as u8 values: blue/orange/red for the three levels, white for none.
void KartDrift::getBoostColor(u8* r, u8* g, u8* b) const {
    if (!r || !g || !b) return;
    switch (mState.turboLevel) {
    case TURBO_LEVEL_BLUE:
        *r = 80;  *g = 140; *b = 255; break;
    case TURBO_LEVEL_ORANGE:
        *r = 255; *g = 160; *b = 30;  break;
    case TURBO_LEVEL_RED:
        *r = 255; *g = 50;  *b = 50;  break;
    default:
        *r = 255; *g = 255; *b = 255; break;
    }
}

// @addr 0x805C1380 (estimated)
// getChargePercent — Get the turbo charge as a percentage [0, 100].
f32 KartDrift::getChargePercent() const {
    return mState.turboCharge * 100.0f;
}

// @addr 0x805C1390 (estimated)
// getChargeTime — Get the time spent charging the current drift.
f32 KartDrift::getChargeTime() const {
    return mState.chargeTimer;
}

// @addr 0x805C13A0 (estimated)
// canRelease — Check if mini-turbo can be released.
bool KartDrift::canRelease() const {
    return mState.mbCanRelease;
}

// @addr 0x805C13B0 (estimated)
// getOutsideDriftAmount — Get how far outside the optimal drift the player is.
f32 KartDrift::getOutsideDriftAmount() const {
    return mState.outsideDriftAmount;
}

// @addr 0x805C13C0 (estimated)
// getDriftDirection — Get the drift direction as a float (-1.0, 0.0, +1.0).
f32 KartDrift::getDriftDirectionF() const {
    return static_cast<f32>(mState.driftDirection);
}

// @addr 0x805C13D0 (estimated)
// getRemainingBoostTime — Get remaining boost time if boosting.
f32 KartDrift::getRemainingBoostTime() const {
    if (mState.mState != DRIFT_STATE_BOOSTING) {
        return 0.0f;
    }
    return mState.boostTimer;
}

} // namespace Kart