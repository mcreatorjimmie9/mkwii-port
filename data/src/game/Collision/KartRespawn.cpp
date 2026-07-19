#include "KartRespawn.hpp"
#include <math.h>

namespace Kart {

// Respawn animation timing constants
const f32 KartRespawn::LIFT_HEIGHT          = 200.0f;
const f32 KartRespawn::LIFT_SPEED           = 100.0f;
const f32 KartRespawn::FLY_SPEED            = 500.0f;
const f32 KartRespawn::DROP_SPEED           = 80.0f;
const s32 KartRespawn::INVINCIBILITY_FRAMES = 180;

KartRespawn::KartRespawn()
    : m_phase(PHASE_NONE)
    , m_timer(0.0f)
    , m_phaseProgress(0.0f)
    , m_startRot(0.0f)
    , m_targetRot(0.0f)
    , m_lastValidRot(0.0f)
    , m_hasLastValidPos(false)
    , m_invincibilityTimer(0)
    , m_oobTimer(0)
    , m_helicopterHeight(0.0f) {
    m_startPos.setAll(0);
    m_currentPos.setAll(0);
    m_targetPos.setAll(0);
    m_lastValidPos.setAll(0);
}

KartRespawn::~KartRespawn() {}

void KartRespawn::init() {
    m_phase = PHASE_NONE;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;
    m_startPos.setAll(0);
    m_currentPos.setAll(0);
    m_targetPos.setAll(0);
    m_startRot = 0.0f;
    m_targetRot = 0.0f;
    m_lastValidPos.setAll(0);
    m_lastValidRot = 0.0f;
    m_hasLastValidPos = false;
    m_invincibilityTimer = 0;
    m_oobTimer = 0;
    m_helicopterHeight = 0.0f;
}

void KartRespawn::triggerRespawn() {
    if (isRespawning()) return; // Already respawning

    m_phase = PHASE_LIFT;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;

    // Set start position (where kart currently is — off-track)
    m_startPos = m_currentPos;
    m_startRot = 0.0f;

    // Set target position (last valid on-track position)
    if (m_hasLastValidPos) {
        m_targetPos = m_lastValidPos;
        m_targetRot = m_lastValidRot;
    } else {
        // Fallback: respawn at origin (should never happen in normal gameplay)
        m_targetPos.setAll(0);
        m_targetPos.y = 100.0f;
        m_targetRot = 0.0f;
    }

    m_helicopterHeight = m_startPos.y + LIFT_HEIGHT;
    m_invincibilityTimer = 0;
}

void KartRespawn::update(f32 dt) {
    if (m_phase == PHASE_NONE || m_phase == PHASE_DONE) {
        // Tick down invincibility after respawn
        if (m_invincibilityTimer > 0) {
            m_invincibilityTimer--;
        }
        return;
    }

    m_timer += dt;

    switch (m_phase) {
    case PHASE_LIFT: {
        // Lift kart vertically to helicopter height
        f32 liftDist = m_helicopterHeight - m_startPos.y;
        if (liftDist < 0.0f) liftDist = LIFT_HEIGHT;
        m_phaseProgress = (m_currentPos.y - m_startPos.y) / liftDist;

        m_currentPos.y += LIFT_SPEED * dt;

        if (m_currentPos.y >= m_helicopterHeight) {
            m_currentPos.y = m_helicopterHeight;
            m_phase = PHASE_FLY;
            m_timer = 0.0f;
            m_phaseProgress = 0.0f;
        }
        break;
    }

    case PHASE_FLY: {
        // Fly horizontally to the target XZ position
        EGG::Vector3f delta = m_targetPos - m_currentPos;
        delta.y = 0.0f; // Stay at helicopter height
        f32 dist = delta.normalise();

        if (dist < FLY_SPEED * dt) {
            // Close enough — snap to target XZ
            m_currentPos.x = m_targetPos.x;
            m_currentPos.z = m_targetPos.z;
            m_phase = PHASE_DROP;
            m_timer = 0.0f;
            m_phaseProgress = 0.0f;
        } else {
            f32 moveAmt = FLY_SPEED * dt;
            m_currentPos.x += delta.x * moveAmt;
            m_currentPos.z += delta.z * moveAmt;
            m_phaseProgress = m_timer / 1.5f; // Rough progress estimate
        }

        // Smoothly interpolate rotation during flight
        f32 rotDelta = m_targetRot - m_startRot;
        if (rotDelta > 180.0f) rotDelta -= 360.0f;
        if (rotDelta < -180.0f) rotDelta += 360.0f;
        m_startRot += rotDelta * dt * 2.0f;
        break;
    }

    case PHASE_DROP: {
        // Drop kart from helicopter height to ground level
        m_currentPos.y -= DROP_SPEED * dt;
        // Add gravity acceleration feel
        m_currentPos.y -= m_timer * 30.0f * dt;

        if (m_currentPos.y <= m_targetPos.y) {
            m_currentPos.y = m_targetPos.y;
            m_phase = PHASE_RECOVER;
            m_timer = 0.0f;
            m_phaseProgress = 0.0f;
            m_invincibilityTimer = INVINCIBILITY_FRAMES;
        }
        break;
    }

    case PHASE_RECOVER: {
        // Brief recovery phase before returning to normal gameplay
        m_phaseProgress = m_timer / 0.5f;
        if (m_timer >= 0.5f) {
            m_phase = PHASE_DONE;
            // Reset to none after one frame
            m_phase = PHASE_NONE;
        }
        break;
    }

    default:
        m_phase = PHASE_NONE;
        break;
    }
}

void KartRespawn::getRespawnPos(f32* outPos, f32* outRot) {
    if (!outPos) return;
    outPos[0] = m_targetPos.x;
    outPos[1] = m_targetPos.y;
    outPos[2] = m_targetPos.z;
    if (outRot) {
        *outRot = m_targetRot;
    }
}

void KartRespawn::setLastValidPos(const EGG::Vector3f& pos, f32 rot) {
    m_lastValidPos = pos;
    m_lastValidRot = rot;
    m_hasLastValidPos = true;
}

void KartRespawn::forceComplete() {
    m_phase = PHASE_NONE;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;
    m_invincibilityTimer = INVINCIBILITY_FRAMES;
    m_currentPos = m_targetPos;
}

} // namespace Kart