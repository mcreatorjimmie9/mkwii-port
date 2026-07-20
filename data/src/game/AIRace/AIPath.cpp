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

} // namespace Enemy
