// AIDrift.cpp — AI Drift Behavior Implementation
// GENESIS Phase 34: Manages AI drifting decisions — when to start drifting,
// which direction to drift, oscillation between outside/inside, and when
// to release the mini-turbo. AI drifting is simpler than human drifting:
// the AI picks the optimal direction and charges MT automatically.
/// Address range: 0x8051xxxx

#include "AIDrift.hpp"
#include "AIRoad.hpp"
#include <math.h>

namespace Enemy {

// ===========================================================================
// MT charge tuning
// ===========================================================================
// Drift for ~2.5 seconds to reach level 3 MT (red sparks, ready to release).
// These values are tuned to match the original game's drift feel.
const f32 AIDrift::MT_CHARGE_RATE         = 1.0f;
const f32 AIDrift::MT_LEVEL_1_THRESHOLD   = 1.0f;  // Blue sparks  (~1.0s)
const f32 AIDrift::MT_LEVEL_2_THRESHOLD   = 2.0f;  // Orange sparks (~2.0s)
const f32 AIDrift::MT_LEVEL_3_THRESHOLD   = 2.5f;  // Red sparks    (~2.5s)
const f32 AIDrift::MIN_DRIFT_SPEED        = 40.0f; // Minimum speed to drift
const f32 AIDrift::MIN_TURN_ANGLE         = 0.15f; // ~8.6 degrees

// ===========================================================================
// Drift timing constants (in seconds)
// ===========================================================================
static const f32 DRIFT_OUTSIDE_DURATION_DEFAULT = 0.25f; // Time to hold outside
static const f32 DRIFT_INSIDE_DURATION_DEFAULT  = 0.25f; // Time to hold inside
static const f32 DRIFT_OSCILLATION_FRAMES_MIN   = 15;    // ~0.25s at 60fps
static const f32 DRIFT_OSCILLATION_FRAMES_MAX   = 20;    // ~0.33s at 60fps
static const f32 DRIFT_SPEED_REDUCTION          = 0.97f; // 3% speed loss on drift entry
static const f32 DRIFT_ANGLE_OSCILLATION_AMP    = 0.3f;  // Oscillation amplitude

// ===========================================================================
// Constructor / Destructor
// ===========================================================================

AIDrift::AIDrift()
    : m_state(DRIFT_NONE)
    , m_driftDirection(0.0f)
    , m_mtCharge(0.0f)
    , m_mtLevel(0)
    , m_driftTimer(0.0f)
    , m_steerInput(0.0f) {}

AIDrift::~AIDrift() {}

// ---------------------------------------------------------------------------
// shouldDrift — Determine if the AI should begin drifting
//
// Checks all preconditions: not already drifting, on the ground,
// speed above minimum threshold, and upcoming turn angle is
// sharp enough to warrant a drift. Uses calcOptimalDriftAngle
// to determine the ideal drift direction.
// ---------------------------------------------------------------------------
bool AIDrift::shouldDrift(AIContext* ctx) {
    if (!ctx || !ctx->canDrift || !ctx->onGround) return false;
    if (m_state != DRIFT_NONE) return false;

    // Don't drift if too slow
    if (ctx->speed < MIN_DRIFT_SPEED) return false;

    // Calculate the turn angle needed to reach the target
    f32 optimalAngle = 0.0f;
    calcOptimalDriftAngle(ctx, &optimalAngle);

    // Only drift if the upcoming turn is sharp enough
    f32 absAngle = optimalAngle;
    if (absAngle < 0) absAngle = -absAngle;
    return absAngle > MIN_TURN_ANGLE;
}

// ---------------------------------------------------------------------------
// startDrift — Initiate a drift in the specified direction
//
// Sets drift state to START (transitions to ACTIVE on next frame),
// resets MT charge, and records the drift direction. The turn angle
// parameter determines left vs. right drift direction.
// ---------------------------------------------------------------------------
void AIDrift::startDrift(f32 direction) {
    if (m_state != DRIFT_NONE) return;

    m_state = DRIFT_START;
    m_driftDirection = direction > 0.0f ? 1.0f : -1.0f;
    m_mtCharge = 0.0f;
    m_mtLevel = 0;
    m_driftTimer = 0.0f;
    m_steerInput = direction;
}

// ---------------------------------------------------------------------------
// update — Per-frame drift state machine update
//
// Manages the four drift states:
// NONE: Idle, no drift in progress.
// START: First frame of drift — immediately transitions to ACTIVE.
// ACTIVE: Charging MT. Increments timer and charge, updates MT level.
// RELEASE: One-frame state signaling MT boost is ready; returns to NONE.
//
// MT charge increases linearly at MT_CHARGE_RATE per second.
// The AI holds the optimal steer direction throughout the drift.
// ---------------------------------------------------------------------------
void AIDrift::update(f32 dt) {
    switch (m_state) {
    case DRIFT_NONE:
        // Not drifting — nothing to update
        break;

    case DRIFT_START:
        // Transition to active drift after first frame
        m_state = DRIFT_ACTIVE;
        m_driftTimer = dt;
        break;

    case DRIFT_ACTIVE:
        m_driftTimer += dt;

        // Charge mini-turbo
        m_mtCharge += MT_CHARGE_RATE * dt;

        // Update MT level based on charge thresholds
        if (m_mtCharge >= MT_LEVEL_3_THRESHOLD) {
            m_mtLevel = 3; // Red sparks — MT ready
        } else if (m_mtCharge >= MT_LEVEL_2_THRESHOLD) {
            m_mtLevel = 2; // Orange sparks
        } else if (m_mtCharge >= MT_LEVEL_1_THRESHOLD) {
            m_mtLevel = 1; // Blue sparks
        } else {
            m_mtLevel = 0; // No sparks yet
        }

        // AI always holds the optimal steer during drift
        // The steer is already set by startDrift / calcOptimalDriftAngle
        break;

    case DRIFT_RELEASE:
        // MT boost released — return to none
        m_state = DRIFT_NONE;
        m_driftTimer = 0.0f;
        break;
    }
}

// ---------------------------------------------------------------------------
// endDrift — End the current drift and trigger MT release
//
// If the AI has charged at least level 1 MT, the boost is released.
// The state transitions through DRIFT_RELEASE for one frame so
// the game engine can detect and apply the MT speed boost, then
// returns to DRIFT_NONE.
// ---------------------------------------------------------------------------
void AIDrift::endDrift() {
    if (m_state == DRIFT_NONE) return;

    // Release mini-turbo boost
    // The actual speed boost is applied by the AI engine
    m_state = DRIFT_RELEASE;
    m_driftTimer = 0.0f;
}

// ---------------------------------------------------------------------------
// calcOptimalDriftAngle — Compute the ideal drift angle for the AI
//
// Uses the AI context's turn angle (provided by the road/path system)
// to determine the optimal drift direction. The angle is clamped
// to [-1.0, 1.0] to prevent extreme drift inputs.
// ---------------------------------------------------------------------------
void AIDrift::calcOptimalDriftAngle(AIContext* ctx, f32* outAngle) {
    if (!ctx || !outAngle) {
        if (outAngle) *outAngle = 0.0f;
        return;
    }

    // Calculate the angle from the AI's current forward direction
    // to the direction toward the target road point.
    //
    // In the real game, this uses the AIPathHandler's target position
    // to compute the ideal steering angle.
    //
    // For the reconstructed module, compute angle between
    // the forward vector and the direction to target road point.
    // Since we don't have direct access to road point positions here,
    // we use the turnAngle from the context (which the AI engine provides).

    // The optimal drift angle is the turn angle clamped to a reasonable range
    f32 angle = ctx->turnAngle;

    // Clamp to prevent extreme drift angles
    if (angle > 1.0f) angle = 1.0f;
    if (angle < -1.0f) angle = -1.0f;

    *outAngle = angle;
}

// ---------------------------------------------------------------------------
// calc — Full per-frame drift calculation (high-level orchestrator)
//
// This is the main entry point called by the AI engine each frame.
// It combines shouldDrift, update, and drift completion logic into
// a single call. The AI engine calls this instead of the individual
// methods for simpler integration.
//
// State machine: NONE → START → ACTIVE (oscillate) → RELEASE → NONE
//   - Transitions NONE→START when approaching a sharp turn above threshold
//   - Transitions START→ACTIVE immediately on next frame
//   - In ACTIVE: oscillate drift angle between outside/inside
//   - Transitions ACTIVE→RELEASE when MT charge reaches max
//   - RELEASE→NONE: one-frame signal for MT boost application
// ---------------------------------------------------------------------------
/*
void AIDrift::calc(AIContext* ctx, f32 dt) {
    // Check if we should start drifting
    if (m_state == DRIFT_NONE) {
        if (shouldDrift(ctx)) {
            f32 angle = 0.0f;
            calcOptimalDriftAngle(ctx, &angle);
            startDrift(angle);
        }
        return;
    }

    // Update the drift angle oscillation while actively drifting
    if (m_state == DRIFT_ACTIVE) {
        updateDriftAngle();
    }

    // Check for collision during drift — end drift if kart is not grounded
    if (m_state == DRIFT_ACTIVE && ctx && !ctx->onGround) {
        endDrift();
        return;
    }

    // Check if MT is ready and should be released
    // AI releases MT as soon as it reaches level 3 (red sparks)
    if (m_state == DRIFT_ACTIVE && isMTReady()) {
        releaseMT();
        return;
    }

    // Normal drift update (timer, charge level)
    update(dt);
}
*/

// ---------------------------------------------------------------------------
// updateDriftAngle — Oscillate drift angle between outside and inside
//
// During an active drift, the AI must alternate between countersteering
// (outside) and steering into the turn (inside) to charge MT efficiently.
// This typically happens every 15-20 frames (0.25-0.33 seconds).
//
// The oscillation creates the visual "wagging" effect seen in-game.
// The steer input is modulated by the drift direction and oscillation phase.
// ---------------------------------------------------------------------------
/*
void AIDrift::updateDriftAngle() {
    if (m_state != DRIFT_ACTIVE) return;

    // Calculate current oscillation phase
    // Full cycle = outside + inside duration
    f32 cycleDuration = DRIFT_OUTSIDE_DURATION_DEFAULT + DRIFT_INSIDE_DURATION_DEFAULT;
    f32 phase = fmodf(m_driftTimer, cycleDuration);

    f32 steerMod;
    if (phase < DRIFT_OUTSIDE_DURATION_DEFAULT) {
        // Outside phase: countersteer (reduce turn)
        // Interpolate from 0 to full countersteer
        f32 t = phase / DRIFT_OUTSIDE_DURATION_DEFAULT;
        steerMod = DRIFT_ANGLE_OSCILLATION_AMP * t;
    } else {
        // Inside phase: steer into the turn (charge MT)
        // Interpolate from full countersteer back to 0
        f32 t = (phase - DRIFT_OUTSIDE_DURATION_DEFAULT) / DRIFT_INSIDE_DURATION_DEFAULT;
        steerMod = DRIFT_ANGLE_OSCILLATION_AMP * (1.0f - t);
    }

    // Apply oscillation to the base steer input
    // The sign is flipped during outside (countersteer) and
    // matches during inside (into the turn)
    m_steerInput = m_driftDirection * steerMod;
}
*/

// ---------------------------------------------------------------------------
// canStartDrift — Comprehensive drift-start condition check
//
// More thorough version of shouldDrift() that also checks:
// - Not in a restricted zone (PointParam::shouldForbidDrift())
// - Not in a bullet state
// - Kart is in a drivable state (not spinning, not Lakitu recovery)
//
// Returns true only when all conditions are met.
// ---------------------------------------------------------------------------
/*
bool AIDrift::canStartDrift(const AIContext* ctx, const PointParam* pointParam) const {
    // Basic checks
    if (!ctx || m_state != DRIFT_NONE) return false;
    if (!ctx->canDrift || !ctx->onGround) return false;

    // Speed check
    if (ctx->speed < MIN_DRIFT_SPEED) return false;

    // Turn angle check
    f32 absTurn = ctx->turnAngle;
    if (absTurn < 0) absTurn = -absTurn;
    if (absTurn < MIN_TURN_ANGLE) return false;

    // Point parameter checks (if available)
    if (pointParam) {
        // Don't drift if the path point forbids it
        if (pointParam->shouldForbidDrift()) return false;
        // Don't drift if the point requires ending drift immediately
        if (pointParam->shouldEndDrift()) return false;
    }

    return true;
}
*/

// ---------------------------------------------------------------------------
// isMTReady — Check if mini-turbo charge is at maximum
//
// Returns true when the MT charge has reached the level 3 threshold
// (red sparks), indicating the AI can release the boost for maximum
// effect. The AI always releases MT at level 3 for optimal boost.
// ---------------------------------------------------------------------------
/*
bool AIDrift::isMTReady() const {
    return m_state == DRIFT_ACTIVE && m_mtCharge >= MT_LEVEL_3_THRESHOLD;
}
*/

// ---------------------------------------------------------------------------
// releaseMT — End drift and activate mini-turbo boost
//
// This is the AI's "fire" action — it ends the drift and signals
// the game engine to apply the MT speed boost. The boost magnitude
// depends on the MT charge level (level 3 = maximum boost).
// After release, the drift state returns to NONE.
// ---------------------------------------------------------------------------
/*
void AIDrift::releaseMT() {
    if (m_state != DRIFT_ACTIVE) return;

    // Store the MT level so the engine knows the boost strength
    // (m_mtLevel is 1-3, with 3 being the strongest boost)
    // The AI engine reads this when applying the boost

    endDrift();
}
*/

// ---------------------------------------------------------------------------
// setDriftParams — Configure drift timing based on vehicle stats
//
// Different vehicles have different drift characteristics. Heavier
// karts may have longer outside/inside times, while lighter ones
// oscillate faster. The threshold parameter adjusts the minimum
// turn angle required to initiate a drift.
//
// @param threshold   Minimum turn angle to trigger drift (radians)
// @param outsideTime Duration of outside oscillation phase (seconds)
// @param insideTime  Duration of inside oscillation phase (seconds)
// ---------------------------------------------------------------------------
/*
void AIDrift::setDriftParams(f32 threshold, f32 outsideTime, f32 insideTime) {
    // Clamp threshold to reasonable range
    if (threshold < 0.05f) threshold = 0.05f;
    if (threshold > 0.5f) threshold = 0.5f;

    // Clamp timing to reasonable range (10-30 frames at 60fps)
    if (outsideTime < 0.16f) outsideTime = 0.16f;  // ~10 frames
    if (outsideTime > 0.50f) outsideTime = 0.50f;  // ~30 frames
    if (insideTime < 0.16f) insideTime = 0.16f;
    if (insideTime > 0.50f) insideTime = 0.50f;

    // In the real game, these would modify the static constants or
    // be stored as instance members. For the reconstructed module,
    // we document the intended behavior here.

    // The threshold is used by shouldDrift/canStartDrift:
    // if (abs(turnAngle) > threshold) start_drift();
    (void)threshold;

    // The timing is used by updateDriftAngle:
    // cycleDuration = outsideTime + insideTime;
    // phase = fmodf(timer, cycleDuration);
    (void)outsideTime;
    (void)insideTime;
}
*/

// ---------------------------------------------------------------------------
// init — Reset drift state to defaults
//
// Resets all drift state variables to their initial values.
// Called at the start of each race or when the AI kart is respawned.
// ---------------------------------------------------------------------------
void AIDrift::init() {
    m_state = DRIFT_NONE;
    m_driftDirection = 0.0f;
    m_mtCharge = 0.0f;
    m_mtLevel = 0;
    m_driftTimer = 0.0f;
    m_steerInput = 0.0f;
}

// ---------------------------------------------------------------------------
// getDriftType — Returns the current drift type as a string
//
// Returns "NONE" if not drifting, "LEFT" for leftward drifts,
// "RIGHT" for rightward drifts.
// ---------------------------------------------------------------------------
const char* AIDrift::getDriftType() const {
    if (m_state == DRIFT_NONE) return "NONE";
    if (m_driftDirection < 0.0f) return "LEFT";
    if (m_driftDirection > 0.0f) return "RIGHT";
    return "NONE";
}

// ---------------------------------------------------------------------------
// calcExitPoint — Compute the optimal point to release the drift
//
// Estimates where the AI should end its drift based on the current
// road context. The exit point is projected along the forward
// direction from the AI's current position.
// ---------------------------------------------------------------------------
void AIDrift::calcExitPoint(AIContext* ctx, f32* outX, f32* outZ) const {
    if (!ctx || !outX || !outZ) return;

    if (m_state != DRIFT_ACTIVE && m_state != DRIFT_START) {
        *outX = ctx->position.x;
        *outZ = ctx->position.z;
        return;
    }

    // Estimate how long until MT is ready
    f32 remainingCharge = MT_LEVEL_3_THRESHOLD - m_mtCharge;
    if (remainingCharge < 0.0f) remainingCharge = 0.0f;
    f32 timeToMT = remainingCharge / MT_CHARGE_RATE;

    // Project the exit point forward at current speed
    f32 dist = ctx->speed * timeToMT;
    *outX = ctx->position.x + ctx->forward.x * dist;
    *outZ = ctx->position.z + ctx->forward.z * dist;
}

// ---------------------------------------------------------------------------
// getDriftAngle — Get the current drift angle in radians
//
// Returns the absolute value of the current drift steering angle.
// During ACTIVE state, this oscillates as the AI waggles.
// ---------------------------------------------------------------------------
f32 AIDrift::getDriftAngle() const {
    if (m_state != DRIFT_ACTIVE && m_state != DRIFT_START) {
        return 0.0f;
    }
    f32 angle = m_steerInput;
    if (angle < 0.0f) angle = -angle;
    return angle;
}

// ---------------------------------------------------------------------------
// getOptimalRelease — Get the optimal MT release timing
//
// Returns the estimated time in seconds until the MT charge
// reaches level 3. Returns 0.0 if not drifting or already at max.
// ---------------------------------------------------------------------------
f32 AIDrift::getOptimalRelease() const {
    if (m_state != DRIFT_ACTIVE) return 0.0f;

    f32 remainingCharge = MT_LEVEL_3_THRESHOLD - m_mtCharge;
    if (remainingCharge <= 0.0f) return 0.0f;
    return remainingCharge / MT_CHARGE_RATE;
}

} // namespace Enemy