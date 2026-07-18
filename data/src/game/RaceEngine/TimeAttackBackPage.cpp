// TimeAttackBackPage.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "TimeAttackBackPage.hpp"

namespace System {

// @addr 0x8063b488
// Called when the Time Attack back page is activated.
// Ghidra shows (420 bytes) with 11 external calls:
//   0x805bc0dc, 0x805bc68c, 0x805bc6a4, 0x805c0af4, 0x805c0b34,
//   0x805e0664, 0x805e0a08, 0x805e43f4, 0x80611c68, 0x80611d64,
//   0x8063a028
// These are UI layout/animation functions.
void TimeAttackBackPage::onActivate() {
    // Sets up the Time Attack results screen
    // Initializes animations for time display
    // 0x8063a028 = likely the parent Page::onActivate()
}

// @addr 0x8063b634
// Called after the page's calculation step (276 bytes).
// Ghidra shows calls to:
//   0x80555bf8 (memset), 0x805bc0dc, 0x805bc68c, 0x805bc6a4,
//   0x805bc6b4, 0x805e43f4, 0x80848094, 0x808481c8
void TimeAttackBackPage::afterCalc() {
    // Post-calculation updates for the results screen
    // Likely updates animation state and transitions
}

// @addr 0x8063b748
// Called when the page is re-focused (360 bytes).
// Ghidra shows calls to 0x805bc6b4 and 0x808481c8.
void TimeAttackBackPage::onRefocus() {
    // Handle re-focus: refresh animations/text
}

// @addr 0x8063b8b0
// Called when the page is ready (548 bytes).
// No external calls shown in Ghidra - pure logic.
void TimeAttackBackPage::onReady() {
    // Page is fully loaded and ready for input
}

} // namespace System