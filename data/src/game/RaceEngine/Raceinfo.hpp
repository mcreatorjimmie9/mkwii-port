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

    // Position and ranking
    // @addr 0x80535a00
    void calcPositions();
    // @addr 0x80535b00
    u8 getPlayerPosition(u8 playerIdx);

    // Timing
    // @addr 0x80535c00
    u32 getPlayerRaceTime(u8 playerIdx);
    // @addr 0x80535d00
    u8 getLapCount(u8 playerIdx);
    // @addr 0x80535e00
    void setFinishPosition(u8 playerIdx, u8 position);

    RaceinfoPlayer* players;  // 0x00 - array of player race info
    u32 playerCount;           // 0x04
    u8 lapCount;               // 0x08
    RaceMode* raceMode;        // 0x0C
    u32 raceTimerMs;           // 0x10 - total race elapsed time in ms
    u8 positions[12]; // 0x14 - current race positions (1-indexed, MAX_PLAYER_COUNT)
    u8 finishOrder[12]; // 0x20 - finish order tracking
    u32 finishCount;           // 0x2C - number of players finished
    u64 lapSplits[120]; // 0x30 - per-player lap split times (12 players * 10 laps, 8-byte stride)
};

} // namespace System