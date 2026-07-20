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

    // Accessors
    // @addr 0x80537d00
    u8 getPosition();
    // @addr 0x80537e00
    u32 getTotalTime();
    // @addr 0x80537f00
    bool isFinished();
    // @addr 0x80538000
    u16 getCheckpointCount();

    u8 playerId;          // 0x08
    u16 kartId;           // 0x0a
    s8  lapCount;         // 0x0c
    u16 currentLap;       // 0x10
    s16 raceTime;         // 0x18
    u16 checkpointCount;  // 0x20
    s8  maxLap;           // 0x26
    u8  numCheckpoints;   // 0x28
    s32 finishTime;       // 0x38
    u32 lapTimes[10];     // 0x4c+ array of per-lap finish times (ms)
    u32 bestLapTime;      // Best lap time in ms
    u8  racePosition;     // Current race position (1-indexed, 0 = not set)
    u8  finishPosition;   // Final finish position (0xFF = DNF)
    u8  raceComplete;     // Whether player has finished the race
    u8  checkpointFlags;  // Bit flags for checkpoint validation mode
    u16 totalCheckpointsHit; // Total checkpoints crossed
    u32 raceStartTimeMs;  // Race start timestamp in ms
    u32 lastCheckpointTimeMs; // Time when last checkpoint was crossed
    f32 progressValue;    // Computed race progress for ranking
    u32 playerTypeFlags;  // Player type encoded as power-of-2 bitmask
};

} // namespace System