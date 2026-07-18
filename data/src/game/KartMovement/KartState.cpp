#include "KartState.hpp"
#include "KartSettings.hpp"

namespace Kart {

extern bool isPlayerOnlineLocal;
extern bool isPlayerOnlineRemote;

// MARK_FLOW_CHECK(0x805943b4) - but this is the constructor, different from KartSub_init
// 0x8059689c - __ct__Q24Kart9KartStateFPQ24Kart12KartSettings
// Size: 424 bytes
// Calls: 0x80590a9c (x2), 0x80590d38
KartState::KartState(KartSettings* settings) {
    using namespace System;

    mAirtime = 0;
    _24 = 0.0f;
    mCannonPointId = 0;
    mStartBoostIdx = 0;
    mUp.setZero();
    mProxy = nullptr; // new KartObjectProxy in full version

    RaceConfig::Player::Type playerType = RaceConfig::spInstance->mRaceScenario.mPlayers[settings->playerIdx].mPlayerType;
    switch (playerType) {
    case RaceConfig::Player::TYPE_REAL_LOCAL:
        set(KART_FLAG_LOCAL);
        break;
    case RaceConfig::Player::TYPE_CPU:
        set(KART_FLAG_CPU);
        break;
    case RaceConfig::Player::TYPE_GHOST:
        set(KART_FLAG_GHOST);
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

    // Demo loss check
    // if (RaceConfig::spInstance->mRaceScenario.mSettings.mGameMode == ... &&
    //     RaceConfig::spInstance->mRaceScenario.mSettings.mCameraMode == ...) {
    //     set(KART_FLAG_SET_SPEED_ZERO);
    //     set(KART_FLAG_DEMO_LOSS);
    // }
}

KartState::~KartState() {}

// 0x80596a44 - init__Q24Kart9KartStateFv
// Size: 56 bytes
// Calls: 0x80590cfc
void KartState::init() {
    // Calls global function 0x80590cfc (likely KartState-specific init)
}

// 0x80596a7c - reset__Q24Kart9KartStateFv
// Size: 160 bytes
// Calls: 0x8059040c
void KartState::reset() {
    // Resets state flags, timers, and position-related fields
    // Calls 0x8059040c (likely reset helper)
}

// 0x80596b1c - resetOob__Q24Kart9KartStateFv
// Size: 16 bytes
// Calls: 0x805907bc
void KartState::resetOob() {
    // Resets out-of-bounds specific state
    // Calls global function 0x805907bc
}

void KartState::startWipe(int wipeState) {}
void KartState::resetCollisionFlags() {}

} // namespace Kart