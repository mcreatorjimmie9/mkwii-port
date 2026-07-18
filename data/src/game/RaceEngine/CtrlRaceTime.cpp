// CtrlRaceTime.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "CtrlRaceTime.hpp"

namespace System {

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
    // Calculates elapsed time from game timer
    // Formats as MM:SS.mmm for display
    // Updates the UI text content
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
    // Updates displayed time text
}

} // namespace System

namespace System {

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
    // Compute current lap number
    // Update "LAP X" display text
    // 0x80613104 is likely a UI::TextBox::setText or similar
}

} // namespace System