#pragma once
// KartDrift.hpp — Drift State Machine
// GENESIS Phase 30: Manages the drift state machine for kart movement.
// MKW uses a "drift snaking" system where players initiate drifts to
// build mini-turbo charge. The drift state machine handles:
//   - Drift entry (hold drift button while turning)
//   - Drift sustain (continued turning generates turbo charge)
//   - Mini-turbo levels (blue → purple → red for karts, all orange for bikes)
//   - Drift exit (release drift button or cancel)
//   - Outside drift (drifting away from the turn direction)
// Original addresses: 0x805Cxxxx-0x805Dxxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

// Drift state enum
enum DriftState {
    DRIFT_STATE_NONE        = 0,  // Not drifting
    DRIFT_STATE_STARTING    = 1,  // Transition: normal → drift
    DRIFT_STATE_ACTIVE      = 2,  // Actively drifting — charging turbo
    DRIFT_STATE_CHARGING    = 3,  // Turbo charging — sparks visible
    DRIFT_STATE_BOOSTING    = 4,  // Mini-turbo released
    DRIFT_STATE_CANCELLED   = 5,  // Drift cancelled (wrong direction)
};

// Mini-turbo charge level (karts only; bikes have one level)
enum TurboLevel {
    TURBO_LEVEL_NONE    = 0,
    TURBO_LEVEL_BLUE    = 1,  // Level 1: small boost (~10 frames)
    TURBO_LEVEL_ORANGE  = 2,  // Level 2: medium boost (~20 frames)
    TURBO_LEVEL_RED     = 3,  // Level 3: large boost (~30 frames)
};

// Drift configuration (per-vehicle)
struct DriftConfig {
    f32 entryTime;              // Frames to enter drift
    f32 exitTime;               // Frames to exit drift
    f32 chargeRate;             // Turbo charge rate per frame
    f32 maxChargeTime;          // Time to reach max charge (seconds)
    f32 turnBonus;              // Extra turn rate during drift
    f32 minDriftSpeed;          // Minimum speed to drift
    f32 outsideDriftPenalty;    // Speed penalty for drifting outward
    bool isBike;                // Bikes get single-level MT
};

// Drift boost values per turbo level
struct TurboBoostData {
    f32 speedMultiplier;        // Speed boost multiplier
    u32 durationFrames;         // Boost duration in frames
    f32 acceleration;           // Acceleration during boost
};

// Per-frame drift state
struct DriftStateData {
    DriftState mState;
    s32 driftDirection;          // -1 = left, 0 = none, +1 = right
    f32 turboCharge;             // Current turbo charge [0.0, 1.0]
    TurboLevel turboLevel;      // Current charge level
    f32 chargeTimer;             // Time spent charging (seconds)
    f32 stateTimer;              // Time in current state
    f32 boostTimer;              // Remaining boost time
    f32 outsideDriftAmount;       // How far the drift is outside optimal
    bool mbCanRelease;           // True when turbo can be released
    bool mbIsBoosting;           // Currently releasing mini-turbo
};

// KartDrift — manages drift state machine
class KartDrift {
public:
    /* KartDrift_ctor @ 0x805C1000 */
    KartDrift();
    /* KartDrift_dtor @ 0x805C1040 */
    ~KartDrift();

    // Initialize drift system
    /* KartDrift_init @ 0x805C1080 */
    void init(const DriftConfig& config);

    // Update drift state each frame
    /* KartDrift_update @ 0x805C1100 */
    void update(bool driftInput, f32 steerInput, f32 currentSpeed,
                f32 groundNormal);

    // Cancel current drift
    /* KartDrift_cancel @ 0x805C1200 */
    void cancel();

    // Full state reset to initial values
    /* KartDrift_reset @ 0x805C1250 */
    void reset();

    // Get current drift state
    DriftState getDriftState() const { return mState.mState; }

    // Get current turbo charge level
    TurboLevel getTurboLevel() const { return mState.turboLevel; }

    // Get current drift direction
    s32 getDriftDirection() const { return mState.driftDirection; }

    // Get current drift angle in radians (based on direction and outside amount)
    /* KartDrift_getDriftAngle @ 0x805C1280 */
    f32 getDriftAngle() const;

    // Get particle emission parameters based on turbo level
    /* KartDrift_getDriftParticles @ 0x805C12B0 */
    f32 getDriftParticles() const;

    // Check if in any drift state (starting, active, charging, boosting)
    /* KartDrift_isActive @ 0x805C12E0 */
    bool isActive() const;

    // Check if currently boosting from mini-turbo
    bool isBoosting() const { return mState.mbIsBoosting; }

    // Get speed boost from active mini-turbo
    f32 getSpeedBoost() const;

    // Get turn bonus from drift
    f32 getTurnBonus() const;

    // Check if drifting
    bool isDrifting() const {
        return mState.mState != DRIFT_STATE_NONE &&
               mState.mState != DRIFT_STATE_BOOSTING;
    }

    // Allow runtime configuration changes
    /* KartDrift_setConfig @ 0x805C1300 */
    void setConfig(const DriftConfig& config);

    // Debug helper: returns current drift state name string
    /* KartDrift_getDriftStateName @ 0x805C1310 */
    const char* getDriftStateName() const;

    // Calculate drift score for ranking (time drifting * charge level)
    /* KartDrift_calcDriftScore @ 0x805C1340 */
    f32 calcDriftScore() const;

    // Get boost color (RGB) for current turbo level
    void getBoostColor(u8* r, u8* g, u8* b) const;

    // Get turbo charge as percentage [0, 100]
    f32 getChargePercent() const;

    // Get time spent charging
    f32 getChargeTime() const;

    // Check if mini-turbo can be released
    bool canRelease() const;

    // Get outside drift amount
    f32 getOutsideDriftAmount() const;

    // Get drift direction as float
    f32 getDriftDirectionF() const;

    // Get remaining boost time
    f32 getRemainingBoostTime() const;

    // Get the turbo boost data for a given level
    static TurboBoostData getTurboBoostData(TurboLevel level);

    // Default drift config for standard karts
    static DriftConfig getDefaultKartConfig();

    // Default drift config for standard bikes
    static DriftConfig getDefaultBikeConfig();

private:
    DriftStateData mState;
    DriftConfig mConfig;
    TurboBoostData mTurboData[4]; // Boost data per level
};

} // namespace Kart