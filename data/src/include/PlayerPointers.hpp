#pragma once
// Stub: PlayerPointers — holds per-player runtime pointers
#include "rk_types.h"
class PlayerPointers {
public:
    void* raceData;
    void* kartMovement;
    void* kartBody;
    void* kartState;
    void* playerSub10;
};
