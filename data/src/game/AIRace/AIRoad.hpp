#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>

namespace Enemy {

// =============================================================================
// AIRoadPoint — A single point on the AI road network
// =============================================================================
struct AIRoadPoint {
    EGG::Vector3f position;   // World position (X, Y, Z)
    f32 width;                // Road width at this point
    u8 flags;                 // Point flags (boost, offroad, etc.)
    u8 _pad[3];
};

// =============================================================================
// AIRoad — AI Road Following System
//
// Provides AI with the course's road layout data. The AI uses this
// to follow the racing line, determine if it's off-road, and plan
// driving paths. Road points are loaded from the course's ENPT
// (Enemy Path) data.
/// Address range: 0x8050xxxx
// =============================================================================
class AIRoad {
public:
    static const u32 MAX_ROAD_POINTS = 4096;
    static const f32 DEFAULT_ROAD_WIDTH;

    AIRoad();
    ~AIRoad();

    /// Initialize road system with default values.
    void init();

    /// Load AI road points for a given course.
    /// @param courseId  Course index to load road data for
    void loadCourse(u32 courseId);

    /// Get a road point by index.
    /// @param idx      Road point index
    /// @param outPos   Output position (3 floats)
    /// @param outWidth Output road width (1 float)
    void getRoadPoint(s32 idx, f32* outPos, f32* outWidth);

    /// Find the nearest road point to a given XZ position.
    /// @param x       World X coordinate
    /// @param z       World Z coordinate
    /// @param outIdx  Output: index of nearest road point
    /// @return Distance to the nearest road point
    f32 findNearestPoint(f32 x, f32 z, s32* outIdx);

    /// Get a road point ahead of the current index.
    /// Used for look-ahead path planning.
    /// @param currentIdx  Current road point index
    /// @param lookAhead   Number of points to look ahead
    /// @return Index of the look-ahead point (wraps around)
    s32 getNextPoint(s32 currentIdx, s32 lookAhead);

    /// Get the road width at a specific point index.
    /// @param idx  Road point index
    /// @return Road width at that point
    f32 getRoadWidth(s32 idx);

    /// Check if a world position is off the road surface.
    /// Compares distance from nearest road center to road width.
    /// @param idx  Nearest road point index
    /// @param x    World X coordinate
    /// @param z    World Z coordinate
    /// @return true if the position is off-road
    bool isOffRoad(s32 idx, f32 x, f32 z);

    /// Get total number of road points.
    u32 getPointCount() const { return m_pointCount; }

    /// Get the road point array (for advanced AI path planning).
    const AIRoadPoint* getPoints() const { return m_points; }

private:
    AIRoadPoint m_points[MAX_ROAD_POINTS];
    u32 m_pointCount;          // Total loaded road points
    u32 m_courseId;            // Currently loaded course
    bool m_loaded;             // Whether road data is loaded
    f32 m_nearestDist;         // Cached nearest distance (from last findNearestPoint)
};

} // namespace Enemy