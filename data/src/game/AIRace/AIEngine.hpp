#pragma once

#include "AIInfo.hpp"
#include "CourseMap.hpp"
#include "KPadController.hpp"
#include "game/util/State.hpp"

namespace Enemy {

struct AIControlBase;
struct AISpeedBase;
struct AIItemBase;
struct AILookAt;
struct AITrickHandler;

// AIEngine: State machine that drives the entire AI brain
// Manages control, speed, items, trick handling, and look-at behavior
struct AIEngine: public Util::StateSequencer<AIEngine> {
    AIEngine(const AI&);
    virtual ~AIEngine();
    virtual void init();
    virtual void update(const System::MapdataEnemyPathAccessor*);
    virtual void onOutOfBounds(const System::MapdataJugemPoint&);
    void endRace();
    void forceRecalculation(bool);

    Util::State<AIEngine> mStateReady;
    Util::State<AIEngine> mStateRunCPU;
    Util::State<AIEngine> mStateRunHuman;
    Util::State<AIEngine> mStateGhostIdle;
    Util::State<AIEngine> mStateAfterGoal;
    Util::State<AIEngine> mStateStop;
    AIInfo* mpInfo;
    AIControlBase* mpControl;
    AISpeedBase* mpItem;
    System::KPadRaceInputState* mInput;
    AITrickHandler* mpTrickHandler;
    AILookAt* mpLookAt;
    s32 field_0x15C;
    bool mbForceRecalculation;
    bool mbForcingRecalculation;
    bool mbDisableForceRecalculation;
    bool mbMatchEnded;
};

// AIEngineKart: Engine variant for karts (2 trick directions)
struct AIEngineKart: public AIEngine {
    AIEngineKart(const AI&);
    ~AIEngineKart();
};

// AIEngineBike: Engine variant for bikes (4 trick directions + wheelie)
struct AIEngineBike: public AIEngine {
    AIEngineBike(const AI&);
    ~AIEngineBike();
};

} // namespace Enemy