#pragma once

// TimeAttackGamemode.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <rk_types.h>
#include <decomp.h>

namespace System {

class Raceinfo;

// TimeAttackGamemode implements the Time Trial game mode logic.
// It is a subclass of RaceMode.
class TimeAttackGamemode {
public:
    TimeAttackGamemode();
    virtual ~TimeAttackGamemode();

    // @addr 0x805381fc
    bool canEndRace();

    // Pointer to Raceinfo (0x00)
    Raceinfo* raceinfo;
    // Player/hud data (0x0c, 0x20) - arrays
    void* someArray;
};

} // namespace System