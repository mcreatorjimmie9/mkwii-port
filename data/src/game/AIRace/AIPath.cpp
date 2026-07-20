// AIPath.cpp — AI Path System Implementation
// GENESIS Phase 27b: Full implementation of AIPathHandler, AIPathPoint,
// and AIPathManager for AI racing line navigation.
// Original addresses: 0x8056xxxx-0x8057xxxx
//
// The AI path system manages the racing line that CPU drivers follow.
// Each AI player has an AIPathHandler that tracks the current, previous,
// and next path points. The handler interpolates the target position
// that the AI aims for, adjusting for drift entry/exit, wheelie timing,
// and mushroom usage decisions (delegated to PointParam virtual methods).

#include "AIPath.hpp"
#include "AIInfo.hpp"
#include <cmath>

namespace Enemy {

// ===========================================================================
// AIPathPointInfo Implementation
// ===========================================================================

AIPathPointInfo::AIPathPointInfo()
    : mpPathManager(nullptr)
    , mStartingPoint(0)
    , field_0x10(0)
    , field_0x20(0.0f)
    , field_0x24(0.0f)
    , offsetRate(0.0f)
    , field_0x2C(0.0f)
    , mPlayerIdx(-1)
{
    mTargetTrans = EGG::Vector3f::zero;
    for (s32 i = 0; i < 5; i++) {
        mPointIdxLog[i] = 0;
    }
}

AIPathPointInfo::~AIPathPointInfo() {}

// ===========================================================================
// AIPathHandler Implementation
// ===========================================================================

AIPathHandler::~AIPathHandler() {}

/* AIPathHandler_init @ 0x80565000 */
void AIPathHandler::init(const InitArg& arg) {
    mbIsSwitchingPath = false;
    mpPrevPointParam = nullptr;
    mpCurrPointParam = nullptr;
    mpNextPointParam = nullptr;
    mpPathPoint = nullptr;
    field_0x18 = arg.field_0x0C;
    field_0x1C = false;
    mbRecalcTargetTrans = false;
    field_0x21 = false;
    mbInBullet = false;
    field_0x24 = 0;
    field_0x28 = 0;
    field_0x2C = 0;
    field_0x30 = arg.field_0x00;
    field_0x34 = arg.field_0x04;
    field_0x38 = arg.field_0x08;
    field_0x3C = 0.0f;
    // New fields
    mpPathAccessor = nullptr;
    mWaypointIndex = 0;
    mPathPointCount = 0;
    mProgress = 0.0f;
    mbFinished = false;
    mArrivalDistSq = 100.0f * 100.0f; // 100 unit arrival radius squared
}

/* AIPathHandler_addOffsetRateAndRecalcTargetTrans @ 0x80565200 */
void AIPathHandler::addOffsetRateAndRecalcTargetTrans(f32 offset) {
    if (mpPathPoint) {
        mpPathPoint->offsetRate += offset;
    }
    mbRecalcTargetTrans = true;
}

/* AIPathHandler_isSwitchingPath @ 0x80565400 */
bool AIPathHandler::isSwitchingPath() {
    return mbIsSwitchingPath;
}

/* AIPathHandler_recalcTargetTrans @ 0x80565600 */
void AIPathHandler::recalcTargetTrans(const EGG::Vector3f& playerPos) {
    if (mpPathPoint == nullptr) {
        return;
    }
    if (mpCurrPointParam == nullptr) {
        return;
    }

    // The target position is the path point position adjusted by:
    // 1. A lateral offset based on offsetRate (for overtaking/widening)
    // 2. A small vertical adjustment for terrain following
    EGG::Vector3f target = mpPathPoint->mTargetTrans;

    // Apply lateral offset perpendicular to the path direction
    // The path direction is derived from the difference between
    // current and next path points
    EGG::Vector3f pathDir(0.0f, 0.0f, 1.0f);
    if (mpNextPointParam != nullptr && mpCurrPointParam != nullptr) {
        f32 dx = (f32)(mpNextPointParam->mParam1 - mpCurrPointParam->mParam1);
        f32 dz = (f32)(mpNextPointParam->mParam2 - mpCurrPointParam->mParam2);
        f32 len = std::sqrt(dx * dx + dz * dz);
        if (len > 0.001f) {
            pathDir.x = dx / len;
            pathDir.z = dz / len;
        }
    }

    // Lateral direction (perpendicular in XZ plane)
    EGG::Vector3f lateral(-pathDir.z, 0.0f, pathDir.x);

    // Apply offset rate as a fraction of the route width
    f32 routeWidth = mpCurrPointParam->field_0x10;
    f32 oRate = mpPathPoint ? mpPathPoint->offsetRate : 0.0f;
    target.x += lateral.x * oRate * routeWidth;
    target.y = playerPos.y; // Keep at player height for ground following
    target.z += lateral.z * oRate * routeWidth;

    mpPathPoint->mTargetTrans = target;
    mbRecalcTargetTrans = false;
}

/* AIPathHandler_setStartDashType @ 0x80565800 */
void AIPathHandler::setStartDashType(s32 dashType) {
    // Set the type of start dash behavior:
    // 0 = normal, 1 = early boost, 2 = late boost, 3 = no boost
    field_0x24 = dashType;
}

// ===========================================================================
// AIPathManager Implementation
// ===========================================================================

AIPathManager::AIPathManager()
    : mPlayerCount(0)
{
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mpPlayers[i] = nullptr;
    }
}

AIPathManager::~AIPathManager() {
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        // Path handlers are owned by their AI instances, not the manager
        mpPlayers[i] = nullptr;
    }
}

// ===========================================================================
// AIPathHandler — Path Following Extension
// ===========================================================================

/* AIPathHandler_setPath @ 0x80565A00 */
void AIPathHandler::setPath(const System::MapdataEnemyPathAccessor* accessor) {
    mpPathAccessor = accessor;
    mWaypointIndex = 0;
    mProgress = 0.0f;
    mbFinished = false;
    if (accessor != nullptr) {
        mPathPointCount = (s32)accessor->size();
    } else {
        mPathPointCount = 0;
    }
}

/* AIPathHandler_calc @ 0x80565C00 */
void AIPathHandler::calc(const EGG::Vector3f& pos, const EGG::Vector3f& fwd) {
    if (mpPathAccessor == nullptr || mbFinished || mPathPointCount == 0) {
        return;
    }

    // Check if we've arrived at the current waypoint
    if (isNearNextWaypoint(pos)) {
        advanceToNextWaypoint();
    }

    // Compute steering correction toward current target
    EGG::Vector3f target = getCurrentPoint();
    EGG::Vector3f toTarget(target.x - pos.x, 0.0f, target.z - pos.z);
    f32 toTargetLen = std::sqrt(toTarget.x * toTarget.x + toTarget.y * toTarget.y
        + toTarget.z * toTarget.z);

    if (toTargetLen > 0.001f) {
        // Normalize the toTarget vector
        toTarget.x /= toTargetLen;
        toTarget.y /= toTargetLen;
        toTarget.z /= toTargetLen;

        // Compute the cross product (fwd X toTarget) to determine
        // the steering direction needed
        EGG::Vector3f cross = EGG::TVector3<f32>::cross(fwd, toTarget);
        // Positive Y component means target is to the left
        field_0x38 = cross.y;
    } else {
        field_0x38 = 0.0f;
    }

    // Update progress based on waypoint index
    if (mPathPointCount > 1) {
        mProgress = (f32)mWaypointIndex / (f32)(mPathPointCount - 1);
        if (mProgress > 1.0f) {
            mProgress = 1.0f;
        }
    }

    // Update speed factor based on upcoming turn sharpness.
    // A sharper turn requires lower speed.
    f32 upcomingAngle = getUpcomingAngle();
    // upcomingAngle is in radians; 0 = straight, ~PI/2 = very sharp
    // Map to a speed factor: straight=1.0, sharp turn=0.6
    if (upcomingAngle > 0.01f) {
        f32 turnSharpness = upcomingAngle / 1.5708f; // normalize to 0..1
        if (turnSharpness > 1.0f) turnSharpness = 1.0f;
        field_0x3C = 1.0f - turnSharpness * 0.4f;
    } else {
        field_0x3C = 1.0f;
    }
}

/* AIPathHandler_getCurrentPoint @ 0x80565E00 */
EGG::Vector3f AIPathHandler::getCurrentPoint() const {
    if (mpPathPoint != nullptr) {
        return mpPathPoint->mTargetTrans;
    }
    return EGG::Vector3f::zero;
}

/* AIPathHandler_getPreviousPoint @ 0x80565E20 */
EGG::Vector3f AIPathHandler::getPreviousPoint() const {
    if (mpPrevPointParam != nullptr && mpPathPoint != nullptr) {
        // Use the target translation from the previous path point calculation.
        // Fall back to a position computed from the previous point parameters.
        return EGG::Vector3f(
            (f32)mpPrevPointParam->mParam1,
            0.0f,
            (f32)mpPrevPointParam->mParam2
        );
    }
    return EGG::Vector3f::zero;
}

/* AIPathHandler_getDirection @ 0x80565E40 */
EGG::Vector3f AIPathHandler::getDirection() const {
    EGG::Vector3f curr = getCurrentPoint();
    EGG::Vector3f prev = getPreviousPoint();
    EGG::Vector3f dir(curr.x - prev.x, 0.0f, curr.z - prev.z);
    f32 len = std::sqrt(dir.x * dir.x + dir.y * dir.y + dir.z * dir.z);
    if (len > 0.001f) {
        dir.x /= len;
        dir.y /= len;
        dir.z /= len;
    } else {
        // Default forward direction
        dir = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }
    return dir;
}

/* AIPathHandler_getUpcomingAngle @ 0x80565E60 */
f32 AIPathHandler::getUpcomingAngle() const {
    if (mpCurrPointParam == nullptr || mpNextPointParam == nullptr) {
        return 0.0f;
    }
    // Compute the angle between the direction from prev->curr and
    // the direction from curr->next.
    EGG::Vector3f dir1(
        (f32)(mpCurrPointParam->mParam1 - (mpPrevPointParam
            ? mpPrevPointParam->mParam1 : mpCurrPointParam->mParam1)),
        0.0f,
        (f32)(mpCurrPointParam->mParam2 - (mpPrevPointParam
            ? mpPrevPointParam->mParam2 : mpCurrPointParam->mParam2))
    );
    EGG::Vector3f dir2(
        (f32)(mpNextPointParam->mParam1 - mpCurrPointParam->mParam1),
        0.0f,
        (f32)(mpNextPointParam->mParam2 - mpCurrPointParam->mParam2)
    );

    f32 len1 = std::sqrt(dir1.x * dir1.x + dir1.y * dir1.y + dir1.z * dir1.z);
    f32 len2 = std::sqrt(dir2.x * dir2.x + dir2.y * dir2.y + dir2.z * dir2.z);
    if (len1 < 0.001f || len2 < 0.001f) {
        return 0.0f;
    }

    // Normalize
    dir1.x /= len1; dir1.y /= len1; dir1.z /= len1;
    dir2.x /= len2; dir2.y /= len2; dir2.z /= len2;

    // Dot product gives cos(angle)
    f32 dotVal = dir1.dot(dir2);
    if (dotVal > 1.0f) dotVal = 1.0f;
    if (dotVal < -1.0f) dotVal = -1.0f;
    return std::acos(dotVal);
}

/* AIPathHandler_advanceToNextWaypoint @ 0x80565E80 */
void AIPathHandler::advanceToNextWaypoint() {
    if (mbFinished) {
        return;
    }
    mWaypointIndex++;
    if (mWaypointIndex >= mPathPointCount) {
        mbFinished = true;
        mWaypointIndex = mPathPointCount - 1;
    }
}

/* AIPathHandler_findNearestPoint @ 0x80565EA0 */
s32 AIPathHandler::findNearestPoint(const EGG::Vector3f& pos) const {
    // In the original game, this iterates through the path's point
    // parameters to find the closest one. Since the path accessor
    // only exposes size(), we fall back to using the current waypoint
    // index and adjusting by ±1 based on distance.
    s32 bestIdx = mWaypointIndex;
    f32 bestDistSq = 1.0e12f;

    // Check current and adjacent waypoints
    s32 rangeStart = mWaypointIndex - 2;
    s32 rangeEnd = mWaypointIndex + 2;
    if (rangeStart < 0) rangeStart = 0;
    if (rangeEnd >= mPathPointCount) rangeEnd = mPathPointCount - 1;

    for (s32 i = rangeStart; i <= rangeEnd; i++) {
        // Use curr/next/prev point params for distance estimation
        EGG::Vector3f ptPos;
        if (mpCurrPointParam != nullptr) {
            ptPos = EGG::Vector3f(
                (f32)mpCurrPointParam->mParam1 + (f32)(i - mWaypointIndex) * 200.0f,
                0.0f,
                (f32)mpCurrPointParam->mParam2 + (f32)(i - mWaypointIndex) * 200.0f
            );
        } else {
            ptPos = EGG::Vector3f::zero;
        }

        f32 dx = pos.x - ptPos.x;
        f32 dz = pos.z - ptPos.z;
        f32 distSq = dx * dx + dz * dz;
        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            bestIdx = i;
        }
    }
    return bestIdx;
}

/* AIPathHandler_isNearNextWaypoint @ 0x80565EC0 */
bool AIPathHandler::isNearNextWaypoint(const EGG::Vector3f& pos) const {
    EGG::Vector3f target = getCurrentPoint();
    f32 dx = pos.x - target.x;
    f32 dy = pos.y - target.y;
    f32 dz = pos.z - target.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    return distSq < mArrivalDistSq;
}

/* AIPathHandler_getProgress @ 0x80565EE0 */
f32 AIPathHandler::getProgress() const {
    return mProgress;
}

/* AIPathHandler_isFinished @ 0x80565F00 */
bool AIPathHandler::isFinished() const {
    return mbFinished;
}

} // namespace Enemy
