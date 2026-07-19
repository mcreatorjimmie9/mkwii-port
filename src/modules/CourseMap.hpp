#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>

namespace System {

class CourseMap {
public:
    static CourseMap* instance() { return spInstance; }
    MapdataEnemyPathAccessor* getEnemyPathAccessor() { return nullptr; }

    static CourseMap* spInstance;
};

CourseMap* CourseMap::spInstance = nullptr;

} // namespace System