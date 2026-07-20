#pragma once

#include <egg/math/eggVector.hpp>
#include <rk_common.h>

namespace System {
struct MapdataEnemyPathAccessor;
}

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
    void calc(const EGG::Vector3f& pos, const EGG::Vector3f& fwd);
    void setPath(const System::MapdataEnemyPathAccessor* accessor);
    void addOffsetRateAndRecalcTargetTrans(f32);
    bool isSwitchingPath();
    void recalcTargetTrans(const EGG::Vector3f&);
    void setStartDashType(s32);
    EGG::Vector3f getCurrentPoint() const;
    EGG::Vector3f getPreviousPoint() const;
    EGG::Vector3f getDirection() const;
    f32 getUpcomingAngle() const;
    void advanceToNextWaypoint();
    s32 findNearestPoint(const EGG::Vector3f& pos) const;
    bool isNearNextWaypoint(const EGG::Vector3f& pos) const;
    f32 getProgress() const;
    bool isFinished() const;

    // Get waypoint position by index
    EGG::Vector3f getPoint(s32 index) const;

    // Get total waypoint count
    s32 getPointCount() const;

    // Get current waypoint index
    s32 getCurrentIndex() const;

    // Advance to next waypoint (alias)
    void advance();

    // Enable/disable path looping
    void setLoop(bool loop);
    bool isLooping() const;

    // Get speed factor computed during calc
    f32 getSpeedFactor() const;

    // Get steering correction from calc
    f32 getSteerCorrection() const;

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
    const System::MapdataEnemyPathAccessor* mpPathAccessor;
    s32 mWaypointIndex;
    s32 mPathPointCount;
    f32 mProgress;
    bool mbFinished;
    f32 mArrivalDistSq;
    bool mbLoop;
};

struct AIPathManager {
    AIPathManager();
    virtual ~AIPathManager();

    AIPathHandler* mpPlayers[MAX_PLAYER_COUNT];
    u32 mPlayerCount;
};

// Free function: compute total path length
f32 AIPath_getPathLength(const System::MapdataEnemyPathAccessor* accessor);

} // namespace Enemy