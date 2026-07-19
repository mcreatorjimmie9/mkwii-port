#pragma once

#include "AIInfo.hpp"
#include "AIPath.hpp"
#include "AIProbability.hpp"
#include "CourseMap.hpp"
#include "game/util/State.hpp"

namespace Enemy {

struct AIRank;

// AIAirtimeTracker: Tracks CPU airtime and starts a countdown when landing
// after being airborne for 20+ frames. Currently unused in the final game.
struct AIAirtimeTracker {
    inline AIAirtimeTracker(const AIInfo& info)
        : mpInfo(&info), mInitialGroundStartTimer(0),
          mAirtime(0), mCurrentGroundStartTimer(0) {}
    virtual ~AIAirtimeTracker() {}
    virtual void init(s32);
    virtual void update();
    bool isCurrentGroundStartTimerZero();

    const AIInfo* mpInfo;
    s32 mInitialGroundStartTimer;
    s32 mAirtime;
    s32 mCurrentGroundStartTimer;
};

// AIPowAvoider: Manages the probability of a CPU avoiding the POW block,
// and handles the avoidance when the probability passes.
struct AIPowAvoider {
    AIPowAvoider(const AIInfo&);
    virtual ~AIPowAvoider() {}
    virtual void init();
    virtual void update();
    bool isSameTeam(s32);

    const AIInfo* mpInfo;
    s32 mAvoidChance;  // From ENPT mParam1 - probability of avoiding POW
    s32 mAvoidState;   // 0 = idle, 1 = first frame of avoidance, 2+ = continuing
};

// AIControlBase: Base AI input controller with virtual steering/acceleration
struct AIControlBase: public Util::StateSequencer<AIControlBase> {
    AIControlBase(const AIInfo&);
    virtual ~AIControlBase();
    virtual void init();
    virtual void update();
    virtual void onRaceStart();
    virtual void initAfterManager();
    virtual void setStartDashTypeToKart();
    virtual void onOutOfBoundsInner(const System::MapdataJugemPoint&);
    virtual void onForceRecalculation(const EGG::Vector3f&);
    virtual void onPlayerGoal();
    virtual void onCpuGoal();
    virtual AIRank* getAIRank();
    virtual void* getAIBlockLine();
    virtual AIProbabilityBase* getAIProbability();
    virtual void vf_0x48();
    virtual void setBattleType();
    virtual void setAIRankTopOfPlayer();
    virtual void setDoNotSelectBackward();
    virtual void isAllStopAfterGoal();
    virtual void doUpdate_(const DriveInfo&);
    virtual void setBasicDriveInfo_(const DriveInfo&);

    const AIInfo* mpInfo;
    AIPathHandler* mpPathHandler;
    void* mpStuck;
    AIProbabilityBase* mpProbability;
    void* mpAutoSteer;
    void* mpDriftDrive;
    DriveInfo* mpDriveInfo;
    AIAirtimeTracker* mpAirtimeTracker;
    AIPowAvoider* mpPowAvoider;
    s32 field_0x5C;
};

} // namespace Enemy