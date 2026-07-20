#pragma once

#include "AIInfo.hpp"
#include "AIRank.hpp"

namespace Enemy {

struct AIParamSpeed {
    f32 mSpeedAdvantage;
    f32 mSpeedBias;
    f32 mBaseSpeed;
};

struct AISpeedBase {
    virtual ~AISpeedBase();
    virtual void init();
    virtual void update();
    virtual void updateAfterGoal();
    virtual f32 vf_0x18();
    void setParamSpeed(AIParamSpeed*);
    void setRankAdvantage(f32);
    f32 getEffectiveSpeed() const;
    bool isSpeedBoosted() const;
    void applyBoostPad(f32 multiplier, u32 duration);
    void resetBoost();
    void updateRubberBanding();

    // Phase 38 additions
    f32 calcMaxSpeed() const;
    f32 calcAcceleration(f32 currentSpeed) const;
    f32 calcOffroadPenalty();
    f32 calcBoostMultiplier() const;
    void applyDriftBoost(f32 driftProgress, f32& speedOut) const;
    f32 getSpeedCap() const;
    void recordSpeedStats(f32 currentSpeed);

    AIInfo* mpInfo;
    AIParamSpeed* mpParamSpeed;
    f32 field_0x0C;
    f32 mRankManagerSpeedAdvantage;
    u32 mBoostPadTimer;
    f32 mBoostPadMultiplier;
    s32 mRaceStartTimer;
    bool mbBoosted;

    // Phase 38 member variables
    f32 mSpeedMin;
    f32 mSpeedMax;
    f32 mSpeedAccum;
    s32 mSpeedSamples;
};

} // namespace Enemy