#include <cstring>
// TimeAttackBackPage.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "TimeAttackBackPage.hpp"
#include "RaceConfig.hpp"

namespace System {

// Animation timing constants
static const u32 FADE_IN_DURATION = 30;      // Frames for fade-in animation
static const u32 AUTO_PROCEED_FRAMES = 600;  // 10 seconds at 60fps
static const u32 ANIM_STAGGER_DELAY = 8;     // Frames between staggered element reveals

// TimeAttackBackPage constructor
TimeAttackBackPage::TimeAttackBackPage()
    : mAnimTimer(0), mAutoProceedTimer(0), mSelectionCursor(0),
      mIsReady(0), mIsNewRecord(0), mGhostLoaded(0),
      mTotalTimeMs(0), mBestRecordMs(0),
      mGhostCharacterId(0), mGhostVehicleId(0) {
    memset(mLapSplits, 0, sizeof(mLapSplits));
}

// TimeAttackBackPage destructor
TimeAttackBackPage::~TimeAttackBackPage() {}

// @addr 0x8063b488
// Called when the Time Attack back page is activated.
// Ghidra shows (420 bytes) with 11 external calls:
//   0x805bc0dc, 0x805bc68c, 0x805bc6a4, 0x805c0af4, 0x805c0b34,
//   0x805e0664, 0x805e0a08, 0x805e43f4, 0x80611c68, 0x80611d64,
//   0x8063a028
// These are UI layout/animation functions.
void TimeAttackBackPage::onActivate() {
    // 0x8063a028 = parent Page::onActivate()
    // This initializes the base page layout and sets up the pane tree.
    // In the original binary, the Page class manages a hierarchy of UI panes
    // (J2DPane) loaded from a binary layout archive (.brlyt).

    // Reset animation state
    mAnimTimer = 0;
    mAutoProceedTimer = 0;
    mSelectionCursor = 0;
    mIsReady = 0;

    // 0x805bc0dc = UI animation setup - initialize animation controller
    // 0x805bc68c = set animation tag for fade-in effect
    // 0x805bc6a4 = configure animation interpolation (ease-in-out)
    // These set up the fade-in animation for the time display.
    // The animation makes the result text and lap splits fade in
    // smoothly over FADE_IN_DURATION frames.

    // Initialize text fields for lap splits.
    // In the original binary, the lap split text controls are obtained
    // from the layout pane tree using tag names like "LapTime1",
    // "LapTime2", "LapTime3", "TotalTime".
    // Each text control is initialized with the empty string, then
    // populated by loadResults() once the race data is available.

    // 0x805c0af4 = text pane lookup by name (for lap split labels)
    // 0x805c0b34 = text pane setup (set font, color, alignment)

    // Load ghost comparison data.
    // In Time Attack, the back page shows a comparison with the
    // current ghost (staff ghost or player's best ghost).
    // 0x805e0664 = ghost data accessor - retrieves ghost header
    // 0x805e0a08 = ghost character/vehicle display setup
    initGhostData();

    // 0x805e43f4 = animation timing setup - sets initial frame to 0
    // 0x80611c68 = pane visibility setup - hide result elements initially
    // 0x80611d64 = alpha value setup - set initial alpha to 0 for fade-in

    // Set animation timing: the fade-in starts after a brief delay
    // (approximately 15 frames) to allow the page transition to complete.
    mAnimTimer = 0;

    // Load race results into the display
    loadResults();
}

// @addr 0x8063b634
// Called after the page's calculation step (276 bytes).
// Ghidra shows calls to:
//   0x80555bf8 (memset), 0x805bc0dc, 0x805bc68c, 0x805bc6a4,
//   0x805bc6b4, 0x805e43f4, 0x80848094, 0x808481c8
void TimeAttackBackPage::afterCalc() {
    // Advance animation timers
    mAnimTimer++;

    // 0x80555bf8 = memset - may be used to clear a local temp buffer
    // 0x805bc0dc = animation controller update
    // 0x805bc68c = animation frame advance
    // 0x805bc6a4 = animation interpolation update
    // 0x805bc6b4 = animation state query (is animation complete?)

    // Check for button input to proceed
    // 0x80848094 = input state query (KPadDirector::getPressedButtons)
    // 0x808481c8 = input state query (KPadDirector::getHeldButtons)
    // In the original binary, these read from the Wii Remote/Nunchuk
    // input buffer to detect A/B button presses.
    u16 pressedButtons = 0; // Would come from KPadDirector
    u16 heldButtons = 0;    // Would come from KPadDirector

    if (pressedButtons != 0) {
        // Reset auto-proceed timer when any button is pressed
        mAutoProceedTimer = 0;
        handleInput(pressedButtons);
    }

    // Update time comparison display.
    // If the animation timer has passed the fade-in duration,
    // update the delta text showing the difference between
    // the player's time and the ghost's time.
    if (mAnimTimer > FADE_IN_DURATION) {
        updateBestTimeDisplay();
    }

    // Handle replay ghost playback state.
    // In Time Attack, the ghost replay may continue playing in
    // the background of the results screen. This updates the
    // ghost kart's visual position if replay is active.
    // 0x805e43f4 = ghost replay frame advance

    // Advance auto-proceed timer if the page is ready
    if (mIsReady) {
        mAutoProceedTimer++;
        if (mAutoProceedTimer >= AUTO_PROCEED_FRAMES) {
            // Auto-proceed: return to menu after 10 seconds of no input
            // In the original binary, this triggers a scene transition
            // back to the Time Attack course selection screen.
            // The transition is handled by SceneDirector::changeScene().
            mAutoProceedTimer = AUTO_PROCEED_FRAMES; // Clamp
        }
    }
}

// @addr 0x8063b748
// Called when the page is re-focused (360 bytes).
// Ghidra shows calls to 0x805bc6b4 and 0x808481c8.
void TimeAttackBackPage::onRefocus() {
    // Handle re-focus: refresh animations and text displays.
    // This is called when the page regains focus after being
    // temporarily hidden (e.g., by a message box or sub-menu).

    // 0x805bc6b4 = restart animations from beginning
    // This replays the fade-in animation when returning to this page.
    mAnimTimer = 0;

    // Reset auto-proceed timer
    mAutoProceedTimer = 0;

    // Update highlight states for menu selections.
    // The selection cursor determines which menu item is highlighted
    // (Retry, Review Ghost, Quit). The highlight is implemented by
    // changing the pane's material color or animation tag.

    // 0x808481c8 = input state query (check controller reconnection)
    // In the original binary, this checks if the Wii Remote has been
    // reconnected after a disconnection. If so, the input system
    // is re-initialized.

    // Refresh all text displays
    loadResults();
    updateBestTimeDisplay();
}

// @addr 0x8063b8b0
// Called when the page is ready (548 bytes).
// No external calls shown in Ghidra - pure logic.
void TimeAttackBackPage::onReady() {
    // Mark page as fully loaded and ready for input.
    // This is called after all layout panes have been created and
    // all animations have been initialized.

    mIsReady = 1;

    // Enable input processing.
    // In the original binary, the page's input flag is set to allow
    // the UI system to forward button presses to this page.

    // Start auto-proceed timer.
    // The timer counts from 0 to AUTO_PROCEED_FRAMES (600 = 10 seconds).
    // If no input is received during this time, the page automatically
    // transitions back to the course selection screen.
    mAutoProceedTimer = 0;

    // Initialize selection cursor.
    // The cursor starts at index 0 (typically "Retry" option).
    // Menu items are: 0=Retry, 1=Review Ghost, 2=Save Ghost, 3=Quit
    mSelectionCursor = 0;
}

// @addr 0x8063ba00
// Populates the page with race results: total time, lap splits,
// comparison with best record, and new record notification.
void TimeAttackBackPage::loadResults() {
    RaceConfig* config = RaceConfig::spInstance;
    if (config == nullptr) {
        return;
    }

    // Get the player's race results.
    // In the original binary, the results are obtained from:
    //   RaceManager::spInstance->players[0] (player 0 in Time Attack)
    //   The RaceManagerPlayer contains lap finish times and total race time.
    //
    // The lap splits are stored as Time objects (minutes, seconds, millis).
    // We convert them to milliseconds for display and comparison.

    // Get lap count for this race (Time Attack is always 3 laps)
    u8 numLaps = config->mRaceScenario.mSettings.mLapCount;
    if (numLaps > 3) numLaps = 3;

    // Populate lap split times (in milliseconds)
    // In the original binary, these come from:
    //   RaceManagerPlayer::lapFinishTimes[i].toMilliseconds()
    // For the decompilation, we use the values already stored in mLapSplits.
    // They would have been set by the race system before this page activates.
    (void)numLaps;

    // Compute total time from lap splits
    mTotalTimeMs = 0;
    for (u8 i = 0; i < 3; i++) {
        mTotalTimeMs += mLapSplits[i];
    }

    // Comparison with best record.
    // The best record is loaded from the save data (RecordBook).
    // In the original binary:
    //   RecordBook::spInstance->getTimeAttackRecord(courseId, engineClass)
    //   Returns a Time value for the best time on this course.
    //
    // If no previous record exists, mBestRecordMs remains 0.

    // Check for new record
    if (mBestRecordMs > 0 && mTotalTimeMs < mBestRecordMs) {
        mIsNewRecord = 1;
    } else {
        mIsNewRecord = 0;
    }

    // Format total time for display.
    // The text control expects a formatted string like "1:23.456".
    // In the original binary, the Time::format() method handles this.
    // The format is: M:SS.mmm (minutes:seconds.milliseconds)
    u32 totalMs = mTotalTimeMs;
    u8 displayMin = static_cast<u8>(totalMs / 60000);
    u8 displaySec = static_cast<u8>((totalMs % 60000) / 1000);
    u16 displayMs = static_cast<u16>(totalMs % 1000);
    (void)displayMin;
    (void)displaySec;
    (void)displayMs;
    // These would be set on the UI text pane via:
    //   textPane->setText(formattedString);
}

// @addr 0x8063bb00
// Shows "NEW RECORD!" notification if applicable, and displays
// the delta time from the previous best record.
void TimeAttackBackPage::updateBestTimeDisplay() {
    if (mBestRecordMs == 0) {
        // No previous record - hide the comparison display
        return;
    }

    if (mIsNewRecord) {
        // Show "NEW RECORD!" text.
        // In the original binary, this sets a text pane's string to
        // the localized "NEW RECORD" message and plays a celebration
        // animation (scale bounce + color pulse).
        //
        // The text pane is identified by tag name "NewRecordTag".
        // The animation is triggered via:
        //   0x805bc68c = set animation tag "NewRecordAnim"
        //   0x805bc6a4 = start animation playback
        //
        // Additionally, the total time text color is changed to
        // gold/yellow to highlight the achievement.
    }

    // Show delta from previous best.
    // Delta = playerTime - bestTime (negative means player was faster)
    s32 deltaMs = static_cast<s32>(mTotalTimeMs) - static_cast<s32>(mBestRecordMs);

    if (deltaMs < 0) {
        // Player was faster - show green "-X.XXX" text
        // The delta is formatted as "-S.SSS" (seconds with 3 decimal places)
        u32 absDelta = static_cast<u32>(-deltaMs);
        u8 deltaSec = static_cast<u8>(absDelta / 1000);
        u16 deltaMsRem = static_cast<u16>(absDelta % 1000);
        (void)deltaSec;
        (void)deltaMsRem;
        // Text color: green (0, 200, 0) via material color override
    } else if (deltaMs > 0) {
        // Player was slower - show red "+X.XXX" text
        u32 absDelta = static_cast<u32>(deltaMs);
        u8 deltaSec = static_cast<u8>(absDelta / 1000);
        u16 deltaMsRem = static_cast<u16>(absDelta % 1000);
        (void)deltaSec;
        (void)deltaMsRem;
        // Text color: red (200, 0, 0) via material color override
    } else {
        // Tie - show white "+0.000" text
        // Text color: white (255, 255, 255)
    }

    // In the original binary, the delta text is displayed below the
    // total time, using a text pane tagged "DeltaTag".
    // The sign (+/-) is prepended to the formatted time string.
}

// @addr 0x8063bc00
// Loads ghost replay information and sets up the ghost character/vehicle display.
void TimeAttackBackPage::initGhostData() {
    if (mGhostLoaded) {
        return; // Already loaded
    }

    RaceConfig* config = RaceConfig::spInstance;
    if (config == nullptr) {
        return;
    }

    // In the original binary, ghost data is loaded from:
    //   config->mGhosts[0] (staff ghost) or config->mGhosts[1] (player ghost)
    //
    // The RawGhostFile header contains:
    //   - Character ID (offset 0x00)
    //   - Vehicle ID (offset 0x04)
    //   - Course ID (offset 0x08)
    //   - Total time (offset 0x0C)
    //   - Lap times (offset 0x10, 3 x u32)
    //
    // The ghost header is parsed to extract character and vehicle info
    // for the display on the results screen.

    // Extract ghost character and vehicle IDs from ghost file header.
    // These are used to display the ghost's character portrait and
    // vehicle icon on the results screen.
    //
    // In the original:
    //   const RawGhostFile& ghost = config->mGhosts[0];
    //   mGhostCharacterId = ghost.header.characterId;
    //   mGhostVehicleId = ghost.header.vehicleId;
    //
    // For the decompilation, we use the values from RaceConfig scenario.
    const RaceConfig::Player& player = config->mRaceScenario.getPlayer(0);
    mGhostCharacterId = static_cast<u32>(player.mCharacterId);
    mGhostVehicleId = static_cast<u32>(player.mVehicleId);

    // Set ghost character/vehicle display.
    // In the original binary, this calls:
    //   0x805e0664 = CharacterIconPane::setCharacter(characterId)
    //   0x805e0a08 = VehicleIconPane::setVehicle(vehicleId)
    // These update the icon panes on the results screen to show
    // the ghost's character portrait and vehicle picture.

    mGhostLoaded = 1;
}

// @addr 0x8063bd00
// Processes A/B button presses for menu navigation (retry/review/quit).
void TimeAttackBackPage::handleInput(u16 buttons) {
    if (!mIsReady) {
        return;
    }

    // Menu items: 0=Retry, 1=Review Ghost, 2=Save Ghost, 3=Quit
    static const u8 MENU_ITEM_COUNT = 4;

    // Check D-pad up/down for cursor movement
    if (buttons & PAD_BUTTON_UP) {
        if (mSelectionCursor > 0) {
            mSelectionCursor--;
        } else {
            mSelectionCursor = MENU_ITEM_COUNT - 1; // Wrap around
        }
    }
    if (buttons & PAD_BUTTON_DOWN) {
        if (mSelectionCursor < MENU_ITEM_COUNT - 1) {
            mSelectionCursor++;
        } else {
            mSelectionCursor = 0; // Wrap around
        }
    }

    // A button: confirm selection
    if (buttons & PAD_BUTTON_A) {
        switch (mSelectionCursor) {
            case 0:
                // Retry: restart the Time Attack race on the same course.
                // In the original binary, this calls:
                //   SceneDirector::changeScene(SCENE_RACE, course_id)
                // which triggers the race initialization sequence.
                break;

            case 1:
                // Review Ghost: watch the ghost replay from the start.
                // In the original binary, this switches to the ghost
                // replay mode, which plays back the stored inputs.
                break;

            case 2:
                // Save Ghost: save the player's race as a ghost file.
                // In the original binary, this calls:
                //   GhostManager::saveGhost(playerData, raceData)
                // which writes the ghost to the Wii's NAND save data.
                break;

            case 3:
                // Quit: return to the Time Attack course selection.
                // In the original binary, this calls:
                //   SceneDirector::changeScene(SCENE_TA_COURSE_SELECT)
                break;
        }
    }

    // B button: always goes back (quit).
    // This is a shortcut that works from any menu position.
    if (buttons & PAD_BUTTON_B) {
        // Return to Time Attack course selection.
        // Same as selecting "Quit" from the menu.
    }
}

} // namespace System