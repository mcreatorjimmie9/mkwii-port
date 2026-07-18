#pragma once

// Racedata.hpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include <rk_types.h>
#include <decomp.h>

namespace System {

// Racedata holds race result data used for awards and credits sequences.
class Racedata {
public:
    Racedata();
    virtual ~Racedata();

    // @addr 0x80533558
    void initCredits();
    // @addr 0x80532d4c
    void initAwards();

    // Large structure holding per-player race results
    // Used by awards ceremony and credits roll
    u8 data[0x1000]; // approximate size based on function complexity
};

// RacedataFactory creates packed race data records for saving/networking.
class RacedataFactory {
public:
    RacedataFactory();
    virtual ~RacedataFactory();

    // @addr 0x8058f018
    static void packRacedataRecord();
};

// RacedataHandler processes input race data (likely for ghost/replay).
class RacedataHandler {
public:
    RacedataHandler();
    virtual ~RacedataHandler();

    // @addr 0x8058d680
    static void processInputs();
};

} // namespace System