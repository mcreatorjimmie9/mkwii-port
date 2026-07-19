#include "KartBoost.hpp"
#include <math.h>

namespace Kart {

// Boost tuning constants (derived from MKWii gameplay analysis)
const f32 KartBoost::BOOST_PANEL_FACTOR      = 1.5f;
const f32 KartBoost::BOOST_RAMP_FACTOR       = 1.8f;
const f32 KartBoost::BOOST_HALFPIPE_FACTOR   = 1.3f;
const s32 KartBoost::BOOST_PANEL_DURATION    = 30;
const s32 KartBoost::BOOST_RAMP_DURATION     = 45;
const s32 KartBoost::BOOST_HALFPIPE_DURATION = 25;

KartBoost::KartBoost()
    : m_boostType(BOOST_NONE)
    , m_state(STATE_INACTIVE)
    , m_boostTimer(0)
    , m_boostVariant(0)
    , m_boostFactor(1.0f)
    , m_cannonVelY(0.0f)
    , m_cannonPointId(-1)
    , m_cannonTimer(0.0f)
    , m_cannonActive(false) {}

KartBoost::~KartBoost() {}

void KartBoost::init() {
    m_boostType = BOOST_NONE;
    m_state = STATE_INACTIVE;
    m_boostTimer = 0;
    m_boostVariant = 0;
    m_boostFactor = 1.0f;
    m_cannonVelY = 0.0f;
    m_cannonPointId = -1;
    m_cannonTimer = 0.0f;
    m_cannonActive = false;
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

} // namespace Kart