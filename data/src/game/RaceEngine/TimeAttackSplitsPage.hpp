#pragma once

// TimeAttackSplitsPage.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine (UI page showing lap splits in Time Attack)

#include <rk_types.h>
#include <decomp.h>

namespace System {

// TimeAttackSplitsPage displays per-lap split times after a Time Attack race.
// Shows the difference between the player's lap times and the ghost's lap times,
// highlighting improvements (negative delta = player was faster).
class TimeAttackSplitsPage {
public:
    TimeAttackSplitsPage();
    virtual ~TimeAttackSplitsPage();

    // @addr 0x80857bcc
    void ct(); // constructor thunk

    // Initialize the splits display with ghost data
    // Copies ghost and player split arrays, computes deltas, marks improved laps
    // @addr 0x80857d00
    void init(u8 lapCount, const f32* ghostSplits, const f32* playerSplits);

    // Update split time display each frame
    // Increments frame counter, animates delta text visibility
    // @addr 0x80857e00
    void calc();

    // Draw the split times overlay
    // Renders lap split text using GX text rendering pipeline
    // @addr 0x80857f00
    void draw();

    // Get total race time difference from ghost
    // Negative means player finished faster overall
    // @addr 0x80857ff0
    f32 getTotalDelta() const;

    // Check if player beat the ghost on a specific lap
    // @param lapIdx 0-based lap index (0, 1, or 2)
    // @addr 0x80858000
    bool hasImprovedLap(u8 lapIdx) const;

    // Get delta for a specific lap
    // @addr 0x80858020 (approximate)
    f32 getLapDelta(u8 lapIdx) const;

    // Page activation: fade in, load splits, populate list
    // @addr 0x80858040 (approximate)
    void onActivate();

    // Handle button press (A=continue, B=restart)
    // @addr 0x80858480 (approximate)
    // @return result code (RESULT_CONTINUE, RESULT_RESTART, or RESULT_NONE)
    u8 onButtonPress(u32 button);

    // Redraw on refocus
    // @addr 0x80858500 (approximate)
    void onRefocus();

    // Button result codes
    enum {
        RESULT_NONE = 0,
        RESULT_CONTINUE = 1,
        RESULT_RESTART = 2,
    };

private:
    static const u8 MAX_LAPS = 3;
    static const u8 MAX_SPLIT_ENTRIES = 4; // 3 laps + total

    f32 mGhostSplits[MAX_SPLIT_ENTRIES];  // Ghost's per-lap and total times
    f32 mPlayerSplits[MAX_SPLIT_ENTRIES]; // Player's per-lap and total times
    f32 mDeltas[MAX_SPLIT_ENTRIES];       // Per-split time differences (negative = faster)
    bool mImproved[MAX_SPLIT_ENTRIES];    // True if player was faster on this split
    u8 mLapCount;                         // Number of laps (typically 3)
    u8 mFrameCount;                       // Frame counter for animations
    bool mInitialized;                    // Whether init() has been called

    // Animation state
    enum AnimState {
        ANIM_IDLE = 0,
        ANIM_FADING_IN = 1,
        ANIM_SCROLLING_IN = 2,
        ANIM_VISIBLE = 3,
    };

    AnimState mAnimState;                 // Current animation phase
    u8 mFadeAlpha;                        // Global fade-in alpha (0-255)
    u8 mBestLapFlags;                     // Bitfield: bit i set = lap i is PB
    u8 mBestDeltaLap;                     // Index of lap with biggest improvement
    f32 mTotalDelta;                      // Cached total delta value

    // Per-entry animation data
    f32 mEntryAnimY[MAX_SPLIT_ENTRIES];   // Current animated Y position
    f32 mEntryTargetY[MAX_SPLIT_ENTRIES]; // Target Y position
    f32 mEntryAnimProgress[MAX_SPLIT_ENTRIES]; // Animation progress (0.0-1.0)

    // Ghost split times (in ms, converted from Time struct)
    f32 mGhostSplitTimes[MAX_SPLIT_ENTRIES];

    // Personal best times (for comparison)
    f32 mPersonalBestTimes[MAX_SPLIT_ENTRIES];

    // Load ghost splits from race data
    // @addr 0x80858100 (approximate)
    void loadGhostSplits();

    // Load personal best splits from save data
    // @addr 0x80858180 (approximate)
    void loadPersonalBest();

    // Render a single split row with highlighting
    // @addr 0x80858200 (approximate)
    void displaySplit(u8 lap, f32 time, f32 bestTime, bool isCurrent);

    // Mark which splits are personal best
    // @addr 0x80858300 (approximate)
    void updateBestIndicator();

    // Sum up all lap deltas
    // @addr 0x80858380 (approximate)
    f32 calculateTotalDelta();

    // Format milliseconds to MM:SS.mmm
    // @addr 0x80858400 (approximate)
    void formatSplitTime(f32 ms, char* buf, u32 bufSize);

    // Setup scroll-in animation for split rows
    // @addr 0x80858580 (approximate)
    void initAnimation();

    // Compare two times, return colored delta string
    // @addr 0x80858600 (approximate)
    // @return color constant for the delta text
    u32 calcDifference(f32 playerTime, f32 ghostTime, char* buf, u32 bufSize);
};

} // namespace System