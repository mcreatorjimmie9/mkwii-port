#pragma once

#include <egg/math/eggVector.hpp>
#include <rk_common.h>

namespace Enemy {

struct AIPathManager;

struct PointParam {
    virtual ~PointParam();
    virtual bool shouldEnterRouteIfHasMushroom();
    virtual bool shouldUseMushroom();
    virtual bool shouldWheelie();
    virtual bool shouldEndWheelie();
    virtual bool shouldHaveMinSpeedOf70();
    virtual bool shouldEndDrift();
    virtual bool shouldForbidDrift();
    virtual bool shouldForceDrift();
    virtual bool isKinokoK();
    virtual bool vf_0x30();
    virtual bool driftNotForbidden();
    virtual bool isEflag2() { return false; }
    virtual bool isEflag3() { return false; }
    virtual bool isEflag4() { return false; }

    s32 mParam1;
    s32 mParam2;
    s32 mEflags;
    f32 field_0x10;
};

struct DriveInfo {
    EGG::Vector3f field_0x00;
    f32 field_0x0C;
    f32 field_0x10;
    f32 field_0x14;
    f32 field_0x18;
    f32 field_0x1C;
    f32 field_0x20;
    bool mbShouldStartDrift;
    bool mbShouldEndDrift;
    bool mbShouldReleaseMiniturbo;
    u8 field_0x27;
    bool field_0x28;
    u8 field_0x29[3];
};

struct AIPathPointInfo {
    AIPathPointInfo();
    virtual ~AIPathPointInfo();

    AIPathManager* mpPathManager;
    s8 mStartingPoint;
    s8 mPointIdxLog[5];
    s32 field_0x10;
    EGG::Vector3f mTargetTrans;
    f32 field_0x20;
    f32 field_0x24;
    f32 offsetRate;
    f32 field_0x2C;
    s32 mPlayerIdx;
};

struct AIPathPoint: public AIPathPointInfo {
    void* mpBattleSearcher;
    EGG::Vector3f field_0x38;
};

struct AIPathHandler {
    struct InitArg {
        f32 field_0x00;
        f32 field_0x04;
        f32 field_0x08;
        s32 field_0x0C;
        s32 field_0x10;
        u8 field_0x14;
        bool field_0x15;
    };

    virtual ~AIPathHandler();
    virtual void init(const InitArg&);
    void addOffsetRateAndRecalcTargetTrans(f32);
    bool isSwitchingPath();
    void recalcTargetTrans(const EGG::Vector3f&);
    void setStartDashType(s32);

    bool mbIsSwitchingPath;
    PointParam* mpPrevPointParam;
    PointParam* mpCurrPointParam;
    PointParam* mpNextPointParam;
    AIPathPoint* mpPathPoint;
    s32 field_0x18;
    bool field_0x1C;
    bool mbRecalcTargetTrans;
    bool field_0x21;
    bool mbInBullet;
    s32 field_0x24;
    s32 field_0x28;
    s32 field_0x2C;
    f32 field_0x30;
    f32 field_0x34;
    f32 field_0x38;
    f32 field_0x3C;
};

struct AIPathManager {
    AIPathManager();
    virtual ~AIPathManager();

    AIPathHandler* mpPlayers[MAX_PLAYER_COUNT];
    u32 mPlayerCount;
};

} // namespace Enemy