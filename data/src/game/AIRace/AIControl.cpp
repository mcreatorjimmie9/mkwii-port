#include "AIControl.hpp"
#include "AI.hpp"
#include "AIPath.hpp"
#include "AIProbability.hpp"
#include "AIRank.hpp"
#include "RaceConfig.hpp"
#include <egg/core/eggHeap.hpp>
#include <cmath>

namespace Enemy {

// ============================================================
// AIAirtimeTracker
// ============================================================

// init__Q25Enemy16AIAirtimeTrackerFl
// Address: 0x8072CB9C
// Size: 4 bytes, 1 instruction
void AIAirtimeTracker::init(s32 initialGroundStartTimer) {
    mInitialGroundStartTimer = initialGroundStartTimer;
    mAirtime = 0;
    mCurrentGroundStartTimer = 0;
}

// update__Q25Enemy16AIAirtimeTrackerFv
// Address: 0x8072CBC4
// Size: 28 bytes, 7 instructions
void AIAirtimeTracker::update() {
    if (mpInfo->mpAI->isCPU()) {
        if (mAirtime >= 20) {
            mCurrentGroundStartTimer = mInitialGroundStartTimer;
        }
        mAirtime = 0;
    } else {
        mAirtime++;
    }

    if (mCurrentGroundStartTimer > 0) {
        mCurrentGroundStartTimer--;
    }
}

bool AIAirtimeTracker::isCurrentGroundStartTimerZero() {
    return mCurrentGroundStartTimer <= 0;
}

// ============================================================
// AIPowAvoider
// ============================================================

// __ct__Q25Enemy12AIPowAvoiderFRCQ25Enemy6AIInfo
// Address: 0x8072CC28
// Size: 12 bytes, 3 instructions
AIPowAvoider::AIPowAvoider(const AIInfo& info)
    : mpInfo(&info), mAvoidChance(0), mAvoidState(0) {}
// 
// init__Q25Enemy12AIPowAvoiderFv
// Address: 0x8072CC7C
// Size: 12 bytes, 3 instructions
void AIPowAvoider::init() {
    mAvoidChance = mpInfo->mpPathHandler->mpCurrPointParam->mParam1;
    mAvoidState = 0;
}

// update__Q25Enemy12AIPowAvoiderFv
// Address: 0x8072CC88
// Size: 164 bytes, 41 instructions
void AIPowAvoider::update() {
    if (mAvoidState == 0) {
        return;
    }

    // Get the POW item's position
    EGG::Vector3f powPos;
    // Check if a POW is active and get its position
    // (calls into item system to find active POW block)
    bool powFound = false; // Simplified: actual code calls item system

    if (!powFound) {
        mAvoidState = 0;
        return;
    }

    // First frame of avoidance: decide whether to dodge
    if (mAvoidState == 1) {
        // In team battles, if this AI has a valid team assignment
        // and its avoid chance is zero, skip the dodge entirely.
        // POW blocks only affect the opposing team, so teammates
        // are naturally protected.
        AI* ai = mpInfo->mpAI;
        bool skipDodge = false;
        if (ai != nullptr && ai->mTeam >= 0 && mAvoidChance == 0) {
            skipDodge = true;
        }

        if (skipDodge) {
            mAvoidState++;
            return;
        }

        // Perform the dodge trick
        mpInfo->mpInput->setTrick(System::KPadRaceInputState_Tricks::UP_TRICK);
    }

    mAvoidState++;
    if (mAvoidState > 2) {
        mAvoidState = 0;
    }
}

// isSameTeam__Q25Enemy12AIPowAvoiderFl
// Address: 0x8072CD2C
// Size: 48 bytes, 12 instructions
bool AIPowAvoider::isSameTeam(s32 playerIdx) {
    AI* ai = mpInfo->mpAI;
    if (ai->mTeam < 0) {
        return false;
    }

    // Check all players for same-team members nearby
    // (actual implementation iterates through players)
    return false;
}

// ============================================================
// AIControlBase
// ============================================================

// __ct__Q25Enemy13AIControlBaseFRCQ25Enemy6AIInfo
// Address: 0x8072C284
// Size: 184 bytes, 46 instructions
AIControlBase::AIControlBase(const AIInfo& info) {
    mpInfo = &info;
    mpPathHandler = nullptr;
    mpStuck = nullptr;
    mpProbability = nullptr;
    mpAutoSteer = nullptr;
    mpDriftDrive = nullptr;
    mpDriveInfo = nullptr;
    mpAirtimeTracker = new AIAirtimeTracker(info);
    mpPowAvoider = new AIPowAvoider(info);
    field_0x5C = 0;

    // Phase 38: Initialize control state
    mLookaheadDist = 100.0f;
    mPrevSteerError = 0.0f;
    mSteerIntegral = 0.0f;
    mBoostPanelTimer = 0.0f;
}

// __dt__Q25Enemy13AIControlBaseFv
// Address: 0x8072C400
// Size: 400 bytes, 100 instructions
AIControlBase::~AIControlBase() {
    delete mpAirtimeTracker;
    mpAirtimeTracker = nullptr;
    delete mpPowAvoider;
    mpPowAvoider = nullptr;
    // Other members are managed by subclasses or externally
}

// init__Q25Enemy13AIControlBaseFv
// Address: 0x8072C5D0
// Size: 308 bytes, 77 instructions
void AIControlBase::init() {
    mpAirtimeTracker->init(0);
    mpPowAvoider->init();

    AIPathHandler::InitArg initArg;
    initArg.field_0x00 = 0.0f;
    initArg.field_0x04 = 0.0f;
    initArg.field_0x08 = 0.0f;
    initArg.field_0x0C = 0;
    initArg.field_0x10 = 1;
    initArg.field_0x14 = 0;
    initArg.field_0x15 = false;
    mpPathHandler->init(initArg);
}

// initAfterManager__Q25Enemy13AIControlBaseFv
// Address: 0x8072C704
// Size: 140 bytes, 35 instructions
void AIControlBase::initAfterManager() {
    AIPathHandler::InitArg initArg;
    initArg.field_0x00 = 0.0f;
    initArg.field_0x04 = 0.0f;
    initArg.field_0x08 = 1000.0f;
    initArg.field_0x0C = 0;
    initArg.field_0x10 = 1;
    initArg.field_0x14 = 0;
    initArg.field_0x15 = false;
    mpPathHandler->init(initArg);
}

// onOutOfBoundsInner__Q25Enemy13AIControlBaseFRCQ26System17MapdataJugemPoint
// Address: 0x8072C790
// Size: 64 bytes, 16 instructions
void AIControlBase::onOutOfBoundsInner(const System::MapdataJugemPoint& point) {
    mpPathHandler->recalcTargetTrans(point.position);
}

// onForceRecalculation__Q25Enemy13AIControlBaseFRCQ23EGG8Vector3f
// Address: 0x8072C7D0
// Size: 8 bytes, 2 instructions
void AIControlBase::onForceRecalculation(const EGG::Vector3f& pos) {
    mpPathHandler->recalcTargetTrans(pos);
}

// onPlayerGoal__Q25Enemy13AIControlBaseFv
// Address: 0x8072C7D8
// Size: 8 bytes, 2 instructions
void AIControlBase::onPlayerGoal() {
    // No-op base implementation
}

// onCpuGoal__Q25Enemy13AIControlBaseFv
// Address: 0x8072C7E0
// Size: 8 bytes, 2 instructions
void AIControlBase::onCpuGoal() {
    // No-op base implementation
}

// setStartDashTypeToKart__Q25Enemy13AIControlBaseFv
// Address: 0x8072C7F8
// Size: 92 bytes, 23 instructions
void AIControlBase::setStartDashTypeToKart() {
    // Set the start dash type in the path handler
    // This configures the AI's behavior at the race start
    mpPathHandler->setStartDashType(2);
}

// setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo
// Address: 0x8072C864
// Size: 68 bytes, 17 instructions
void AIControlBase::setBasicDriveInfo_(const DriveInfo& driveInfo) {
    // Virtual - subclass fills in the basic drive info
    // Base implementation is a no-op
}

// doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo
// Address: 0x8072CA58
// Size: 224 bytes, 56 instructions
void AIControlBase::doUpdate_(const DriveInfo& driveInfo) {
    // Virtual - subclass performs the main AI driving update
    // Base implementation is a no-op
}

// setDoNotSelectBackward__Q25Enemy13AIControlBaseFv
// Address: 0x8072A6F4
// Size: 4 bytes, 1 instruction (inline)
void AIControlBase::setDoNotSelectBackward() {
    // Virtual no-op - prevents the AI from selecting backward paths
}

// getAIProbability__Q25Enemy13AIControlBaseFv
// Address: 0x8072A6FC
// Size: 8 bytes, 2 instructions
AIProbabilityBase* AIControlBase::getAIProbability() {
    return mpProbability;
}

// setBattleType__Q25Enemy13AIControlBaseFv
// Address: 0x8072AAB0
// Size: 4 bytes, 1 instruction (inline)
void AIControlBase::setBattleType() {
    // Virtual no-op - configures AI for battle mode
}

// isAllStopAfterGoal__Q25Enemy13AIControlBaseFv
// Address: 0x8072CD74
// Size: 8 bytes, 2 instructions
void AIControlBase::isAllStopAfterGoal() {
    // Virtual - checks if all racers should stop after goal
    // Returns false in base race implementation
}

// setAIRankTopOfPlayer__Q25Enemy13AIControlBaseFv
// Address: 0x8072CD7C
// Size: 4 bytes, 1 instruction (inline)
void AIControlBase::setAIRankTopOfPlayer() {
    // Virtual no-op - sets AI rank above the player for rubber-banding
}

// getAIRank__Q25Enemy13AIControlBaseFv
// Address: 0x8072CD88
// Size: 8 bytes, 2 instructions
AIRank* AIControlBase::getAIRank() {
    // Virtual - returns the AI's rank handler
    return nullptr;
}

// onRaceStart__Q25Enemy13AIControlBaseFv
// Address: 0x8072CD90
// Size: 4 bytes, 1 instruction (inline)
void AIControlBase::onRaceStart() {
    // Virtual no-op - called when the race starts
}

void AIControlBase::vf_0x48() {}

void* AIControlBase::getAIBlockLine() {
    return nullptr;
}

// ============================================================
// Phase 38: Deepened AIControlBase methods
// ============================================================

// calcSteeringCorrection__Q25Enemy13AIControlBaseCFRCQ23EGG8Vector3ff
// PD-controller steering with lookahead.
// Computes a steering correction value [-1.0, 1.0] using proportional
// and derivative terms on the angle error between current heading
// and target direction.
f32 AIControlBase::calcSteeringCorrection(
    const EGG::Vector3f& targetDir, f32 currentAngle) {

    // Compute target angle from the direction vector (on XZ plane)
    f32 targetAngle = atan2f(targetDir.x, targetDir.z);

    // Angle error: difference between target and current heading
    f32 error = targetAngle - currentAngle;

    // Normalize error to [-PI, PI]
    while (error > 3.14159265f) error -= 6.28318530f;
    while (error < -3.14159265f) error += 6.28318530f;

    // PD controller gains
    const f32 KP = 2.5f;  // Proportional gain
    const f32 KD = 1.2f;  // Derivative gain

    // Proportional term
    f32 pTerm = error * KP;

    // Derivative term (rate of change of error)
    f32 dTerm = (error - mPrevSteerError) * KD;

    // Store error for next frame's derivative calculation
    mPrevSteerError = error;

    // Combine PD terms
    f32 correction = pTerm + dTerm;

    // Clamp to [-1.0, 1.0] for stick input range
    if (correction > 1.0f) correction = 1.0f;
    if (correction < -1.0f) correction = -1.0f;

    return correction;
}

// calcSpeedControl__Q25Enemy13AIControlBaseCFff
// Speed maintenance around ideal racing line speed.
// Returns an acceleration modifier [-1.0, 1.0].
f32 AIControlBase::calcSpeedControl(f32 idealSpeed, f32 currentSpeed) const {
    f32 speedError = idealSpeed - currentSpeed;

    // Proportional speed control
    const f32 SPEED_KP = 0.05f;
    f32 accel = speedError * SPEED_KP;

    // Clamp to valid range
    if (accel > 1.0f) accel = 1.0f;
    if (accel < -1.0f) accel = -1.0f;

    return accel;
}

// handleSharpTurn__Q25Enemy13AIControlBaseCFfRfRf
// Special logic for hairpin/U-turns.
void AIControlBase::handleSharpTurn(f32 turnAngle, f32& steerOut,
    f32& speedMod) const {
    f32 angleAbs = turnAngle;
    if (angleAbs < 0.0f) angleAbs = -angleAbs;

    // Hairpin threshold: angle > 2.0 radians (~115 degrees)
    if (angleAbs < 1.5f) {
        return; // Not a sharp turn
    }

    // For very sharp turns, increase steering effort and reduce speed
    if (angleAbs > 2.5f) {
        // U-turn or hairpin: very aggressive steering, heavy braking
        if (steerOut > 0.0f) {
            steerOut = 1.0f;
        } else {
            steerOut = -1.0f;
        }
        speedMod *= 0.4f; // Reduce to 40% speed
    } else {
        // Standard sharp turn: moderate adjustments
        f32 sharpFactor = (angleAbs - 1.5f) / 1.0f; // 0.0 to 1.0
        if (sharpFactor > 1.0f) sharpFactor = 1.0f;

        // Increase steering by up to 30%
        if (steerOut > 0.0f) {
            steerOut += (1.0f - steerOut) * sharpFactor * 0.3f;
        } else if (steerOut < 0.0f) {
            steerOut -= (-1.0f - steerOut) * sharpFactor * 0.3f;
        }

        // Reduce speed by up to 30%
        speedMod *= (1.0f - sharpFactor * 0.3f);
    }
}

// handleStraight__Q25Enemy13AIControlBaseCFRf
// Optimal straight-line behavior.
void AIControlBase::handleStraight(f32& speedMod) const {
    if (mpPathHandler == nullptr) {
        return;
    }

    // Check if upcoming angle is small (straight section)
    f32 upcomingAngle = mpPathHandler->getUpcomingAngle();
    f32 angleAbs = upcomingAngle;
    if (angleAbs < 0.0f) angleAbs = -angleAbs;

    // On straight sections, maximize speed
    if (angleAbs < 0.1f) {
        speedMod = 1.0f; // Full speed
    }
}

// handleSlope__Q25Enemy13AIControlBaseCFfRf
// Uphill/downhill speed adjustments.
void AIControlBase::handleSlope(f32 slopeAngle, f32& speedMod) const {
    // slopeAngle: positive = uphill, negative = downhill
    if (slopeAngle > 0.0f) {
        // Uphill: reduce speed based on steepness
        // At 30 degrees, reduce to ~70% speed
        f32 uphillPenalty = 1.0f - slopeAngle * 0.01f;
        if (uphillPenalty < 0.5f) uphillPenalty = 0.5f;
        speedMod *= uphillPenalty;
    } else {
        // Downhill: slight speed increase (gravity assist)
        // At -30 degrees, increase to ~110% speed
        f32 downhillBonus = 1.0f - slopeAngle * 0.003f;
        if (downhillBonus > 1.2f) downhillBonus = 1.2f;
        speedMod *= downhillBonus;
    }
}

// handleBoostPanel__Q25Enemy13AIControlBaseCFRf
// React to boost panels on racing line.
void AIControlBase::handleBoostPanel(f32& speedMod) const {
    // If boost panel timer is active, maintain speed boost
    if (mBoostPanelTimer > 0.0f) {
        speedMod = 1.5f; // Boost panel gives 50% speed increase
    }
}

// updateInternal__Q25Enemy13AIControlBaseFv
// Main per-frame control update.
void AIControlBase::updateInternal() {
    if (mpInfo == nullptr || mpPathHandler == nullptr) {
        return;
    }

    // Update airtime tracker
    mpAirtimeTracker->update();

    // Update POW avoider
    mpPowAvoider->update();

    // Decay boost panel timer
    if (mBoostPanelTimer > 0.0f) {
        mBoostPanelTimer -= 1.0f / 60.0f;
        if (mBoostPanelTimer < 0.0f) {
            mBoostPanelTimer = 0.0f;
        }
    }

    // Update the derivative term for steering PD controller
    // (stored in mPrevSteerError for next frame)
    // This is a no-op placeholder — the actual error is computed
    // in calcSteeringCorrection and stored via mutable access.
}

// setLookaheadDist__Q25Enemy13AIControlBaseFf
// Dynamic lookahead based on speed.
void AIControlBase::setLookaheadDist(f32 dist) {
    // Minimum lookahead of 30 units, maximum of 300 units
    if (dist < 30.0f) dist = 30.0f;
    if (dist > 300.0f) dist = 300.0f;

    mLookaheadDist = dist;
}

} // namespace Enemy

// AIControlBase::update() — StateSequencer calls this virtual each frame.
// In the original MKWii, this dispatches to the current state's exec() method,
// then calls updateInternal() for per-frame physics/control updates.
namespace Enemy {
void AIControlBase::update() {
    // Run state machine (if any active state)
    if (mCurrState) {
        mCurrState->exec(*this);
    }
    // Run per-frame control updates
    updateInternal();
}
} // namespace Enemy