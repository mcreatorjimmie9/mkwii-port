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

struct KPadRaceInputState {
    u32 buttons;
    f32 stickX;
    f32 stickY;
    f32 triggerL;
    f32 triggerR;
    EGG::Vector2f mStick;
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
// Must match the definition in data/src/modules/KPadController.hpp exactly.
struct MapdataEnemyPathAccessor {
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

    u32 size() const { return mPointCount; }

    const EGG::Vector3f& getPoint(u32 idx) const {
        if (idx >= mPointCount) {
            static EGG::Vector3f s_zero = EGG::Vector3f::zero;
            return s_zero;
        }
        return mPositions[idx];
    }

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
    s32 mParams[MAX_ENEMY_PATH_POINTS][2];
    u32 mEflags[MAX_ENEMY_PATH_POINTS];
};

} // namespace System