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

    // Phase 38 member variables
    f32 mLastRoadWidth;
    f32 mLastSlopeAngle;
    u16 mLastSurfaceType;
    f32 mNearestOpponentDist;
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

// Phase 38 free function declarations
s32 AIInfo_getNearestCheckpoint(const AIInfo* info);
f32 AIInfo_getDistToFinish(const AIInfo* info);
f32 AIInfo_getUpcomingTurnAngle(const AIInfo* info);
f32 AIInfo_getRoadWidth(AIInfo* info);
bool AIInfo_isOffroad(const AIInfo* info);
bool AIInfo_isNearEdge(const AIInfo* info, f32 threshold);
u16 AIInfo_getSurfaceType(AIInfo* info);
f32 AIInfo_getSlopeAngle(AIInfo* info);
bool AIInfo_isApproachingRamp(const AIInfo* info);
f32 AIInfo_getOpponentProximity(const AIInfo* info);

} // namespace Enemy