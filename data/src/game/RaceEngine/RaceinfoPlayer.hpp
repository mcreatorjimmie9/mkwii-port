#pragma once

// RaceinfoPlayer.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <rk_types.h>
#include <decomp.h>

namespace System {

class Raceinfo;

// RaceinfoPlayer tracks per-player race progress: checkpoints, laps, splits, finish state
class RaceinfoPlayer {
public:
    RaceinfoPlayer();
    ~RaceinfoPlayer();

    // @addr 0x805363c0
    void construct();
    // @addr 0x8053667c
    void init();
    // @addr 0x805377ec
    void update();
    // @addr 0x80536ea0
    void endLap();
    // @addr 0x80536cdc
    void endRace();
    // @addr 0x805372e0
    void updateCheckpoint();
    // @addr 0x80537c14
    u32 getLapSplit(u8 lapIdx);

    u8 playerId;          // 0x08
    u16 kartId;           // 0x0a
    s8  lapCount;         // 0x0c
    u16 currentLap;       // 0x10 (or 0x24 based on Ghidra)
    s16 raceTime;         // 0x18
    u16 checkpointCount;  // 0x20 (or 0x24)
    s8  maxLap;           // 0x26
    u8  numCheckpoints;   // 0x28
    s32 finishTime;       // 0x38
    u32 lapTimes[10];     // 0x4c+ array of per-lap finish times
    // Additional fields for position tracking, wrong-way detection, etc.
};

} // namespace System