#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>

namespace Kart {
class KartObjectProxy;
class KartState;
class KartMove;
class KartBody;
class KartDynamics;
class KartCollide;
class KartPhysicsEngine;
class KartStats;
class KartWheel;
}

namespace System {

struct KPadUIInputState {
    s32 field_0x08;
};

// Trick types
struct KPadRaceInputState {
    EGG::Vector2f mStick;
    u32 mButtons;
    struct currentInputState_t {
        EGG::Vector2f mStick;
    } currentInputState;
    void setTrick(int t) { (void)t; }
};

// Trick constants (matching original game enums)
namespace KPadRaceInputState_Tricks {
    static const int UP_TRICK = 0;
    static const int DOWN_TRICK = 1;
    static const int LEFT_TRICK = 2;
    static const int RIGHT_TRICK = 3;
}

class KPad {
public:
    virtual ~KPad() {}
};

struct MapdataJugemPoint {
    EGG::Vector3f position;
};

// Phase 31: Expanded MapdataEnemyPathAccessor — holds real KMP ENPT path data
// In the original MKWii, this accessor wraps the MapdataEnemy (course/section/ENPT)
// and provides per-waypoint position, param, and eflag access for the AI system.
// AI::update() checks accessor != nullptr && accessor->size() != 0 before
// passing it to AIEngine::update(). The AIPathHandler::setPath() uses
// accessor->size() for the waypoint count and accessor->getPoint(i) for positions.
struct MapdataEnemyPathAccessor {
    // Phase 31: Max waypoints per enemy path (safety limit)
    static const u32 MAX_ENEMY_PATH_POINTS = 256;

    MapdataEnemyPathAccessor()
        : mPointCount(0) {
        for (u32 i = 0; i < MAX_ENEMY_PATH_POINTS; i++) {
            mPositions[i] = EGG::Vector3f::zero;
            mParams[i][0] = 0;
            mParams[i][1] = 0;
            mEflags[i] = 0;
        }
    }

    // Number of waypoints in the path
    u32 size() const { return mPointCount; }

    // Get waypoint position by index
    const EGG::Vector3f& getPoint(u32 idx) const {
        if (idx >= mPointCount) {
            static EGG::Vector3f s_zero = EGG::Vector3f::zero;
            return s_zero;
        }
        return mPositions[idx];
    }

    // Set waypoint data (called from ai_bridge path loading)
    void setPoint(u32 idx, const EGG::Vector3f& pos, s32 param1, s32 param2, u32 eflags) {
        if (idx >= MAX_ENEMY_PATH_POINTS) return;
        mPositions[idx] = pos;
        mParams[idx][0] = param1;
        mParams[idx][1] = param2;
        mEflags[idx] = eflags;
        if (idx >= mPointCount) {
            mPointCount = idx + 1;
        }
    }

    void setPointCount(u32 count) {
        if (count > MAX_ENEMY_PATH_POINTS) count = MAX_ENEMY_PATH_POINTS;
        mPointCount = count;
    }

private:
    u32 mPointCount;
    EGG::Vector3f mPositions[MAX_ENEMY_PATH_POINTS];
    s32 mParams[MAX_ENEMY_PATH_POINTS][2]; // param1, param2 per point
    u32 mEflags[MAX_ENEMY_PATH_POINTS];    // eflags per point
};

} // namespace System