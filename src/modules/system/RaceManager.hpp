#pragma once
#include "../rk_types.h"

// Guard: If the full RaceEngine::RaceManager is available, skip this stub.
// KartState.hpp includes this header, but SceneRace.cpp needs the full version
// from RaceEngine/RaceManager.hpp instead.
#ifndef GENESIS_RACE_MANAGER_DEFINED
namespace System {
class RaceManager {
public:
    u32 racePhase;
    u32 countdownTimer;
    u32 lapCount;
    u32 playerCount;
    void startRace();
    void endRace();
};
}
#endif // GENESIS_RACE_MANAGER_DEFINED
