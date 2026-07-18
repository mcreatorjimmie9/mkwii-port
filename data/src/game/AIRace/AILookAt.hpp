#pragma once

#include "game/AIRace/AIInfo.hpp"
#include "game/util/State.hpp"
#include <egg/math/eggVector.hpp>

namespace Enemy {

struct AI;
struct AILookAtNextInfo;

struct AILookAt: public Util::StateSequencer<AILookAt> {
    virtual ~AILookAt();
    void registerBump(const EGG::Vector3f&, const AI&);

    Util::State<AILookAt> mStateRaceStart;
    Util::State<AILookAt> mStateIdle;
    Util::State<AILookAt> mStateLookBehindOnBlockLine;
    Util::State<AILookAt> mStateNearbyPlayer;
    Util::State<AILookAt> mStateOvertake;
    Util::State<AILookAt> mStateLookBehind;
    Util::State<AILookAt> mStateBeingBumped;
    Util::State<AILookAt> mStateInkApplied;
    Util::State<AILookAt> mStateDontLookAtCamera;
    Util::State<AILookAt> mStateLookAtCamera;
    AIInfo* mpInfo;
    AILookAtNextInfo* mpNextInfo;
    AI* mpLookAtTarget;
    u32 mTimeUntilStopLookingAtCamera;
    f32 mHeadRotationSpeed;
    s32 mPlayerLookingAtIdx;
    bool mbIsBeingBumped;
    EGG::Vector3f bumpDirection;
};

} // namespace Enemy