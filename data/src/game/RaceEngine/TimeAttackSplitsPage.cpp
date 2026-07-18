// TimeAttackSplitsPage.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "TimeAttackSplitsPage.hpp"

namespace System {

// @addr 0x80857bcc
// Constructor thunk for TimeAttackSplitsPage (368 bytes).
// Ghidra shows calls to:
//   0x80555bf8 (memset), 0x805bc074, 0x805dc968, 0x805e398c, 0x80612d08
// These are UI framework initialization functions.
void TimeAttackSplitsPage::ct() {
    // Calls parent constructor via vtable
    // Initializes layout controls for split time display
    // 0x805dc968 = likely UIControl::create
    // 0x805e398c = likely text/label setup
    // 0x80612d08 = likely animation setup
}

} // namespace System