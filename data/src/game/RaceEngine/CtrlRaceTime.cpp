// CtrlRaceTime.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <cstring>
#include <cmath>
#include "CtrlRaceTime.hpp"
#include "Raceinfo.hpp"
#include "RaceConfig.hpp"
#include "RaceManager.hpp"

namespace System {

// Helper: format milliseconds to "M:SS.mmm" string
// Returns number of characters written (excluding null terminator).
u32 formatTime(char* buf, u32 bufSize, f32 timeMs) {
    if (buf == nullptr || bufSize < 10) {
        return 0;
    }

    // Handle negative time (countdown phase)
    bool negative = false;
    if (timeMs < 0.0f) {
        negative = true;
        timeMs = -timeMs;
    }

    // Clamp to reasonable range
    if (timeMs < 0.0f) {
        timeMs = 0.0f;
    }
    if (timeMs > 599999.999f) {
        timeMs = 599999.999f;
    }

    // Extract minutes, seconds, milliseconds
    u32 totalMs = (u32)timeMs;
    u32 ms = totalMs % 1000;
    u32 totalSeconds = totalMs / 1000;
    u32 seconds = totalSeconds % 60;
    u32 minutes = totalSeconds / 60;

    u32 offset = 0;

    // Negative sign for countdown
    if (negative) {
        buf[offset++] = '-';
    }

    // Minutes (single digit, max 9:59.999)
    buf[offset++] = (char)('0' + (minutes % 10));
    buf[offset++] = ':';

    // Seconds (two digits, zero-padded)
    buf[offset++] = (char)('0' + (seconds / 10));
    buf[offset++] = (char)('0' + (seconds % 10));
    buf[offset++] = '.';

    // Milliseconds (three digits, zero-padded)
    buf[offset++] = (char)('0' + (ms / 100));
    buf[offset++] = (char)('0' + ((ms / 10) % 10));
    buf[offset++] = (char)('0' + (ms % 10));
    buf[offset] = '\0';

    return offset;
}

CtrlRaceTime::CtrlRaceTime() {
    flags = 0;
    timeValue = 0.0f;
    lastTime = 0.0f;
    memset(mTimeText, 0, sizeof(mTimeText));
    mDeltaDisplay = 0.0f;
    mLagCounter = 0;
    mShowDelta = false;
    mDeltaColor = 0;
}

CtrlRaceTime::~CtrlRaceTime() {
}

// @addr 0x807fa154
// Initializes the timer display control.
// Ghidra shows:
// - Loads flags at +0x00, checks bit 23 (rlwinm. r0, r0, 0, 0x17, 0x17)
// - If bit 23 is clear, calls 0x807b55e0 (a UI setup function)
//   with a float value from global data at offset +0x08
// - Returns 1 (success)
void CtrlRaceTime::initSelf() {
    if (!(flags & (1 << 23))) {
        // Call UI text setup with time format float
        // 0x807b55e0(this, parentControl, timeFormat);
        // When bit 23 is clear, the timer is in the default time display mode.
        // Setup the text control with time formatting parameters.

        // Initialize display values
        timeValue = 0.0f;
        lastTime = 0.0f;

        // Set initial text content to "0:00.000"
        ::System::formatTime(mTimeText, sizeof(mTimeText), 0.0f);

        mDeltaDisplay = 0.0f;
        mLagCounter = 0;
        mShowDelta = false;
        mDeltaColor = 0;
    }
}

// @addr 0x807fa3a8
// Calculates the current race time to display.
// Ghidra shows (940 bytes):
// - Early exit returning 0 if some condition not met (bne check)
// - Calls 0x807f9cac (timer calculation helper) with self and parent args
// - Calls 0x8051aeac (time formatting) storing result at self+0x134
// - Loads a global float constant, loads stored time at +0x50
// - Performs floating-point arithmetic for display
void CtrlRaceTime::calcSelf() {
    // Early exit check — if race hasn't started, don't update
    // (bne check from Ghidra: some condition flag)
    if (RaceManager::spInstance == nullptr) {
        return;
    }

    // Compute elapsed time from race timer
    // In the full implementation, 0x807f9cac reads from the global
    // race timer and returns the current time in milliseconds.
    f32 currentMs = 0.0f;

    RaceStage stage = RaceManager::spInstance->stage;
    if (stage == COUNTDOWN) {
        // During countdown, show negative time or zero
        currentMs = 0.0f;
    } else if (stage == RACE) {
        // During the race, compute elapsed time from frame counter
        // MKWii runs at 60 FPS exactly → 1000/60 = 16.666...ms per frame
        // Phase 26: precise conversion matching original hardware
        currentMs = (f32)(RaceManager::spInstance->timer) * (1000.0f / 60.0f);
    } else if (stage == FINISHED_RACE) {
        // After finish, freeze the displayed time
        currentMs = timeValue;
    }

    // Handle negative time (countdown)
    if (currentMs < 0.0f) {
        ::System::formatTime(mTimeText, sizeof(mTimeText), currentMs);
        timeValue = currentMs;
        return;
    }

    // Store the computed time
    timeValue = currentMs;

    // Format as MM:SS.mmm for display
    // 0x8051aeac (time formatting) stores result at self+0x134
    ::System::formatTime(mTimeText, sizeof(mTimeText), currentMs);

    // Update lap delta display for Time Attack mode
    if (RaceConfig::spInstance != nullptr) {
        bool isTimeAttack = (RaceConfig::spInstance->mRaceScenario.mSettings.mGameMode
            == RaceConfig::Settings::GAMEMODE_TIME_TRIAL);
        if (isTimeAttack) {
            mShowDelta = true;
            // Delta is computed relative to ghost or best time
            // For now, leave delta at zero until ghost comparison is implemented
            mDeltaDisplay = 0.0f;
            mDeltaColor = 0;
        }
    }
}

// @addr 0x807fa9a8
// Refreshes the timer display (680 bytes).
// Ghidra shows:
// - Loads f32 from +0xa8 (lastTime)
// - Loads f32 from +0x00 (current/base value)
// - Computes f1 = f2 - f1 (time delta)
// - Then 680 bytes of display update logic
void CtrlRaceTime::refresh() {
    // Computes time delta since last refresh
    f32 delta = lastTime - timeValue; // fsubs f1, f2, f1

    // Update the animation lag counter
    mLagCounter++;

    // Update animation states — the display text is already updated
    // by calcSelf(), but refresh handles the visual transition effects.

    // Handle time comparison display (green if faster, red if slower)
    if (mShowDelta) {
        f32 absDelta = delta;
        if (absDelta < 0.0f) {
            absDelta = -absDelta;
        }

        // Only update color when delta is significant (> 1ms)
        if (absDelta > 1.0f) {
            if (delta < 0.0f) {
                // Current time is less than last — player is faster (green)
                mDeltaColor = 1;
            } else if (delta > 0.0f) {
                // Current time is greater — player is slower (red)
                mDeltaColor = 2;
            }
            mDeltaDisplay = delta;
        }
    }

    // Store current time for next refresh comparison
    lastTime = timeValue;
}

} // namespace System

namespace System {

// @addr 0x807fa0c0 (estimated)
// Initialize the race timer for a new race.
// Resets all timing state and prepares the display for the given lap count.
void CtrlRaceTime::init(u8 lapCount) {
    flags = 0;
    timeValue = 0.0f;
    lastTime = 0.0f;
    memset(mTimeText, 0, sizeof(mTimeText));
    mDeltaDisplay = 0.0f;
    mLagCounter = 0;
    mShowDelta = false;
    mDeltaColor = 0;
    mLapCount = lapCount > 0 ? lapCount : 3;
    mClockRunning = false;
    mClockStartFrame = 0;
    mLapTimes[0] = 0.0f;
    mLapTimes[1] = 0.0f;
    mLapTimes[2] = 0.0f;
    mLapStartTimes[0] = 0.0f;
    mLapStartTimes[1] = 0.0f;
    mLapStartTimes[2] = 0.0f;
    mTotalTimeMs = 0.0f;
    mCurrentLapStartMs = 0.0f;
    mBestLapMs = 999999.0f;
    mGhostTimeMs = 0.0f;

    // Set initial display to "0:00.000"
    ::System::formatTime(mTimeText, sizeof(mTimeText), 0.0f);
}

// @addr 0x807fa100 (estimated)
// Per-frame update for the race timer.
// Called every frame during the race to refresh the displayed time.
void CtrlRaceTime::update() {
    if (!mClockRunning) {
        return;
    }
    calcSelf();
    refresh();
}

// @addr 0x807fa0e0 (estimated)
// Format a time value in milliseconds to a display string.
// This wraps the free function formatTime but is a method version
// that updates the internal mTimeText buffer.
void CtrlRaceTime::formatTimeString(f32 timeMs) {
    // Handle negative values (countdown phase)
    if (timeMs < 0.0f) {
        timeMs = 0.0f;
    }
    // Clamp to max displayable (9:59.999)
    if (timeMs > 599999.999f) {
        timeMs = 599999.999f;
    }
    ::System::formatTime(mTimeText, sizeof(mTimeText), timeMs);
}

// @addr 0x807fa110 (estimated)
// Get the current formatted time display string.
// Returns pointer to the internal text buffer.
const char* CtrlRaceTime::getTimeDisplay() const {
    return mTimeText;
}

// @addr 0x807fa130 (estimated)
// Get the time for a specific lap (1-indexed).
// Returns 0.0 if the lap index is out of range or the lap hasn't been completed.
f32 CtrlRaceTime::getLapTime(u8 lap) const {
    if (lap == 0 || lap > mLapCount || lap > 3) {
        return 0.0f;
    }
    return mLapTimes[lap - 1];
}

// @addr 0x807fa140 (estimated)
// Get the total elapsed race time in milliseconds.
f32 CtrlRaceTime::getTotalTime() const {
    return mTotalTimeMs;
}

// @addr 0x807fa150 (estimated)
// Start the race clock. Called when the race begins (after countdown).
void CtrlRaceTime::startClock() {
    mClockRunning = true;
    mClockStartFrame = mLagCounter;
    mCurrentLapStartMs = 0.0f;
    // Clear delta display
    mShowDelta = false;
    mDeltaDisplay = 0.0f;
    mDeltaColor = 0;
}

// @addr 0x807fa160 (estimated)
// Stop the race clock. Called when the player finishes the race.
void CtrlRaceTime::stopClock() {
    mClockRunning = false;
    // Freeze the displayed time at the final value
    ::System::formatTime(mTimeText, sizeof(mTimeText), timeValue);
}

// @addr 0x807fa170 (estimated)
// Reset the race clock to zero. Called on race restart.
void CtrlRaceTime::resetClock() {
    mClockRunning = false;
    timeValue = 0.0f;
    lastTime = 0.0f;
    mTotalTimeMs = 0.0f;
    mCurrentLapStartMs = 0.0f;
    mBestLapMs = 999999.0f;
    mGhostTimeMs = 0.0f;
    for (u8 i = 0; i < 3; i++) {
        mLapTimes[i] = 0.0f;
        mLapStartTimes[i] = 0.0f;
    }
    mShowDelta = false;
    mDeltaDisplay = 0.0f;
    mDeltaColor = 0;
    ::System::formatTime(mTimeText, sizeof(mTimeText), 0.0f);
}

// Record a lap completion time
// @addr 0x807fa180 (estimated)
void CtrlRaceTime::recordLap(f32 lapTimeMs) {
    if (mCurrentLap > 0 && mCurrentLap <= 3) {
        u8 idx = mCurrentLap - 1;
        mLapTimes[idx] = lapTimeMs;
        // Update best lap
        if (lapTimeMs < mBestLapMs && lapTimeMs > 0.0f) {
            mBestLapMs = lapTimeMs;
        }
    }
    // Set the start time for the next lap
    mCurrentLapStartMs = mTotalTimeMs;
}

// Get the best lap time recorded so far
// @addr 0x807fa190 (estimated)
f32 CtrlRaceTime::getBestLapTime() const {
    if (mBestLapMs >= 999999.0f) {
        return 0.0f;
    }
    return mBestLapMs;
}

// Set the ghost reference time for delta display
// @addr 0x807fa1a0 (estimated)
void CtrlRaceTime::setGhostTime(f32 ghostMs) {
    mGhostTimeMs = ghostMs;
    mShowDelta = (ghostMs > 0.0f);
}

// Get the current delta relative to the ghost (negative = ahead)
// @addr 0x807fa1b0 (estimated)
f32 CtrlRaceTime::getDeltaToGhost() const {
    if (!mShowDelta || mGhostTimeMs <= 0.0f) {
        return 0.0f;
    }
    return timeValue - mGhostTimeMs;
}

CtrlRaceLap::CtrlRaceLap() {
    lapTime = 0.0f;
    storedValue = 10.0f;  // Division-by-10 threshold
    displayVal = 0.0f;
    someData = 0;
    memset(mLapText, 0, sizeof(mLapText));
    mDisplayedLap = 1;
    mPreviousLap = 0;
    mIsFinalLap = false;
}

CtrlRaceLap::~CtrlRaceLap() {
}

void CtrlRaceLap::initSelf() {
    // Initialize lap display, set initial "LAP 1" text
    displayVal = 1.0f;
    mDisplayedLap = 1;
    mPreviousLap = 0;
    mIsFinalLap = false;

    // Set initial "LAP 1" text
    mLapText[0] = 'L';
    mLapText[1] = 'A';
    mLapText[2] = 'P';
    mLapText[3] = ' ';
    mLapText[4] = '1';
    mLapText[5] = '\0';
}

void CtrlRaceLap::calcSelf() {
    // Update current lap from Raceinfo.
    // In the full implementation, this reads the current lap from
    // the player's RaceinfoPlayer (accessed via RaceManager) and
    // triggers a display update if the lap has changed.
    // The actual lap data comes through the RaceManager's player array,
    // which is updated each frame by the race logic.
    if (RaceManager::spInstance == nullptr) {
        return;
    }
    // Lap display is updated in load() via the division-by-10 trick.
    // calcSelf() is called before load() to prepare state.
}

// @addr 0x807f1db8
// Loads lap display data. Ghidra shows (172 bytes):
// - Division by 10 using multiply-by-magic (0x6667, mulhw, srawi)
//   which computes value / 10
// - Compares quotient with a stored value (r28)
// - If quotient < stored, loads f32 from +0x128 into +0x180
// - Stores lap count value to a global
// - Calls 0x80613104 twice (UI text setting) with string offsets
//   0x121 "LAP" and 0x12d (lap number format)
// - Additional logic for +0x190 data and float comparison at +0x148
void CtrlRaceLap::load() {
    // Compute current lap number using division-by-10 trick
    // The Ghidra decomp shows multiply-by-magic: value * 0x6667,
    // then mulhw (multiply high word), then srawi (arithmetic shift right)
    // This computes value / 10 for integer division.

    // Load the raw lap value (from parent/raceinfo)
    f32 rawValue = lapTime; // +0x128

    // Compute quotient = (s32)(rawValue) / 10
    s32 intVal = (s32)rawValue;
    // Division by 10 using multiply-by-magic: (intVal * 0x6667) >> (16 + 1)
    s32 quotient = (s32)(((s64)intVal * 0x6667) >> 19);

    // Compare quotient with the stored value
    f32 stored = storedValue; // +0x148
    if ((f32)quotient < stored) {
        // If quotient < stored, update display value from +0x128
        displayVal = lapTime; // +0x128 → +0x180
    }

    // Determine the current lap number
    u8 currentLap = 1;
    u8 maxLaps = 3;

    // Read from RaceConfig for max laps
    if (RaceConfig::spInstance != nullptr) {
        maxLaps = RaceConfig::spInstance->mRaceScenario.mSettings.mLapCount;
        if (maxLaps == 0) {
            maxLaps = 3;
        }
    }

    // Compute current lap from the race timer or raceinfo
    // The lap count is typically stored in Raceinfo
    if (RaceManager::spInstance != nullptr && RaceManager::spInstance->players != nullptr) {
        // In the full implementation, read from the player's RaceManagerPlayer
        // For now, use the quotient-based calculation from Ghidra
        if (quotient >= 1 && quotient <= (s32)maxLaps) {
            currentLap = (u8)quotient;
        }
    }

    // Handle "FINAL LAP" display
    mIsFinalLap = (currentLap == maxLaps);

    // Update the lap text if it changed
    if (currentLap != mDisplayedLap) {
        mPreviousLap = mDisplayedLap;
        mDisplayedLap = currentLap;

        // Store lap count value to a global
        someData = currentLap; // +0x190

        // 0x80613104 is called twice (UI text setting):
        // First call with "LAP" (offset 0x121)
        // Second call with lap number format (offset 0x12d)

        if (mIsFinalLap) {
            // "FINAL LAP" text
            mLapText[0] = 'F';
            mLapText[1] = 'I';
            mLapText[2] = 'N';
            mLapText[3] = 'A';
            mLapText[4] = 'L';
            mLapText[5] = ' ';
            mLapText[6] = 'L';
            mLapText[7] = 'A';
            mLapText[8] = 'P';
            mLapText[9] = '\0';
        } else {
            // "LAP X" text
            mLapText[0] = 'L';
            mLapText[1] = 'A';
            mLapText[2] = 'P';
            mLapText[3] = ' ';
            // Convert lap number to digit(s)
            if (currentLap < 10) {
                mLapText[4] = (char)('0' + currentLap);
                mLapText[5] = '\0';
            } else {
                // Two-digit lap number (unlikely but supported)
                mLapText[4] = (char)('0' + (currentLap / 10));
                mLapText[5] = (char)('0' + (currentLap % 10));
                mLapText[6] = '\0';
            }
        }
    }

    // Float comparison at +0x148 for animation trigger
    // If displayVal crossed the storedValue threshold, trigger text animation
    if (displayVal >= storedValue && mPreviousLap != currentLap) {
        // Lap change detected — animation state would be set here
        // In the full implementation, this triggers the lap text
        // scale/fade animation on the UI control
    }
}

} // namespace System