// RoutePoint.cpp — Route Path & Cannon Manager Implementation
// GENESIS Phase 27a
// Original addresses: 0x804C4000–0x804C5500

#include "RoutePoint.hpp"
#include <cmath>
#include <cstring>

namespace Field {

// ===========================================================================
// RoutePointManager Implementation
// ===========================================================================

/* RoutePointManager_ctor @ 0x804C4100 */
RoutePointManager::RoutePointManager()
    : mRouteCount(0)
    , mNextPoolIdx(0)
    , mbLoaded(false)
{
    for (s32 i = 0; i < MAX_ROUTES; i++) {
        mRoutes[i].points = nullptr;
        mRoutes[i].numPoints = 0;
        mRoutes[i].routeId = 0;
        mRoutes[i].totalLength = 0.0f;
        mRoutes[i].pathType = 0;
    }
}

/* RoutePointManager_dtor @ 0x804C4140 */
RoutePointManager::~RoutePointManager() {
    unload();
}

/* RoutePointManager_load @ 0x804C4180 */
bool RoutePointManager::load(u32 courseId) {
    if (mbLoaded) {
        unload();
    }

    mRouteCount = 0;
    mNextPoolIdx = 0;

    // In the original game, route points are loaded from JMap "PATH" group
    // entries. Each route is a named path with control points defining
    // the AI racing line. The main route (pathType=0) is the primary
    // racing line that all AI follows. Shortcut routes (pathType=1) are
    // used when AI decides to take shortcuts based on item/power state.
    //
    // Generate a default oval-shaped main route for demonstration

    s32 mainRouteIdx = 0;
    const s32 pointsPerLap = 32; // ~32 control points around the track
    mRoutes[mainRouteIdx].routeId = 0;
    mRoutes[mainRouteIdx].pathType = 0;
    mRoutes[mainRouteIdx].numPoints = pointsPerLap;
    mRoutes[mainRouteIdx].points = &mPointPool[0];

    // Generate oval track control points
    for (s32 i = 0; i < pointsPerLap; i++) {
        f32 angle = (f32)i / (f32)pointsPerLap * 2.0f * 3.14159265f;
        f32 radius = 500.0f;
        RoutePoint& pt = mPointPool[i];
        pt.position.x = std::cos(angle) * radius;
        pt.position.y = 0.0f;
        pt.position.z = std::sin(angle) * radius;
        pt.speed = 80.0f; // Recommended speed in km/h
        pt.width = 20.0f; // Route corridor half-width
        pt.pointIdx = i;
        pt.flags = 0;

        // Next direction: toward the next point
        f32 nextAngle = (f32)(i + 1) / (f32)pointsPerLap * 2.0f * 3.14159265f;
        pt.next.x = std::cos(nextAngle) * radius - pt.position.x;
        pt.next.y = 0.0f;
        pt.next.z = std::sin(nextAngle) * radius - pt.position.z;
        f32 nextLen = std::sqrt(pt.next.x * pt.next.x +
                                 pt.next.z * pt.next.z);
        if (nextLen > 0.001f) {
            pt.next.x /= nextLen;
            pt.next.z /= nextLen;
        }
    }

    // Calculate total route length
    mRoutes[mainRouteIdx].totalLength = 0.0f;
    for (s32 i = 0; i < pointsPerLap; i++) {
        const RoutePoint& curr = mPointPool[i];
        const RoutePoint& next = mPointPool[(i + 1) % pointsPerLap];
        f32 dx = next.position.x - curr.position.x;
        f32 dy = next.position.y - curr.position.y;
        f32 dz = next.position.z - curr.position.z;
        mRoutes[mainRouteIdx].totalLength += std::sqrt(dx*dx + dy*dy + dz*dz);
    }

    mNextPoolIdx = pointsPerLap;
    mRouteCount = 1;

    mbLoaded = true;
    return true;
}

/* RoutePointManager_unload @ 0x804C4200 */
void RoutePointManager::unload() {
    mRouteCount = 0;
    mNextPoolIdx = 0;
    mbLoaded = false;
}

/* RoutePointManager_getRouteCount */
s32 RoutePointManager::getRouteCount() const {
    return mRouteCount;
}

/* RoutePointManager_getRoute */
const RoutePath* RoutePointManager::getRoute(s32 routeIdx) const {
    if (routeIdx < 0 || routeIdx >= mRouteCount) {
        return nullptr;
    }
    return &mRoutes[routeIdx];
}

/* RoutePointManager_getMainRoute */
const RoutePath* RoutePointManager::getMainRoute() const {
    if (mRouteCount > 0) {
        return &mRoutes[0];
    }
    return nullptr;
}

/* RoutePointManager_findNearestPoint @ 0x804C4300 */
s32 RoutePointManager::findNearestPoint(const EGG::Vector3f& pos,
                                          s32* outRouteIdx,
                                          s32* outPointIdx) const {
    f32 bestDistSq = 1.0e10f;
    s32 foundRoute = -1;
    s32 foundPoint = -1;

    for (s32 r = 0; r < mRouteCount; r++) {
        const RoutePath& route = mRoutes[r];
        for (s32 p = 0; p < route.numPoints; p++) {
            const RoutePoint& pt = route.points[p];
            f32 dx = pos.x - pt.position.x;
            f32 dy = pos.y - pt.position.y;
            f32 dz = pos.z - pt.position.z;
            f32 distSq = dx * dx + dy * dy + dz * dz;
            if (distSq < bestDistSq) {
                bestDistSq = distSq;
                foundRoute = r;
                foundPoint = p;
            }
        }
    }

    if (outRouteIdx != nullptr) {
        *outRouteIdx = foundRoute;
    }
    if (outPointIdx != nullptr) {
        *outPointIdx = foundPoint;
    }
    return foundPoint;
}

/* RoutePointManager_getPositionAtDistance @ 0x804C4400 */
EGG::Vector3f RoutePointManager::getPositionAtDistance(s32 routeIdx,
                                                         f32 distance) const {
    if (routeIdx < 0 || routeIdx >= mRouteCount) {
        return EGG::Vector3f::zero;
    }

    const RoutePath& route = mRoutes[routeIdx];
    if (route.numPoints == 0) {
        return EGG::Vector3f::zero;
    }

    // Walk along the route accumulating distance
    f32 accumulated = 0.0f;
    for (s32 i = 0; i < route.numPoints; i++) {
        const RoutePoint& curr = route.points[i];
        const RoutePoint& next = route.points[(i + 1) % route.numPoints];
        f32 dx = next.position.x - curr.position.x;
        f32 dy = next.position.y - curr.position.y;
        f32 dz = next.position.z - curr.position.z;
        f32 segLen = std::sqrt(dx * dx + dy * dy + dz * dz);

        if (accumulated + segLen >= distance) {
            // Interpolate within this segment
            f32 t = (distance - accumulated) / segLen;
            return EGG::Vector3f(
                curr.position.x + t * dx,
                curr.position.y + t * dy,
                curr.position.z + t * dz
            );
        }
        accumulated += segLen;
    }

    // Distance exceeds total length — return last point
    return route.points[route.numPoints - 1].position;
}

// ===========================================================================
// CannonManager Implementation
// ===========================================================================

/* CannonManager_ctor @ 0x804C5000 */
CannonManager::CannonManager()
    : mCannonCount(0)
    , mCourseId(0)
    , mbInitialized(false)
{
    for (s32 i = 0; i < MAX_CANNONS; i++) {
        mCannons[i].cannonId = i;
        mCannons[i].entryRadius = 20.0f;
        mCannons[i].launchSpeed = 120.0f;
        mCannons[i].isOneWay = 1;
        mCannons[i].entryPos = EGG::Vector3f::zero;
        mCannons[i].exitPos = EGG::Vector3f::zero;
        mCannons[i].launchDir = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerCannonState[i].cannonId = -1;
        mPlayerCannonState[i].timer = 0.0f;
        mPlayerCannonState[i].progress = 0.0f;
        mPlayerCannonState[i].startPos = EGG::Vector3f::zero;
        mPlayerCannonState[i].endPos = EGG::Vector3f::zero;
        mPlayerCannonState[i].mbActive = false;
        mPlayerCannonState[i].mbLaunching = false;
    }
}

/* CannonManager_dtor @ 0x804C5040 */
CannonManager::~CannonManager() {}

/* CannonManager_init @ 0x804C5080 */
void CannonManager::init(u32 courseId) {
    mCourseId = courseId;
    mbInitialized = true;
    reset();
    loadCannons();
}

/* CannonManager_loadCannons @ 0x804C5100 */
bool CannonManager::loadCannons() {
    // In the original game, cannon definitions are loaded from JMap
    // "cannon" entries. Each entry specifies entry position, exit position,
    // launch direction, and detection radius.
    //
    // Different courses have different numbers of cannons:
    // - DK Summit: 1 cannon at the summit
    // - Bowser Castle: 1 cannon over the lava pit
    // - Grumble Volcano: 1 cannon shortcut
    // - Rainbow Road: no cannons (but has chain link shortcuts)

    mCannonCount = 0;

    switch (mCourseId) {
    case 3: // Grumble Volcano — cannon shortcut
        mCannons[0].entryPos = EGG::Vector3f(200.0f, 50.0f, 300.0f);
        mCannons[0].exitPos = EGG::Vector3f(600.0f, 80.0f, 800.0f);
        mCannons[0].launchDir = EGG::Vector3f(0.577f, 0.577f, 0.577f);
        mCannons[0].entryRadius = 25.0f;
        mCannons[0].cannonId = 0;
        mCannonCount = 1;
        break;
    case 7: // Bowser Castle — lava pit cannon
        mCannons[0].entryPos = EGG::Vector3f(-100.0f, 20.0f, -400.0f);
        mCannons[0].exitPos = EGG::Vector3f(-100.0f, 60.0f, 200.0f);
        mCannons[0].launchDir = EGG::Vector3f(0.0f, 1.0f, 1.0f);
        mCannons[0].entryRadius = 20.0f;
        mCannons[0].cannonId = 0;
        mCannonCount = 1;
        break;
    case 5: // DK Summit — summit cannon
        mCannons[0].entryPos = EGG::Vector3f(0.0f, 100.0f, -500.0f);
        mCannons[0].exitPos = EGG::Vector3f(0.0f, 150.0f, 200.0f);
        mCannons[0].launchDir = EGG::Vector3f(0.0f, 0.707f, 0.707f);
        mCannons[0].entryRadius = 30.0f;
        mCannons[0].cannonId = 0;
        mCannonCount = 1;
        break;
    default:
        mCannonCount = 0;
        break;
    }

    return true;
}

/* CannonManager_update @ 0x804C5200 */
void CannonManager::update() {
    // Update active cannon states — progress the interpolation
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        CannonState& state = mPlayerCannonState[i];
        if (!state.mbActive) {
            continue;
        }

        state.timer -= 1.0f / 60.0f; // Decrement by one frame at 60fps

        if (state.timer <= 0.0f) {
            // Cannon sequence complete
            if (state.mbLaunching) {
                // Launch phase: player is now flying
                state.progress += 0.02f; // ~50 frames to complete
                if (state.progress >= 1.0f) {
                    state.mbActive = false;
                    state.mbLaunching = false;
                    state.cannonId = -1;
                }
            } else {
                // Entry phase: transition to launch
                state.mbLaunching = true;
                state.progress = 0.0f;
                state.timer = 1.0f; // 1 second launch duration
            }
        }
    }
}

/* CannonManager_checkEntry @ 0x804C5300 */
bool CannonManager::checkEntry(s32 playerIdx, const EGG::Vector3f& position) {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return false;
    }

    CannonState& state = mPlayerCannonState[playerIdx];
    if (state.mbActive) {
        return false; // Already in a cannon
    }

    for (s32 c = 0; c < mCannonCount; c++) {
        const CannonEntry& cannon = mCannons[c];
        f32 dx = position.x - cannon.entryPos.x;
        f32 dy = position.y - cannon.entryPos.y;
        f32 dz = position.z - cannon.entryPos.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;
        f32 radiusSq = cannon.entryRadius * cannon.entryRadius;

        if (distSq <= radiusSq) {
            activateCannon(playerIdx, cannon.cannonId);
            return true;
        }
    }
    return false;
}

/* CannonManager_activateCannon @ 0x804C5400 */
void CannonManager::activateCannon(s32 playerIdx, s32 cannonId) {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return;
    }
    if (cannonId < 0 || cannonId >= mCannonCount) {
        return;
    }

    CannonState& state = mPlayerCannonState[playerIdx];
    const CannonEntry& cannon = mCannons[cannonId];

    state.cannonId = cannonId;
    state.mbActive = true;
    state.mbLaunching = false;
    state.progress = 0.0f;
    state.timer = 0.5f; // 0.5s entry animation
    state.startPos = cannon.entryPos;
    state.endPos = cannon.exitPos;
}

/* CannonManager_getCannonCount */
s32 CannonManager::getCannonCount() const {
    return mCannonCount;
}

/* CannonManager_getCannon */
const CannonEntry* CannonManager::getCannon(s32 cannonId) const {
    if (cannonId < 0 || cannonId >= mCannonCount) {
        return nullptr;
    }
    return &mCannons[cannonId];
}

/* CannonManager_getCannonState */
const CannonState& CannonManager::getCannonState(s32 playerIdx) const {
    return mPlayerCannonState[playerIdx];
}

/* CannonManager_reset */
void CannonManager::reset() {
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerCannonState[i].cannonId = -1;
        mPlayerCannonState[i].timer = 0.0f;
        mPlayerCannonState[i].progress = 0.0f;
        mPlayerCannonState[i].startPos = EGG::Vector3f::zero;
        mPlayerCannonState[i].endPos = EGG::Vector3f::zero;
        mPlayerCannonState[i].mbActive = false;
        mPlayerCannonState[i].mbLaunching = false;
    }
}

} // namespace Field
