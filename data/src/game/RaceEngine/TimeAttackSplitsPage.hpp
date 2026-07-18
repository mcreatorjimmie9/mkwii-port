#pragma once

// TimeAttackSplitsPage.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine (UI page showing lap splits in Time Attack)

#include <rk_types.h>
#include <decomp.h>

namespace System {

// TimeAttackSplitsPage displays per-lap split times after a Time Attack race.
class TimeAttackSplitsPage {
public:
    TimeAttackSplitsPage();
    virtual ~TimeAttackSplitsPage();

    // @addr 0x80857bcc
    void ct(); // constructor thunk
};

} // namespace System