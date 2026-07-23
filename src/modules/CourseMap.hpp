#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>

namespace System {

// Forward declaration — full definition in KPadController.hpp
struct MapdataEnemyPathAccessor;

class CourseMap {
public:
    CourseMap() : mPathAccessor(nullptr) {}
    ~CourseMap() {
        if (mPathAccessor) {
            delete mPathAccessor;
            mPathAccessor = nullptr;
        }
    }

    static CourseMap* instance() { return spInstance; }

    // Phase 31: Return a real path accessor that holds KMP ENPT data.
    MapdataEnemyPathAccessor* getEnemyPathAccessor() {
        if (!mPathAccessor) {
            mPathAccessor = new MapdataEnemyPathAccessor();
        }
        return mPathAccessor;
    }

    void setEnemyPathAccessor(MapdataEnemyPathAccessor* accessor) {
        if (mPathAccessor) {
            delete mPathAccessor;
        }
        mPathAccessor = accessor;
    }

    inline static CourseMap* spInstance = nullptr;

private:
    MapdataEnemyPathAccessor* mPathAccessor;
};

} // namespace System
