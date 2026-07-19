#pragma once
// CourseMap.hpp — Track/course map data
#include "../../rk_types.h"
#include "../../EGG/math.h"

namespace System {

class CourseMap {
public:
    static CourseMap* instance() { return spInstance; }
    MapdataEnemyPathAccessor* getEnemyPathAccessor() { return nullptr; }
    u32 courseId;
    u32 checkpointCount;
    EGG::Vector3f* checkpoints;
    u32 enemyRouteCount;
    u32 itemRouteCount;
    static CourseMap* spInstance;
};

} // namespace System

extern bool isTeamsEnabled();
inline bool isTeamsEnabled() { return false; }

extern bool FUN_80739880();
inline bool FUN_80739880() { return false; }