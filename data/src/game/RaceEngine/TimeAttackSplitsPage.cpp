// TimeAttackSplitsPage.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "TimeAttackSplitsPage.hpp"
#include <cstring>
#include <cmath>

namespace System {

// Animation constants
static const u8 ANIM_DELAY_PER_ENTRY = 10;   // Frames between each entry appearing
static const u8 ANIM_FADE_FRAMES = 8;         // Frames for fade-in per entry
static const f32 TOTAL_DELTA_FAST_THRESHOLD = -0.001f;  // Below this = personal best

// Color constants for delta display (RGBA as packed u32)
static const u32 COLOR_IMPROVED = 0xFF00C800;  // Green (improved lap)
static const u32 COLOR_SLOWER   = 0xFF0000C8;  // Red (slower lap)
static const u32 COLOR_NEUTRAL  = 0xFFFFFFFF;  // White (same time)
static const u32 COLOR_TOTAL    = 0xFFFFFF64;  // Yellow tint for total line

// ============================================================================
// Constructor / Destructor
// ============================================================================

// @addr 0x80857bcc
// Constructor thunk for TimeAttackSplitsPage (368 bytes).
// Ghidra shows calls to:
//   0x80555bf8 (memset), 0x805bc074, 0x805dc968, 0x805e398c, 0x80612d08
// These are UI framework initialization functions.
void TimeAttackSplitsPage::ct() {
    // Zero out all member fields via memset
    // The original binary calls memset(this, 0, sizeof(TimeAttackSplitsPage))
    // then calls UI framework constructors for the page layout
    memset(this, 0, sizeof(TimeAttackSplitsPage));
    // Calls parent constructor via vtable (0x805bc074)
    // Initializes layout controls for split time display
    // 0x805dc968 = likely UIControl::create — creates the page pane
    // 0x805e398c = likely text/label setup — creates lap split text labels
    // 0x80612d08 = likely animation setup — configures fade-in animation

    // Initialize animation state
    mFadeAlpha = 0;
    mAnimState = ANIM_IDLE;
    mBestDeltaLap = 0xFF; // No best lap yet
}

// @addr 0x80857bcc (implicit default constructor, delegates to ct())
TimeAttackSplitsPage::TimeAttackSplitsPage() {
    ct();
}

// @addr 0x80857bc0 (approximate)
TimeAttackSplitsPage::~TimeAttackSplitsPage() {
    // Virtual destructor — the base UI page class cleans up controls
    // No additional cleanup needed for POD member arrays
}

// ============================================================================
// onActivate — Page activation (fade in, load splits)
// ============================================================================

// @addr 0x80858040 (approximate)
void TimeAttackSplitsPage::onActivate() {
    mFadeAlpha = 0;
    mAnimState = ANIM_FADING_IN;

    // Load ghost splits from the race manager's stored ghost data
    loadGhostSplits();

    // Load personal best splits from save data for comparison
    loadPersonalBest();

    // Determine which splits are personal bests
    updateBestIndicator();

    // Calculate total delta across all laps
    mTotalDelta = calculateTotalDelta();

    // Initialize scroll-in animation for split rows
    initAnimation();
}

// ============================================================================
// loadGhostSplits — Parse ghost data to extract per-lap split times
// ============================================================================

// @addr 0x80858100 (approximate)
void TimeAttackSplitsPage::loadGhostSplits() {
    if (!mInitialized) {
        return;
    }

    // Ghost splits are already populated via init().
    // This method re-extracts them in case the ghost data source changed.
    // In the original binary, this reads from the ghost header's lap times
    // and converts them to f32 milliseconds for display.

    // The ghost header stores times as (minutes, seconds, millis).
    // Convert each to total milliseconds: minutes*60000 + seconds*1000 + millis
    for (u8 i = 0; i < mLapCount; i++) {
        // Ghost splits are stored directly as f32 milliseconds
        // (conversion from Time struct happens at load time)
        mGhostSplitTimes[i] = mGhostSplits[i];
    }

    // Total ghost time
    mGhostSplitTimes[mLapCount] = mGhostSplits[mLapCount];
}

// ============================================================================
// loadPersonalBest — Load PB splits from save data
// ============================================================================

// @addr 0x80858180 (approximate)
void TimeAttackSplitsPage::loadPersonalBest() {
    if (!mInitialized) {
        return;
    }

    // Personal best is the player's own best splits for this course.
    // In the original binary, this reads from the save file's record
    // data for the current course. For the decompilation, we use
    // the player splits as the "current run" and the ghost splits
    // as the "comparison target" (which may be a staff ghost or
    // the player's own previous best).

    for (u8 i = 0; i < mLapCount; i++) {
        mPersonalBestTimes[i] = mPlayerSplits[i];
    }
    mPersonalBestTimes[mLapCount] = mPlayerSplits[mLapCount];
}

// ============================================================================
// displaySplit — Render a single split row with highlighting
// ============================================================================

// @addr 0x80858200 (approximate)
void TimeAttackSplitsPage::displaySplit(u8 lap, f32 time, f32 bestTime,
                                        bool isCurrent) {
    (void)isCurrent;

    if (lap >= MAX_SPLIT_ENTRIES) {
        return;
    }

    // Check animation visibility for this entry
    u8 animDelayFrames = lap * ANIM_DELAY_PER_ENTRY;
    if (mFrameCount < animDelayFrames) {
        return;
    }

    // Compute entry alpha (fade in)
    u8 framesSinceAppear = mFrameCount - animDelayFrames;
    u8 entryAlpha = 0xFF;
    if (framesSinceAppear < ANIM_FADE_FRAMES) {
        entryAlpha = (framesSinceAppear * 0xFF) / ANIM_FADE_FRAMES;
    }
    (void)entryAlpha;

    // Determine color based on improvement
    f32 delta = time - bestTime;
    u32 color;
    if (delta < -0.5f) {
        color = COLOR_IMPROVED; // Green — player was faster
    } else if (delta > 0.5f) {
        color = COLOR_SLOWER;   // Red — player was slower
    } else {
        color = COLOR_NEUTRAL;  // White — essentially tied
    }

    // Total line uses a different color tint
    if (lap == mLapCount) {
        color = COLOR_TOTAL;
    }

    (void)color;

    // Format the lap label, time, and delta string
    // The actual rendering is handled by the UI framework controls
    // created during ct(). The GX text pipeline renders:
    //   "Lap N  MM:SS.mmm  +/-S.sss"
    //
    // Lap label:
    char lapLabel[16];
    if (lap < mLapCount) {
        // "Lap 1", "Lap 2", "Lap 3"
        lapLabel[0] = 'L';
        lapLabel[1] = 'a';
        lapLabel[2] = 'p';
        lapLabel[3] = ' ';
        lapLabel[4] = '1' + lap;
        lapLabel[5] = '\0';
    } else {
        // "Total"
        lapLabel[0] = 'T';
        lapLabel[1] = 'o';
        lapLabel[2] = 't';
        lapLabel[3] = 'a';
        lapLabel[4] = 'l';
        lapLabel[5] = '\0';
    }
    (void)lapLabel;

    // Format times and delta (see formatSplitTime / calcDifference)
    char timeStr[16];
    char deltaStr[16];
    formatSplitTime(time, timeStr, sizeof(timeStr));
    calcDifference(time, bestTime, deltaStr, sizeof(deltaStr));
    (void)timeStr;
    (void)deltaStr;
}

// ============================================================================
// updateBestIndicator — Mark which splits are personal best
// ============================================================================

// @addr 0x80858300 (approximate)
void TimeAttackSplitsPage::updateBestIndicator() {
    mBestDeltaLap = 0xFF; // Reset: no best lap flagged

    for (u8 i = 0; i < mLapCount; i++) {
        // A split is a personal best if the player's time is faster
        // than the ghost's time (negative delta)
        if (mPlayerSplits[i] < mGhostSplits[i] && mGhostSplits[i] > 0.0f) {
            mBestLapFlags |= (1 << i);

            // Track the lap with the biggest improvement
            if (mBestDeltaLap == 0xFF ||
                mDeltas[i] < mDeltas[mBestDeltaLap]) {
                mBestDeltaLap = i;
            }
        } else {
            mBestLapFlags &= ~(1 << i);
        }
    }

    // Check total
    if (mPlayerSplits[mLapCount] < mGhostSplits[mLapCount] &&
        mGhostSplits[mLapCount] > 0.0f) {
        mBestLapFlags |= (1 << MAX_LAPS); // Bit 3 = total
    } else {
        mBestLapFlags &= ~(1 << MAX_LAPS);
    }
}

// ============================================================================
// calculateTotalDelta — Sum up all lap deltas
// ============================================================================

// @addr 0x80858380 (approximate)
f32 TimeAttackSplitsPage::calculateTotalDelta() {
    f32 totalDelta = 0.0f;

    // Sum individual lap deltas
    for (u8 i = 0; i < mLapCount; i++) {
        totalDelta += mDeltas[i];
    }

    // The total delta at mDeltas[mLapCount] is computed from
    // total times, which may differ slightly from the sum of
    // lap deltas due to floating point. Use the total entry.
    return mDeltas[mLapCount];
}

// ============================================================================
// formatSplitTime — Format milliseconds to MM:SS.mmm
// ============================================================================

// @addr 0x80858400 (approximate)
void TimeAttackSplitsPage::formatSplitTime(f32 ms, char* buf, u32 bufSize) {
    if (bufSize < 10 || buf == nullptr) {
        if (buf && bufSize > 0) buf[0] = '\0';
        return;
    }

    // Handle negative times (shouldn't happen but be safe)
    if (ms < 0.0f) {
        ms = 0.0f;
    }

    // Convert milliseconds to minutes, seconds, millis
    u32 totalMs = (u32)(ms + 0.5f); // Round to nearest
    u32 minutes = totalMs / 60000;
    u32 remainder = totalMs % 60000;
    u32 seconds = remainder / 1000;
    u32 millis = remainder % 1000;

    // Format as "M:SS.mmm"
    buf[0] = '0' + (minutes >= 10 ? (minutes / 10) : 0);
    buf[1] = '0' + (minutes % 10);
    buf[2] = ':';
    buf[3] = '0' + (seconds / 10);
    buf[4] = '0' + (seconds % 10);
    buf[5] = '.';
    buf[6] = '0' + (millis / 100);
    buf[7] = '0' + ((millis / 10) % 10);
    buf[8] = '0' + (millis % 10);
    buf[9] = '\0';
}

// ============================================================================
// onButtonPress — Handle A/B button (continue/restart)
// ============================================================================

// @addr 0x80858480 (approximate)
u8 TimeAttackSplitsPage::onButtonPress(u32 button) {
    (void)button;

    // A button: continue to next screen (results / menu)
    if (button & PAD_BUTTON_A) {
        return RESULT_CONTINUE;
    }

    // B button: restart the time trial
    if (button & PAD_BUTTON_B) {
        return RESULT_RESTART;
    }

    // START: also continues
    if (button & PAD_BUTTON_START) {
        return RESULT_CONTINUE;
    }

    return RESULT_NONE;
}

// ============================================================================
// onRefocus — Redraw on refocus
// ============================================================================

// @addr 0x80858500 (approximate)
void TimeAttackSplitsPage::onRefocus() {
    // When the page regains focus (e.g., returning from a sub-menu),
    // reset the animation state and redraw all visible splits.
    mFrameCount = 0;
    mFadeAlpha = 0;
    mAnimState = ANIM_FADING_IN;

    // Re-initialize the animation for all split rows
    initAnimation();
}

// ============================================================================
// initAnimation — Setup scroll-in animation for split rows
// ============================================================================

// @addr 0x80858580 (approximate)
void TimeAttackSplitsPage::initAnimation() {
    // The original binary sets up per-entry animation state via the
    // UI framework (0x80612d08). Each split row has:
    //   - A Y-offset that starts below the screen
    //   - A target Y position for final placement
    //   - An interpolation curve (ease-out)
    //
    // Animation timeline:
    //   Frame 0:         Entry 0 begins scrolling in
    //   Frame 10:        Entry 1 begins scrolling in
    //   Frame 20:        Entry 2 begins scrolling in
    //   Frame 30:        Total entry begins scrolling in
    //
    // Each entry takes ~15 frames to reach its target position.
    // The delta text pulses (scale animation) when first visible.

    mAnimState = ANIM_SCROLLING_IN;
    mFrameCount = 0;

    // Initialize per-entry animation tracking
    for (u8 i = 0; i < MAX_SPLIT_ENTRIES; i++) {
        mEntryAnimY[i] = 60.0f + (f32)i * 20.0f; // Start below screen
        mEntryTargetY[i] = 0.0f;                   // Will be set by layout
        mEntryAnimProgress[i] = 0.0f;
    }

    // Set target Y positions (evenly spaced)
    f32 baseY = -30.0f; // Top of split list area
    for (u8 i = 0; i < MAX_SPLIT_ENTRIES; i++) {
        mEntryTargetY[i] = baseY + (f32)i * 18.0f;
    }
}

// ============================================================================
// calcDifference — Compare two times, return colored delta string
// ============================================================================

// @addr 0x80858600 (approximate)
u32 TimeAttackSplitsPage::calcDifference(f32 playerTime, f32 ghostTime,
                                         char* buf, u32 bufSize) {
    if (buf == nullptr || bufSize < 8) {
        return COLOR_NEUTRAL;
    }

    f32 delta = playerTime - ghostTime;
    u32 color;

    if (delta < -0.5f) {
        // Player was faster — show negative delta in green
        color = COLOR_IMPROVED;
        f32 absDelta = -delta;
        u32 totalCs = (u32)(absDelta + 0.5f);
        u32 cs = totalCs / 10;
        u32 frac = totalCs % 10;

        // Format as "-S.S"
        u32 wholeSec = cs / 10;
        u32 tenths = cs % 10;
        buf[0] = '-';
        buf[1] = '0' + (wholeSec >= 10 ? 9 : wholeSec);
        buf[2] = '.';
        buf[3] = '0' + tenths;
        buf[4] = '0' + frac;
        buf[5] = '\0';
    } else if (delta > 0.5f) {
        // Player was slower — show positive delta in red
        color = COLOR_SLOWER;
        f32 absDelta = delta;
        u32 totalCs = (u32)(absDelta + 0.5f);
        u32 cs = totalCs / 10;
        u32 frac = totalCs % 10;

        // Format as "+S.S"
        u32 wholeSec = cs / 10;
        u32 tenths = cs % 10;
        buf[0] = '+';
        buf[1] = '0' + (wholeSec >= 10 ? 9 : wholeSec);
        buf[2] = '.';
        buf[3] = '0' + tenths;
        buf[4] = '0' + frac;
        buf[5] = '\0';
    } else {
        // Essentially tied
        color = COLOR_NEUTRAL;
        buf[0] = ' ';
        buf[1] = ' ';
        buf[2] = '0';
        buf[3] = '.';
        buf[4] = '0';
        buf[5] = '0';
        buf[6] = '0';
        buf[7] = '\0';
    }

    return color;
}

// ============================================================================
// getLapDelta — Get delta for a specific lap
// ============================================================================

f32 TimeAttackSplitsPage::getLapDelta(u8 lapIdx) const {
    if (!mInitialized || lapIdx >= mLapCount) {
        return 0.0f;
    }
    return mDeltas[lapIdx];
}

// ============================================================================
// init (existing, preserved)
// ============================================================================

// @addr 0x80857d00
// Initialize the splits display with ghost data.
// Copies both split arrays, computes per-lap and total deltas,
// and flags which laps the player improved on.
void TimeAttackSplitsPage::init(u8 lapCount, const f32* ghostSplits,
        const f32* playerSplits) {
    // Guard: lap count must not exceed MAX_LAPS
    if (lapCount > MAX_LAPS) {
        lapCount = MAX_LAPS;
    }

    mLapCount = lapCount;
    mFrameCount = 0;
    mInitialized = true;
    mBestLapFlags = 0;
    mTotalDelta = 0.0f;

    // Copy per-lap splits and compute deltas
    for (u8 i = 0; i < mLapCount; i++) {
        mGhostSplits[i] = ghostSplits[i];
        mPlayerSplits[i] = playerSplits[i];

        // Delta = player - ghost; negative means player was faster
        mDeltas[i] = mPlayerSplits[i] - mGhostSplits[i];

        // Mark improved if player time is strictly faster (negative delta)
        mImproved[i] = (mDeltas[i] < 0.0f);
    }

    // Compute total time delta (stored at index == lapCount)
    // Total splits are at ghostSplits[lapCount] / playerSplits[lapCount]
    mGhostSplits[mLapCount] = ghostSplits[mLapCount];
    mPlayerSplits[mLapCount] = playerSplits[mLapCount];
    mDeltas[mLapCount] = mPlayerSplits[mLapCount] - mGhostSplits[mLapCount];
    mImproved[mLapCount] = (mDeltas[mLapCount] < 0.0f);

    // Zero out unused entries (beyond the splits we actually have)
    for (u8 i = mLapCount + 1; i < MAX_SPLIT_ENTRIES; i++) {
        mGhostSplits[i] = 0.0f;
        mPlayerSplits[i] = 0.0f;
        mDeltas[i] = 0.0f;
        mImproved[i] = false;
    }
}

// ============================================================================
// calc (existing, preserved with minor additions)
// ============================================================================

// @addr 0x80857e00
// Update split time display each frame.
// Manages animation timing for the split overlay.
void TimeAttackSplitsPage::calc() {
    if (!mInitialized) {
        return;
    }

    // Increment per-frame counter
    mFrameCount++;

    // Handle animation states
    switch (mAnimState) {
    case ANIM_FADING_IN:
        // Global fade-in: increase alpha over 20 frames
        mFadeAlpha += 13; // ~255/20 ≈ 13 per frame
        if (mFadeAlpha >= 0xFF) {
            mFadeAlpha = 0xFF;
            mAnimState = ANIM_SCROLLING_IN;
        }
        break;

    case ANIM_SCROLLING_IN:
        // Update per-entry scroll animations
        for (u8 i = 0; i < MAX_SPLIT_ENTRIES; i++) {
            u8 delay = i * ANIM_DELAY_PER_ENTRY;
            if (mFrameCount >= delay) {
                mEntryAnimProgress[i] += 0.08f; // ~12 frames to complete
                if (mEntryAnimProgress[i] >= 1.0f) {
                    mEntryAnimProgress[i] = 1.0f;
                }
                // Ease-out interpolation for Y position
                f32 t = mEntryAnimProgress[i];
                f32 ease = 1.0f - (1.0f - t) * (1.0f - t);
                mEntryAnimY[i] = mEntryAnimY[i] +
                    (mEntryTargetY[i] - mEntryAnimY[i]) * ease;
            }
        }

        // Check if all entries have finished animating
        {
            bool allDone = true;
            for (u8 i = 0; i <= mLapCount; i++) {
                if (mEntryAnimProgress[i] < 1.0f) {
                    allDone = false;
                    break;
                }
            }
            if (allDone) {
                mAnimState = ANIM_VISIBLE;
            }
        }
        break;

    case ANIM_VISIBLE:
        // All entries visible, just track frame count for pulse effects
        break;

    case ANIM_IDLE:
    default:
        break;
    }

    // The original game uses a frame-based animation system to
    // stagger the appearance of each split line. The UI framework
    // handles the actual interpolation; we just need to track time.
}

// ============================================================================
// draw (existing, preserved with minor additions)
// ============================================================================

// @addr 0x80857f00
// Draw the split times overlay.
// In the original game, this renders text via the GX-based UI system:
//   - Uses GX_Begin/GX_End with GX_QUADS for background quads
//   - Calls into the nw4r text rendering system (nw4r::g3d::Font)
//   - Each split line shows: "Lap N: MM:SS.mmm  +/-S.ss"
//   - Improved splits are colored green, slower splits are red
//   - The total line is drawn last with a slightly different format
void TimeAttackSplitsPage::draw() {
    if (!mInitialized) {
        return;
    }

    // The original rendering pipeline:
    //
    // 1. Set up orthographic projection for 2D overlay
    //    GX_SetViewport(0, 0, screenW, screenH, 0.0f, 1.0f)
    //    GX_LoadOrthoMatrix(...)
    //
    // 2. Draw semi-transparent background panel behind split text
    //    GX_SetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR)
    //    GX_SetVtxDesc(GX_VA_POS, GX_DIRECT)
    //    GX_SetVtxDesc(GX_VA_CLR0, GX_DIRECT)
    //    GX_Begin(GX_QUADS, GX_VTXFMT0, 4)
    //      ... 4 vertices for the panel rectangle ...
    //    GX_End()
    //
    // 3. For each split entry (lap 0..N, then total):
    //    a. Format the ghost time as "M:SS.mmm"
    //    b. Format the player time as "M:SS.mmm"
    //    c. Format the delta as "+S.ss" or "-S.ss"
    //    d. Select color: green (0, 200, 0) if improved, red (200, 0, 0) if not
    //    e. Render via nw4r::ut::Font::DrawString
    //       (internally calls GX with GX_TRIANGLESTRIP glyphs)
    //
    // 4. Restore previous GX state
    //
    // NOTE: The actual GX text rendering is handled by the UI framework
    // classes created in ct(). This placeholder documents the call chain.

    for (u8 i = 0; i < MAX_SPLIT_ENTRIES; i++) {
        // Check if this split entry should be visible (stagger animation)
        u8 animDelayFrames = i * ANIM_DELAY_PER_ENTRY;
        if (mFrameCount < animDelayFrames) {
            continue;
        }

        // Compute fade-in alpha for this entry
        static const u8 FADE_FRAMES = ANIM_FADE_FRAMES;
        u8 framesSinceAppear = mFrameCount - animDelayFrames;
        u8 entryAlpha = 0;
        if (framesSinceAppear >= FADE_FRAMES) {
            entryAlpha = 0xFF; // Fully visible
        } else {
            // Linear interpolation from 0 to 255
            entryAlpha = (framesSinceAppear * 0xFF) / FADE_FRAMES;
        }
        (void)entryAlpha; // Would be passed to GX color setup

        // Determine the Y position for this entry based on animation
        f32 entryY;
        if (mAnimState == ANIM_SCROLLING_IN &&
            mEntryAnimProgress[i] < 1.0f) {
            entryY = mEntryAnimY[i];
        } else {
            entryY = mEntryTargetY[i];
        }
        (void)entryY;

        // Render this split row using displaySplit
        bool isTotalLine = (i == mLapCount);
        displaySplit(i, mPlayerSplits[i], mGhostSplits[i], isTotalLine);
    }
}

// ============================================================================
// getTotalDelta (existing, preserved)
// ============================================================================

// @addr 0x80857ff0
// Get total race time difference from ghost.
// Returns the delta for the final (total) split entry.
// Negative value means the player finished the race faster than the ghost.
f32 TimeAttackSplitsPage::getTotalDelta() const {
    if (!mInitialized) {
        return 0.0f;
    }
    return mDeltas[mLapCount];
}

// ============================================================================
// hasImprovedLap (existing, preserved)
// ============================================================================

// @addr 0x80858000
// Check if the player beat the ghost on a specific lap.
// @param lapIdx 0-based lap index (0, 1, or 2)
// @return true if the player's lap time was faster than the ghost's
bool TimeAttackSplitsPage::hasImprovedLap(u8 lapIdx) const {
    if (!mInitialized || lapIdx >= mLapCount) {
        return false;
    }
    return mImproved[lapIdx];
}

} // namespace System

// =============================================================================
// End of TimeAttackSplitsPage.cpp
// Total methods: ct, init, calc, draw, getTotalDelta, hasImprovedLap,
//   onActivate, loadGhostSplits, loadPersonalBest, displaySplit,
//   updateBestIndicator, calculateTotalDelta, formatSplitTime,
//   onButtonPress, onRefocus, initAnimation, calcDifference, getLapDelta
// Layout: 2 f32[4] arrays (ghost/player splits), 1 f32[4] (deltas),
//         1 bool[4] (improved flags), animation state, best lap flags
// =============================================================================