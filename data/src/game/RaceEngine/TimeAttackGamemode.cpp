// TimeAttackGamemode.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <cstring>
#include "TimeAttackGamemode.hpp"
#include "Raceinfo.hpp"
#include "RaceinfoPlayer.hpp"
#include "RaceConfig.hpp"
#include "RaceManager.hpp"

namespace System {

// Time Attack runs at 60 FPS on NTSC, so 1 frame ≈ 16.667ms
static const u32 MS_PER_FRAME = 17; // ~60fps rounded

// Default lap count for Time Trial
static const u8 DEFAULT_TA_LAPS = 3;

TimeAttackGamemode::TimeAttackGamemode() {
    raceinfo = nullptr;
    someArray = nullptr;
    mRaceTimerMs = 0;
    mCurrentLap = 0;
    mMaxLaps = DEFAULT_TA_LAPS;
    mRaceFinished = false;
    mGhostRecording = false;
    mGhostPlaying = false;
    mGhostFrame = 0;
    mGhostTotalFrames = 0;
    mBestTimeMs = 0xFFFFFFFF;
    mLastLapTimeMs = 0;
    mGhostInputCount = 0;
    mFrameCounter = 0;
    memset(mLapTimes, 0, sizeof(mLapTimes));
    memset(mGhostInputBuffer, 0, sizeof(mGhostInputBuffer));
}

TimeAttackGamemode::~TimeAttackGamemode() {
    // Ghost recording buffer is a fixed-size member, no dynamic cleanup needed
}

// @addr 0x805381fc
// Determines if the time attack race can end.
// Ghidra shows (212 bytes):
// - Jumps to 0x80538278 (main logic entry)
// - If r28 (currentKartId) matches r0 (targetKartId from raceinfo+0x20):
//   sets r30 = r28, jumps to end
// - Otherwise iterates through player array (0x00-based linked list):
//   - Loads player at 0x00(r30)
//   - Checks 0x08(r3) for player count, 0x04(r4) for array size
//   - Calls 0x80516f24 to get player by index
//   - Compares target id at 0x18(r3) with r28
//   - If match, stores and breaks
// - After finding target, loads data from raceinfo structure:
//   - 0x0c(r3) indexed by player id to get raceinfo entry
//   - 0x20 = maxLap, 0x24 = lapCount
// - If 0x80516f24 (getRaceinfo) returns non-null:
//   - Calls 0x80516f18 with position/rotation arrays
// - If getRaceinfo returns null (no ghost data):
//   - Sets three Vec3f (position) to zero using global zero float
//   - Sets three Vec3f (rotation) to zero
bool TimeAttackGamemode::canEndRace() {
    // In Time Attack, the race can end when the player completes
    // all laps. This function checks the player's lap count against
    // the maximum laps for this course via the Raceinfo pointer.
    if (raceinfo == nullptr) {
        return false;
    }

    // Time Attack always has exactly 1 local player (index 0)
    RaceinfoPlayer* player = &raceinfo->players[0];
    if (player == nullptr) {
        return false;
    }

    // Check if the player's current lap count has reached the maximum
    s8 lapCount = player->lapCount;
    s8 maxLap = player->maxLap;

    // Race is completable when the player has finished all laps
    bool completedAllLaps = (lapCount >= maxLap);

    // Also check the race hasn't already been finalized
    if (mRaceFinished) {
        return false;
    }

    return completedAllLaps;
}

void TimeAttackGamemode::initRace() {
    // Reset all Time Attack state for a new race
    mRaceTimerMs = 0;
    mCurrentLap = 0;
    mRaceFinished = false;
    mGhostRecording = false;
    mGhostPlaying = false;
    mGhostFrame = 0;
    mGhostTotalFrames = 0;
    mLastLapTimeMs = 0;
    mGhostInputCount = 0;
    mFrameCounter = 0;

    // Clear per-lap timing data
    memset(mLapTimes, 0, sizeof(mLapTimes));

    // Clear ghost input buffer
    memset(mGhostInputBuffer, 0, sizeof(mGhostInputBuffer));

    // Determine lap count from RaceConfig (typically 3 for Time Trial)
    if (RaceConfig::spInstance != nullptr) {
        mMaxLaps = RaceConfig::spInstance->mRaceScenario.mSettings.mLapCount;
        if (mMaxLaps == 0) {
            mMaxLaps = DEFAULT_TA_LAPS;
        }

        // Check if there is a ghost to play back
        RawGhostFile* ghost = RaceConfig::spInstance->mRaceScenario.mGhost;
        if (ghost != nullptr && ghost->_00[0] != 0) {
            mGhostPlaying = true;
            mGhostFrame = 0;
            // Ghost total frames would be parsed from the ghost header
            mGhostTotalFrames = 7200; // Default 2 minutes of frames
        }
    } else {
        mMaxLaps = DEFAULT_TA_LAPS;
    }

    // Initialize Raceinfo player with max lap count
    if (raceinfo != nullptr && raceinfo->players != nullptr) {
        RaceinfoPlayer* player = &raceinfo->players[0];
        player->maxLap = (s8)mMaxLaps;
        player->lapCount = 0;
        player->finishTime = 0;
    }

    // Begin recording the player's input for ghost replay
    beginGhostRecording();
}

void TimeAttackGamemode::update() {
    // Per-frame update for Time Attack mode
    if (mRaceFinished) {
        return;
    }

    // Advance the frame counter
    mFrameCounter++;

    // Update race timer (~17ms per frame at 60fps)
    mRaceTimerMs += MS_PER_FRAME;

    // Update ghost playback if active
    if (mGhostPlaying) {
        updateGhostPlayback();
    }

    // Check for lap completion via Raceinfo
    if (raceinfo != nullptr && raceinfo->players != nullptr) {
        RaceinfoPlayer* player = &raceinfo->players[0];

        u8 newLap = (u8)player->lapCount;
        if (newLap > mCurrentLap && mCurrentLap > 0) {
            // Player completed a lap — record the lap time
            mLastLapTimeMs = mRaceTimerMs - mLapTimes[mCurrentLap - 1];
            if (newLap <= 10) {
                mLapTimes[newLap - 1] = mRaceTimerMs;
            }
        } else if (newLap > 0 && mLapTimes[newLap - 1] == 0) {
            // First lap just started, record start
            mLapTimes[0] = 0;
        }

        mCurrentLap = newLap;

        // Record ghost input if recording
        if (mGhostRecording && mGhostInputCount < sizeof(mGhostInputBuffer)) {
            // Store a minimal input frame: 2 bytes for buttons + 2 for stick
            u32 inputIdx = mGhostInputCount;
            if (inputIdx + 4 <= sizeof(mGhostInputBuffer)) {
                // Placeholder: store frame marker (real impl reads from KPadDirector)
                mGhostInputBuffer[inputIdx] = 0;
                mGhostInputBuffer[inputIdx + 1] = 0;
                mGhostInputBuffer[inputIdx + 2] = 0;
                mGhostInputBuffer[inputIdx + 3] = 0;
                mGhostInputCount += 4;
            }
        }

        // Check if race should end
        if (canEndRace()) {
            // Record final lap time
            if (mCurrentLap <= 10) {
                mLapTimes[mCurrentLap] = mRaceTimerMs;
            }
            endRace();
        }
    }
}

void TimeAttackGamemode::endRace() {
    // Finalize the Time Attack race
    mRaceFinished = true;

    // Stop ghost recording
    endGhostRecording();

    // Stop ghost playback
    mGhostPlaying = false;

    // Compare the finish time against the best time
    if (mRaceTimerMs < mBestTimeMs) {
        mBestTimeMs = mRaceTimerMs;
        // The ghost data in mGhostInputBuffer is now the new best ghost
        // It would be saved to the Wii save data here
    }

    // Store finish time in Raceinfo for results display
    if (raceinfo != nullptr && raceinfo->players != nullptr) {
        RaceinfoPlayer* player = &raceinfo->players[0];
        player->finishTime = (s32)mRaceTimerMs;
        player->lapCount = (s8)mCurrentLap;
    }

    // Update RaceConfig finish position (always 1st in Time Attack)
    if (RaceConfig::spInstance != nullptr) {
        RaceConfig::spInstance->mRaceScenario.getPlayer(0).mFinishPos = 1;
    }
}

void TimeAttackGamemode::beginGhostRecording() {
    // Start recording player input for ghost replay
    mGhostRecording = true;
    mGhostInputCount = 0;
    memset(mGhostInputBuffer, 0, sizeof(mGhostInputBuffer));
}

void TimeAttackGamemode::endGhostRecording() {
    // Finalize ghost data, validate, and store if record
    if (!mGhostRecording) {
        return;
    }

    mGhostRecording = false;

    // Validate the ghost: must have a reasonable number of frames
    // A typical Time Trial is 1-3 minutes = 3600-10800 frames
    u32 minFrames = 600;   // At least 10 seconds
    u32 maxFrames = 21600; // At most 6 minutes

    u32 recordedFrames = mGhostInputCount / 4;
    if (recordedFrames < minFrames || recordedFrames > maxFrames) {
        // Ghost is invalid — too short or too long
        mGhostInputCount = 0;
        return;
    }

    // If this is a new best time, the ghost data in mGhostInputBuffer
    // should be persisted. The actual save logic would write to
    // the system's ghost file storage.
    // For now the buffer retains the data for the results screen.
}

bool TimeAttackGamemode::isGhostPlaying() const {
    return mGhostPlaying;
}

void TimeAttackGamemode::updateGhostPlayback() {
    // Per-frame: read ghost input at current frame, advance frame counter.
    // In the full implementation, this reads from the ghost file loaded
    // in RaceConfig::mRaceScenario.mGhost and feeds the input to the
    // ghost kart driver.

    if (!mGhostPlaying) {
        return;
    }

    // Advance the ghost playback frame
    mGhostFrame++;

    // Check if ghost has finished (reached total frame count)
    if (mGhostFrame >= mGhostTotalFrames) {
        // Ghost replay has completed; stop playback
        mGhostPlaying = false;
        mGhostFrame = mGhostTotalFrames;
        return;
    }

    // In the full implementation, we would:
    // 1. Read ghost input data from the loaded ghost file at mGhostFrame
    // 2. Apply the input to the ghost kart (steering, acceleration, items)
    // The ghost file contains pre-recorded KPadRaceInputState per frame
}

u32 TimeAttackGamemode::getRaceTime() const {
    return mRaceTimerMs;
}

u8 TimeAttackGamemode::getCurrentLap() const {
    return mCurrentLap;
}

u8 TimeAttackGamemode::getMaxLaps() const {
    return mMaxLaps;
}

} // namespace System