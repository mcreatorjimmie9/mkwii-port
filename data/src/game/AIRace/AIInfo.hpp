#pragma once

#include "AIPath.hpp"
#include "KPadController.hpp"

namespace Enemy {

struct AI;

struct AIInfo {
    AI* mpAI;
    System::KPadRaceInputState* mpInput;
    AIPathHandler* mpPathHandler;
    u16 mActions;
    u16 mPrevActions;
    f32 mStickX;
    f32 mStickXTarget;
    f32 mStickXSmoothed;
    f32 mStickY;
    f32 mStickYTarget;
    s32 mSmoothFrames;
};

// Free function declarations for AIInfo operations
void AIInfo_calc(AIInfo* info);
void AIInfo_updateStickSmoothing(AIInfo* info);
void AIInfo_setSteerValue(AIInfo* info, f32 steer);
void AIInfo_setAccelValue(AIInfo* info, bool accel);
void AIInfo_setBrakeValue(AIInfo* info, bool brake);
void AIInfo_setDriftValue(AIInfo* info, bool drift);
void AIInfo_setItemValue(AIInfo* info, bool item);
void AIInfo_setHopValue(AIInfo* info, bool hop);
f32 AIInfo_getSteerSmoothed(const AIInfo* info);
u16 AIInfo_getActions(const AIInfo* info);
void AIInfo_setFromPathFollower(AIInfo* info, f32 desiredSteer, f32 speed,
    bool shouldDrift);
void AIInfo_setFromItemSystem(AIInfo* info, bool useItem);

} // namespace Enemy