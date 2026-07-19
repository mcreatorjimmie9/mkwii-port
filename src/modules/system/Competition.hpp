#pragma once
#include "../rk_types.h"
#include "Mii.hpp"
#include "ResourceManager.hpp"

namespace System {

enum CharacterId { CHARACTER_MARIO = 0, CHARACTER_LUIGI = 1, CHARACTER_PEACH = 2 };
enum VehicleId { VEHICLE_STANDARD_KART = 0 };
enum BattleTeam { BATTLE_TEAM_RED = 0, BATTLE_TEAM_BLUE = 1 };
enum CourseId { COURSE_MARIO_CIRCUIT = 0 };
enum unk8 { UNK8_DEFAULT = 0 };
enum unk32 { UNK32_DEFAULT = 0 };

struct CompetitionSettings {
    u32 _00[4];
};

// Mii is defined in Mii.hpp
// Rating is defined in Rating.hpp

struct RawGhostFile {
    u8 _00[0x100];
};

class GhostFile {
public:
    RawGhostFile raw;
};

// ResourceManager defined in ResourceManager.hpp

#include "InitScene.hpp"
// InitScene defined in InitScene.hpp

class KPadPlayer {
public:
    virtual ~KPadPlayer() {}
};

class RaceMode {
public:
    virtual ~RaceMode() {}
};

class ElineControlManager {
public:
    virtual ~ElineControlManager() {}
};

struct Time {
    s16 minutes;
    s8 seconds;
    s8 millis;
    Time() : minutes(0), seconds(0), millis(0) {}
    void set2(u16 m, u8 s, u8 ms, bool b) { minutes = m; seconds = s; millis = ms; (void)b; }
};

} // namespace System

// For rk_common.h
class RawGhostFile; // already in System
typedef System::CourseId CourseId;
typedef System::VehicleId VehicleId;
typedef System::CharacterId CharacterId;
typedef System::BattleTeam BattleTeam;
static const u8 MAX_PLAYER_COUNT = 12;