#pragma once
// RoutePoint.hpp — Route Path & Cannon Manager
// GENESIS Phase 27: Manages AI/camera route paths and cannon trajectories.
// Route paths are defined in JMap as sequences of control points that
// AI drivers follow. Cannon paths define entry/exit points and launch
// vectors for course cannon mechanics.
// Original addresses: 0x804C4000–0x804C5500

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Field {

// Route control point (from JMap "PATH" or "ROUTE" entries)
struct RoutePoint {
    EGG::Vector3f position;     // World position
    EGG::Vector3f next;          // Direction to next point (normalized)
    f32 speed;                   // Recommended speed at this point
    f32 width;                   // Route corridor half-width
    s32 pointIdx;                // Sequential index in route
    u8 flags;                   // 0x01=sharp_turn, 0x02=ramp, 0x04=off_road
};

// Route path — sequence of control points forming a driveable path
struct RoutePath {
    RoutePoint* points;          // Array of control points
    s32 numPoints;               // Number of points in this path
    s32 routeId;                 // JMap route identifier
    f32 totalLength;             // Approximate path length
    u8 pathType;                 // 0=main, 1=shortcut, 2=alternate
};

// Cannon entry point definition
struct CannonEntry {
    EGG::Vector3f entryPos;     // Cannon detection zone center
    f32 entryRadius;             // Detection radius for cannon activation
    EGG::Vector3f exitPos;       // Where the player gets launched
    EGG::Vector3f launchDir;     // Launch direction (normalized)
    f32 launchSpeed;             // Launch speed (fixed for all cannons)
    s32 cannonId;                // Cannon instance ID
    u8 isOneWay;                 // 1 = can only enter from one direction
};

// Per-player cannon state
struct CannonState {
    s32 cannonId;                // Active cannon ID (-1 = none)
    f32 timer;                   // Countdown timer during cannon sequence
    f32 progress;                // Interpolation progress (0.0→1.0)
    EGG::Vector3f startPos;      // Interpolation start position
    EGG::Vector3f endPos;        // Interpolation end position
    bool mbActive;               // True if player is in cannon
    bool mbLaunching;            // True during launch phase
};

// RoutePointManager — manages all route paths for AI navigation
class RoutePointManager {
public:
    /* RoutePointManager_ctor @ 0x804C4100 */
    RoutePointManager();
    /* RoutePointManager_dtor @ 0x804C4140 */
    ~RoutePointManager();

    // Load route paths for a given course
    /* RoutePointManager_load @ 0x804C4180 */
    bool load(u32 courseId);

    // Unload all route data
    /* RoutePointManager_unload @ 0x804C4200 */
    void unload();

    // Get number of loaded routes
    s32 getRouteCount() const;

    // Get a route by index
    const RoutePath* getRoute(s32 routeIdx) const;

    // Get the main route (always index 0)
    const RoutePath* getMainRoute() const;

    // Find the nearest point on any route to a given position
    /* RoutePointManager_findNearestPoint @ 0x804C4300 */
    s32 findNearestPoint(const EGG::Vector3f& pos, s32* outRouteIdx,
                         s32* outPointIdx) const;

    // Get interpolated position along a route at a given distance
    /* RoutePointManager_getPositionAtDistance @ 0x804C4400 */
    EGG::Vector3f getPositionAtDistance(s32 routeIdx, f32 distance) const;

private:
    static const s32 MAX_ROUTES = 16;
    static const s32 MAX_POINTS_PER_ROUTE = 256;

    RoutePath mRoutes[MAX_ROUTES];
    s32 mRouteCount;
    // Flat point storage for all routes
    RoutePoint mPointPool[MAX_ROUTES * MAX_POINTS_PER_ROUTE];
    s32 mNextPoolIdx;
    bool mbLoaded;
};

// CannonManager — manages course cannon mechanics
class CannonManager {
public:
    /* CannonManager_ctor @ 0x804C5000 */
    CannonManager();
    /* CannonManager_dtor @ 0x804C5040 */
    ~CannonManager();

    // Initialize cannon manager for a course
    /* CannonManager_init @ 0x804C5080 */
    void init(u32 courseId);

    // Load cannon definitions from course data
    /* CannonManager_loadCannons @ 0x804C5100 */
    bool loadCannons();

    // Update cannon system — check player positions, update active cannons
    /* CannonManager_update @ 0x804C5200 */
    void update();

    // Check if a player has entered a cannon zone
    /* CannonManager_checkEntry @ 0x804C5300 */
    bool checkEntry(s32 playerIdx, const EGG::Vector3f& position);

    // Get cannon state for a player
    const CannonState& getCannonState(s32 playerIdx) const;

    // Activate cannon for a player
    /* CannonManager_activateCannon @ 0x804C5400 */
    void activateCannon(s32 playerIdx, s32 cannonId);

    // Get number of cannons on the course
    s32 getCannonCount() const;

    // Get cannon definition by ID
    const CannonEntry* getCannon(s32 cannonId) const;

    // Reset all player cannon states
    void reset();

private:
    static const s32 MAX_CANNONS = 4;

    CannonEntry mCannons[MAX_CANNONS];
    s32 mCannonCount;
    CannonState mPlayerCannonState[MAX_PLAYER_COUNT];
    u32 mCourseId;
    bool mbInitialized;
};

} // namespace Field
