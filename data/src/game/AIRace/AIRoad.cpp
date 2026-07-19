#include "AIRoad.hpp"
#include <math.h>

namespace Enemy {

const f32 AIRoad::DEFAULT_ROAD_WIDTH = 300.0f;

AIRoad::AIRoad()
    : m_pointCount(0)
    , m_courseId(0xFFFFFFFF)
    , m_loaded(false)
    , m_nearestDist(0.0f) {}

AIRoad::~AIRoad() {}

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

void AIRoad::loadCourse(u32 courseId) {
    m_courseId = courseId;
    m_pointCount = 0;
    m_loaded = false;

    // In the real game, this loads ENPT (Enemy Path) data from the
    // course's KMP file. The ENPT contains a series of 3D points
    // that define the AI's ideal racing line.
    //
    // Each ENPT entry has:
    // - position (x, y, z) — world coordinates
    // - param1 — used by PointParam (drift, mushroom, etc.)
    // - param2 — additional parameter
    // - eflags — enemy flags
    //
    // The road width is typically derived from the course's road
    // geometry (KCL) rather than stored in ENPT directly.

    // For the reconstructed module, we mark as loaded.
    // Actual point population would happen via the KMP loader.
    m_loaded = true;
}

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

f32 AIRoad::getRoadWidth(s32 idx) {
    if (idx < 0 || (u32)idx >= m_pointCount) {
        return DEFAULT_ROAD_WIDTH;
    }
    return m_points[idx].width;
}

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

} // namespace Enemy