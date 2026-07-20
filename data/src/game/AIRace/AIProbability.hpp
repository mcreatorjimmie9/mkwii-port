#pragma once

#include "AIInfo.hpp"

namespace Enemy {

class AIProbabilityBase {
public:
    inline AIProbabilityBase() {
        mGroupKind = 0;
        mStartBoostLevel = 0;
    }

    virtual ~AIProbabilityBase() = 0;
    virtual void determineIfCanMiniturbo() = 0;
    virtual void getStartBoost();
    virtual void setDoTrick(bool);
    virtual s32 getStartBoostLevel();
    virtual bool getDrift(bool) = 0;
    virtual bool getMiniturbo() = 0;
    virtual bool getTrick() = 0;
    virtual bool getWheelie() = 0;
    virtual bool vf_0x2C() = 0;
    virtual bool isLaunchBlockLine() = 0;

protected:
    s32 mGroupKind;
    s32 mStartBoostLevel;
};

inline AIProbabilityBase::~AIProbabilityBase() {}

class AIProbabilityRace: public AIProbabilityBase {
public:
    AIProbabilityRace();
    ~AIProbabilityRace();
    void determineIfCanMiniturbo();
    void getStartBoost();
    bool getDrift(bool);
    bool getMiniturbo();
    bool getTrick();
    bool getWheelie();
    bool vf_0x2C();
    bool isLaunchBlockLine();

    // Phase 38 additions
    f32 calcItemUseProbability(s32 position) const;
    f32 calcRiskProbability(s32 position) const;
    f32 calcDriftProbability(f32 upcomingAngle) const;
    f32 calcOvertakeProbability(f32 gapDistance) const;
    f32 calcDefendProbability(f32 gapBehind) const;
    s32 calcTargetLane(f32 weights[4]) const;
    void updateWeights(s32 position, f32 morale);
    s32 getOptimalAction(f32 probs[4]) const;

private:
    AIInfo* mpInfo;
    s32 field_0x10;
    bool mbCanDrift;
    bool mbCanMiniturbo;

    // Phase 38 member variables
    f32 mItemWeight;
    f32 mRiskWeight;
    f32 mDriftWeight;
    f32 mOvertakeWeight;
    f32 mDefendWeight;
};

class AIProbabilityBattleBase: public AIProbabilityBase {
public:
    inline AIProbabilityBattleBase() {}
    virtual ~AIProbabilityBattleBase();
    virtual void determineIfCanMiniturbo();
    virtual bool getDrift(bool);
    virtual bool getMiniturbo();
    virtual bool getTrick();
    virtual bool getWheelie();
    virtual bool vf_0x2C();
    virtual bool isLaunchBlockLine();
};

class AIProbabilityBattle: public AIProbabilityBattleBase {
public:
    inline AIProbabilityBattle() {}
    void setDoTrick(bool);
    virtual bool vf_0x2C();

private:
    bool mbDoTrick;
};

class AIProbabilityDemo: public AIProbabilityBase {
public:
    inline AIProbabilityDemo() {}
    ~AIProbabilityDemo() {}
    void determineIfCanMiniturbo() {}
    s32 getStartBoostLevel() { return 0; }
    bool getDrift(bool) { return true; }
    bool getMiniturbo() { return true; }
    bool getTrick() { return true; }
    bool getWheelie() { return true; }
    bool vf_0x2C() { return false; }
    bool isLaunchBlockLine() { return true; }
};

} // namespace Enemy