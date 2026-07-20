#pragma once

#include "AIInfo.hpp"

namespace Enemy {

struct AISpeedBase;

struct AIRank {
    virtual ~AIRank();
    virtual void init();
    virtual void update();
    void calc();
    void updatePositions();
    s32 getPosition(u8 playerId) const;
    s32 getTargetRank(u8 playerId) const;
    f32 getSpeedAdvantage(u8 playerId) const;
    bool isStateSpeedAdvantage() const;
    void setTargetPositions();
    void applyRubberBanding();
    f32 getAverageSpeed(u8 playerId) const;
    void updateAverageSpeed(u8 playerId, f32 currentSpeed);
    void endRace();

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
    // Ranking system data
    s32 mPlayerPositions[MAX_PLAYER_COUNT];
    s32 mTargetRanks[MAX_PLAYER_COUNT];
    f32 mSpeedAdvantages[MAX_PLAYER_COUNT];
    f32 mDistanceCompleted[MAX_PLAYER_COUNT];
    f32 mAvgSpeedBuffer[MAX_PLAYER_COUNT][60];
    s32 mAvgSpeedIdx[MAX_PLAYER_COUNT];
    bool mbRaceEnded;
    bool mbSpeedAdvantageActive;
    u8 mPlayerCount;
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
    void setTargetPositions();
    void applyRubberBanding();
    void updatePositions();
    void endRace();

    static AIRankManager* spInstance;
    AIRank* mpRanks[MAX_PLAYER_COUNT];
    u8 mPlayerCount;
    bool mbActive;
    bool mbRaceEnded;
};

} // namespace Enemy