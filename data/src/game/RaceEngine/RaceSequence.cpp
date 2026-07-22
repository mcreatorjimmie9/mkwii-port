// RaceSequence.cpp - Full race lifecycle controller implementation
// Address range: 0x80460000 - 0x80465000

#include <cstdio>
#include <cstring>
#include "RaceSequence.hpp"

namespace RaceEngine {

RaceSequence::RaceSequence()
    : mConfig(nullptr), mCheckpointCount(0), mGhostResult(nullptr),
      mFrameCount(0), mLastTimingUpdate(0), mCheckpointsLoadedFromKMP(false) {
    memset(&mState, 0, sizeof(RaceState));
    memset(mResults, 0, sizeof(mResults));
    memset(mCheckpoints, 0, sizeof(mCheckpoints));
    memset(mPlayerCheckpoints, 0, sizeof(mPlayerCheckpoints));
    memset(mPlayerLastCheckpoint, 0, sizeof(mPlayerLastCheckpoint));
    memset(mPlayerSectorTimes, 0, sizeof(mPlayerSectorTimes));
}

RaceSequence::~RaceSequence() {
    shutdown();
}

// @addr 0x80460000
void RaceSequence::init(RaceConfig* config, u32 playerCount) {
    memset(&mState, 0, sizeof(RaceState));
    memset(mResults, 0, sizeof(mResults));
    memset(mPlayerCheckpoints, 0, sizeof(mPlayerCheckpoints));
    memset(mPlayerLastCheckpoint, 0, sizeof(mPlayerLastCheckpoint));
    memset(mPlayerSectorTimes, 0, sizeof(mPlayerSectorTimes));

    mConfig = config;
    mState.phase = RACE_PHASE_PRE_RACE;
    mState.countdown = COUNTDOWN_3;
    mState.countdownTimer = COUNTDOWN_FRAMES;
    mState.totalLaps = 3;
    mState.playerCount = static_cast<u8>(playerCount);
    mFrameCount = 0;
    mLastTimingUpdate = 0;
    mCheckpointCount = 0;
    mGhostResult = nullptr;

    for (u32 i = 0; i < MAX_RACE_PLAYERS; i++) {
        mResults[i].playerId = i;
        mResults[i].finishReason = FINISH_DNF;
        mResults[i].bestLapTimeMs = 0xFFFFFFFF;
    }
}

// @addr 0x804601A0
void RaceSequence::shutdown() {
    mConfig = nullptr;
    mGhostResult = nullptr;
    mState.phase = RACE_PHASE_NONE;
    mState.playerCount = 0;
    mCheckpointCount = 0;
}

// @addr 0x80460340
void RaceSequence::startCountdown() {
    mState.phase = RACE_PHASE_COUNTDOWN;
    mState.countdown = COUNTDOWN_3;
    mState.countdownTimer = COUNTDOWN_FRAMES;
    mState.raceTimer = 0;
    mState.totalRaceTimeMs = 0;
    mState.finishedCount = 0;
    mState.currentLap = 0;

    memset(mPlayerCheckpoints, 0, sizeof(mPlayerCheckpoints));
    memset(mPlayerLastCheckpoint, 0, sizeof(mPlayerLastCheckpoint));
    memset(mPlayerSectorTimes, 0, sizeof(mPlayerSectorTimes));
}

// @addr 0x804604E0
void RaceSequence::startRace() {
    mState.phase = RACE_PHASE_RACING;
    mState.countdown = COUNTDOWN_DONE;
    mState.raceTimer = 0;
    mFrameCount = 0;

    // Record start frame for all players' first lap
    for (u32 i = 0; i < mState.playerCount; i++) {
        mResults[i].lapTimes[0].startFrame = 0;
        mResults[i].lapTimes[0].isValid = 1;
        mResults[i].lapCount = 0;
    }
}

// @addr 0x80460680
void RaceSequence::finishPlayer(u32 playerId, FinishReason reason) {
    if (playerId >= MAX_RACE_PLAYERS) {
        return;
    }

    RaceResult& result = mResults[playerId];
    if (result.finishReason == FINISH_NORMAL) {
        return; // Already finished normally
    }

    result.finishReason = reason;
    result.totalTimeMs = mState.totalRaceTimeMs;
    mState.finishedCount++;

    if (mState.finishedCount >= mState.playerCount) {
        endRace();
    } else if (mState.finishedCount == 1) {
        mState.phase = RACE_PHASE_FINISH;
        mState.finishTimer = 1800; // 30s at 60fps
    }
}

// @addr 0x80460840
void RaceSequence::endRace() {
    mState.phase = RACE_PHASE_RESULTS;
    calculatePositions();
    awardPoints();
}

// @addr 0x80460A00
void RaceSequence::onPlayerCrossLine(u32 playerId) {
    if (playerId >= MAX_RACE_PLAYERS) {
        return;
    }
    if (mState.phase != RACE_PHASE_RACING && mState.phase != RACE_PHASE_FINISH) {
        return;
    }

    RaceResult& result = mResults[playerId];
    u32 currentLap = result.lapCount;

    u32 requiredMask = (1u << mCheckpointCount) - 1;
    if ((mPlayerCheckpoints[playerId] & requiredMask) != requiredMask) {
        return; // Lap invalid: missing checkpoints
    }

    // Record lap end time
    u32 lapTimeMs = framesToMs(mFrameCount - result.lapTimes[currentLap].startFrame);
    result.lapTimes[currentLap].lapTimeMs = lapTimeMs;
    result.lapTimes[currentLap].endFrame = mFrameCount;

    for (u32 s = 0; s < 5; s++) {
        result.lapTimes[currentLap].splitTimes[s] = mPlayerSectorTimes[playerId][s];
    }
    if (lapTimeMs < result.bestLapTimeMs) {
        result.bestLapTimeMs = lapTimeMs;
        result.lapTimes[currentLap].isBestLap = 1;
        for (u32 l = 0; l < currentLap; l++) {
            result.lapTimes[l].isBestLap = 0;
        }
    }

    // Advance lap
    result.lapCount++;
    currentLap = result.lapCount;

    if (currentLap >= mState.totalLaps) {
        finishPlayer(playerId, FINISH_NORMAL);
        return;
    }

    // Start next lap
    if (currentLap < MAX_LAPS) {
        result.lapTimes[currentLap].startFrame = mFrameCount;
        result.lapTimes[currentLap].isValid = 1;
        memset(mPlayerSectorTimes[playerId], 0, sizeof(mPlayerSectorTimes[playerId]));
    }

    mPlayerCheckpoints[playerId] = 0;
    mPlayerLastCheckpoint[playerId] = 0;

    if (playerId == 0) {
        mState.currentLap = static_cast<u8>(currentLap);
    }
}

// @addr 0x80460B80
void RaceSequence::validateLap(u32 playerId, const LapCheckpoint* checkpoints,
                               u32 count) {
    if (playerId >= MAX_RACE_PLAYERS || checkpoints == nullptr || count == 0) {
        return;
    }

    RaceResult& result = mResults[playerId];
    u32 currentLap = result.lapCount;
    if (currentLap >= MAX_LAPS) {
        return;
    }

    // Check that all checkpoints were hit in order
    u32 requiredMask = (1u << count) - 1;
    if ((mPlayerCheckpoints[playerId] & requiredMask) != requiredMask) {
        result.lapTimes[currentLap].isValid = 0;
    } else {
        result.lapTimes[currentLap].isValid = 1;
    }
}

// @addr 0x80460D40
const LapTimeData* RaceSequence::getLapTime(u32 playerId, u32 lapIndex) const {
    if (playerId >= MAX_RACE_PLAYERS || lapIndex >= MAX_LAPS) {
        return nullptr;
    }
    return &mResults[playerId].lapTimes[lapIndex];
}

// @addr 0x80460E80
u32 RaceSequence::getCurrentLap(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return 0;
    }
    return mResults[playerId].lapCount;
}

// @addr 0x80461000
u32 RaceSequence::getRaceTimeMs() const {
    return mState.totalRaceTimeMs;
}

// @addr 0x80461140
u32 RaceSequence::getPlayerRaceTimeMs(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return 0;
    }
    const RaceResult& result = mResults[playerId];
    if (result.finishReason == FINISH_NORMAL || result.finishReason == FINISH_DNF) {
        return result.totalTimeMs;
    }
    u32 currentLap = result.lapCount;
    if (currentLap >= MAX_LAPS) {
        currentLap = MAX_LAPS - 1;
    }
    u32 lapStartFrame = result.lapTimes[currentLap].startFrame;
    return framesToMs(mFrameCount - lapStartFrame);
}

// @addr 0x80461280
u32 RaceSequence::getBestLapTimeMs(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return 0;
    }
    return mResults[playerId].bestLapTimeMs;
}

// @addr 0x80461400
void RaceSequence::updateTiming() {
    if (mState.phase != RACE_PHASE_RACING && mState.phase != RACE_PHASE_FINISH) {
        return;
    }

    mState.raceTimer++;
    mState.totalRaceTimeMs = framesToMs(mState.raceTimer);
    mFrameCount++;
    mLastTimingUpdate = mFrameCount;
}

// @addr 0x80461540
void RaceSequence::registerCheckpoint(u32 playerId, u32 checkpointId,
                                      u32 sectorIndex) {
    if (playerId >= MAX_RACE_PLAYERS || checkpointId >= MAX_CHECKPOINTS) {
        return;
    }
    if (mState.phase != RACE_PHASE_RACING) {
        return;
    }

    u32 expected = mPlayerLastCheckpoint[playerId];
    if (checkpointId != expected) {
        return; // Must be hit in sequential order
    }

    mPlayerCheckpoints[playerId] |= (1u << checkpointId);
    mPlayerLastCheckpoint[playerId] = checkpointId + 1;

    if (sectorIndex < 5) {
        u32 prevSectorEnd = 0;
        for (u32 s = 0; s < sectorIndex; s++) {
            prevSectorEnd += mPlayerSectorTimes[playerId][s];
        }
        mPlayerSectorTimes[playerId][sectorIndex] =
            mFrameCount - resultLapStart(playerId) - prevSectorEnd;
    }
}

// @addr 0x804616C0
void RaceSequence::setupCheckpoints(u16 courseId) {
    UNUSED(courseId);
    memset(mCheckpoints, 0, sizeof(mCheckpoints));
    mCheckpointCount = 0;

    // Stub: real implementation parses course KCP data
    for (u32 i = 0; i < 5; i++) {
        mCheckpoints[i].checkpointId = i;
        mCheckpoints[i].sectorIndex = i;
        mCheckpoints[i].positionX = 0.0f;
        mCheckpoints[i].positionY = 0.0f;
        mCheckpoints[i].positionZ = 0.0f;
        mCheckpoints[i].radius = 50.0f;
    }
    mCheckpointCount = 5;
}

// Phase 24: setupCheckpointsFromKMP — Load real checkpoint data from platform KMP
//
// Called via course_bridge from SceneRace::initSubsystems() after the
// platform TrackManager has parsed the KMP file. This replaces the stub
// checkpoint positions (all at origin) with the actual checkpoint volumes
// from the course data, enabling proper lap validation in RaceSequence.
void RaceSequence::setupCheckpointsFromKMP(u32 count, const LapCheckpoint* checkpoints) {
    memset(mCheckpoints, 0, sizeof(mCheckpoints));
    mCheckpointCount = 0;

    if (checkpoints == nullptr || count == 0) {
        return;
    }

    u32 maxCount = (count < MAX_CHECKPOINTS) ? count : MAX_CHECKPOINTS;
    for (u32 i = 0; i < maxCount; i++) {
        mCheckpoints[i] = checkpoints[i];
    }
    mCheckpointCount = maxCount;
    mCheckpointsLoadedFromKMP = true;

    printf("[RaceSequence] Loaded %u checkpoints from KMP data\n", mCheckpointCount);
}

// @addr 0x80461840
const LapCheckpoint* RaceSequence::getCheckpoints(u32* outCount) const {
    if (outCount != nullptr) {
        *outCount = mCheckpointCount;
    }
    return mCheckpoints;
}

// @addr 0x80461980
void RaceSequence::update() {
    if (mState.isPaused) {
        return;
    }

    switch (mState.phase) {
    case RACE_PHASE_COUNTDOWN:
        processCountdown();
        break;
    case RACE_PHASE_RACING:
        processRacing();
        break;
    case RACE_PHASE_FINISH:
        processFinish();
        break;
    case RACE_PHASE_RESULTS:
        processResults();
        break;
    default:
        break;
    }
}

// @addr 0x80461B20
void RaceSequence::draw() {
    // Stub: drawing handled by UI subsystem
}

void RaceSequence::pause() {
    if (mState.phase == RACE_PHASE_RACING) {
        mState.isPaused = true;
        mState.phase = RACE_PHASE_PAUSED;
    }
}

void RaceSequence::resume() {
    if (mState.phase == RACE_PHASE_PAUSED) {
        mState.isPaused = false;
        mState.phase = RACE_PHASE_RACING;
    }
}

// @addr 0x80461CC0
const RaceResult* RaceSequence::getResult(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return nullptr;
    }
    return &mResults[playerId];
}

// @addr 0x80461F40
void RaceSequence::calculatePositions() {
    s32 sorted[MAX_RACE_PLAYERS];
    u32 sortedCount = 0;

    for (u32 i = 0; i < mState.playerCount; i++) {
        if (mResults[i].finishReason == FINISH_NORMAL) {
            s32 insertIdx = static_cast<s32>(sortedCount);
            for (s32 j = 0; j < static_cast<s32>(sortedCount); j++) {
                if (mResults[i].totalTimeMs < mResults[sorted[j]].totalTimeMs) {
                    insertIdx = j;
                    break;
                }
            }
            for (s32 j = static_cast<s32>(sortedCount); j > insertIdx; j--) {
                sorted[j] = sorted[j - 1];
            }
            sorted[insertIdx] = static_cast<s32>(i);
            sortedCount++;
        }
    }

    for (u32 i = 0; i < sortedCount; i++) {
        mResults[sorted[i]].position = static_cast<s32>(i) + 1;
    }

    u32 dnfPosition = static_cast<u32>(sortedCount) + 1;
    for (u32 i = 0; i < mState.playerCount; i++) {
        if (mResults[i].finishReason != FINISH_NORMAL) {
            mResults[i].position = static_cast<s32>(dnfPosition);
            dnfPosition++;
        }
    }
}

// @addr 0x804620C0
void RaceSequence::awardPoints() {
    static const u16 sPoints[] = {15, 12, 10, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    for (u32 i = 0; i < mState.playerCount; i++) {
        s32 pos = mResults[i].position;
        if (pos >= 1 && pos <= 12) {
            mResults[i].pointsAwarded = sPoints[pos - 1];
        } else {
            mResults[i].pointsAwarded = 0;
        }
    }
}

// @addr 0x80462240
s32 RaceSequence::compareWithGhost(f32 playerX, f32 playerY, f32 playerZ) {
    if (mGhostResult == nullptr) {
        return 0;
    }
    UNUSED(playerX);
    UNUSED(playerY);
    UNUSED(playerZ);

    // negative = player ahead, positive = behind
    u32 playerTime = getRaceTimeMs();
    u32 ghostTime = mGhostResult->totalTimeMs;

    if (playerTime > ghostTime) {
        return static_cast<s32>(playerTime - ghostTime);
    } else {
        return -static_cast<s32>(ghostTime - playerTime);
    }
}

// @addr 0x80462400
void RaceSequence::setGhostData(const RaceResult* ghost) {
    // Caller is responsible for lifetime management.
    mGhostResult = const_cast<RaceResult*>(ghost);
}

void RaceSequence::processCountdown() {
    advanceCountdown();

    if (mState.countdown == COUNTDOWN_DONE) {
        startRace();
    }
}

void RaceSequence::processRacing() {
    updateTiming();
}

void RaceSequence::processFinish() {
    updateTiming();

    if (mState.finishTimer > 0) {
        mState.finishTimer--;
    }

    if (mState.finishTimer == 0) {
        // Mark all unfinished players as DNF
        for (u32 i = 0; i < mState.playerCount; i++) {
            if (mResults[i].finishReason != FINISH_NORMAL) {
                finishPlayer(i, FINISH_TIME_UP);
            }
        }
        endRace();
    }
}

void RaceSequence::processResults() {
    // No-op: results screen managed externally
}

void RaceSequence::advanceCountdown() {
    if (mState.countdownTimer > 0) {
        mState.countdownTimer--;
    }

    // Each step is 60 frames (1 second)
    u32 step = mState.countdownTimer / (COUNTDOWN_FRAMES / 4);

    if (step >= 3) {
        mState.countdown = COUNTDOWN_3;
    } else if (step >= 2) {
        mState.countdown = COUNTDOWN_2;
    } else if (step >= 1) {
        mState.countdown = COUNTDOWN_1;
    } else if (mState.countdownTimer == 0) {
        mState.countdown = COUNTDOWN_DONE;
    } else {
        mState.countdown = COUNTDOWN_GO;
    }
}

u32 RaceSequence::resultLapStart(u32 playerId) const {
    if (playerId >= MAX_RACE_PLAYERS) {
        return 0;
    }
    u32 lap = mResults[playerId].lapCount;
    if (lap >= MAX_LAPS) {
        lap = MAX_LAPS - 1;
    }
    return mResults[playerId].lapTimes[lap].startFrame;
}

} // namespace RaceEngine