#pragma once

// Raceinfo.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <rk_types.h>
#include <decomp.h>

namespace System {

// Forward declarations
class RaceinfoPlayer;
class RaceMode;

// Raceinfo tracks per-player race state: laps, checkpoints, positions, splits
class Raceinfo {
public:
    Raceinfo();
    virtual ~Raceinfo();

    // @addr 0x80534c88
    void construct();
    // @addr 0x80535470
    void init();
    // @addr 0x80534670
    void initGamemode();
    // @addr 0x8053569c
    void update();
    // @addr 0x805387c4
    void getInitialPosAndRotForPlayer(u8 playerIdx, void* pos, void* rot);

    RaceinfoPlayer* players;  // 0x00 - array of player race info
    u32 playerCount;           // 0x04
    u8 lapCount;               // 0x08
    RaceMode* raceMode;        // 0x0C
    // ... additional fields from Ghidra analysis
};

} // namespace System