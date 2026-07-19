#pragma once
// CourseMap.hpp — Track/course map data
#include "../../rk_types.h"
#include "../../EGG/math.h"

class CourseMap {
public:
    u32 courseId;
    u32 checkpointCount;
    EGG::Vector3f* checkpoints;
    u32 enemyRouteCount;
    u32 itemRouteCount;
};
