#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

/// KartBoost — Boost / Ramp / Jump Pad / Cannon / Halfpipe state machine
/// Manages all speed-boosting surface interactions for a kart.
/// Each boost type has its own timer and physics behavior.
/// Address range: 0x804Bxxxx
class KartBoost {
public:
    enum BoostType {
        BOOST_NONE   = 0,
        BOOST_PANEL  = 1,  // Flat boost panel on ground
        BOOST_RAMP   = 2,  // Angled boost ramp
        BOOST_JUMP   = 3,  // Jump pad (launches kart upward)
        BOOST_CANNON = 4,  // Cannon (fixed trajectory)
        BOOST_HALFPIPE = 5, // Halfpipe trick boost
    };

    enum BoostState {
        STATE_INACTIVE  = 0,
        STATE_ACTIVE    = 1,
        STATE_COOLDOWN  = 2,
    };

    KartBoost();
    ~KartBoost();

    /// Initialize boost state machine to default.
    void init();

    /// Activate boost panel (type 0 in KCL). Flat ground speed boost.
    void onBoostPad();

    /// Activate boost ramp (type 1 in KCL). Angled launch + speed boost.
    /// @param variant  KCL variant determining ramp angle/force
    void onBoostRamp(s32 variant);

    /// Activate jump pad (type 2 in KCL). Launches kart upward.
    /// @param variant  KCL variant determining jump height
    void onJumpPad(s32 variant);

    /// Activate cannon. Kart enters fixed trajectory to target.
    /// @param cannonPointId  Jugem point ID for cannon destination
    void onCannon(s32 cannonPointId);

    /// Activate halfpipe boost. Applied during halfpipe trick.
    void onHalfpipe();

    /// Per-frame boost timer/physics update.
    /// @param dt  Frame delta time
    void update(f32 dt);

    /// Get the current speed multiplier from any active boost.
    /// @return Speed multiplier (1.0 = no boost, >1.0 = boosted)
    f32 getBoostFactor() const;

    /// Check if the kart is currently in any boost state.
    bool isBoosting() const;

    /// Get the active boost type.
    BoostType getBoostType() const { return m_boostType; }

    /// Get the boost timer (frames remaining).
    s32 getBoostTimer() const { return m_boostTimer; }

    /// Get the boost variant (ramp type, jump pad type, etc.).
    s32 getBoostVariant() const { return m_boostVariant; }

    /// Check if currently in cannon mode.
    bool isInCannon() const { return m_boostType == BOOST_CANNON && m_state == STATE_ACTIVE; }

    /// Force-end the current boost (e.g. on collision).
    void endBoost();

private:
    static const f32 BOOST_PANEL_FACTOR;      // Speed multiplier from boost panels
    static const f32 BOOST_RAMP_FACTOR;       // Speed multiplier from boost ramps
    static const f32 BOOST_HALFPIPE_FACTOR;   // Speed multiplier from halfpipe
    static const s32 BOOST_PANEL_DURATION;    // Frames of boost panel effect
    static const s32 BOOST_RAMP_DURATION;     // Frames of boost ramp effect
    static const s32 BOOST_HALFPIPE_DURATION; // Frames of halfpipe boost

    BoostType m_boostType;    // Currently active boost type
    BoostState m_state;       // State machine state
    s32 m_boostTimer;         // Frames remaining in boost
    s32 m_boostVariant;       // KCL variant for the active boost
    f32 m_boostFactor;        // Current speed multiplier
    f32 m_cannonVelY;         // Cannon vertical velocity component
    s32 m_cannonPointId;      // Jugem point ID for cannon target
    f32 m_cannonTimer;        // Cannon flight timer
    bool m_cannonActive;      // Currently in cannon flight
};

} // namespace Kart