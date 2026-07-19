#pragma once
#include "../rk_types.h"

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
