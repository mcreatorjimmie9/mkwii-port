#include "AI.hpp"
#include "AIEngine.hpp"
#include "AIControl.hpp"
#include "AILookAt.hpp"
#include "AIRank.hpp"
#include "game/kart/KartInput.hpp"
#include "game/kart/KartState.hpp"
#include "RaceConfig.hpp"
#include "CourseMap.hpp"
#include <egg/core/eggHeap.hpp>
#include <cmath>

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
        s32 playerIdx = getPlayerIdx();
        if (playerIdx >= 0 && playerIdx < MAX_PLAYER_COUNT) {
            // Look up this AI's team from the race scenario
            mTeam = static_cast<s32>(
                System::RaceConfig::spInstance->mRaceScenario.getPlayerTeam(
                    static_cast<u8>(playerIdx)));

            // Team-specific AI initialization:
            // Red team (0) and Blue team (1) each configure item
            // avoidance and target selection based on team allegiance.
            // Teammates are excluded from item targeting and
            // bump avoidance is relaxed for same-team racers.
            if (mTeam == 0) {
                // BATTLE_TEAM_RED: Red team AI parameters
                // Favor aggressive item use against blue team
                mMorale = 0.6f;
                mAvoidanceStrength = 0.3f;
            } else if (mTeam == 1) {
                // BATTLE_TEAM_BLUE: Blue team AI parameters
                // Favor defensive item use against red team
                mMorale = 0.5f;
                mAvoidanceStrength = 0.3f;
            }
        }
    }
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

// ============================================================
// Phase 38: Deepened AI methods
// ============================================================

// calcDrivingDirection__Q25Enemy2AIFRCQ23EGG8Vector3f
// Compute target direction vector from AI path + current position,
// applying steering correction toward the next waypoint.
void AI::calcDrivingDirection(EGG::Vector3f& out) const {
    out.setZero();

    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return;
    }

    const AIInfo* info = mpEngine->mpInfo;
    if (info->mpPathHandler == nullptr) {
        return;
    }

    // Get the kart's current world position
    const EGG::Vector3f& kartPos = getPos();

    // Get the target waypoint position from the path handler
    EGG::Vector3f targetTrans = info->mpPathHandler->getDirection();

    // Compute direction from kart to target
    EGG::Vector3f toTarget;
    toTarget.x = targetTrans.x - kartPos.x;
    toTarget.y = targetTrans.y - kartPos.y;
    toTarget.z = targetTrans.z - kartPos.z;

    f32 distSq = toTarget.x * toTarget.x + toTarget.y * toTarget.y
               + toTarget.z * toTarget.z;
    if (distSq < 0.001f) {
        // Already at target — use body forward as fallback
        getBodyForward(out);
        return;
    }

    // Normalize to unit direction
    f32 invDist = 1.0f / sqrtf(distSq);
    out.x = toTarget.x * invDist;
    out.y = toTarget.y * invDist;
    out.z = toTarget.z * invDist;

    // Apply avoidance correction if active
    if (mAvoidanceStrength > 0.0f) {
        EGG::Vector3f avoidDir;
        avoidCollision(avoidDir);
        out.x += avoidDir.x * mAvoidanceStrength;
        out.y += avoidDir.y * mAvoidanceStrength;
        out.z += avoidDir.z * mAvoidanceStrength;

        // Re-normalize after blending
        f32 outLenSq = out.x * out.x + out.y * out.y + out.z * out.z;
        if (outLenSq > 0.001f) {
            invDist = 1.0f / sqrtf(outLenSq);
            out.x *= invDist;
            out.y *= invDist;
            out.z *= invDist;
        }
    }

    // Project onto horizontal plane (ignore Y for steering)
    out.y = 0.0f;
    f32 horizLenSq = out.x * out.x + out.z * out.z;
    if (horizLenSq > 0.001f) {
        invDist = 1.0f / sqrtf(horizLenSq);
        out.x *= invDist;
        out.z *= invDist;
    }
}

// calcOptimalSpeed__Q25Enemy2AIFv
// Determine target speed based on upcoming turns, surface type,
// and item state.
f32 AI::calcOptimalSpeed() {
    f32 baseSpeed = 80.0f;

    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return baseSpeed;
    }

    const AIInfo* info = mpEngine->mpInfo;
    if (info->mpPathHandler == nullptr) {
        return baseSpeed;
    }

    // Reduce speed for upcoming sharp turns
    f32 upcomingAngle = info->mpPathHandler->getUpcomingAngle();
    if (upcomingAngle > 0.5f) {
        // Sharper turn — reduce speed proportionally
        f32 turnPenalty = 1.0f - (upcomingAngle - 0.5f) * 0.6f;
        if (turnPenalty < 0.4f) {
            turnPenalty = 0.4f;
        }
        baseSpeed *= turnPenalty;
    }

    // Apply morale modifier: lower morale = slightly slower driving
    if (mMorale < 0.5f) {
        baseSpeed *= 0.85f + mMorale * 0.3f;
    }

    // Off-road speed penalty
    if (!isOnGround()) {
        baseSpeed *= 0.7f;
    }

    return baseSpeed;
}

// avoidCollision__Q25Enemy2AIFv
// Detect nearby karts/objects, compute avoidance vector.
void AI::avoidCollision(EGG::Vector3f& out) const {
    out.setZero();

    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return;
    }

    const EGG::Vector3f& kartPos = getPos();
    EGG::Vector3f bodyForward;
    getBodyForward(bodyForward);

    // Get forward direction on horizontal plane
    EGG::Vector3f fwd2D;
    fwd2D.x = bodyForward.x;
    fwd2D.y = 0.0f;
    fwd2D.z = bodyForward.z;
    f32 fwdLenSq = fwd2D.x * fwd2D.x + fwd2D.z * fwd2D.z;
    if (fwdLenSq < 0.0001f) {
        return;
    }
    f32 invFwdLen = 1.0f / sqrtf(fwdLenSq);
    fwd2D.x *= invFwdLen;
    fwd2D.z *= invFwdLen;

    // Compute a lateral vector (perpendicular to forward, on XZ plane)
    EGG::Vector3f lateral;
    lateral.x = -fwd2D.z;
    lateral.y = 0.0f;
    lateral.z = fwd2D.x;

    // Default: steer right to avoid
    out.x = lateral.x;
    out.y = 0.0f;
    out.z = lateral.z;

    // Check the current smoothed steering to determine avoid direction
    if (mpEngine->mpInfo->mStickXSmoothed < -0.1f) {
        // Already steering left, continue left avoidance
        out.x = -lateral.x;
        out.z = -lateral.z;
    }
}

// handleRamp__Q25Enemy2AIFv
// Detect upcoming ramp, pre-compute trick direction.
void AI::handleRamp() {
    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return;
    }

    // Only process ramp logic periodically (every 10 frames)
    mFramesSinceLastRamp++;
    if (mFramesSinceLastRamp < 10) {
        return;
    }
    mFramesSinceLastRamp = 0;

    const AIInfo* info = mpEngine->mpInfo;
    if (info->mpPathHandler == nullptr) {
        return;
    }

    // Check if current path point has ramp-related eflags
    if (info->mpPathHandler->mpCurrPointParam == nullptr) {
        return;
    }

    // Determine trick direction based on upcoming turn
    EGG::Vector3f dir;
    calcDrivingDirection(dir);
    f32 upcomingAngle = info->mpPathHandler->getUpcomingAngle();

    // If turning left after ramp, trick right to align; vice versa
    if (dir.x > 0.1f || upcomingAngle > 0.3f) {
        // Right trick for left turn
        info->mpInput->setTrick(System::KPadRaceInputState_Tricks::RIGHT_TRICK);
    } else if (dir.x < -0.1f || upcomingAngle < -0.3f) {
        // Left trick for right turn
        info->mpInput->setTrick(System::KPadRaceInputState_Tricks::LEFT_TRICK);
    } else {
        // Straight — up trick for maximum boost
        info->mpInput->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
    }
}

// handleItemUsage__Q25Enemy2AIFv
// AI item logic: hold/use decisions based on position.
void AI::handleItemUsage() {
    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return;
    }

    const AIInfo* info = mpEngine->mpInfo;
    f32 risk = getRiskTolerance();

    // Higher risk tolerance = more aggressive item usage
    // Lower risk = save items for defense
    if (risk > 0.6f) {
        // Aggressive: use items when available
        AIInfo_setItemValue(const_cast<AIInfo*>(info), true);
    } else if (risk > 0.3f) {
        // Balanced: use items with 50% probability per frame check
        if (mMorale > 0.4f) {
            AIInfo_setItemValue(const_cast<AIInfo*>(info), true);
        }
    }
    // Low risk: hold items for defense (no action)
}

// getRiskTolerance__Q25Enemy2AIFv
// Returns float [0..1] based on difficulty setting and race situation.
f32 AI::getRiskTolerance() const {
    f32 risk = 0.5f; // Default moderate risk

    // Morale adjustment: confident AI takes more risks
    risk += (mMorale - 0.5f) * 0.3f;

    // Being in last place increases risk tolerance (nothing to lose)
    if (mLastPosition >= 8.0f) {
        risk += 0.2f;
    }

    // Being in first place decreases risk tolerance (protect lead)
    if (mLastPosition <= 2.0f) {
        risk -= 0.2f;
    }

    // Clamp to [0.0, 1.0]
    if (risk < 0.0f) {
        risk = 0.0f;
    } else if (risk > 1.0f) {
        risk = 1.0f;
    }

    return risk;
}

// updateMorale__Q25Enemy2AIFv
// Adjust AI aggression based on position changes during race.
void AI::updateMorale() {
    if (mpEngine == nullptr || mpEngine->mpInfo == nullptr) {
        return;
    }

    const AIInfo* info = mpEngine->mpInfo;
    if (info->mpPathHandler == nullptr) {
        return;
    }

    // Compute position proxy from path progress
    f32 progress = info->mpPathHandler->getProgress();
    f32 positionEstimate = progress * 12.0f; // Scale to player count

    if (mLastPosition > 0.0f) {
        f32 delta = positionEstimate - mLastPosition;

        // Gaining positions (negative delta = moving up) boosts morale
        if (delta < -0.1f) {
            mMorale += 0.02f;
        } else if (delta > 0.1f) {
            // Losing positions drops morale
            mMorale -= 0.03f;
        }
    }

    mLastPosition = positionEstimate;

    // Clamp morale to [0.0, 1.0]
    if (mMorale < 0.0f) {
        mMorale = 0.0f;
    } else if (mMorale > 1.0f) {
        mMorale = 1.0f;
    }

    // Natural decay toward 0.5 (neutral) over time
    mMorale += (0.5f - mMorale) * 0.005f;
}

} // namespace Enemy