#include "KartBoost.hpp"
#include <math.h>

namespace Kart {

// Surface boost tuning constants (derived from MKWii gameplay analysis)
const f32 KartBoost::BOOST_PANEL_FACTOR      = 1.5f;
const f32 KartBoost::BOOST_RAMP_FACTOR       = 1.8f;
const f32 KartBoost::BOOST_HALFPIPE_FACTOR   = 1.3f;
const s32 KartBoost::BOOST_PANEL_DURATION    = 30;
const s32 KartBoost::BOOST_RAMP_DURATION     = 45;
const s32 KartBoost::BOOST_HALFPIPE_DURATION = 25;

// Item boost tuning constants
const f32 KartBoost::MUSHROOM_SPEED_MULT = 1.5f;
const f32 KartBoost::STAR_SPEED_MULT     = 1.5f;
const f32 KartBoost::MEGA_SPEED_MULT     = 1.5f;
const f32 KartBoost::ZIPPER_SPEED_MULT   = 1.3f;
const s32 KartBoost::MUSHROOM_DURATION   = 180;
const s32 KartBoost::STAR_DURATION       = 720;
const s32 KartBoost::MEGA_DURATION       = 600;
const s32 KartBoost::ZIPPER_DURATION     = 30;
const s32 KartBoost::MT_MAX_DURATION     = 60;
const s32 KartBoost::SMT_MAX_DURATION    = 45;
const s32 KartBoost::TRICK_DURATION      = 30;
const f32 KartBoost::TRICK_BASE_BOOST    = 1.2f;
const f32 KartBoost::MT_CHARGE_SCALE     = 0.0015f;
const f32 KartBoost::SMT_CHARGE_SCALE    = 0.003f;

KartBoost::KartBoost()
    : m_boostType(BOOST_NONE)
    , m_state(STATE_INACTIVE)
    , m_boostTimer(0)
    , m_boostVariant(0)
    , m_boostFactor(1.0f)
    , m_cannonVelY(0.0f)
    , m_cannonPointId(-1)
    , m_cannonTimer(0.0f)
    , m_cannonActive(false)
    , m_itemBoostFlags(0)
    , m_mushroomTimer(0)
    , m_starTimer(0)
    , m_megaTimer(0)
    , m_zipperTimer(0)
    , m_mtTimer(0)
    , m_smtTimer(0)
    , m_trickTimer(0)
    , m_mtCharge(0)
    , m_smtCharge(0)
    , m_trickType(0)
    , m_itemSpeedMult(1.0f)
    , m_starInvincible(false)
    , m_megaInvincible(false)
    , m_wallCollisionDmg(false)
    , m_megaScale(1.0f) {
    m_boostForce.setAll(0);
}

KartBoost::~KartBoost() {}

void KartBoost::init() {
    // Reset surface boost state
    m_boostType = BOOST_NONE;
    m_state = STATE_INACTIVE;
    m_boostTimer = 0;
    m_boostVariant = 0;
    m_boostFactor = 1.0f;
    m_cannonVelY = 0.0f;
    m_cannonPointId = -1;
    m_cannonTimer = 0.0f;
    m_cannonActive = false;

    // Reset item boost state: zero boost vectors, clear flags, reset timers
    m_boostForce.setAll(0);
    m_itemBoostFlags = 0;
    m_mushroomTimer = 0;
    m_starTimer = 0;
    m_megaTimer = 0;
    m_zipperTimer = 0;
    m_mtTimer = 0;
    m_smtTimer = 0;
    m_trickTimer = 0;
    m_mtCharge = 0;
    m_smtCharge = 0;
    m_trickType = 0;
    m_itemSpeedMult = 1.0f;
    m_starInvincible = false;
    m_megaInvincible = false;
    m_wallCollisionDmg = false;
    m_megaScale = 1.0f;
}

void KartBoost::onBoostPad() {
    // Boost panels are flat surfaces that give a speed multiplier for a duration
    m_boostType = BOOST_PANEL;
    m_state = STATE_ACTIVE;
    m_boostTimer = BOOST_PANEL_DURATION;
    m_boostVariant = 0;
    m_boostFactor = BOOST_PANEL_FACTOR;
    m_cannonActive = false;
}

void KartBoost::onBoostRamp(s32 variant) {
    // Boost ramps launch the kart at an angle with speed boost
    // Variant determines the ramp angle/force (different for each course object)
    m_boostType = BOOST_RAMP;
    m_state = STATE_ACTIVE;
    m_boostTimer = BOOST_RAMP_DURATION;
    m_boostVariant = variant;
    m_boostFactor = BOOST_RAMP_FACTOR;
    m_cannonActive = false;
}

void KartBoost::onJumpPad(s32 variant) {
    // Jump pads launch the kart upward with a speed boost
    // Variant 0 = standard jump, variant 1 = high jump, etc.
    m_boostType = BOOST_JUMP;
    m_state = STATE_ACTIVE;
    m_boostTimer = 20; // Brief boost after landing
    m_boostVariant = variant;
    m_boostFactor = BOOST_RAMP_FACTOR; // Same boost as ramp
    m_cannonActive = false;
}

void KartBoost::onCannon(s32 cannonPointId) {
    // Cannon mode: kart enters a fixed parabolic trajectory to the target point
    m_boostType = BOOST_CANNON;
    m_state = STATE_ACTIVE;
    m_boostTimer = 120; // Long duration — cannon flight
    m_boostVariant = 0;
    m_cannonPointId = cannonPointId;
    m_cannonVelY = 80.0f; // Upward launch velocity
    m_cannonTimer = 0.0f;
    m_cannonActive = true;
    m_boostFactor = 1.0f; // Cannon uses fixed trajectory, not multiplier
}

void KartBoost::onHalfpipe() {
    // Halfpipe boost: brief speed boost during halfpipe trick
    m_boostType = BOOST_HALFPIPE;
    m_state = STATE_ACTIVE;
    m_boostTimer = BOOST_HALFPIPE_DURATION;
    m_boostVariant = 0;
    m_boostFactor = BOOST_HALFPIPE_FACTOR;
    m_cannonActive = false;
}

void KartBoost::update(f32 dt) {
    // Run item boost per-frame calc
    calc();

    if (m_state == STATE_INACTIVE) {
        m_boostFactor = 1.0f;
        return;
    }

    if (m_boostTimer > 0) {
        m_boostTimer--;

        if (m_cannonActive) {
            // Cannon flight: update cannon timer and vertical velocity
            m_cannonTimer += dt;
            // Parabolic arc: velY decreases over time due to gravity
            m_cannonVelY -= 1.0f * dt; // Gravity pulls cannon trajectory down
            if (m_cannonVelY < 0.0f && m_cannonTimer > 1.0f) {
                // Cannon flight complete — end boost
                endBoost();
                return;
            }
        }

        // Smoothly ramp boost factor back to 1.0 as timer expires
        if (m_boostTimer < 10 && !m_cannonActive) {
            f32 t = (f32)m_boostTimer / 10.0f;
            switch (m_boostType) {
            case BOOST_PANEL:
                m_boostFactor = 1.0f + (BOOST_PANEL_FACTOR - 1.0f) * t;
                break;
            case BOOST_RAMP:
            case BOOST_JUMP:
                m_boostFactor = 1.0f + (BOOST_RAMP_FACTOR - 1.0f) * t;
                break;
            case BOOST_HALFPIPE:
                m_boostFactor = 1.0f + (BOOST_HALFPIPE_FACTOR - 1.0f) * t;
                break;
            default:
                break;
            }
        }
    } else {
        // Timer expired — transition to cooldown
        m_state = STATE_COOLDOWN;
        m_boostFactor = 1.0f;
        m_cannonActive = false;
        m_boostType = BOOST_NONE;
    }
}

f32 KartBoost::getBoostFactor() const {
    return m_boostFactor;
}

bool KartBoost::isBoosting() const {
    return m_state == STATE_ACTIVE;
}

void KartBoost::endBoost() {
    m_state = STATE_COOLDOWN;
    m_boostTimer = 0;
    m_boostFactor = 1.0f;
    m_cannonActive = false;
    m_cannonVelY = 0.0f;
    m_boostType = BOOST_NONE;
}

// --- Item boost methods ---

void KartBoost::calc() {
    // Per-frame: update item boost timers, compute item speed multiplier,
    // decay trick boost, apply MT/SMT when released.
    updateTimers();

    // Compute the item speed multiplier from all active item boosts
    m_itemSpeedMult = 1.0f;

    if (m_itemBoostFlags & ITEM_BOOST_MUSHROOM) {
        // Mushroom provides flat 1.5x speed multiplier for duration
        f32 t = (f32)m_mushroomTimer / (f32)MUSHROOM_DURATION;
        m_itemSpeedMult *= 1.0f + (MUSHROOM_SPEED_MULT - 1.0f) * t;
    }

    if (m_itemBoostFlags & ITEM_BOOST_STAR) {
        // Star provides flat 1.5x speed multiplier for full duration
        f32 t = (f32)m_starTimer / (f32)STAR_DURATION;
        m_itemSpeedMult *= 1.0f + (STAR_SPEED_MULT - 1.0f) * t;
    }

    if (m_itemBoostFlags & ITEM_BOOST_MEGA) {
        // Mega mushroom: 1.5x speed, no decay — full power until expiry
        m_itemSpeedMult *= MEGA_SPEED_MULT;
    }

    if (m_itemBoostFlags & ITEM_BOOST_ZIPPER) {
        // Zipper: brief 1.3x speed boost with smooth ramp-down
        f32 t = (f32)m_zipperTimer / (f32)ZIPPER_DURATION;
        m_itemSpeedMult *= 1.0f + (ZIPPER_SPEED_MULT - 1.0f) * t;
    }

    if (m_itemBoostFlags & ITEM_BOOST_MT) {
        // Mini-turbo: speed boost proportional to charge level, decays over duration
        f32 chargeFactor = 1.0f + (f32)m_mtCharge * MT_CHARGE_SCALE;
        f32 t = (f32)m_mtTimer / (f32)MT_MAX_DURATION;
        m_itemSpeedMult *= 1.0f + (chargeFactor - 1.0f) * t;
    }

    if (m_itemBoostFlags & ITEM_BOOST_SMT) {
        // Super mini-turbo: stronger than MT, proportional to charge
        f32 chargeFactor = 1.0f + (f32)m_smtCharge * SMT_CHARGE_SCALE;
        f32 t = (f32)m_smtTimer / (f32)SMT_MAX_DURATION;
        m_itemSpeedMult *= 1.0f + (chargeFactor - 1.0f) * t;
    }

    if (m_itemBoostFlags & ITEM_BOOST_TRICK) {
        // Trick boost: short speed boost based on trick type, decays
        f32 trickMult = TRICK_BASE_BOOST;
        if (m_trickType >= 720) {
            trickMult = TRICK_BASE_BOOST + 0.15f; // 720° trick strongest
        } else if (m_trickType >= 360) {
            trickMult = TRICK_BASE_BOOST + 0.07f; // 360° trick medium
        }
        // else 180° trick uses base
        f32 t = (f32)m_trickTimer / (f32)TRICK_DURATION;
        m_itemSpeedMult *= 1.0f + (trickMult - 1.0f) * t;
    }
}

void KartBoost::activateMushroom() {
    // Set mushroom boost: speed multiplier 1.5x for 180 frames,
    // set boost force vector in forward direction (X axis by convention)
    m_itemBoostFlags |= ITEM_BOOST_MUSHROOM;
    m_mushroomTimer = MUSHROOM_DURATION;
    m_boostForce.x = 1.0f;
    m_boostForce.y = 0.0f;
    m_boostForce.z = 0.0f;
}

void KartBoost::activateStar() {
    // Set star boost: invincibility flag, 1.5x speed for 720 frames,
    // enable wall collision damage to other karts
    m_itemBoostFlags |= ITEM_BOOST_STAR;
    m_starTimer = STAR_DURATION;
    m_starInvincible = true;
    m_wallCollisionDmg = true;
}

void KartBoost::activateMega() {
    // Set mega mushroom: scale 2.0x, 1.5x speed for 600 frames, invincibility
    m_itemBoostFlags |= ITEM_BOOST_MEGA;
    m_megaTimer = MEGA_DURATION;
    m_megaScale = 2.0f;
    m_megaInvincible = true;
}

void KartBoost::activateZipper() {
    // Instant speed boost: forward velocity impulse (X direction),
    // brief speed multiplier for 30 frames
    m_itemBoostFlags |= ITEM_BOOST_ZIPPER;
    m_zipperTimer = ZIPPER_DURATION;
    m_boostForce.x = 1.5f; // Forward impulse magnitude
    m_boostForce.y = 0.0f;
    m_boostForce.z = 0.0f;
}

void KartBoost::activateMT(u16 charge) {
    // Activate mini-turbo: speed boost proportional to charge level (0-600),
    // duration ~60 frames proportional to charge
    m_itemBoostFlags |= ITEM_BOOST_MT;
    m_mtCharge = charge > 600 ? 600 : charge;
    // Duration scales with charge: full charge = MT_MAX_DURATION
    m_mtTimer = (s32)((f32)m_mtCharge / 600.0f * (f32)MT_MAX_DURATION);
    if (m_mtTimer < 10) m_mtTimer = 10; // Minimum duration for any charge
}

void KartBoost::activateSMT(u16 charge) {
    // Activate super mini-turbo: stronger than MT,
    // speed boost proportional to charge (0-300)
    m_itemBoostFlags |= ITEM_BOOST_SMT;
    m_smtCharge = charge > 300 ? 300 : charge;
    // Duration scales with charge: full charge = SMT_MAX_DURATION
    m_smtTimer = (s32)((f32)m_smtCharge / 300.0f * (f32)SMT_MAX_DURATION);
    if (m_smtTimer < 10) m_smtTimer = 10; // Minimum duration
}

void KartBoost::activateTrickBoost(u16 trickType) {
    // Trick boost: short speed boost based on trick type (180°/360°/720°),
    // duration ~30 frames
    m_itemBoostFlags |= ITEM_BOOST_TRICK;
    m_trickTimer = TRICK_DURATION;
    m_trickType = trickType;
}

void KartBoost::clearBoost() {
    // Reset all boost state immediately (called on respawn or race end)
    m_boostForce.setAll(0);
    m_itemBoostFlags = 0;
    m_mushroomTimer = 0;
    m_starTimer = 0;
    m_megaTimer = 0;
    m_zipperTimer = 0;
    m_mtTimer = 0;
    m_smtTimer = 0;
    m_trickTimer = 0;
    m_mtCharge = 0;
    m_smtCharge = 0;
    m_trickType = 0;
    m_itemSpeedMult = 1.0f;
    m_starInvincible = false;
    m_megaInvincible = false;
    m_wallCollisionDmg = false;
    m_megaScale = 1.0f;

    // Also clear surface boosts
    endBoost();
    m_boostFactor = 1.0f;
}

f32 KartBoost::getSpeedMultiplier() const {
    // Return current total speed multiplier (product of all active boosts)
    return m_boostFactor * m_itemSpeedMult;
}

u32 KartBoost::getItemBoostFlags() const {
    return m_itemBoostFlags;
}

bool KartBoost::isActive() const {
    // Check if any boost (surface or item) is currently active
    if (m_state == STATE_ACTIVE) return true;
    return m_itemBoostFlags != 0;
}

void KartBoost::updateTimers() {
    // Decrement all item boost effect timers, auto-expire when reaching 0

    if (m_itemBoostFlags & ITEM_BOOST_MUSHROOM) {
        m_mushroomTimer--;
        if (m_mushroomTimer <= 0) {
            m_mushroomTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_MUSHROOM;
            m_boostForce.x = 0.0f;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_STAR) {
        m_starTimer--;
        if (m_starTimer <= 0) {
            m_starTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_STAR;
            m_starInvincible = false;
            m_wallCollisionDmg = false;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_MEGA) {
        m_megaTimer--;
        if (m_megaTimer <= 0) {
            m_megaTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_MEGA;
            m_megaInvincible = false;
            m_megaScale = 1.0f;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_ZIPPER) {
        m_zipperTimer--;
        if (m_zipperTimer <= 0) {
            m_zipperTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_ZIPPER;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_MT) {
        m_mtTimer--;
        if (m_mtTimer <= 0) {
            m_mtTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_MT;
            m_mtCharge = 0;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_SMT) {
        m_smtTimer--;
        if (m_smtTimer <= 0) {
            m_smtTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_SMT;
            m_smtCharge = 0;
        }
    }

    if (m_itemBoostFlags & ITEM_BOOST_TRICK) {
        m_trickTimer--;
        if (m_trickTimer <= 0) {
            m_trickTimer = 0;
            m_itemBoostFlags &= ~ITEM_BOOST_TRICK;
            m_trickType = 0;
        }
    }
}

} // namespace Kart