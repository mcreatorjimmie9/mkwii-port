#pragma once

// TimeAttackBackPage.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine (UI page for Time Attack results)

#include <rk_types.h>
#include <decomp.h>

namespace System {

// TimeAttackBackPage is the results/back screen shown after
// a Time Attack race. It shows times, ghost data, and options.
class TimeAttackBackPage {
public:
    TimeAttackBackPage();
    virtual ~TimeAttackBackPage();

    // @addr 0x8063b488
    void onActivate();
    // @addr 0x8063b634
    void afterCalc();
    // @addr 0x8063b748
    void onRefocus();
    // @addr 0x8063b8b0
    void onReady();

    // Results and display
    // @addr 0x8063ba00
    void loadResults();
    // @addr 0x8063bb00
    void updateBestTimeDisplay();
    // @addr 0x8063bc00
    void initGhostData();
    // @addr 0x8063bd00
    void handleInput(u16 buttons);

private:
    u32 mAnimTimer;         // Animation frame counter
    u32 mAutoProceedTimer;  // Auto-proceed countdown (10s = 600 frames)
    u8  mSelectionCursor;   // Current menu selection index
    u8  mIsReady;           // Whether onReady() has been called
    u8  mIsNewRecord;       // Whether this race set a new record
    u8  mGhostLoaded;       // Whether ghost data has been loaded
    u32 mTotalTimeMs;       // Player's total race time in ms
    u32 mBestRecordMs;      // Previous best record in ms
    u32 mLapSplits[3];      // Per-lap times in ms (up to 3 laps)
    u32 mGhostCharacterId;  // Ghost character ID
    u32 mGhostVehicleId;    // Ghost vehicle ID
};

} // namespace System