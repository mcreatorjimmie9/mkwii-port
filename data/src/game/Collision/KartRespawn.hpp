#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>

namespace Kart {

class KartDynamics;

/// KartRespawn — Respawn / Rescue system
/// Manages the rescue helicopter animation state machine that plays
/// when a kart falls off-course or is eliminated. The kart is lifted
/// by a helicopter, transported to the last valid position, and dropped.
/// Address range: 0x804Bxxxx
class KartRespawn {
public:
    enum RespawnPhase {
        PHASE_NONE      = 0,  // Not respawning
        PHASE_LIFT      = 1,  // Helicopter lifts kart up
        PHASE_FLY       = 2,  // Helicopter carries kart to respawn point
        PHASE_DROP      = 3,  // Helicopter drops kart
        PHASE_RECOVER   = 4,  // Brief invincibility after respawn
        PHASE_DONE      = 5,  // Respawn complete
    };

    KartRespawn();
    ~KartRespawn();

    /// Initialize respawn system.
    void init();

    /// Begin the respawn sequence. Called when kart falls OOB or is eliminated.
    void triggerRespawn();

    /// Per-frame respawn animation update.
    /// @param dt  Frame delta time
    void update(f32 dt);

    /// Calculate the respawn position and rotation.
    /// Uses the last valid Jugem point or nearest on-track position.
    /// @param outPos  Output XYZ position (3 floats)
    /// @param outRot  Output Y rotation angle (1 float, radians)
    void getRespawnPos(f32* outPos, f32* outRot);

    /// Check if the kart is currently in the respawn sequence.
    bool isRespawning() const { return m_phase != PHASE_NONE && m_phase != PHASE_DONE; }

    /// Get the current respawn phase.
    RespawnPhase getPhase() const { return m_phase; }

    /// Get the invincibility timer (frames remaining after respawn).
    s32 getInvincibilityTimer() const { return m_invincibilityTimer; }

    /// Set the last known valid position (for respawn targeting).
    void setLastValidPos(const EGG::Vector3f& pos, f32 rot);

    /// Force-complete the respawn (e.g. on course reload).
    void forceComplete();

    // --- Extended respawn methods ---

    /// Per-frame respawn calculation: countdown, movement, invincibility, OOB check.
    void calc();

    /// Begin respawn sequence: store respawn point, start countdown, disable physics.
    /// @param point  World position to respawn the kart at
    void startRespawn(const EGG::Vector3f& point);

    /// Begin out-of-bounds respawn using Jugem point data.
    /// @param point  Jugem rescue point containing position and rotation
    void startOOBRespawn(const EGG::Vector3f& point);

    /// Return remaining respawn countdown frames.
    /// @return Frames until respawn completes (0 if not respawning)
    s32 getRespawnTimer() const;

    /// Check if kart has post-respawn invincibility.
    /// @return true if invincibility frames remain
    bool isInvincible() const;

    /// Return the current respawn destination.
    /// @return Target position the kart is being moved to
    const EGG::Vector3f& getRespawnPoint() const;

    /// Find nearest ground position below respawn point using KCL raycast.
    /// Adjusts m_targetPos.y downward to rest on the nearest floor surface.
    void snapToGround();

    /// Finish respawn: restore normal physics, set final position, clear invincibility timer.
    void completeRespawn();

private:
    static const f32 LIFT_HEIGHT;          // Height to lift kart before flying
    static const f32 LIFT_SPEED;           // Vertical lift speed
    static const f32 FLY_SPEED;            // Horizontal flight speed to target
    static const f32 DROP_SPEED;           // Descent speed at drop point
    static const s32 INVINCIBILITY_FRAMES; // Post-respawn invincibility

    RespawnPhase m_phase;          // Current animation phase
    f32 m_timer;                   // Phase timer
    f32 m_phaseProgress;           // 0.0-1.0 progress within current phase

    EGG::Vector3f m_startPos;      // Position where kart fell off
    EGG::Vector3f m_currentPos;    // Current kart position during animation
    EGG::Vector3f m_targetPos;     // Respawn target position
    f32 m_startRot;                // Rotation at fall-off point
    f32 m_targetRot;               // Rotation at respawn point

    EGG::Vector3f m_lastValidPos;  // Last known on-track position
    f32 m_lastValidRot;            // Last known on-track rotation
    bool m_hasLastValidPos;        // Whether last valid pos is set

    s32 m_invincibilityTimer;      // Invincibility frames after respawn
    s32 m_oobTimer;                // Consecutive frames OOB before triggering
    f32 m_helicopterHeight;        // Helicopter flight altitude
    s32 m_respawnCountdown;        // Total respawn countdown frames (180)
    s32 m_respawnTimerRemaining;   // Remaining frames in respawn sequence
    f32 m_respawnSpeedFactor;      // Speed restoration factor (0.0→1.0)
    bool m_physicsDisabled;        // Whether kart physics are disabled during respawn

    static const s32 RESPAWN_COUNTDOWN;      // Total respawn sequence frames
    static const s32 POST_RESPAWN_INVINCIBILITY; // Invincibility after respawn
    static const f32 OOB_THRESHOLD_Y;        // Y threshold for OOB detection
    static const s32 OOB_GRACE_FRAMES;       // Frames before OOB triggers respawn
};

} // namespace Kart