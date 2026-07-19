#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>

namespace Enemy {

// Forward declaration for AI context used by drift decision making
struct AIContext {
    EGG::Vector3f position;      // AI kart world position
    EGG::Vector3f forward;       // AI kart forward direction
    EGG::Vector3f velocity;      // AI kart velocity
    f32 speed;                   // AI kart speed
    f32 turnAngle;               // Current steering angle
    s32 currentRoadIdx;          // Current road point index
    s32 targetRoadIdx;           // Target road point index
    u32 mtChargeLevel;           // Mini-turbo charge level (0-3)
    bool onGround;               // Whether AI is on the ground
    bool canDrift;               // Whether drift is currently possible
};

// =============================================================================
// AIDrift — AI Drift Behavior
//
// Manages AI drifting decisions: when to start drifting, which
// direction to drift, and when to release the mini-turbo.
// AI drifting is simpler than human drifting — the AI picks
// the optimal direction and charges MT automatically.
/// Address range: 0x8051xxxx
// =============================================================================
class AIDrift {
public:
    enum DriftState {
        DRIFT_NONE    = 0,  // Not drifting
        DRIFT_START   = 1,  // Initiating drift (first frame)
        DRIFT_ACTIVE  = 2,  // Actively drifting and charging MT
        DRIFT_RELEASE = 3,  // Releasing MT boost
    };

    AIDrift();
    ~AIDrift();

    /// Determine if the AI should begin drifting given the current context.
    /// @param ctx  Current AI driving context
    /// @return true if the AI should start drifting now
    bool shouldDrift(AIContext* ctx);

    /// Begin drifting in a specified direction.
    /// @param direction  Positive = right drift, negative = left drift
    void startDrift(f32 direction);

    /// Per-frame drift state update.
    /// @param dt  Frame delta time
    void update(f32 dt);

    /// End the current drift and release mini-turbo boost.
    void endDrift();

    /// Calculate the optimal drift direction for the AI.
    /// Compares the turn needed to reach the next road point
    /// and returns the best drift direction.
    /// @param ctx      Current AI driving context
    /// @param outAngle Output: optimal drift angle (radians)
    void calcOptimalDriftAngle(AIContext* ctx, f32* outAngle);

    // State queries
    DriftState getDriftState() const { return m_state; }
    f32 getDriftDirection() const { return m_driftDirection; }
    f32 getMtCharge() const { return m_mtCharge; }
    u32 getMtLevel() const { return m_mtLevel; }
    bool isDrifting() const { return m_state == DRIFT_ACTIVE || m_state == DRIFT_START; }

private:
    static const f32 MT_CHARGE_RATE;         // MT charge per second of drifting
    static const f32 MT_LEVEL_1_THRESHOLD;   // MT level 1 (blue sparks)
    static const f32 MT_LEVEL_2_THRESHOLD;   // MT level 2 (orange sparks)
    static const f32 MT_LEVEL_3_THRESHOLD;   // MT level 3 (red sparks / MT ready)
    static const f32 MIN_DRIFT_SPEED;        // Minimum speed to drift
    static const f32 MIN_TURN_ANGLE;         // Minimum turn angle to warrant drifting

    DriftState m_state;
    f32 m_driftDirection;     // +1.0 = right, -1.0 = left
    f32 m_mtCharge;           // Current MT charge (0.0 to MT_LEVEL_3_THRESHOLD)
    u32 m_mtLevel;            // Current MT charge level (0-3)
    f32 m_driftTimer;         // Time spent in current drift
    f32 m_steerInput;         // Simulated steering input during drift
};

} // namespace Enemy