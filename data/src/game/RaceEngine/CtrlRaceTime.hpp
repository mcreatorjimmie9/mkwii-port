#pragma once

// CtrlRaceTime.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine (UI control for race timer display)

#include <rk_types.h>
#include <decomp.h>

namespace System {

// CtrlRaceTime is a UI control that displays the race timer.
// It inherits from a UI layout base class.
class CtrlRaceTime {
public:
    CtrlRaceTime();
    virtual ~CtrlRaceTime();

    // @addr 0x807fa154
    void initSelf();
    // @addr 0x807fa3a8
    void calcSelf();
    // @addr 0x807fa9a8
    void refresh();

    u32 flags;      // 0x00 - bit 23 checked in initSelf
    f32 timeValue;  // 0x50 - stored time value
    f32 lastTime;   // 0xa8 - previous time for refresh diff
};

// CtrlRaceLap is a UI control that displays the current lap count.
class CtrlRaceLap {
public:
    CtrlRaceLap();
    virtual ~CtrlRaceLap();

    // @addr 0x807f1db8
    void load();

    f32 lapTime;    // 0x128 - loaded from parent
    f32 storedValue; // 0x148 - some threshold/constant
    f32 displayVal; // 0x180 - current displayed value
    u32 someData;   // 0x190 - additional data
};

} // namespace System