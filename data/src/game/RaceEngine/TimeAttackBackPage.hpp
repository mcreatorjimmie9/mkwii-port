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
};

} // namespace System