#pragma once

#include "AIInfo.hpp"

namespace Enemy {

struct AISpeedBase;

struct AIRank {
    virtual ~AIRank();
    virtual void init();
    virtual void update();

    AIInfo* mpInfo;
    void* mpRankGroup;
    AISpeedBase* mpSpeed;
    s32 mId;
    s32 mHumanPlayerInitialRank;
    s32 mHumanPlayerRank;
    s32 targetRank;
    f32 field_0x1C;
    f32 distanceCompleted;
    f32 field_0x24;
};

struct AIRankGroupBase {
    virtual ~AIRankGroupBase();
    virtual void init();
    virtual s32 getGroupKind();
    virtual s32 getType();
    virtual void addMember(AIRank*);
    virtual void initChangeTargetRank();
    virtual void doChangeTargetRank();
    virtual void vf_0x24();
    virtual void vf_0x28();
    virtual void vf_0x2C();
    virtual u32 vf_0x30();
    virtual f32 vf_0x34();

    s32 mNumMembers;
    s32 mStartingRank;
    AIRank* mpMembers[3];
    s32 field_0x18;
    f32 field_0x1C;
    f32 field_0x20;
    f32 field_0x24;
    f32 field_0x28;
};

struct AIRankManager {
    static AIRankManager* getInstance() { return spInstance; }

    bool isStateSpeedAdvantage();

    static AIRankManager* spInstance;
};

} // namespace Enemy