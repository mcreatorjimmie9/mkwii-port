#pragma once
#ifndef __MKWII_RK_COMMON_H__
#define __MKWII_RK_COMMON_H__
#include "rk_types.h"

#ifndef MAX_PLAYER_COUNT
#define MAX_PLAYER_COUNT 12
#endif

#ifndef MAX_PLAYERS
#define MAX_PLAYERS 12
#endif

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(a) (sizeof(a) / sizeof((a)[0]))
#endif

#endif // __MKWII_RK_COMMON_H__
