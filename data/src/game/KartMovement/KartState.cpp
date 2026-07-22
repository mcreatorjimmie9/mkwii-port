#include "KartState.hpp"
#include "KartSettings.hpp"

namespace Kart {

// Extern accessor for player type from race config
// @addr 0x80590b30
extern "C" u32 getPlayerType(u8 playerIdx);

// Stubs for online player type checks (always false in local/offline mode)
bool isPlayerOnlineLocal = false;
bool isPlayerOnlineRemote = false;

// Stub: getPlayerType — returns LOCAL for all players in offline mode
// In the real game, this reads from System::RaceConfig::Scenario::getPlayer(index)
extern "C" u32 getPlayerType(u8 playerIdx) {
    (void)playerIdx;
    return 0; // 0 = LOCAL player (not online remote)
}

// 0x8059689c - __ct__Q24Kart9KartStateFPQ24Kart12KartSettings
// Size: 424 bytes
// Calls: 0x80590a9c (x2), 0x80590d38
KartState::KartState(KartSettings* settings) {
    using namespace System;

    mAirtime = 0;
    _24 = 0.0f;
    mCannonPointId = 0;
    mStartBoostIdx = 0;
    mUp.setAll(0);
    mProxy = nullptr;

    // Initialize extended state
    mDriftState = 0;
    mStarTimer = 0;
    mMegaTimer = 0;
    mInkTimer = 0;
    mSquishTimer = 0;
    mStunTimer = 0;

    // Determine player type from race config.
    // Uses the extern accessor function matching the MKW binary's
    // pattern at 0x80590a9c / 0x80590b30 for reading race player config.
    // @addr 0x80590a9c (getPlayerId), 0x80590b30 (getPlayerType accessor)
    u32 playerType = getPlayerType(settings->playerIdx);
    switch (playerType) {
    case 0: // TYPE_REAL_LOCAL
        set(KART_FLAG_LOCAL);
        break;
    case 1: // TYPE_CPU
        set(KART_FLAG_CPU);
        break;
    case 3: // TYPE_GHOST
        set(KART_FLAG_GHOST);
        break;
    default:
        break;
    }

    if (isPlayerOnlineLocal) {
        set(KART_FLAG_ONLINE_LOCAL);
    } else if (isPlayerOnlineRemote) {
        set(KART_FLAG_ONLINE_REMOTE);
    }

    // KPadController* controller = RaceManager::spInstance->players[settings->playerIdx]->kpadPlayer->mController;
    // bool isAuto = controller ? controller->mDriftIsAuto : false;
    // if (isAuto) set(KART_FLAG_AUTOMATIC_DRIFT);
}

KartState::~KartState() {}

// 0x80596a44 - init__Q24Kart9KartStateFv
// Size: 56 bytes
// Calls: 0x80590cfc
void KartState::init() {
    // Full initialization: reset all state to normal driving
    // Clear all effect flags and timers
    mFlags.reset();
    mDriftState = 0;
    mStarTimer = 0;
    mMegaTimer = 0;
    mInkTimer = 0;
    mSquishTimer = 0;
    mStunTimer = 0;

    // Reset core state fields
    mAirtime = 0;
    _24 = 0.0f;
    mCannonPointId = 0;
    mBoostRampType = 0;
    mJumpPadType = 0;
    _7c = 0.0f;
    mHalfpipeInvisibilityTimer = 0;
    mStartBoostCharge = 0.0f;
    mStartBoostIdx = 0;
    mStick.set(0.0f, 0.0f);
    mWipeState = 0;
    mWipeFrame = 0;
    mUp.setAll(0);
    _40.setAll(0);
    _4c.setAll(0);
    m_a8.setAll(0);
    mHwgTimer = 0;
    m_70 = 0;

    // Calls global function 0x80590cfc (likely KartState-specific init)
    // This may set up initial race state flags
}

// 0x80596a7c - reset__Q24Kart9KartStateFv
// Size: 160 bytes
// Calls: 0x8059040c
void KartState::reset() {
    // Resets state flags, timers, and position-related fields
    // Calls 0x8059040c (likely RKBitField::reset or similar)
    //
    // From disasm:
    // 1. Call 0x8059040c (reset helper on proxy object)
    // 2. Zero mAirtime
    // 3. Zero _24
    // 4. Zero mCannonPointId
    // 5. Zero mBoostRampType, mJumpPadType
    // 6. Zero mHalfpipeInvisibilityTimer
    // 7. Zero mStartBoostCharge, mStartBoostIdx
    // 8. Reset mStick
    // 9. Zero mWipeState, mWipeFrame
    // 10. Zero mUp, _40, _4c, m_a8
    mAirtime = 0;
    _24 = 0.0f;
    mCannonPointId = 0;
    mBoostRampType = 0;
    mJumpPadType = 0;
    _7c = 0.0f;
    mHalfpipeInvisibilityTimer = 0;
    mStartBoostCharge = 0.0f;
    mStartBoostIdx = 0;
    mStick.set(0.0f, 0.0f);
    mWipeState = 0;
    mWipeFrame = 0;
    mUp.setAll(0);
    _40.setAll(0);
    _4c.setAll(0);
    m_a8.setAll(0);

    // Reset extended state
    mDriftState = 0;
    mStarTimer = 0;
    mMegaTimer = 0;
    mInkTimer = 0;
    mSquishTimer = 0;
    mStunTimer = 0;
}

// 0x80596b1c - resetOob__Q24Kart9KartStateFv
// Size: 16 bytes
// Calls: 0x805907bc
void KartState::resetOob() {
    // Resets out-of-bounds specific state
    // Calls global function 0x805907bc (likely clears OOB-related flags)
    // From disasm (16 bytes): just a single function call + return
    reset(KART_FLAG_OOB);
}

void KartState::startWipe(int wipeState) {
    mWipeState = wipeState;
    mWipeFrame = 0;
}

void KartState::resetCollisionFlags() {
    // Reset collision-related bits in the bitfield
    // Keep player type flags, clear physics state flags
    // Clear ground/wall collision flags but preserve identity flags
    reset(KART_FLAG_ALL_WHEELS_COLLISION);
    reset(KART_FLAG_TOUCHING_GROUND);
    reset(KART_FLAG_STICKY_ROAD);
    reset(KART_FLAG_AT_SUSP_LIMIT);
    reset(KART_FLAG_STH_WALL_COL);
    reset(KART_FLAG_DRIFTING_ON_GROUND);
}

// Per-frame update: manage state transitions and tick timers
void KartState::update() {
    // Decrement all effect timers and auto-expire
    updateTimers();

    // Manage wipe state progression
    if (mWipeState != 0) {
        mWipeFrame++;
    }

    // Manage halfpipe invisibility countdown
    if (mHalfpipeInvisibilityTimer > 0) {
        mHalfpipeInvisibilityTimer--;
    }

    // Manage HWG timer (heavy weight growl / shockwave timer)
    if (mHwgTimer > 0) {
        mHwgTimer--;
    }

    // Auto-clear drift state if not on ground
    if (mDriftState != 0 && !on(KART_FLAG_DRIFTING_ON_GROUND)) {
        mDriftState = 0;
    }

    // Manage air start state
    if (on(KART_FLAG_AIR_START)) {
        mAirtime++;
    }
}

// Decrement all effect timers, auto-expire when timer reaches 0
void KartState::updateTimers() {
    // Star power countdown
    if (mStarTimer > 0) {
        mStarTimer--;
        if (mStarTimer == 0) {
            reset(EFFECT_BIT_STAR);
            reset(KART_FLAG_STAR);
        }
    }

    // Mega mushroom countdown
    if (mMegaTimer > 0) {
        mMegaTimer--;
        if (mMegaTimer == 0) {
            reset(EFFECT_BIT_MEGA);
            reset(KART_FLAG_MEGA);
        }
    }

    // Ink effect countdown
    if (mInkTimer > 0) {
        mInkTimer--;
        if (mInkTimer == 0) {
            reset(EFFECT_BIT_INK);
        }
    }

    // Squish countdown
    if (mSquishTimer > 0) {
        mSquishTimer--;
        if (mSquishTimer == 0) {
            reset(EFFECT_BIT_SQUISH);
        }
    }

    // Stun countdown
    if (mStunTimer > 0) {
        mStunTimer--;
        if (mStunTimer == 0) {
            reset(EFFECT_BIT_STUN);
        }
    }
}

// Set drift type: 0=none, 1=outside, 2=inside
void KartState::setDriftState(u8 state) {
    // Clamp to valid range
    if (state > 2) {
        state = 0;
    }
    mDriftState = state;

    // Update the drifting-on-ground flag accordingly
    if (state != 0) {
        set(KART_FLAG_DRIFTING_ON_GROUND);
    } else {
        reset(KART_FLAG_DRIFTING_ON_GROUND);
    }
}

// Return current drift state (0=none, 1=outside, 2=inside)
u8 KartState::getDriftState() const {
    return mDriftState;
}

// Check if currently in any drift state
bool KartState::isDrifting() const {
    return mDriftState != 0;
}

// Activate or deactivate star power
void KartState::setStar(bool active, u32 duration) {
    if (active) {
        set(KART_FLAG_STAR);
        set(EFFECT_BIT_STAR);
        mStarTimer = (duration > 0) ? duration : STAR_DURATION_DEFAULT;
    } else {
        reset(KART_FLAG_STAR);
        reset(EFFECT_BIT_STAR);
        mStarTimer = 0;
    }
}

// Activate or deactivate mega mushroom
void KartState::setMega(bool active, u32 duration) {
    if (active) {
        set(KART_FLAG_MEGA);
        set(EFFECT_BIT_MEGA);
        mMegaTimer = (duration > 0) ? duration : MEGA_DURATION_DEFAULT;
    } else {
        reset(KART_FLAG_MEGA);
        reset(EFFECT_BIT_MEGA);
        mMegaTimer = 0;
    }
}

// Activate or deactivate ink effect
void KartState::setInk(bool active, u32 duration) {
    if (active) {
        set(EFFECT_BIT_INK);
        mInkTimer = (duration > 0) ? duration : INK_DURATION_DEFAULT;
    } else {
        reset(EFFECT_BIT_INK);
        mInkTimer = 0;
    }
}

// Activate or deactivate squish (from being squished by larger player)
void KartState::setSquish(bool active, u32 duration) {
    if (active) {
        set(EFFECT_BIT_SQUISH);
        mSquishTimer = (duration > 0) ? duration : SQUISH_DURATION_DEFAULT;
    } else {
        reset(EFFECT_BIT_SQUISH);
        mSquishTimer = 0;
    }
}

// Check if star or mega is active (invincibility)
bool KartState::isInvincible() const {
    return on(KART_FLAG_STAR) || on(KART_FLAG_MEGA) ||
           on(EFFECT_BIT_STAR) || on(EFFECT_BIT_MEGA) ||
           on(KART_FLAG_RESPAWN_INVINCIBLE);
}

// Check if currently stunned (hit by item or squish)
bool KartState::isStunned() const {
    return on(EFFECT_BIT_STUN) || on(EFFECT_BIT_SQUISH) ||
           mWipeState != 0;
}

// Return bitmask of all active effects
u32 KartState::getActiveEffectMask() const {
    u32 mask = 0;
    if (on(EFFECT_BIT_STAR))   mask |= (1u << 0);
    if (on(EFFECT_BIT_MEGA))   mask |= (1u << 1);
    if (on(EFFECT_BIT_INK))    mask |= (1u << 2);
    if (on(EFFECT_BIT_SQUISH)) mask |= (1u << 3);
    if (on(EFFECT_BIT_STUN))   mask |= (1u << 4);
    if (on(KART_FLAG_BULLET) || on(KART_FLAG_IN_BULLET) || on(KART_FLAG_IN_A_BULLET))
        mask |= (1u << 5);
    if (on(KART_FLAG_THUNDER)) mask |= (1u << 6);
    return mask;
}

// Clear all temporary effects and their timers
void KartState::resetAllEffects() {
    // Clear all effect bits
    reset(EFFECT_BIT_STAR);
    reset(EFFECT_BIT_MEGA);
    reset(EFFECT_BIT_INK);
    reset(EFFECT_BIT_SQUISH);
    reset(EFFECT_BIT_STUN);

    // Clear classic flag-based effects
    reset(KART_FLAG_STAR);
    reset(KART_FLAG_MEGA);
    reset(KART_FLAG_THUNDER);
    reset(KART_FLAG_BULLET);
    reset(KART_FLAG_IN_BULLET);
    reset(KART_FLAG_IN_A_BULLET);
    reset(KART_FLAG_RESPAWN_INVINCIBLE);
    reset(KART_FLAG_MUSHROOM);
    reset(KART_FLAG_MINI_TURBO);
    reset(KART_FLAG_TRICK_BOOST);

    // Zero all effect timers
    mStarTimer = 0;
    mMegaTimer = 0;
    mInkTimer = 0;
    mSquishTimer = 0;
    mStunTimer = 0;
}

// @addr 0x80596c00 (estimated)
// setFlag — Set a specific kart state flag.
void KartState::setFlag(size_t bit) {
    set(bit);
}

// @addr 0x80596c10 (estimated)
// clearFlag — Clear a specific kart state flag.
void KartState::clearFlag(size_t bit) {
    reset(bit);
}

// @addr 0x80596c20 (estimated)
// hasFlag — Check if a specific kart state flag is set.
bool KartState::hasFlag(size_t bit) const {
    return on(bit);
}

// @addr 0x80596c30 (estimated)
// getState — Get the combined state as a bitmask.
u32 KartState::getState() const {
    return getActiveEffectMask();
}

// @addr 0x80596c40 (estimated)
// setState — Set the kart state from a bitmask.
// Clears all effect flags and sets only the ones in the mask.
void KartState::setState(u32 stateMask) {
    resetAllEffects();
    if (stateMask & (1u << 0)) set(KART_FLAG_STAR);
    if (stateMask & (1u << 1)) set(KART_FLAG_MEGA);
    if (stateMask & (1u << 2)) set(EFFECT_BIT_INK);
    if (stateMask & (1u << 3)) set(EFFECT_BIT_SQUISH);
    if (stateMask & (1u << 4)) set(EFFECT_BIT_STUN);
    if (stateMask & (1u << 5)) set(KART_FLAG_BULLET);
    if (stateMask & (1u << 6)) set(KART_FLAG_THUNDER);
}

// @addr 0x80596c60 (estimated)
// isStarPowered — Check if star power is currently active.
bool KartState::isStarPowered() const {
    return on(KART_FLAG_STAR) || on(EFFECT_BIT_STAR);
}

// @addr 0x80596c70 (estimated)
// isMega — Check if mega mushroom is currently active.
bool KartState::isMega() const {
    return on(KART_FLAG_MEGA) || on(EFFECT_BIT_MEGA);
}

// @addr 0x80596c80 (estimated)
// getStarTimer — Get remaining star power frames.
u32 KartState::getStarTimer() const {
    return mStarTimer;
}

// @addr 0x80596c90 (estimated)
// getMegaTimer — Get remaining mega mushroom frames.
u32 KartState::getMegaTimer() const {
    return mMegaTimer;
}

// @addr 0x80596ca0 (estimated)
// getStunTimer — Get remaining stun frames.
u32 KartState::getStunTimer() const {
    return mStunTimer;
}

// @addr 0x80596cb0 (estimated)
// getInkTimer — Get remaining ink frames.
u32 KartState::getInkTimer() const {
    return mInkTimer;
}

// @addr 0x80596cc0 (estimated)
// getSquishTimer — Get remaining squish frames.
u32 KartState::getSquishTimer() const {
    return mSquishTimer;
}

// @addr 0x80596cd0 (estimated)
// setStun — Activate or deactivate stun effect.
void KartState::setStun(bool active, u32 duration) {
    if (active) {
        set(EFFECT_BIT_STUN);
        mStunTimer = (duration > 0) ? duration : 120; // 2 seconds default
    } else {
        reset(EFFECT_BIT_STUN);
        mStunTimer = 0;
    }
}

// @addr 0x80596ce0 (estimated)
// isOffRoad — Check if the kart is currently off-road.
bool KartState::isOffRoad() const {
    return on(KART_FLAG_OOB) || on(KART_FLAG_REJECT_ROAD);
}

// @addr 0x80596cf0 (estimated)
// isInCannon — Check if the kart is currently in a cannon.
bool KartState::isInCannon() const {
    return on(KART_FLAG_CANNON_START) || on(KART_FLAG_IN_CANNON);
}

// @addr 0x80596d00 (estimated)
// isOnGround — Check if the kart is touching the ground.
bool KartState::isOnGround() const {
    return on(KART_FLAG_TOUCHING_GROUND);
}

// @addr 0x80596d10 (estimated)
// isBullet — Check if the kart is in bullet bill state.
bool KartState::isBullet() const {
    return on(KART_FLAG_BULLET) || on(KART_FLAG_IN_BULLET) ||
           on(KART_FLAG_IN_A_BULLET);
}

// @addr 0x80596d20 (estimated)
// getAirtime — Get the number of frames the kart has been airborne.
u32 KartState::getAirtime() const {
    return mAirtime;
}

} // namespace Kart