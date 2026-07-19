#pragma once
#ifndef __MKWII_RK_COMMON_H__
#define __MKWII_RK_COMMON_H__
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

// Type aliases used by RaceConfig and other system headers
namespace System {
#ifndef __CHARACTER_ID_DEFINED__
#define __CHARACTER_ID_DEFINED__
enum CharacterId { CHARACTER_MARIO = 0, CHARACTER_LUIGI = 1, CHARACTER_PEACH = 2 };
enum VehicleId { VEHICLE_STANDARD_KART = 0 };
// BattleTeam defined in system/RaceConfig.hpp
enum CourseId { COURSE_MARIO_CIRCUIT = 0 };

typedef u8 unk8;
typedef u32 unk32;

class GhostFile;
class Mii;
class Rating;
class ResourceManager;
class InitScene;
class KPadPlayer;
class RaceMode;
class ElineControlManager;

struct RawGhostFile {
    u8 _00[0x100];
};
#endif

#ifndef __SYSTEM_TIME_DEFINED__
#define __SYSTEM_TIME_DEFINED__
struct Time {
    s16 minutes;
    s8 seconds;
    s8 millis;
    Time() : minutes(0), seconds(0), millis(0) {}
    void set2(u16 m, u8 s, u8 ms, bool b) { minutes = m; seconds = s; millis = ms; (void)b; }
};
#endif

} // namespace System

#endif // __MKWII_RK_COMMON_H__