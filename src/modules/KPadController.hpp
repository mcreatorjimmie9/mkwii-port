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

struct MapdataEnemyPathAccessor {
    u32 size() const { return 0; }
};

} // namespace System