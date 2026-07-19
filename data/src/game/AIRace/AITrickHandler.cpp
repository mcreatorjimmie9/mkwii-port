#include "AITrickHandler.hpp"
#include "AI.hpp"
#include "AIEngine.hpp"
#include "AIControl.hpp"
#include "AIPath.hpp"
#include "AIManager.hpp"
#include "AIProbability.hpp"
#include "game/kart/KartState.hpp"
#include <rk_common.h>

namespace Enemy {

// ============================================================
// AITrickHandler (Kart)
// ============================================================

// [constructor is defined inline in header or separate]

AITrickHandler::AITrickHandler(AIInfo* info) : mpInfo(info) {}

AITrickHandler::~AITrickHandler() {}

void AITrickHandler::vf_0x0C() {}

// avoidPow__Q25Enemy14AITrickHandlerFv
// Address: 0x807377E0
// Size: 16 bytes, 4 instructions
void AITrickHandler::avoidPow() {
    mpInfo->mpInput->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
}

// allowTricking__Q25Enemy14AITrickHandlerFv
// Address: 0x807377F0
// Size: 64 bytes, 16 instructions
bool AITrickHandler::allowTricking() {
    Kart::KartState* state = mpInfo->mpAI->kartState();

    // CPUs can only request tricking when they are in the air and
    // not when they're on a jump pad or mushroom trampoline, or while
    // hit with an object.
    if (state->isCPU(23) // KART_FLAG_AIR_START
        && !state->isCPU(30) // KART_FLAG_JUMPPAD
        && !state->isCPU(32)) { // KART_FLAG_HIT_ITEM_OR_OBJ
        return true;
    }

    return false;
}

// shouldTrick__Q25Enemy14AITrickHandlerFv
// Address: 0x80737830
// Size: 176 bytes, 44 instructions
bool AITrickHandler::shouldTrick() {
    AIProbabilityBase* probability =
        mpInfo->mpAI->mpEngine->mpControl->getAIProbability();

    if (allowTricking() && probability->getTrick()) {
        return true;
    }

    return false;
}

// calc__Q25Enemy14AITrickHandlerFv
// Address: 0x80737938
// Size: 16 bytes, 4 instructions
void AITrickHandler::calc() {
    update();
}

void AITrickHandler::disableWheelie() {}

// update__Q25Enemy14AITrickHandlerFv
// Address: 0x8073794C
// Size: 248 bytes, 62 instructions
void AITrickHandler::update() {
    if (shouldTrick()) {
        System::KPadRaceInputState* input = mpInfo->mpInput;

        const int kartTricks[2] = {
            System::KPadRaceInputState_Tricks::UP_TRICK,
            System::KPadRaceInputState_Tricks::DOWN_TRICK
        };

        u32 rand = AIManager::getInstance()->getRandU32(ARRAY_COUNT(kartTricks));
        input->setTrick(kartTricks[rand]);
    }
}

// ============================================================
// AITrickHandlerBike
// ============================================================

AITrickHandlerBike::AITrickHandlerBike(AIInfo* info)
    : AITrickHandler(info), mbPerformWheelie(false) {}

AITrickHandlerBike::~AITrickHandlerBike() {}

void AITrickHandlerBike::vf_0x0C() {}

void AITrickHandlerBike::calc() {
    update();
    calcWheelie();
}

void AITrickHandlerBike::disableWheelie() {
    mbPerformWheelie = false;
}

void AITrickHandlerBike::calcWheelie() {
    AIProbabilityBase* probability =
        mpInfo->mpAI->mpEngine->mpControl->getAIProbability();
    AIPathHandler* pathHandler = mpInfo->mpPathHandler;

    if (pathHandler->isSwitchingPath()) {
        bool disableWheelie = false;

        AIRankManager* rankManager = AIManager::getInstance()->getRankManager();
        if (rankManager != nullptr) {
            if (rankManager->isStateSpeedAdvantage()) {
                disableWheelie = true;
            }
        }

        System::KPadRaceInputState* input = mpInfo->mpInput;

        if (pathHandler->mpCurrPointParam->shouldWheelie()
            && probability->getWheelie()
            && !disableWheelie) {
            mbPerformWheelie = true;
        }

        if (pathHandler->mpCurrPointParam->shouldEndWheelie()) {
            mbPerformWheelie = false;
            input->setTrick(System::KPadRaceInputState_Tricks::DOWN_TRICK);
        }

        if (mbPerformWheelie) {
            input->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
        }
    }
}

// update__Q25Enemy14AITrickHandlerFv (Bike override)
// Address: 0x8073794C
// Size: 248 bytes, 62 instructions (same vtable slot, bike variant with 4 tricks)
void AITrickHandlerBike::update() {
    if (shouldTrick()) {
        System::KPadRaceInputState* input = mpInfo->mpInput;

        const int bikeTricks[4] = {
            System::KPadRaceInputState_Tricks::UP_TRICK,
            System::KPadRaceInputState_Tricks::DOWN_TRICK,
            System::KPadRaceInputState_Tricks::LEFT_TRICK,
            System::KPadRaceInputState_Tricks::RIGHT_TRICK,
        };

        u32 rand = AIManager::getInstance()->getRandU32(ARRAY_COUNT(bikeTricks));
        input->setTrick(bikeTricks[rand]);
    }
}

} // namespace Enemy