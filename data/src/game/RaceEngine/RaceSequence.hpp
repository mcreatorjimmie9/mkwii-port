#pragma once
// RaceSequence.hpp - Full race lifecycle controller
// Manages countdown, racing, finish detection, lap tracking, and race timing
// Address range: 0x80460000 - 0x80465000

#include "rk_common.h"
#include "RaceConfig.hpp"

#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif

namespace RaceEngine {

class RaceManager;

// Race sequence phases
enum RacePhase {
    RACE_PHASE_NONE = 0,
    RACE_PHASE_PRE_RACE = 1,
    RACE_PHASE_COUNTDOWN = 2,
    RACE_PHASE_RACING = 3,
    RACE_PHASE_FINISH = 4,
    RACE_PHASE_RESULTS = 5,
    RACE_PHASE_POST_RACE = 6,
    RACE_PHASE_PAUSED = 7,
};

// Countdown states
enum CountdownState {
    COUNTDOWN_3 = 0,
    COUNTDOWN_2 = 1,
    COUNTDOWN_1 = 2,
    COUNTDOWN_GO = 3,
    COUNTDOWN_DONE = 4,
};

// Race finish reason
enum FinishReason {
    FINISH_NORMAL = 0,        // All laps completed
    FINISH_DNF = 1,            // Did not finish
    FINISH_TIME_UP = 2,        // Time limit exceeded
    FINISH_DISCONNECT = 3,     // Player disconnected
    FINISH_ERROR = 4,          // Internal error
};

// Lap checkpoint data for validation
struct LapCheckpoint {
    u32 checkpointId;
    u32 sectorIndex;          // Which sector of the track
    f32 positionX;            // Checkpoint position
    f32 positionY;
    f32 positionZ;
    f32 radius;              // Checkpoint trigger radius
};

// Lap timing data
struct LapTimeData {
    u32 lapTimeMs;            // Total lap time in milliseconds
    u32 splitTimes[5];        // Sector split times (up to 5 sectors per lap)
    u32 startFrame;           // Frame when lap started
    u32 endFrame;             // Frame when lap ended
    u8 isValid;               // Whether lap passed checkpoint validation
    u8 isBestLap;            // Whether this is the current best lap
    u8 _pad[2];
};

// Race result entry for one player
struct RaceResult {
    u32 playerId;
    s32 position;             // Finishing position (1st, 2nd, etc.)
    FinishReason finishReason;
    u32 totalTimeMs;
    u32 bestLapTimeMs;
    u32 lapCount;             // Laps completed
    u16 pointsAwarded;        // VR points gained/lost
    u8 characterId;
    u8 kartId;
    u8 isGhost;              // Whether this is a ghost replay entry
    u8 _pad;
    LapTimeData lapTimes[10]; // Up to 10 laps of timing data
};

// Race sequence state
struct RaceState {
    RacePhase phase;
    CountdownState countdown;
    u32 countdownTimer;       // Frames remaining in countdown
    u32 raceTimer;            // Total race frames elapsed
    u32 totalRaceTimeMs;      // Total race time in ms
    u8 currentLap;            // Current lap (0-indexed, current = totalLaps - 1)
    u8 totalLaps;             // Total laps for this race
    u8 playerCount;
    u8 finishedCount;         // Number of players who have finished
    bool isPaused;
    bool isTimeAttack;
    u32 finishTimer;          // Timer for post-finish delay
};

class RaceSequence {
public:
    RaceSequence();
    ~RaceSequence();

    // --- Initialization ---
    // @addr 0x80460000
    void init(System::RaceConfig* config, u32 playerCount);
    // @addr 0x804601A0
    void shutdown();

    // --- Phase control ---
    // @addr 0x80460340
    void startCountdown();
    // @addr 0x804604E0
    void startRace();
    // @addr 0x80460680
    void finishPlayer(u32 playerId, FinishReason reason);
    // @addr 0x80460840
    void endRace();

    // --- Lap management ---
    // @addr 0x80460A00
    void onPlayerCrossLine(u32 playerId);
    // @addr 0x80460B80
    void validateLap(u32 playerId, const LapCheckpoint* checkpoints, u32 count);
    // @addr 0x80460D40
    const LapTimeData* getLapTime(u32 playerId, u32 lapIndex) const;
    // @addr 0x80460E80
    u32 getCurrentLap(u32 playerId) const;
    u32 getTotalLaps() const { return mState.totalLaps; }

    // --- Timing ---
    // @addr 0x80461000
    u32 getRaceTimeMs() const;
    // @addr 0x80461140
    u32 getPlayerRaceTimeMs(u32 playerId) const;
    // @addr 0x80461280
    u32 getBestLapTimeMs(u32 playerId) const;
    // @addr 0x80461400
    void updateTiming();

    // --- Checkpoint/sector ---
    // @addr 0x80461540
    void registerCheckpoint(u32 playerId, u32 checkpointId, u32 sectorIndex);
    // @addr 0x804616C0
    void setupCheckpoints(u16 courseId);
    // Phase 24: Load checkpoints from platform KMP data (extern "C" bridge)
    void setupCheckpointsFromKMP(u32 count, const LapCheckpoint* checkpoints);
    // @addr 0x80461840
    const LapCheckpoint* getCheckpoints(u32* outCount) const;

    // --- Update/draw ---
    // @addr 0x80461980
    void update();
    // @addr 0x80461B20
    void draw();

    // --- Pause ---
    void pause();
    void resume();
    bool isPaused() const { return mState.isPaused; }

    // --- State queries ---
    RacePhase getPhase() const { return mState.phase; }
    CountdownState getCountdownState() const { return mState.countdown; }
    const RaceState& getState() const { return mState; }

    // --- Results ---
    // @addr 0x80461CC0
    const RaceResult* getResult(u32 playerId) const;
    // @addr 0x80461E00
    u32 getFinishedCount() const { return mState.finishedCount; }
    // @addr 0x80461F40
    void calculatePositions();
    // @addr 0x804620C0
    void awardPoints();

    // --- Ghost comparison (Time Attack) ---
    // @addr 0x80462240
    s32 compareWithGhost(f32 playerX, f32 playerY, f32 playerZ);
    // @addr 0x80462400
    void setGhostData(const RaceResult* ghost);
    const RaceResult* getGhostData() const { return mGhostResult; }

private:
    static const u32 MAX_RACE_PLAYERS = 12;
    static const u32 MAX_LAPS = 10;
    static const u32 MAX_CHECKPOINTS = 32;
    static const u32 COUNTDOWN_FRAMES = 240; // 4 seconds at 60fps

    // Race state
    RaceState mState;
    System::RaceConfig* mConfig;

    // Per-player results
    RaceResult mResults[MAX_RACE_PLAYERS];

    // Checkpoint system
    LapCheckpoint mCheckpoints[MAX_CHECKPOINTS];
    u32 mCheckpointCount;

    // Per-player checkpoint tracking (which checkpoints have been hit)
    u32 mPlayerCheckpoints[MAX_RACE_PLAYERS]; // bitmask
    u32 mPlayerLastCheckpoint[MAX_RACE_PLAYERS];
    u32 mPlayerSectorTimes[MAX_RACE_PLAYERS][5];
    bool mCheckpointsLoadedFromKMP; // Phase 24: flag when platform data loaded

    // Ghost
    RaceResult* mGhostResult;

    // Timing
    u32 mFrameCount;
    u32 mLastTimingUpdate;

    // Internal helpers
    void processCountdown();
    void processRacing();
    void processFinish();
    void processResults();
    void advanceCountdown();
    u32 resultLapStart(u32 playerId) const;
    u32 framesToMs(u32 frames) const { return (frames * 1000) / 60; }
};

} // namespace RaceEngine