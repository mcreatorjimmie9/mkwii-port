#include "AIEngine.hpp"
#include "AI.hpp"
#include "AIControl.hpp"
#include "AITrickHandler.hpp"
#include "AILookAt.hpp"
#include "AISpeed.hpp"
#include "KPadController.hpp"
#include <egg/core/eggHeap.hpp>

namespace Enemy {

// ============================================================
// AIEngine
// ============================================================

AIEngine::AIEngine(const AI& ai) {
    mpInfo = nullptr;
    mpControl = nullptr;
    mpItem = nullptr;
    mInput = nullptr;
    mpTrickHandler = nullptr;
    mpLookAt = nullptr;
    field_0x15C = 0;
    mbForceRecalculation = false;
    mbForcingRecalculation = false;
    mbDisableForceRecalculation = false;
    mbMatchEnded = false;
}

AIEngine::~AIEngine() {}

void AIEngine::init() {
    // Subclasses initialize mpControl, mpItem, mpTrickHandler, mpLookAt, etc.
}

// update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor
// Address: 0x80734B60
// Size: 16 bytes, 4 instructions
void AIEngine::update(const System::MapdataEnemyPathAccessor* accessor) {
    if (mbMatchEnded) {
        return;
    }
    calc(); // StateSequencer::calc() - runs current state
}

// forceRecalculation__Q25Enemy8AIEngineFb
// Address: 0x80734B70
// Size: 8 bytes, 2 instructions
void AIEngine::forceRecalculation(bool activate) {
    if (activate) {
        mbForceRecalculation = true;
    }
}

// endRace__Q25Enemy8AIEngineFv
// Address: 0x80734B78
// Size: 12 bytes, 3 instructions
void AIEngine::endRace() {
    mbMatchEnded = true;
    setNextState(&mStateAfterGoal);
}

void AIEngine::onOutOfBounds(const System::MapdataJugemPoint& point) {
    // Virtual - base implementation calls into control
}

// ============================================================
// AIEngineKart
// ============================================================

// __ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI
// Address: 0x8073578C
// Size: 32 bytes, 8 instructions
AIEngineKart::AIEngineKart(const AI& ai) : AIEngine(ai) {
    // Kart engine uses AITrickHandler (2 trick directions: up/down)
    mpTrickHandler = new AITrickHandler(&mInfo);
}

AIEngineKart::~AIEngineKart() {}

// ============================================================
// AIEngineBike
// ============================================================

// __ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI
// Address: 0x8073569C
// Size: 132 bytes, 33 instructions
AIEngineBike::AIEngineBike(const AI& ai) : AIEngine(ai) {
    // Bike engine uses AITrickHandlerBike (4 trick directions + wheelie)
    mpTrickHandler = new AITrickHandlerBike(&mInfo);
}

AIEngineBike::~AIEngineBike() {}

} // namespace Enemy