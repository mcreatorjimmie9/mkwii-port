#include "AI.hpp"
#include "AIEngine.hpp"
#include "AIControl.hpp"
#include "AILookAt.hpp"
#include "game/kart/KartInput.hpp"
#include "game/kart/KartState.hpp"
#include "RaceConfig.hpp"
#include "CourseMap.hpp"
#include <egg/core/eggHeap.hpp>

namespace Enemy {

// __ct__Q25Enemy2AIFb
// Address: 0x807284C4
// Size: 128 bytes, 32 instructions
AI::AI(bool isBike) {
    mpEngine = nullptr;
    mFlags = 0;
    mTeam = -1;

    if (!isBike) {
        mpEngine = new AIEngineKart(*this);
    } else {
        mpEngine = new AIEngineBike(*this);
    }
}

// __dt__Q25Enemy2AIFv
// Address: 0x80728570
// Size: 124 bytes, 31 instructions
AI::~AI() {
    delete mpEngine;
    mpEngine = nullptr;
}

// init__Q25Enemy2AIFv
// Address: 0x807285F8
// Size: 136 bytes, 34 instructions
void AI::init() {
    mCpuStick.y = 0.0f;
    mCpuStick.x = 0.0f;
    mFlags = 0;

    if (isTeamsEnabled()) {
        s32 team = System::RaceConfig::spInstance->mRaceScenario.getPlayerTeam(getPlayerIdx());

        if (team == System::BATTLE_TEAM_RED) {
            mTeam = System::BATTLE_TEAM_RED;
        } else if (team == System::BATTLE_TEAM_BLUE) {
            mTeam = System::BATTLE_TEAM_BLUE;
        }
    }

    mpEngine->init();
}

// update__Q25Enemy2AIFv
// Address: 0x807286A0
// Size: 36 bytes, 9 instructions
void AI::update() {
    mFlags = 0;

    // Avoid updating the AI engine if there are no CPU points in the course.
    // This has the side effect of making the characters not look at other racers
    // due to AILookAt not being updated. This is also the reason why Miis won't
    // look at the camera when finishing some competitions/tournaments.
    System::MapdataEnemyPathAccessor* enemyPathAccessor =
        System::CourseMap::instance()->getEnemyPathAccessor();

    if (enemyPathAccessor != nullptr && enemyPathAccessor->size() != 0) {
        mpEngine->update(enemyPathAccessor);
    }
}

// getStick__Q25Enemy2AIFv
// Address: 0x807286EC
// Size: 24 bytes, 6 instructions
const EGG::Vector2f& AI::getStick() const {
    if (isCpu()) {
        return mCpuStick;
    }

    return getInput().currentInputState.mStick;
}

// isCPU__Q25Enemy2AIFv
// Address: 0x80728734
// Size: 56 bytes, 14 instructions
bool AI::isCPU() {
    return System::RaceConfig::spInstance->mRaceScenario.getPlayerType(getPlayerIdx())
        == System::RaceConfig::Player::TYPE_CPU;
}

// isRealLocal__Q25Enemy2AIFv
// Address: 0x80728778
// Size: 60 bytes, 15 instructions
bool AI::isRealLocal() {
    return System::RaceConfig::spInstance->mRaceScenario.getPlayerType(getPlayerIdx())
        == System::RaceConfig::Player::TYPE_REAL_LOCAL;
}

// isRealLocalAndCPU__Q25Enemy2AIFv
// Address: 0x807287B8
// Size: 36 bytes, 9 instructions
bool AI::isRealLocalAndCPU() {
    if (System::RaceConfig::spInstance->mRaceScenario.getPlayerType(getPlayerIdx())
            == System::RaceConfig::Player::TYPE_REAL_LOCAL) {
        if (isCpu()) {
            return true;
        }
    }

    return false;
}

// isAICPU__Q25Enemy2AIFv
// Address: 0x80728820
// Size: 4 bytes, 1 instruction
bool AI::isAICPU() {
    return isCpu();
}

// isGhost__Q25Enemy2AIFv
// Address: 0x80728824
// Size: 68 bytes, 17 instructions
bool AI::isGhost() {
    return System::RaceConfig::spInstance->mRaceScenario.getPlayerType(getPlayerIdx())
        == System::RaceConfig::Player::TYPE_GHOST;
}

// isSameTeam__Q25Enemy2AIFPQ25Enemy2AI
// Address: 0x80728868
// Size: 16 bytes, 4 instructions
bool AI::isSameTeam(const AI& other) {
    if (mTeam < 0) {
        return false;
    }

    return mTeam == other.mTeam;
}

// endRace__Q25Enemy2AIFv
// Address: 0x80728890
// Size: 8 bytes, 2 instructions
void AI::endRace() {
    mpEngine->endRace();
}

// onOutOfBounds__Q25Enemy2AIFRCQ26System17MapdataJugemPoint
// Address: 0x80728898
// Size: 16 bytes, 4 instructions
void AI::onOutOfBounds(const System::MapdataJugemPoint& respawnPoint) {
    mpEngine->onOutOfBounds(respawnPoint);
}

// forceRecalculation__Q25Enemy2AIFb
// Address: 0x807288AC
// Size: 8 bytes, 2 instructions
void AI::forceRecalculation(bool activateForceRecalculation) {
    mpEngine->forceRecalculation(activateForceRecalculation);
}

// handleBump__Q25Enemy2AIFRCQ23EGG8Vector3fRCQ25Enemy2AI
// Address: 0x807288B4
// Size: 8 bytes, 2 instructions
void AI::handleBump(const EGG::Vector3f& bumpDirection, const AI& other) {
    EGG::Vector3f bodyForward;
    f32 alignment;
    f32 alignmentSign;
    f32 alignmentFactor;

    // [alignmentMin, alignmentMax, offsetRateMin, offsetRateMax]
    static f32 alignmentParameters[] = {
        5.0f, 15.0f, -500.0f, -650.0f
    };
    f32* alignmentParametersPtr = alignmentParameters;

    if (isCpu()) {
        getBodyForward(bodyForward);
        alignment = bodyForward.x * bumpDirection.x
                   + bodyForward.y * bumpDirection.y
                   + bodyForward.z * bumpDirection.z;

        if (alignment > 0.0f) {
            alignmentSign = 1.0f;  // Bump is from the front
        } else {
            alignmentSign = -1.0f; // Bump is from the back
        }

        alignmentFactor = (fabsf(alignment) - alignmentParametersPtr[0])
                        / (alignmentParametersPtr[1] - alignmentParametersPtr[0]);
        if (alignmentFactor > 1.0f) {
            alignmentFactor = 1.0f;
        } else if (alignmentFactor < 0.0f) {
            alignmentFactor = 0.0f;
        }

        f32 offsetRate = alignmentParametersPtr[2]
            + (alignmentFactor * (alignmentParametersPtr[3] - alignmentParametersPtr[2]));
        mpEngine->mpControl->mpPathHandler->addOffsetRateAndRecalcTargetTrans(
            offsetRate * alignmentSign);
    }

    mpEngine->mpLookAt->registerBump(bumpDirection, other);
}

// isOnGround__Q25Enemy2AIFv
// Address: 0x807289D0
// Size: 20 bytes, 5 instructions
bool AI::isOnGround() {
    return kartState()->on(18); // KART_FLAG_TOUCHING_GROUND
}

// isAllWheelsCollision__Q25Enemy2AIFv
// Address: 0x807289E4
// Size: 20 bytes, 5 instructions
bool AI::isAllWheelsCollision() {
    return kartState()->on(15); // KART_FLAG_ALL_WHEELS_COLLISION
}

// isDriftingOnGround__Q25Enemy2AIFv
// Address: 0x807289F8
// Size: 20 bytes, 5 instructions
bool AI::isDriftingOnGround() {
    return kartState()->on(61); // KART_FLAG_DRIFTING_ON_GROUND
}

// isHopping__Q25Enemy2AIFv
// Address: 0x80728A0C
// Size: 20 bytes, 5 instructions
bool AI::isHopping() {
    return kartState()->on(3); // KART_FLAG_HOPPING
}

// isAutoDrift__Q25Enemy2AIFv
// Address: 0x80728A20
// Size: 20 bytes, 5 instructions
bool AI::isAutoDrift() {
    return kartState()->on(19); // KART_FLAG_AUTO_DRIFT
}

// isInBullet__Q25Enemy2AIFv
// Address: 0x80728A34
// Size: 20 bytes, 5 instructions
bool AI::isInBullet() {
    return kartState()->on(28); // KART_FLAG_IN_BULLET
}

} // namespace Enemy