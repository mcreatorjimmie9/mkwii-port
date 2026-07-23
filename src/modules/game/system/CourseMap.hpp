#pragma once
// CourseMap.hpp — Track/course map data
#include "../../rk_types.h"
#include "../../EGG/math.h"

namespace System {

struct MapdataEnemyPathAccessor;

class CourseMap {
public:
    CourseMap() : mPathAccessor(nullptr), courseId(0), checkpointCount(0),
                  checkpoints(nullptr), enemyRouteCount(0), itemRouteCount(0) {}
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

    u32 courseId;
    u32 checkpointCount;
    EGG::Vector3f* checkpoints;
    u32 enemyRouteCount;
    u32 itemRouteCount;
    static CourseMap* spInstance;

private:
    MapdataEnemyPathAccessor* mPathAccessor;
};

} // namespace System

extern bool isTeamsEnabled();
inline bool isTeamsEnabled() { return false; }

extern bool FUN_80739880();
inline bool FUN_80739880() { return false; }