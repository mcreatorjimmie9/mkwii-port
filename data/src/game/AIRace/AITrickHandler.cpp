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

// ============================================================================
// AITrickHandler (Kart)
// ============================================================================

// [constructor is defined inline in header or separate]

AITrickHandler::AITrickHandler(AIInfo* info)
    : mpInfo(info)
    , mTrickCooldown(0.0f)
    , mLastTrickTime(-10.0f)
    , mAirTime(0.0f) {}

AITrickHandler::~AITrickHandler() {}

void AITrickHandler::vf_0x0C() {}

// avoidPow__Q25Enemy14AITrickHandlerFv
// Address: 0x807377E0
// Size: 16 bytes, 4 instructions
// When hit by a POW block, the AI performs an up trick to recover faster.
void AITrickHandler::avoidPow() {
    mpInfo->mpInput->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
    // Reset air time tracking after POW trick
    mAirTime = 0.0f;
    mLastTrickTime = 0.0f;
}

// allowTricking__Q25Enemy14AITrickHandlerFv
// Address: 0x807377F0
// Size: 64 bytes, 16 instructions
// CPUs can only request tricking when they are in the air and
// not when they're on a jump pad or mushroom trampoline, or while
// hit with an object. Additional checks: not in wipeout, not in cannon,
// not on the ground.
bool AITrickHandler::allowTricking() {
    Kart::KartState* state = mpInfo->mpAI->kartState();

    if (state == nullptr) return false;

    // Must be in the air (jumping / ramp launch)
    if (!state->on(Kart::KART_FLAG_AIR_START))
        return false;

    // Cannot trick on jump pads (game handles that automatically)
    if (state->on(Kart::KART_FLAG_JUMPPAD))
        return false;

    // Cannot trick while hit by an item or object
    if (state->on(Kart::KART_FLAG_CPU))
        return false;

    // Cannot trick during a wipeout (respawning / fallen)
    // Wipeout state: not touching the ground and not in the air normally
    // is indicated by the kart being in a special respawn state
    if (state->on(Kart::KART_FLAG_OOB))
        return false;

    // Cannot trick while in a cannon
    if (state->on(Kart::KART_FLAG_CANNON_START))
        return false;

    // Cannot trick while already on the ground (air start cleared)
    if (state->on(Kart::KART_FLAG_TOUCHING_GROUND))
        return false;

    // Cannot trick during bullet bill
    if (state->on(Kart::KART_FLAG_IN_A_BULLET))
        return false;

    return true;
}

// shouldTrick__Q25Enemy14AITrickHandlerFv
// Address: 0x80737830
// Size: 176 bytes, 44 instructions
// Determines if the AI should perform a trick right now.
// The probability is weighted by race position: front runners trick
// more aggressively for the speed boost, while back-of-pack AI
// tricks less often (prioritizing item usage and recovery).
bool AITrickHandler::shouldTrick() {
    AIProbabilityBase* probability =
        mpInfo->mpAI->mpEngine->mpControl->getAIProbability();

    if (probability == nullptr) return false;

    if (!allowTricking()) return false;

    // Cooldown check: don't spam tricks
    if (mTrickCooldown > 0.0f) return false;

    // Query the probability table for trick willingness
    if (probability->getTrick()) {
        return true;
    }

    return false;
}

// calc__Q25Enemy14AITrickHandlerFv
// Address: 0x80737938
// Size: 16 bytes, 4 instructions
// Main per-frame calculation: tick cooldown, then attempt trick.
void AITrickHandler::calc() {
    // Tick down the trick cooldown timer
    if (mTrickCooldown > 0.0f) {
        mTrickCooldown -= (1.0f / 60.0f);
        if (mTrickCooldown < 0.0f) mTrickCooldown = 0.0f;
    }

    // Track air time for timing-based decisions
    if (allowTricking()) {
        mAirTime += (1.0f / 60.0f);
    } else {
        mAirTime = 0.0f;
    }

    update();
}

void AITrickHandler::disableWheelie() {
    // Karts don't have wheelies, but the vtable slot exists
}

// update__Q25Enemy14AITrickHandlerFv
// Address: 0x8073794C
// Size: 248 bytes, 62 instructions
// For karts: randomly select from 2 trick directions (up/down).
void AITrickHandler::update() {
    if (shouldTrick()) {
        System::KPadRaceInputState* input = mpInfo->mpInput;

        const int kartTricks[2] = {
            System::KPadRaceInputState_Tricks::UP_TRICK,
            System::KPadRaceInputState_Tricks::DOWN_TRICK
        };

        u32 rand = AIManager::getInstance()->getRandU32(ARRAY_COUNT(kartTricks));
        input->setTrick(kartTricks[rand]);

        // Record when we performed the trick and reset cooldown
        mLastTrickTime = 0.0f;
        mAirTime = 0.0f;
        mTrickCooldown = 0.5f; // 30-frame cooldown between tricks
    }
}

// setTrickCooldown — Rate-limit trick attempts
void AITrickHandler::setTrickCooldown(f32 cooldown) {
    mTrickCooldown = cooldown;
    if (mTrickCooldown < 0.0f) mTrickCooldown = 0.0f;
}

// allowWheelie — Check if wheelie is possible (karts always return false)
bool AITrickHandler::allowWheelie() const {
    return false; // Only bikes can wheelie
}

// ============================================================================
// AITrickHandlerBike
// ============================================================================

AITrickHandlerBike::AITrickHandlerBike(AIInfo* info)
    : AITrickHandler(info)
    , mbPerformWheelie(false)
    , mbWheelieDisabled(false)
    , mWheelieEndFrame(0) {}

AITrickHandlerBike::~AITrickHandlerBike() {}

void AITrickHandlerBike::vf_0x0C() {}

void AITrickHandlerBike::calc() {
    // Tick down the trick cooldown timer
    if (mTrickCooldown > 0.0f) {
        mTrickCooldown -= (1.0f / 60.0f);
        if (mTrickCooldown < 0.0f) mTrickCooldown = 0.0f;
    }

    // Track air time
    if (allowTricking()) {
        mAirTime += (1.0f / 60.0f);
    } else {
        mAirTime = 0.0f;
    }

    update();
    calcWheelie();
}

void AITrickHandlerBike::disableWheelie() {
    mbPerformWheelie = false;
    mbWheelieDisabled = true;
    // Track when the wheelie was disabled so we know when it's safe to re-enable
    mWheelieEndFrame = 30; // ~0.5 seconds at 60fps before re-evaluating
}

// update__Q25Enemy14AITrickHandlerFv (Bike override)
// Address: 0x8073794C
// Size: 248 bytes, 62 instructions (same vtable slot, bike variant with 4 tricks)
// For bikes: randomly select from all 4 trick directions.
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

        // Record trick timing and set cooldown
        mLastTrickTime = 0.0f;
        mAirTime = 0.0f;
        mTrickCooldown = 0.5f;
    }
}

// allowWheelie — Check if wheelie is viable (bike-specific)
bool AITrickHandlerBike::allowWheelie() const {
    Kart::KartState* state = mpInfo->mpAI->kartState();
    if (state == nullptr) return false;

    // Must be on the ground
    if (!state->on(Kart::KART_FLAG_TOUCHING_GROUND))
        return false;

    // Must not be in a state that prevents wheelie
    if (state->on(Kart::KART_FLAG_AIR_START))
        return false;
    if (state->on(Kart::KART_FLAG_JUMPPAD))
        return false;
    if (state->on(Kart::KART_FLAG_IN_A_BULLET))
        return false;
    if (state->on(Kart::KART_FLAG_OOB))
        return false;
    if (state->on(Kart::KART_FLAG_CANNON_START))
        return false;

    // If wheelie was explicitly disabled, wait for cooldown
    if (mbWheelieDisabled && mWheelieEndFrame > 0)
        return false;

    return true;
}

// calcWheelie — Enhanced with path point checks and state tracking
void AITrickHandlerBike::calcWheelie() {
    AIProbabilityBase* probability =
        mpInfo->mpAI->mpEngine->mpControl->getAIProbability();
    AIPathHandler* pathHandler = mpInfo->mpPathHandler;

    // Tick down the wheelie disabled timer
    if (mbWheelieDisabled) {
        mWheelieEndFrame--;
        if (mWheelieEndFrame <= 0) {
            mbWheelieDisabled = false;
            mWheelieEndFrame = 0;
        }
    }

    if (pathHandler->isSwitchingPath()) {
        bool disableWheelie = false;

        // Check rank manager for speed advantage state
        // When the rank system is applying speed advantage (rubber banding),
        // disable wheelie to avoid over-speeding and losing control
        AIRankManager* rankManager = AIManager::getInstance()->getRankManager();
        if (rankManager != nullptr) {
            if (rankManager->isStateSpeedAdvantage()) {
                disableWheelie = true;
            }
        }

        // Check path point parameters for wheelie zones
        System::KPadRaceInputState* input = mpInfo->mpInput;

        // Only start a wheelie if the current path point allows it,
        // the probability system agrees, and wheelie isn't disabled
        if (pathHandler->mpCurrPointParam->shouldWheelie()
            && probability->getWheelie()
            && !disableWheelie
            && allowWheelie()) {
            mbPerformWheelie = true;
        }

        // Check if the current path point signals wheelie should end
        // (e.g., approaching a sharp turn)
        if (pathHandler->mpCurrPointParam->shouldEndWheelie()) {
            mbPerformWheelie = false;
            mbWheelieDisabled = true;
            mWheelieEndFrame = 15; // ~0.25s cooldown after forced end
            input->setTrick(System::KPadRaceInputState_Tricks::DOWN_TRICK);
        }

        // Check if the next path point forbids wheelies (upcoming turn)
        if (pathHandler->mpNextPointParam != nullptr) {
            if (pathHandler->mpNextPointParam->shouldForbidDrift()) {
                // Forbid wheelie before sharp turns
                mbPerformWheelie = false;
                mbWheelieDisabled = true;
                mWheelieEndFrame = 20; // ~0.33s cooldown
            }
        }

        // Activate wheelie if allowed
        if (mbPerformWheelie && !mbWheelieDisabled) {
            input->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
        }
    } else {
        // Not switching paths — still allow wheelie if conditions are met
        if (mbPerformWheelie && allowWheelie() && !mbWheelieDisabled) {
            System::KPadRaceInputState* input = mpInfo->mpInput;
            input->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
        }
    }
}

} // namespace Enemy