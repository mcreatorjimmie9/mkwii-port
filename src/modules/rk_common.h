#pragma once
// rk_common.h — Common Wii SDK compatibility
#include "rk_types.h"
#include "decomp.h"

#ifndef MAX_PLAYER_COUNT
#define MAX_PLAYER_COUNT 12
#endif

#ifndef MAX_PLAYERS
#define MAX_PLAYERS 12
#endif

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(a) (sizeof(a) / sizeof((a)[0]))
#endif

#ifndef NEVER_INLINE
#define NEVER_INLINE __attribute__((noinline))
#endif