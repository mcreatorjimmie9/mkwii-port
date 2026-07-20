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

    void initRace();
    void update();
    void endRace();
    void beginGhostRecording();
    void endGhostRecording();
    bool isGhostPlaying() const;
    void updateGhostPlayback();
    u32 getRaceTime() const;
    u8 getCurrentLap() const;
    u8 getMaxLaps() const;

    // Pointer to Raceinfo (0x00)
    Raceinfo* raceinfo;
    // Player/hud data (0x0c, 0x20) - arrays
    void* someArray;

    // Time Attack state
    u32 mRaceTimerMs;        // Total race time in milliseconds
    u8 mCurrentLap;           // Current lap (0-indexed)
    u8 mMaxLaps;              // Total laps for this course
    bool mRaceFinished;       // Whether the race has ended
    bool mGhostRecording;     // Whether ghost input is being recorded
    bool mGhostPlaying;       // Whether a ghost replay is active
    u32 mGhostFrame;          // Current frame in ghost playback
    u32 mGhostTotalFrames;    // Total frames in ghost replay
    u32 mBestTimeMs;          // Best recorded time for this course
    u32 mLastLapTimeMs;       // Time of the most recent lap
    u32 mLapTimes[10];        // Per-lap finish times in ms
    u8 mGhostInputBuffer[0x4000]; // Buffer for ghost input recording
    u32 mGhostInputCount;     // Number of recorded ghost inputs
    u32 mFrameCounter;        // Per-frame counter
};

} // namespace System