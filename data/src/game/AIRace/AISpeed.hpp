#pragma once

#include "game/AIRace/AIInfo.hpp"
#include "game/AIRace/AIRank.hpp"

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

    AIInfo* mpInfo;
    AIParamSpeed* mpParamSpeed;
    f32 field_0x0C;
    f32 mRankManagerSpeedAdvantage;
};

} // namespace Enemy