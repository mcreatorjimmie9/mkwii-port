#pragma once
#include "../rk_types.h"
#include "Mii.hpp"
#include "ResourceManager.hpp"
#include "GhostFile.hpp"

namespace System {

#ifndef __CHARACTER_ID_DEFINED__
#define __CHARACTER_ID_DEFINED__
enum CharacterId { CHARACTER_MARIO = 0, CHARACTER_LUIGI = 1, CHARACTER_PEACH = 2 };
#endif
enum VehicleId { VEHICLE_STANDARD_KART = 0 };
enum BattleTeam { BATTLE_TEAM_RED = 0, BATTLE_TEAM_BLUE = 1, BATTLE_TEAM_NONE = 2 };
enum CourseId {
  // Nitro tracks
  MARIO_CIRCUIT = 0x0,
  COURSE_MARIO_CIRCUIT = MARIO_CIRCUIT,
  MOO_MOO_MEADOWS = 0x1,
  MUSHROOM_GORGE = 0x2,
  GRUMBLE_VOLCANO = 0x3,
  TOADS_FACTORY = 0x4,
  COCONUT_MALL = 0x5,
  DK_SUMMIT = 0x6,
  WARIOS_GOLD_MINE = 0x7,
  LUIGI_CIRCUIT = 0x8,
  DAISY_CIRCUIT = 0x9,
  MOONVIEW_HIGHWAY = 0xA,
  MAPLE_TREEWAY = 0xB,
  BOWSERS_CASTLE = 0xC,
  RAINBOW_ROAD = 0xD,
  DRY_DRY_RUINS = 0xE,
  KOOPA_CAPE = 0xF,
  // Retro tracks
  GCN_PEACH_BEACH = 0x10,
  GCN_MARIO_CIRCUIT = 0x11,
  GCN_WALUIGI_STADIUM = 0x12,
  GCN_DK_MOUNTAIN = 0x13,
  DS_YOSHI_FALLS = 0x14,
  DS_DESERT_HILLS = 0x15,
  DS_PEACH_GARDENS = 0x16,
  DS_DELFINO_SQUARE = 0x17,
  SNES_MARIO_CIRCUIT_3 = 0x18,
  SNES_GHOST_VALLEY_2 = 0x19,
  N64_MARIO_RACEWAY = 0x1A,
  N64_SHERBET_LAND = 0x1B,
  N64_BOWSERS_CASTLE = 0x1C,
  N64_DKS_JUNGLE_PARKWAY = 0x1D,
  GBA_BOWSER_CASTLE_3 = 0x1E,
  GBA_SHY_GUY_BEACH = 0x1F,
  // Battle courses
  DELFINO_PIER = 0x20,
  BLOCK_PLAZA = 0x21,
  CHAIN_CHOMP_ROULETTE = 0x22,
  FUNKY_STADIUM = 0x23,
  THWOMP_DESERT = 0x24,
  GCN_COOKIE_LAND = 0x25,
  DS_TWILIGHT_HOUSE = 0x26,
  SNES_BATTLE_COURSE_4 = 0x27,
  GBA_BATTLE_COURSE_3 = 0x28,
  N64_SKYSCRAPER = 0x29,
  // Other courses
  GALAXY_COLOSSEUM = 0x36,
  WINNING_DEMO = 0x37,
  LOSING_DEMO = 0x38,
  DRAW_DEMO = 0x39,
  SUNSET_LUIGI_CIRCUIT = 0x3A
};
enum unk8 { UNK8_DEFAULT = 0 };
typedef u32 unk32;

// Competition objective constants
enum {
    OBJECTIVE_DEFAULT = 0,
    OBJECTIVE_ENEMYDOWN01 = 1,
    OBJECTIVE_ENEMYDOWN02 = 2,
    OBJECTIVE_COINGET01 = 3,
    OBJECTIVE_TOGATE01 = 4,
    OBJECTIVE_ITEMHIT = 5,
    OBJECTIVE_LAPRUN01 = 6,
    OBJECTIVE_LAPRUN02 = 7,
};

// Competition type constants
enum {
    COMPETITION_TIME_TRIAL = 0,
    COMPETITION_VS_RACE = 1,
};

struct RawCompetitionFile {
    struct {
        u32 competitionType;
        u32 courseId;
        u32 engineClass;
        u32 controllerRestriction;
        u32 score;
        u32 cameraAngle;
        u32 minimapObject;
        u32 horizontalWallGlitch;
        u32 field14_0x12;
        u32 cannonFlag;
    } rkco;
    u32 getSize() const { return 0; }
};

struct CompetitionWrapper;

struct CompetitionSettings {
    u32 _00[4];
    u32 objective;
    u32 courseId;
    u32 engineClass;
    u32 controllerRestriction;
    u32 scoreRequired;
    u32 rankScores[5];
    u32 cameraAngle;
    u32 minimapObject;
    u32 horizontalWallGlitch;
    u32 field11_0x4e;
    u32 cannonFlag;
    u32 cpuCount;
    void cpuCombosFromWrapper(CompetitionWrapper&) {}
};

struct CompetitionWrapper {
    bool isValid;
    RawCompetitionFile* fileRaw;
};

#ifndef __KPADPLAYER_DEFINED__
#define __KPADPLAYER_DEFINED__
class KPadPlayer {
public:
    virtual ~KPadPlayer() {}
};
#endif

#ifndef __RACEMODE_DEFINED__
#define __RACEMODE_DEFINED__
class RaceMode {
public:
    virtual ~RaceMode() {}
};
#endif

#ifndef __ELINECONTROLMANAGER_DEFINED__
#define __ELINECONTROLMANAGER_DEFINED__
class ElineControlManager {
public:
    virtual ~ElineControlManager() {}
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

// For rk_common.h
class RawGhostFile; // already in System
typedef System::CourseId CourseId;
typedef System::VehicleId VehicleId;
typedef System::CharacterId CharacterId;
typedef System::BattleTeam BattleTeam;
static const u8 MAX_PLAYER_COUNT = 12;

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif