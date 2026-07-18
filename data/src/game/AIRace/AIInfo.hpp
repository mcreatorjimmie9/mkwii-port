#pragma once

#include "game/AIRace/AIPath.hpp"
#include "game/system/KPadController.hpp"

namespace Enemy {

struct AI;

struct AIInfo {
    AI* mpAI;
    System::KPadRaceInputState* mpInput;
    AIPathHandler* mpPathHandler;
    u16 mActions;
    f32 mStickX;
};

} // namespace Enemy