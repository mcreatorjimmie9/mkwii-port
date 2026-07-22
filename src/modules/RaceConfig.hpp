#pragma once
#include "rk_types.h"

namespace System {

struct RaceScenario {
    s32 getPlayerType(s32 idx) const { (void)idx; return 0; }
    s32 getPlayerTeam(s32 idx) const { (void)idx; return -1; }
};

class RaceConfig {
public:
    inline static RaceConfig* spInstance = nullptr;

    RaceScenario mRaceScenario;

    struct Player {
        enum Type {
            TYPE_CPU = 1,
            TYPE_REAL_LOCAL = 2,
            TYPE_GHOST = 3,
        };
    };
};

enum {
    BATTLE_TEAM_RED = 0,
    BATTLE_TEAM_BLUE = 1,
};

} // namespace System

extern bool isTeamsEnabled();
inline bool isTeamsEnabled() { return false; }

extern bool FUN_80739880();
inline bool FUN_80739880() { return false; }
