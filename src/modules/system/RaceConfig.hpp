#pragma once
#include "../rk_types.h"
#ifndef __RACECONFIG_DEFINED__
#define __RACECONFIG_DEFINED__
namespace System {
class RaceConfig {
public:
    u32 raceType;
    u32 lapCount;
    u32 engineClass;
};
}
#endif
