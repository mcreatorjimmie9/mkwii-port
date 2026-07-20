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

    // --- Item boost methods ---

    /// Per-frame item boost calculation: apply forces, update timers, decay effects.
    void calc();

    /// Activate mushroom boost: 1.5x speed for 180 frames, forward force vector.
    void activateMushroom();

    /// Activate star boost: invincibility, 1.5x speed for 720 frames, wall collision damage.
    void activateStar();

    /// Activate mega mushroom: 2.0x scale, 1.5x speed for 600 frames, invincibility.
    void activateMega();

    /// Activate zipper: instant forward velocity impulse, 1.3x speed for 30 frames.
    void activateZipper();

    /// Activate mini-turbo boost.
    /// @param charge  Charge level (0-600), proportional to boost strength.
    void activateMT(u16 charge);

    /// Activate super mini-turbo boost (stronger than MT).
    /// @param charge  Charge level (0-300), proportional to boost strength.
    void activateSMT(u16 charge);

    /// Activate trick boost after a ramp/air trick.
    /// @param trickType  Trick rotation (e.g. 180, 360, 720 degrees).
    void activateTrickBoost(u16 trickType);

    /// Reset all boost state immediately (called on respawn or race end).
    void clearBoost();

    /// Get current total speed multiplier (product of surface and item boosts).
    /// @return Combined speed multiplier (1.0 = no boost)
    f32 getSpeedMultiplier() const;

    /// Get bitmask of active item boost types.
    /// @return Bitmask of ITEM_BOOST_* flags
    u32 getItemBoostFlags() const;

    /// Check if any boost (surface or item) is currently active.
    bool isActive() const;

    /// Decrement all item boost effect timers, auto-expire when reaching 0.
    void updateTimers();

private:
    enum ItemBoostFlag {
        ITEM_BOOST_MUSHROOM = 0x01,
        ITEM_BOOST_STAR     = 0x02,
        ITEM_BOOST_MEGA     = 0x04,
        ITEM_BOOST_ZIPPER   = 0x08,
        ITEM_BOOST_MT       = 0x10,
        ITEM_BOOST_SMT      = 0x20,
        ITEM_BOOST_TRICK    = 0x40,
    };
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

    // Item boost state
    u32 m_itemBoostFlags;      // Bitmask of active item boosts
    EGG::Vector3f m_boostForce; // Applied item boost force vector
    s32 m_mushroomTimer;       // Mushroom boost timer (frames)
    s32 m_starTimer;           // Star boost timer (frames)
    s32 m_megaTimer;           // Mega mushroom timer (frames)
    s32 m_zipperTimer;         // Zipper boost timer (frames)
    s32 m_mtTimer;             // Mini-turbo timer (frames)
    s32 m_smtTimer;            // Super mini-turbo timer (frames)
    s32 m_trickTimer;          // Trick boost timer (frames)
    u16 m_mtCharge;            // MT charge level (0-600)
    u16 m_smtCharge;           // SMT charge level (0-300)
    u16 m_trickType;           // Trick rotation type (180/360/720)
    f32 m_itemSpeedMult;       // Item-based speed multiplier
    bool m_starInvincible;     // Star invincibility active
    bool m_megaInvincible;     // Mega mushroom invincibility active
    bool m_wallCollisionDmg;   // Star wall collision damage enabled
    f32 m_megaScale;           // Mega mushroom scale factor

    // Item boost tuning constants
    static const f32 MUSHROOM_SPEED_MULT;
    static const f32 STAR_SPEED_MULT;
    static const f32 MEGA_SPEED_MULT;
    static const f32 ZIPPER_SPEED_MULT;
    static const s32 MUSHROOM_DURATION;
    static const s32 STAR_DURATION;
    static const s32 MEGA_DURATION;
    static const s32 ZIPPER_DURATION;
    static const s32 MT_MAX_DURATION;
    static const s32 SMT_MAX_DURATION;
    static const s32 TRICK_DURATION;
    static const f32 TRICK_BASE_BOOST;
    static const f32 MT_CHARGE_SCALE;
    static const f32 SMT_CHARGE_SCALE;
};

} // namespace Kart