#include "KartState.hpp"
#include "KartSettings.hpp"

namespace Kart {

extern bool isPlayerOnlineLocal;
extern bool isPlayerOnlineRemote;

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

    // Determine player type from race config
    // TODO: Restore when full RaceConfig shim is available
    // RaceConfig::Player::Type playerType = RaceConfig::spInstance->mRaceScenario.mPlayers[settings->playerIdx].mPlayerType;
    // switch (playerType) {
    // case RaceConfig::Player::TYPE_REAL_LOCAL:
    //     set(KART_FLAG_LOCAL);
    //     break;
    // case RaceConfig::Player::TYPE_CPU:
    //     set(KART_FLAG_CPU);
    //     break;
    // case RaceConfig::Player::TYPE_GHOST:
    //     set(KART_FLAG_GHOST);
    //     break;
    // }

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
    // Calls global function 0x80590cfc (likely KartState-specific init)
    // This may reset the bitfield or set up initial race state flags
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
}

// 0x80596b1c - resetOob__Q24Kart9KartStateFv
// Size: 16 bytes
// Calls: 0x805907bc
void KartState::resetOob() {
    // Resets out-of-bounds specific state
    // Calls global function 0x805907bc (likely clears OOB-related flags)
    // From disasm (16 bytes): just a single function call + return
}

void KartState::startWipe(int wipeState) {
    mWipeState = wipeState;
    mWipeFrame = 0;
}

void KartState::resetCollisionFlags() {
    // Reset collision-related bits in the bitfield
    // Keep player type flags, clear physics state flags
}

} // namespace Kart