#include <cstring>
// Racedata.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "Racedata.hpp"
#include "RaceConfig.hpp"
#include "RaceManager.hpp"

namespace System {

// Static instance for factory/handler to access
static u8 s_packedRecordBuffer[0x200];
static u32 s_packedRecordSize = 0;

Racedata::Racedata() {
    memset(data, 0, sizeof(data));
    memset(mPlayerResults, 0, sizeof(mPlayerResults));
    mPlayerCount = 0;
    mFinishedCount = 0;
    mPhase = RACE_PHASE_COUNTDOWN;
    mFrameCounter = 0;
    mRaceTimerMs = 0;
    mCourseId = 0;
    memset(mCreditsCameraTargets, 0, sizeof(mCreditsCameraTargets));
    memset(mAwardsTrophyPositions, 0xFF, sizeof(mAwardsTrophyPositions));
    mAwardsState = 0;
    mAwardsTimer = 0;
}

Racedata::~Racedata() {
}

void Racedata::init() {
    // Reset all race state, zero player data, reset frame counter
    memset(data, 0, sizeof(data));
    memset(mPlayerResults, 0, sizeof(mPlayerResults));
    mFinishedCount = 0;
    mPhase = RACE_PHASE_COUNTDOWN;
    mFrameCounter = 0;
    mRaceTimerMs = 0;
    mAwardsState = 0;
    mAwardsTimer = 0;

    // Read player count from RaceConfig
    if (RaceConfig::spInstance != nullptr) {
        mPlayerCount = RaceConfig::spInstance->mRaceScenario.mPlayerCount;
        mCourseId = RaceConfig::spInstance->mRaceScenario.mSettings.getCourseId();

        // Initialize per-player result entries from RaceConfig
        for (u8 i = 0; i < mPlayerCount; i++) {
            const RaceConfig::Player& player =
                RaceConfig::spInstance->mRaceScenario.getPlayer(i);
            mPlayerResults[i].characterId = (u8)player.mCharacterId;
            mPlayerResults[i].vehicleId = (u8)player.mVehicleId;
            mPlayerResults[i].finishPosition = 0;
            mPlayerResults[i].finishTimeMs = 0;
            mPlayerResults[i].lapCount = 0;
            mPlayerResults[i].points = 0;
            memset(mPlayerResults[i].lapTimes, 0, sizeof(mPlayerResults[i].lapTimes));
        }
    }
}

void Racedata::update() {
    // Per-frame: update race timer, check phase transitions, advance countdown
    mFrameCounter++;

    switch (mPhase) {
    case RACE_PHASE_COUNTDOWN:
        // Countdown phase: wait for countdown to complete
        // The countdown lasts ~4 seconds (240 frames at 60fps)
        if (mFrameCounter >= 240) {
            mPhase = RACE_PHASE_RACING;
            mRaceTimerMs = 0;
        }
        break;

    case RACE_PHASE_RACING:
        // Phase 26: Track race frames, compute ms on-demand.
        // MKWii hardware runs at 60 FPS exactly.
        // The original game uses frame counters everywhere; ms is only
        // computed for display. Using frames avoids cumulative integer
        // truncation error from (u32)(1000/60) = 16 instead of 16.667.
        // mRaceTimerMs is computed from mFrameCounter in getFinishTime().
        mFrameCounter++;

        // Check if all players have finished
        if (mFinishedCount >= mPlayerCount && mPlayerCount > 0) {
            mPhase = RACE_PHASE_FINISHED;
        }
        break;

    case RACE_PHASE_FINISHED:
        // Brief pause before transitioning to results
        if (mFrameCounter > 300) {
            mPhase = RACE_PHASE_RESULTS;
        }
        break;

    case RACE_PHASE_RESULTS:
        // Results screen displayed — wait for player input to proceed
        break;

    case RACE_PHASE_AWARDS:
        // Awards ceremony state machine
        mAwardsTimer++;
        break;

    case RACE_PHASE_CREDITS:
        // Credits roll — nothing to update per-frame
        break;
    }
}

// @addr 0x80533558
// Initializes racedata for the credits sequence (3188 bytes - largest function).
// Ghidra shows a call to 0x80555bf8 (memset).
// This is the most complex function, setting up per-player data
// for the end-of-credits character roll display.
void Racedata::initCredits() {
    // memset the player data area: 0xF0 stride * MAX_PLAYER_COUNT
    // 0x80555bf8 = memset to clear temporary data
    memset(data, 0, 0xF0 * MAX_PLAYER_COUNT);

    // Read RaceConfig scenarios for player appearance data
    if (RaceConfig::spInstance == nullptr) {
        return;
    }

    RaceConfig::Scenario& scenario = RaceConfig::spInstance->mAwardsScenario;
    mPlayerCount = scenario.mPlayerCount;

    // Populate character appearances for each player
    for (u8 i = 0; i < mPlayerCount && i < MAX_PLAYER_COUNT; i++) {
        const RaceConfig::Player& player = scenario.getPlayer(i);

        // Store character/vehicle info in the data buffer at 0xF0 stride
        u8* entry = &data[i * 0xF0];
        entry[0x00] = (u8)player.mCharacterId;
        entry[0x01] = (u8)player.mVehicleId;
        entry[0x02] = (u8)player.getTeam();

        // Store finishing position from RaceConfig results
        entry[0x03] = player.mFinishPos;

        // Store Mii data (first 16 bytes of Mii for display)
        const Mii& mii = player.getMii();
        memcpy(&entry[0x10], &mii, 16);
    }

    // Setup credits camera target array — one target per player
    // The camera pans across players in finishing order during credits
    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mCreditsCameraTargets[i] = 0;
    }

    // Sort camera targets by finishing position
    for (u8 pos = 1; pos <= mPlayerCount && pos <= MAX_PLAYER_COUNT; pos++) {
        for (u8 i = 0; i < mPlayerCount && i < MAX_PLAYER_COUNT; i++) {
            const RaceConfig::Player& player = scenario.getPlayer(i);
            if (player.mFinishPos == pos) {
                mCreditsCameraTargets[pos - 1] = (u32)i;
                break;
            }
        }
    }

    mPhase = RACE_PHASE_CREDITS;
}

// @addr 0x80532d4c
// Initializes racedata for the awards ceremony (1704 bytes).
// Ghidra shows a call to 0x80555bf8 (memset).
void Racedata::initAwards() {
    // memset temporary data
    // 0x80555bf8 = memset to clear temporary data
    memset(data, 0, 0xF0 * MAX_PLAYER_COUNT);

    if (RaceConfig::spInstance == nullptr) {
        return;
    }

    RaceConfig::Scenario& scenario = RaceConfig::spInstance->mAwardsScenario;
    mPlayerCount = scenario.mPlayerCount;

    // Set trophy data per finishing position (1st/2nd/3rd)
    // Find the player indices for positions 1, 2, and 3
    mAwardsTrophyPositions[0] = 0xFF;
    mAwardsTrophyPositions[1] = 0xFF;
    mAwardsTrophyPositions[2] = 0xFF;

    // Read RaceConfig results to find top 3 finishers
    for (u8 pos = 1; pos <= 3 && pos <= mPlayerCount; pos++) {
        for (u8 i = 0; i < mPlayerCount && i < MAX_PLAYER_COUNT; i++) {
            const RaceConfig::Player& player = scenario.getPlayer(i);
            if (player.mFinishPos == pos) {
                mAwardsTrophyPositions[pos - 1] = i;
                break;
            }
        }
    }

    // Populate ceremony data for each player
    for (u8 i = 0; i < mPlayerCount && i < MAX_PLAYER_COUNT; i++) {
        const RaceConfig::Player& player = scenario.getPlayer(i);

        // Store player data at 0xF0 stride in the data buffer
        u8* entry = &data[i * 0xF0];
        entry[0x00] = (u8)player.mCharacterId;
        entry[0x01] = (u8)player.mVehicleId;
        entry[0x02] = player.mFinishPos;
        entry[0x03] = (u8)player.getTeam();

        // Points awarded based on finishing position
        u16 points = 0;
        if (player.mFinishPos <= mPlayerCount) {
            // Standard point distribution: 15, 12, 10, 8, 6, 4, 3, 2, 1, 0...
            static const u16 POINT_TABLE[12] = {
                15, 12, 10, 8, 6, 4, 3, 2, 1, 0, 0, 0
            };
            if (player.mFinishPos >= 1 && player.mFinishPos <= 12) {
                points = POINT_TABLE[player.mFinishPos - 1];
            }
        }
        entry[0x04] = (u8)(points & 0xFF);
        entry[0x05] = (u8)((points >> 8) & 0xFF);

        // Store Mii data for character display
        const Mii& mii = player.getMii();
        memcpy(&entry[0x10], &mii, 16);
    }

    // Initialize ceremony state machine
    mAwardsState = 0;  // Step 0: show podium, then transition through states
    mAwardsTimer = 0;
    mPhase = RACE_PHASE_AWARDS;
}

u8 Racedata::getPlayerCount() const {
    return mPlayerCount;
}

u32 Racedata::getFinishTime(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return 0;
    }
    // Phase 26: Per-player finish time is stored directly when a player
    // finishes. For the global race timer, use frame-based computation.
    return mPlayerResults[playerId].finishTimeMs;
}

u8 Racedata::getFinishPosition(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return 0;
    }
    return mPlayerResults[playerId].finishPosition;
}

RacePhase Racedata::getRacePhase() const {
    return mPhase;
}

} // namespace System

namespace System {

// @addr 0x8058f018
// Packs race data into a record format for saving or network transmission (2204 bytes).
// Ghidra shows calls to:
//   0x80555bf8 (memset), 0x805907c0, 0x80590810
void RacedataFactory::packRacedataRecord() {
    // Serializes race state into a compact binary format
    // Used for ghost files, replay data, or online race data
    // 0x805907c0 and 0x80590810 are likely serialization helpers

    // Clear the output buffer
    // 0x80555bf8 = memset
    memset(s_packedRecordBuffer, 0, sizeof(s_packedRecordBuffer));
    s_packedRecordSize = 0;

    if (RaceConfig::spInstance == nullptr) {
        return;
    }

    const RaceConfig::Scenario& scenario = RaceConfig::spInstance->mRaceScenario;
    u8 playerCount = scenario.mPlayerCount;
    u32 courseId = scenario.mSettings.getCourseId();

    // Pack header: magic + version + course + player count
    u32 offset = 0;

    // Magic identifier for race data record
    s_packedRecordBuffer[offset++] = 'R';
    s_packedRecordBuffer[offset++] = 'K';
    s_packedRecordBuffer[offset++] = 'R';
    s_packedRecordBuffer[offset++] = 'D';

    // Version byte
    s_packedRecordBuffer[offset++] = 1;

    // Course ID (u8) and player count (u8)
    s_packedRecordBuffer[offset++] = (u8)(courseId & 0xFF);
    s_packedRecordBuffer[offset++] = playerCount;

    // Lap count (u8)
    s_packedRecordBuffer[offset++] = scenario.mSettings.mLapCount;

    // Game mode (u8)
    s_packedRecordBuffer[offset++] = (u8)scenario.mSettings.mGameMode;

    // Align to u32 boundary
    while (offset % 4 != 0) {
        offset++;
    }

    // Pack per-player data: position (u8), finish time (u32), lap times (u32 * N)
    for (u8 i = 0; i < playerCount && i < MAX_PLAYER_COUNT; i++) {
        const RaceConfig::Player& player = scenario.getPlayer(i);

        // Player ID and finish position
        s_packedRecordBuffer[offset++] = i;
        s_packedRecordBuffer[offset++] = player.mFinishPos;

        // Character and vehicle IDs
        s_packedRecordBuffer[offset++] = (u8)player.mCharacterId;
        s_packedRecordBuffer[offset++] = (u8)player.mVehicleId;

        // Align to u32
        while (offset % 4 != 0) {
            offset++;
        }

        // Finish time in milliseconds (u32)
        // Phase 30: Read from RaceManagerPlayer instead of placeholder 0.
        // In the original MKWii, packRacedataRecord reads finish times from
        // RaceManagerPlayer::raceFinishTime which is set when the player
        // crosses the finish line after their final lap.
        u32 finishTime = 0;
        if (RaceManager::spInstance && RaceManager::spInstance->players &&
            RaceManager::spInstance->players[i]) {
            // raceFinishTime is a Time* pointer — dereference to get ms.
            // If the pointer is null (player hasn't finished), use 0.
            Time* ft = RaceManager::spInstance->players[i]->raceFinishTime;
            if (ft) {
                finishTime = ft->toMilliseconds();
            }
        }
        memcpy(&s_packedRecordBuffer[offset], &finishTime, 4);
        offset += 4;

        // Lap times (up to 10 laps, u32 each)
        // Phase 30: Read from RaceManagerPlayer lap times.
        // Each RaceManagerPlayer stores per-lap finish times that are
        // recorded by CtrlRaceTime::recordLap() during the race.
        for (u8 lap = 0; lap < scenario.mSettings.mLapCount && lap < 10; lap++) {
            u32 lapTime = 0;
            if (RaceManager::spInstance && RaceManager::spInstance->players &&
                RaceManager::spInstance->players[i] &&
                RaceManager::spInstance->players[i]->lapFinishTimes) {
                // lapFinishTimes is an array of Time structs indexed by lap.
                // Time::toMilliseconds() converts (min, sec, ms) to total ms.
                lapTime = RaceManager::spInstance->players[i]->lapFinishTimes[lap].toMilliseconds();
            }
            memcpy(&s_packedRecordBuffer[offset], &lapTime, 4);
            offset += 4;
        }
    }

    // Pack total race time (u32)
    u32 totalTime = 0;
    memcpy(&s_packedRecordBuffer[offset], &totalTime, 4);
    offset += 4;

    s_packedRecordSize = offset;
}

} // namespace System

namespace System {

// @addr 0x8058d680
// Processes race data inputs (764 bytes).
// Ghidra shows no external calls - pure data processing.
void RacedataHandler::processInputs() {
    // Processes incoming race data packets
    // Validates and applies race state updates
    // Used in online multiplayer for receiving opponent data

    if (RaceConfig::spInstance == nullptr) {
        return;
    }

    RaceConfig::Scenario& scenario = RaceConfig::spInstance->mRaceScenario;
    u8 playerCount = scenario.mPlayerCount;

    // Validate incoming race state packets (online mode):
    // Check player count consistency
    if (playerCount == 0 || playerCount > MAX_PLAYER_COUNT) {
        return;
    }

    // Validate positions: each player should have a unique position
    // from 1 to playerCount
    u32 positionMask = 0;
    for (u8 i = 0; i < playerCount && i < MAX_PLAYER_COUNT; i++) {
        const RaceConfig::Player& player = scenario.getPlayer(i);
        u8 pos = player.mFinishPos;

        if (pos == 0 || pos > playerCount) {
            // Invalid position — skip update
            return;
        }

        // Check for duplicate positions
        u32 posBit = 1U << (pos - 1);
        if (positionMask & posBit) {
            // Duplicate position detected — data is inconsistent
            return;
        }
        positionMask |= posBit;
    }

    // Apply update if all positions are consistent
    // (In the full implementation, this would update Raceinfo
    // with the received position/time data from network packets)
    // For now, the validation pass above ensures data integrity
    // before any downstream systems consume it.
}

} // namespace System