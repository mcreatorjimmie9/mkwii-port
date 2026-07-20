#pragma once

// Racedata.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <rk_types.h>
#include <decomp.h>
#include <rk_common.h>

namespace System {

// Race phase enumeration for getRacePhase()
enum RacePhase {
    RACE_PHASE_COUNTDOWN = 0,
    RACE_PHASE_RACING = 1,
    RACE_PHASE_FINISHED = 2,
    RACE_PHASE_RESULTS = 3,
    RACE_PHASE_AWARDS = 4,
    RACE_PHASE_CREDITS = 5,
};

// Per-player result data stored in Racedata
struct RacedataPlayerResult {
    u32 finishTimeMs;       // Total finish time in milliseconds
    u8 finishPosition;      // Finishing position (1-12)
    u8 characterId;         // Character used
    u8 vehicleId;           // Vehicle used
    u8 lapCount;            // Laps completed
    u16 points;             // Points awarded (GP mode)
    u8 _pad[2];
    u32 lapTimes[10];       // Per-lap finish times in ms
};

// Racedata holds race result data used for awards and credits sequences.
class Racedata {
public:
    Racedata();
    virtual ~Racedata();

    // @addr 0x80533558
    void initCredits();
    // @addr 0x80532d4c
    void initAwards();

    void init();
    void update();
    u8 getPlayerCount() const;
    u32 getFinishTime(u8 playerId) const;
    u8 getFinishPosition(u8 playerId) const;
    RacePhase getRacePhase() const;

    // Large structure holding per-player race results
    // Used by awards ceremony and credits roll
    u8 data[0x1000]; // approximate size based on function complexity

    // Race state tracking
    RacedataPlayerResult mPlayerResults[MAX_PLAYER_COUNT];
    u8 mPlayerCount;
    u8 mFinishedCount;
    RacePhase mPhase;
    u32 mFrameCounter;
    u32 mRaceTimerMs;
    u32 mCourseId;

    // Credits state
    u32 mCreditsCameraTargets[MAX_PLAYER_COUNT];

    // Awards state
    u8 mAwardsTrophyPositions[3];  // 1st, 2nd, 3rd player indices
    u8 mAwardsState;               // Awards ceremony state machine step
    u32 mAwardsTimer;              // Timer for awards animation
};

// RacedataFactory creates packed race data records for saving/networking.
class RacedataFactory {
public:
    RacedataFactory();
    virtual ~RacedataFactory();

    // @addr 0x8058f018
    static void packRacedataRecord();
};

// RacedataHandler processes input race data (likely for ghost/replay).
class RacedataHandler {
public:
    RacedataHandler();
    virtual ~RacedataHandler();

    // @addr 0x8058d680
    static void processInputs();
};

} // namespace System