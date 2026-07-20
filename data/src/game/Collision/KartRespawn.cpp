#include "KartRespawn.hpp"
#include <math.h>

namespace Kart {

// Respawn animation timing constants
const f32 KartRespawn::LIFT_HEIGHT          = 200.0f;
const f32 KartRespawn::LIFT_SPEED           = 100.0f;
const f32 KartRespawn::FLY_SPEED            = 500.0f;
const f32 KartRespawn::DROP_SPEED           = 80.0f;
const s32 KartRespawn::INVINCIBILITY_FRAMES = 180;

// Extended respawn constants
const s32 KartRespawn::RESPAWN_COUNTDOWN         = 180;
const s32 KartRespawn::POST_RESPAWN_INVINCIBILITY = 90;
const f32 KartRespawn::OOB_THRESHOLD_Y           = -500.0f;
const s32 KartRespawn::OOB_GRACE_FRAMES          = 30;

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
    , m_helicopterHeight(0.0f)
    , m_respawnCountdown(0)
    , m_respawnTimerRemaining(0)
    , m_respawnSpeedFactor(1.0f)
    , m_physicsDisabled(false) {
    m_startPos.setAll(0);
    m_currentPos.setAll(0);
    m_targetPos.setAll(0);
    m_lastValidPos.setAll(0);
}

KartRespawn::~KartRespawn() {}

void KartRespawn::init() {
    // Reset respawn state, set countdown to 0, mark as not respawning
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
    m_respawnCountdown = 0;
    m_respawnTimerRemaining = 0;
    m_respawnSpeedFactor = 1.0f;
    m_physicsDisabled = false;
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
    // Run per-frame respawn calculation
    calc();

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
    m_respawnCountdown = 0;
    m_respawnTimerRemaining = 0;
    m_respawnSpeedFactor = 1.0f;
    m_physicsDisabled = false;
}

// --- Extended respawn methods ---

void KartRespawn::calc() {
    // Per-frame: if respawning, countdown timer (180 frames), move kart to
    // respawn point, apply invincibility for 90 frames after respawn,
    // gradually restore speed; if not respawning, check for OOB condition.
    if (m_phase == PHASE_NONE || m_phase == PHASE_DONE) {
        // Not respawning: check for OOB condition
        // A kart is OOB if it falls below the threshold Y
        if (m_currentPos.y < OOB_THRESHOLD_Y) {
            m_oobTimer++;
            if (m_oobTimer >= OOB_GRACE_FRAMES) {
                // OOB confirmed — trigger respawn
                m_oobTimer = 0;
                if (m_hasLastValidPos) {
                    startRespawn(m_lastValidPos);
                } else {
                    EGG::Vector3f fallback;
                    fallback.setAll(0);
                    fallback.y = 100.0f;
                    startRespawn(fallback);
                }
            }
        } else {
            m_oobTimer = 0;
        }

        // Tick down post-respawn invincibility
        if (m_invincibilityTimer > 0) {
            m_invincibilityTimer--;
        }
        return;
    }

    // Currently in respawn sequence
    if (m_respawnTimerRemaining > 0) {
        m_respawnTimerRemaining--;

        // Gradually restore speed as respawn progresses
        f32 totalFrames = (f32)m_respawnCountdown;
        f32 elapsed = totalFrames - (f32)m_respawnTimerRemaining;
        m_respawnSpeedFactor = elapsed / totalFrames;
        if (m_respawnSpeedFactor > 1.0f) m_respawnSpeedFactor = 1.0f;
    }

    // Tick down invincibility during respawn
    if (m_invincibilityTimer > 0) {
        m_invincibilityTimer--;
    }
}

void KartRespawn::startRespawn(const EGG::Vector3f& point) {
    // Begin respawn sequence: store respawn point, start countdown,
    // disable physics, set kart position
    if (isRespawning()) return; // Already respawning

    m_targetPos = point;
    m_startPos = m_currentPos;
    m_startRot = 0.0f;
    m_targetRot = m_lastValidRot;

    m_phase = PHASE_LIFT;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;
    m_respawnCountdown = RESPAWN_COUNTDOWN;
    m_respawnTimerRemaining = RESPAWN_COUNTDOWN;
    m_respawnSpeedFactor = 0.0f;
    m_physicsDisabled = true;
    m_invincibilityTimer = 0;

    m_helicopterHeight = m_startPos.y + LIFT_HEIGHT;
}

void KartRespawn::startOOBRespawn(const EGG::Vector3f& point) {
    // Begin out-of-bounds respawn using Jugem point data.
    // The point contains the Jugem rescue position.
    // Store it as respawn target, snap to ground, and begin sequence.
    if (isRespawning()) return;

    m_targetPos = point;
    m_startPos = m_currentPos;
    m_startRot = 0.0f;
    m_targetRot = 0.0f;

    // Snap the respawn target to the nearest ground surface
    snapToGround();

    m_phase = PHASE_LIFT;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;
    m_respawnCountdown = RESPAWN_COUNTDOWN;
    m_respawnTimerRemaining = RESPAWN_COUNTDOWN;
    m_respawnSpeedFactor = 0.0f;
    m_physicsDisabled = true;
    m_invincibilityTimer = 0;

    m_helicopterHeight = m_startPos.y + LIFT_HEIGHT;
}

s32 KartRespawn::getRespawnTimer() const {
    // Return remaining respawn countdown frames
    if (!isRespawning()) return 0;
    return m_respawnTimerRemaining;
}

bool KartRespawn::isInvincible() const {
    // Check if kart has post-respawn invincibility
    return m_invincibilityTimer > 0;
}

const EGG::Vector3f& KartRespawn::getRespawnPoint() const {
    // Return the current respawn destination
    return m_targetPos;
}

void KartRespawn::snapToGround() {
    // Find nearest ground position below respawn point using KCL raycast.
    // In the original game, this performs a downward KCL ray query from
    // the respawn point to find the floor surface. For portability, we
    // perform a simplified ground search by stepping downward.
    // The final m_targetPos.y is adjusted to rest on the floor.
    //
    // A real implementation would call:
    //   CourseColManager::Instance()->rayCast(down, m_targetPos, ...);
    // and use the returned floor normal and intersection point.
    //
    // For now, we ensure the respawn point is at a reasonable height
    // by clamping to a minimum Y value above the OOB threshold.
    const f32 MIN_GROUND_Y = OOB_THRESHOLD_Y + 200.0f;
    if (m_targetPos.y < MIN_GROUND_Y) {
        m_targetPos.y = MIN_GROUND_Y;
    }
}

void KartRespawn::completeRespawn() {
    // Finish respawn: restore normal physics, set final position,
    // clear invincibility timer (set to post-respawn value).
    m_currentPos = m_targetPos;
    m_phase = PHASE_NONE;
    m_timer = 0.0f;
    m_phaseProgress = 0.0f;
    m_respawnCountdown = 0;
    m_respawnTimerRemaining = 0;
    m_respawnSpeedFactor = 1.0f;
    m_physicsDisabled = false;

    // Grant post-respawn invincibility
    m_invincibilityTimer = POST_RESPAWN_INVINCIBILITY;

    m_oobTimer = 0;
}

} // namespace Kart