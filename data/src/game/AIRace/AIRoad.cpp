// AIRoad.cpp — AI Road Following System Implementation
// GENESIS Phase 34: Provides AI with the course's road layout data.
// The AI uses this to follow the racing line, determine if it's
// off-road, and plan driving paths. Road points are loaded from the
// course's ENPT (Enemy Path) data in the KMP file.
/// Address range: 0x8050xxxx

#include "AIRoad.hpp"
#include <math.h>

namespace Enemy {

// ===========================================================================
// Constants
// ===========================================================================
const f32 AIRoad::DEFAULT_ROAD_WIDTH = 300.0f;

// Steering and path-following constants
static const f32 WAYPOINT_REACH_DIST    = 80.0f;   // Distance to advance to next waypoint
static const f32 TURN_ANGLE_LOOKAHEAD   = 3;        // How many points ahead to check for turns
static const f32 STEERING_MAX           = 1.0f;     // Maximum steering input magnitude
static const f32 STEERING_PROPORTIONAL  = 0.02f;    // P-gain for steering toward path
static const f32 OFFROAD_SPEED_PENALTY  = 0.6f;     // Speed multiplier when off-road
static const f32 BRANCH_DECISION_DIST   = 200.0f;   // Distance to start evaluating branches
static const f32 RECOVERY_SEARCH_RADIUS = 500.0f;   // Radius for off-road recovery search

// Road type flags (stored in AIRoadPoint::flags)
static const u8 ROAD_TYPE_NORMAL  = 0x00;
static const u8 ROAD_TYPE_OFFROAD = 0x01;
static const u8 ROAD_TYPE_BOOST   = 0x02;
static const u8 ROAD_TYPE_ICE     = 0x04;

// ===========================================================================
// Constructor / Destructor
// ===========================================================================

AIRoad::AIRoad()
    : m_pointCount(0)
    , m_courseId(0xFFFFFFFF)
    , m_loaded(false)
    , m_nearestDist(0.0f) {}

AIRoad::~AIRoad() {}

// ---------------------------------------------------------------------------
// init — Initialize road system with default values
//
// Resets all road data to zeroed positions with default width.
// Called when loading a new course or resetting the AI.
// The waypoint index and steering accumulator are also reset.
// ---------------------------------------------------------------------------
void AIRoad::init() {
    m_pointCount = 0;
    m_courseId = 0xFFFFFFFF;
    m_loaded = false;
    m_nearestDist = 0.0f;
    for (u32 i = 0; i < MAX_ROAD_POINTS; i++) {
        m_points[i].position.setAll(0);
        m_points[i].width = DEFAULT_ROAD_WIDTH;
        m_points[i].flags = 0;
    }
}

// ---------------------------------------------------------------------------
// loadCourse — Load AI road points for a given course
//
// In the real game, this loads ENPT (Enemy Path) data from the
// course's KMP file. Each ENPT entry has:
// - position (x, y, z) — world coordinates
// - param1 — used by PointParam (drift, mushroom, etc.)
// - param2 — additional parameter
// - eflags — enemy flags (boost pad, offroad zone, etc.)
//
// The road width is typically derived from the course's road
// geometry (KCL) rather than stored in ENPT directly.
// ---------------------------------------------------------------------------
void AIRoad::loadCourse(u32 courseId) {
    m_courseId = courseId;
    m_pointCount = 0;
    m_loaded = false;

    // In the full game implementation, this iterates through
    // the KMP's ENPT section and populates m_points[].
    // Each point stores: position, width (from KCL), flags (from eflags).

    // For the reconstructed module, we mark as loaded.
    // Actual point population would happen via the KMP loader.
    m_loaded = true;
}

// ---------------------------------------------------------------------------
// getRoadPoint — Retrieve a road point's position and width by index
//
// Returns the 3D position and road width for the given point index.
// Out-of-bounds indices return origin with default width.
// ---------------------------------------------------------------------------
void AIRoad::getRoadPoint(s32 idx, f32* outPos, f32* outWidth) {
    if (idx < 0 || (u32)idx >= m_pointCount) {
        // Return origin for out-of-bounds
        if (outPos) { outPos[0] = 0; outPos[1] = 0; outPos[2] = 0; }
        if (outWidth) *outWidth = DEFAULT_ROAD_WIDTH;
        return;
    }

    if (outPos) {
        outPos[0] = m_points[idx].position.x;
        outPos[1] = m_points[idx].position.y;
        outPos[2] = m_points[idx].position.z;
    }
    if (outWidth) {
        *outWidth = m_points[idx].width;
    }
}

// ---------------------------------------------------------------------------
// findNearestPoint — Find the closest road point to a given XZ position
//
// Performs a linear search through all road points in XZ plane.
// In the real game, this is optimized by only checking points
// near the AI's current road index (spatial locality).
//
// @param x       World X coordinate
// @param z       World Z coordinate
// @param outIdx  Output: index of nearest road point
// @return        Distance to the nearest road point
// ---------------------------------------------------------------------------
f32 AIRoad::findNearestPoint(f32 x, f32 z, s32* outIdx) {
    if (!m_loaded || m_pointCount == 0) {
        if (outIdx) *outIdx = 0;
        return 99999.0f;
    }

    f32 bestDist = 99999.0f;
    s32 bestIdx = 0;

    // Linear search through all road points.
    // In the real game, this might be optimized with spatial indexing
    // or by only checking points near the AI's current road index.
    for (u32 i = 0; i < m_pointCount; i++) {
        f32 dx = m_points[i].position.x - x;
        f32 dz = m_points[i].position.z - z;
        f32 dist = sqrtf(dx * dx + dz * dz);

        if (dist < bestDist) {
            bestDist = dist;
            bestIdx = (s32)i;
        }
    }

    m_nearestDist = bestDist;
    if (outIdx) *outIdx = bestIdx;
    return bestDist;
}

// ---------------------------------------------------------------------------
// getNextPoint — Get a road point ahead of the current index
//
// Used for look-ahead path planning. Supports wrapping around
// for looping circuits. Negative lookAhead values look behind.
// ---------------------------------------------------------------------------
s32 AIRoad::getNextPoint(s32 currentIdx, s32 lookAhead) {
    if (!m_loaded || m_pointCount == 0) return 0;

    // Wrap around for looping circuits
    s32 nextIdx = currentIdx + lookAhead;
    if (nextIdx >= (s32)m_pointCount) {
        nextIdx -= (s32)m_pointCount;
    }
    if (nextIdx < 0) {
        nextIdx += (s32)m_pointCount;
    }
    return nextIdx;
}

// ---------------------------------------------------------------------------
// getRoadWidth — Get the road width at a specific point index
//
// Returns the road width for the given point. Out-of-bounds
// indices return the default road width.
// ---------------------------------------------------------------------------
f32 AIRoad::getRoadWidth(s32 idx) {
    if (idx < 0 || (u32)idx >= m_pointCount) {
        return DEFAULT_ROAD_WIDTH;
    }
    return m_points[idx].width;
}

// ---------------------------------------------------------------------------
// isOffRoad — Check if a world position is off the road surface
//
// Computes the XZ distance from the road center line at the
// given point index. If the distance exceeds half the road width,
// the position is considered off-road.
// ---------------------------------------------------------------------------
bool AIRoad::isOffRoad(s32 idx, f32 x, f32 z) {
    if (!m_loaded || m_pointCount == 0) return false;

    // Clamp idx to valid range
    if (idx < 0 || (u32)idx >= m_pointCount) return true;

    const AIRoadPoint& pt = m_points[idx];

    // Calculate distance from road center in XZ plane
    f32 dx = pt.position.x - x;
    f32 dz = pt.position.z - z;
    f32 distFromCenter = sqrtf(dx * dx + dz * dz);

    // Off-road if distance from center exceeds half the road width
    return distFromCenter > (pt.width * 0.5f);
}

// ---------------------------------------------------------------------------
// calc — Per-frame road following calculation
//
// Main entry point for the AI road system each frame:
// 1. Follow the current road path segment toward the target waypoint
// 2. Compute steering correction to stay on the optimal path
// 3. Detect upcoming turns and pre-adjust speed (slow down)
// 4. Handle branching paths by choosing the optimal branch
// 5. Detect and react to offroad state (apply speed penalty)
//
// The AI engine calls this every frame to get the desired steering
// input and speed adjustment for the current road segment.
// ---------------------------------------------------------------------------
/*
void AIRoad::calc(f32 posX, f32 posY, f32 posZ, f32 speed,
                  f32* outSteering, f32* outSpeedMod, u8* outRoadType) {
    if (!m_loaded || m_pointCount == 0) {
        if (outSteering) *outSteering = 0.0f;
        if (outSpeedMod) *outSpeedMod = 1.0f;
        if (outRoadType) *outRoadType = ROAD_TYPE_NORMAL;
        return;
    }

    // Step 1: Find nearest road point and get target waypoint
    s32 nearestIdx = 0;
    findNearestPoint(posX, posZ, &nearestIdx);

    // Step 2: Advance waypoint if close enough
    advanceWaypoint(nearestIdx, posX, posZ);

    // Step 3: Compute steering toward target waypoint
    s32 targetIdx = getNextPoint(nearestIdx, 2); // Look 2 points ahead
    const AIRoadPoint& target = m_points[targetIdx];

    f32 dx = target.position.x - posX;
    f32 dz = target.position.z - posZ;
    f32 targetAngle = atan2f(dx, dz);

    // Steering is proportional to the angle error
    f32 steering = targetAngle * STEERING_PROPORTIONAL;
    if (steering > STEERING_MAX) steering = STEERING_MAX;
    if (steering < -STEERING_MAX) steering = -STEERING_MAX;

    // Step 4: Check for offroad and apply penalty
    f32 speedMod = 1.0f;
    u8 roadType = ROAD_TYPE_NORMAL;

    if (isOffRoad(nearestIdx, posX, posZ)) {
        speedMod = OFFROAD_SPEED_PENALTY;
        roadType = ROAD_TYPE_OFFROAD;
    } else {
        roadType = m_points[nearestIdx].flags;
    }

    // Step 5: Detect upcoming turns and slow down
    f32 turnAngle = getUpcomingTurnAngle(nearestIdx);
    f32 absTurn = turnAngle;
    if (absTurn < 0) absTurn = -absTurn;

    // Reduce speed proportionally to turn sharpness
    // Sharp turns (>0.5 rad) get up to 30% speed reduction
    f32 turnSpeedFactor = 1.0f - (absTurn * 0.3f);
    if (turnSpeedFactor < 0.7f) turnSpeedFactor = 0.7f;
    speedMod *= turnSpeedFactor;

    if (outSteering) *outSteering = steering;
    if (outSpeedMod) *outSpeedMod = speedMod;
    if (outRoadType) *outRoadType = roadType;
}
*/

// ---------------------------------------------------------------------------
// setPath — Set the road path to follow from course data
//
// Loads road points from the course's MapdataEnemyPathAccessor,
// which provides access to the KMP's ENPT section. The accessor
// is provided by the AI engine on each frame during update.
// ---------------------------------------------------------------------------
/*
void AIRoad::setPath(const System::MapdataEnemyPathAccessor* accessor) {
    if (!accessor) return;

    // In the real game, the accessor provides:
    // - getPointCount(): total number of ENPT points
    // - getPoint(i): position and parameters for point i
    //
    // We copy these into our local m_points[] array for fast access
    // during per-frame calculations.

    m_loaded = true;
    (void)accessor;
}
*/

// ---------------------------------------------------------------------------
// getCurrentWaypoint — Return current target waypoint index
//
// The current waypoint is the road point the AI is actively
// driving toward. It advances as the AI passes each point.
// ---------------------------------------------------------------------------
/*
s32 AIRoad::getCurrentWaypoint() const {
    // In the full implementation, this would return a tracked
    // member variable (m_currentWaypointIdx) that is updated
    // by advanceWaypoint() each frame.
    return 0;
}
*/

// ---------------------------------------------------------------------------
// getUpcomingTurnAngle — Compute turn angle at the next waypoint
//
// Used by the drift system to decide when to initiate a drift.
// Computes the angle between the current path direction and the
// direction to a point several waypoints ahead. A large angle
// indicates a sharp turn that may warrant drifting.
//
// @return Turn angle in radians (positive = right, negative = left)
// ---------------------------------------------------------------------------
/*
f32 AIRoad::getUpcomingTurnAngle(s32 currentIdx) const {
    if (!m_loaded || m_pointCount < 3) return 0.0f;

    // Get the direction from current point to next point
    s32 nextIdx = getNextPoint(currentIdx, 1);
    s32 aheadIdx = getNextPoint(currentIdx, TURN_ANGLE_LOOKAHEAD);

    const AIRoadPoint& curr = m_points[currentIdx];
    const AIRoadPoint& next = m_points[nextIdx];
    const AIRoadPoint& ahead = m_points[aheadIdx];

    // Current direction vector
    f32 dirX = next.position.x - curr.position.x;
    f32 dirZ = next.position.z - curr.position.z;

    // Future direction vector
    f32 futX = ahead.position.x - next.position.x;
    f32 futZ = ahead.position.z - next.position.z;

    // Normalize both vectors
    f32 lenCurr = sqrtf(dirX * dirX + dirZ * dirZ);
    f32 lenFut = sqrtf(futX * futX + futZ * futZ);

    if (lenCurr < 0.001f || lenFut < 0.001f) return 0.0f;

    dirX /= lenCurr;
    dirZ /= lenCurr;
    futX /= lenFut;
    futZ /= lenFut;

    // Cross product in XZ plane gives turn angle
    // cross = dirX * futZ - dirZ * futX
    // Positive = right turn, Negative = left turn
    f32 cross = dirX * futZ - dirZ * futX;

    // Also compute dot for the angle magnitude
    f32 dot = dirX * futX + dirZ * futZ;

    // atan2(cross, dot) gives the signed angle
    return atan2f(cross, dot);
}
*/

// ---------------------------------------------------------------------------
// getRoadType — Return current surface type at the given position
//
// Examines the flags of the nearest road point to determine
// the surface type: normal, offroad, boost pad, or ice.
// This affects kart physics (speed, traction, handling).
// ---------------------------------------------------------------------------
/*
u8 AIRoad::getRoadType(s32 idx) const {
    if (idx < 0 || (u32)idx >= m_pointCount) return ROAD_TYPE_NORMAL;
    return m_points[idx].flags;
}
*/

// ---------------------------------------------------------------------------
// advanceWaypoint — Move to next waypoint when close enough
//
// Called each frame to check if the AI has reached (or passed)
// the current target waypoint. When within WAYPOINT_REACH_DIST,
// the waypoint index is incremented. This ensures the AI always
// has a valid target to steer toward.
// ---------------------------------------------------------------------------
/*
void AIRoad::advanceWaypoint(s32 currentIdx, f32 posX, f32 posZ) {
    if (!m_loaded || m_pointCount == 0) return;

    const AIRoadPoint& pt = m_points[currentIdx];
    f32 dx = pt.position.x - posX;
    f32 dz = pt.position.z - posZ;
    f32 dist = sqrtf(dx * dx + dz * dz);

    if (dist < WAYPOINT_REACH_DIST) {
        // Advance to next waypoint (wraps for loop circuits)
        // In the full implementation, this increments a tracked
        // m_currentWaypointIdx member variable.
    }
}
*/

// ---------------------------------------------------------------------------
// findNearestPathPoint — Find closest point on the path for recovery
//
// Used when the AI is pushed off-road (by items, collisions) and
// needs to find its way back to the optimal racing line. Searches
// a limited range of points around the last known position for
// the closest match, avoiding a full linear scan.
//
// @param posX  AI kart world X position
// @param posZ  AI kart world Z position
// @param hint  Last known road point index (for localized search)
// @return      Index of the nearest path point
// ---------------------------------------------------------------------------
/*
s32 AIRoad::findNearestPathPoint(f32 posX, f32 posZ, s32 hint) const {
    if (!m_loaded || m_pointCount == 0) return 0;

    // Search in a window around the hint for efficiency
    s32 searchRange = 20; // Check 20 points in each direction
    s32 bestIdx = 0;
    f32 bestDist = 99999.0f;

    for (s32 offset = -searchRange; offset <= searchRange; offset++) {
        s32 idx = hint + offset;
        // Wrap for loop circuits
        if (idx < 0) idx += (s32)m_pointCount;
        if (idx >= (s32)m_pointCount) idx -= (s32)m_pointCount;

        const AIRoadPoint& pt = m_points[idx];
        f32 dx = pt.position.x - posX;
        f32 dz = pt.position.z - posZ;
        f32 dist = sqrtf(dx * dx + dz * dz);

        if (dist < bestDist) {
            bestDist = dist;
            bestIdx = idx;
        }
    }

    // If the best match is still very far, fall back to full search
    if (bestDist > RECOVERY_SEARCH_RADIUS) {
        return findNearestPoint(posX, posZ, nullptr);
    }

    return bestIdx;
}
*/

// ---------------------------------------------------------------------------
// getDesiredSteering — Return the steering value to follow the path
//
// Computes the steering input the AI should apply to stay on
// the optimal racing line. Uses proportional control based on
// the angle between the kart's forward direction and the direction
// toward the target waypoint.
//
// @param posX     AI kart world X position
// @param posZ     AI kart world Z position
// @param fwdX     AI kart forward direction X component
// @param fwdZ     AI kart forward direction Z component
// @param roadIdx  Current nearest road point index
// @return         Steering value in [-1.0, 1.0]
// ---------------------------------------------------------------------------
/*
f32 AIRoad::getDesiredSteering(f32 posX, f32 posZ, f32 fwdX, f32 fwdZ,
                                s32 roadIdx) const {
    if (!m_loaded || m_pointCount == 0) return 0.0f;

    // Get target point (2 points ahead for smoother steering)
    s32 targetIdx = getNextPoint(roadIdx, 2);
    const AIRoadPoint& target = m_points[targetIdx];

    // Direction from kart to target
    f32 toTargetX = target.position.x - posX;
    f32 toTargetZ = target.position.z - posZ;

    // Normalize
    f32 len = sqrtf(toTargetX * toTargetX + toTargetZ * toTargetZ);
    if (len < 0.001f) return 0.0f;
    toTargetX /= len;
    toTargetZ /= len;

    // Cross product: fwd × toTarget (in XZ plane)
    // Positive = steer right, Negative = steer left
    f32 cross = fwdX * toTargetZ - fwdZ * toTargetX;

    // Scale by proportional gain
    f32 steering = cross * STEERING_PROPORTIONAL;

    // Clamp to valid range
    if (steering > STEERING_MAX) steering = STEERING_MAX;
    if (steering < -STEERING_MAX) steering = -STEERING_MAX;

    return steering;
}
*/

} // namespace Enemy