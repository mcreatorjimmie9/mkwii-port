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
};

} // namespace System