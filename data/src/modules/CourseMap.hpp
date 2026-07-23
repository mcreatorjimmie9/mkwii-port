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
    // Lazy-initialized: allocated on first access so we don't need to
    // include MapdataEnemyPathAccessor's full definition here.
    MapdataEnemyPathAccessor* getEnemyPathAccessor() {
        if (!mPathAccessor) {
            mPathAccessor = new MapdataEnemyPathAccessor();
        }
        return mPathAccessor;
    }

    // Phase 31: Allow external code to set a pre-populated accessor
    // (used by ai_bridge when loading KMP path data).
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
