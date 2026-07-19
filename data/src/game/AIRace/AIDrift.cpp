#include "AIDrift.hpp"
#include "AIRoad.hpp"
#include <math.h>

namespace Enemy {

// MT charge tuning (drift for ~2.5 seconds to get level 3 MT)
const f32 AIDrift::MT_CHARGE_RATE         = 1.0f;
const f32 AIDrift::MT_LEVEL_1_THRESHOLD   = 1.0f;
const f32 AIDrift::MT_LEVEL_2_THRESHOLD   = 2.0f;
const f32 AIDrift::MT_LEVEL_3_THRESHOLD   = 2.5f;
const f32 AIDrift::MIN_DRIFT_SPEED        = 40.0f;
const f32 AIDrift::MIN_TURN_ANGLE         = 0.15f; // ~8.6 degrees

AIDrift::AIDrift()
    : m_state(DRIFT_NONE)
    , m_driftDirection(0.0f)
    , m_mtCharge(0.0f)
    , m_mtLevel(0)
    , m_driftTimer(0.0f)
    , m_steerInput(0.0f) {}

AIDrift::~AIDrift() {}

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

void AIDrift::startDrift(f32 direction) {
    if (m_state != DRIFT_NONE) return;

    m_state = DRIFT_START;
    m_driftDirection = direction > 0.0f ? 1.0f : -1.0f;
    m_mtCharge = 0.0f;
    m_mtLevel = 0;
    m_driftTimer = 0.0f;
    m_steerInput = direction;
}

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

        // Update MT level based on charge
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

void AIDrift::endDrift() {
    if (m_state == DRIFT_NONE) return;

    // Release mini-turbo boost
    // The actual speed boost is applied by the AI engine
    m_state = DRIFT_RELEASE;
    m_driftTimer = 0.0f;
}

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

} // namespace Enemy