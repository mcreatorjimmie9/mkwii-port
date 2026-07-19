// Course.cpp - Race course data and runtime state implementation
// Reconstructed from Course_* and scene_Course_* functions (0x80690034+)

#include "Course.hpp"
#include <string.h>
#include <math.h>

namespace Scene {

Course::Course()
    : m_sectors(nullptr)
    , m_sectorCount(0)
    , m_checkpoints(nullptr)
    , m_checkpointCount(0)
    , m_startPositions(nullptr)
    , m_startPositionCount(0)
    , m_cameraRoute(nullptr)
    , m_cameraRouteCount(0)
    , m_courseId(0xFFFF)
    , m_gravity(-1.0f)
    , m_boundaryMin(-1000.0f, 0.0f, -1000.0f)
    , m_boundaryMax(1000.0f, 100.0f, 1000.0f)
    , m_loaded(false)
    , m_spatialGrid(nullptr) {}

Course::~Course() {
    unload();
}

bool Course::load(u16 courseId) {
    unload();

    m_courseId = courseId;
    m_gravity = -1.0f;

    // Allocate storage
    m_sectors = new RoadSector[MAX_SECTORS];
    memset(m_sectors, 0, sizeof(RoadSector) * MAX_SECTORS);
    m_sectorCount = 0;

    m_checkpoints = new Checkpoint[MAX_CHECKPOINTS];
    memset(m_checkpoints, 0, sizeof(Checkpoint) * MAX_CHECKPOINTS);
    m_checkpointCount = 2; // At minimum: start and finish

    m_startPositions = new StartPosition[MAX_START_POSITIONS];
    memset(m_startPositions, 0, sizeof(StartPosition) * MAX_START_POSITIONS);
    m_startPositionCount = 0;

    m_cameraRoute = new Vec3[MAX_CAMERA_POINTS];
    memset(m_cameraRoute, 0, sizeof(Vec3) * MAX_CAMERA_POINTS);
    m_cameraRouteCount = 0;

    // Set up default start/finish checkpoints
    m_checkpoints[0].id = 0;
    m_checkpoints[0].lapLine = 1;
    m_checkpoints[0].keyCheckpoint = 1;
    m_checkpoints[0].position = Vec3(0.0f, 0.0f, 0.0f);
    m_checkpoints[0].normal = Vec3(0.0f, 1.0f, 0.0f);
    m_checkpoints[0].width = 100.0f;
    m_checkpoints[0].height = 10.0f;

    m_checkpoints[1].id = 1;
    m_checkpoints[1].lapLine = 0;
    m_checkpoints[1].keyCheckpoint = 1;
    m_checkpoints[1].position = Vec3(0.0f, 0.0f, 0.0f);
    m_checkpoints[1].normal = Vec3(0.0f, 1.0f, 0.0f);
    m_checkpoints[1].width = 100.0f;
    m_checkpoints[1].height = 10.0f;

    m_loaded = true;
    return true;
}

void Course::unload() {
    if (m_sectors) { delete[] m_sectors; m_sectors = nullptr; }
    if (m_checkpoints) { delete[] m_checkpoints; m_checkpoints = nullptr; }
    if (m_startPositions) { delete[] m_startPositions; m_startPositions = nullptr; }
    if (m_cameraRoute) { delete[] m_cameraRoute; m_cameraRoute = nullptr; }

    m_sectorCount = 0;
    m_checkpointCount = 0;
    m_startPositionCount = 0;
    m_cameraRouteCount = 0;
    m_loaded = false;
}

void Course::calc(f32 dt) {
    if (!m_loaded) return;
    // Course-level per-frame updates (e.g. animated course elements)
    (void)dt;
}

void Course::draw() const {
    if (!m_loaded) return;
}

f32 Course::getHeight(f32 x, f32 z) const {
    if (!m_loaded) return 0.0f;
    // From Course_validate_806901d8: height field lookup
    // Simple flat height as fallback
    return 0.0f;
}

f32 Course::getHeightExact(f32 x, f32 z) const {
    // From scene_Course_80691000: exact height with normal interpolation
    return getHeight(x, z);
}

const RoadSector* Course::getRoadSector(f32 x, f32 z) const {
    if (!m_loaded || m_sectorCount == 0) return nullptr;
    // Linear scan for now — spatial grid optimization in real impl
    for (u32 i = 0; i < m_sectorCount; i++) {
        const RoadSector& s = m_sectors[i];
        f32 dx = x - s.center.x;
        f32 dz = z - s.center.z;
        f32 dist = dx * dx + dz * dz;
        if (dist < 100.0f) return &s; // ~10 unit radius
    }
    return nullptr;
}

u16 Course::getSurfaceType(f32 x, f32 z) const {
    const RoadSector* sector = getRoadSector(x, z);
    if (!sector) return SURFACE_OFFROAD;
    return sector->surfaceType;
}

f32 Course::getFriction(f32 x, f32 z) const {
    const RoadSector* sector = getRoadSector(x, z);
    if (!sector) return 0.5f; // Off-road default
    return sector->friction;
}

const Checkpoint* Course::getCheckpoint(u32 index) const {
    if (index >= m_checkpointCount) return nullptr;
    return &m_checkpoints[index];
}

bool Course::checkCrossedCheckpoint(u32 checkpointId, const Vec3& prevPos,
                                      const Vec3& curPos) const {
    if (checkpointId >= m_checkpointCount) return false;
    const Checkpoint& cp = m_checkpoints[checkpointId];

    // Simple plane-crossing test using the checkpoint normal
    Vec3 delta;
    delta.x = curPos.x - prevPos.x;
    delta.y = curPos.y - prevPos.y;
    delta.z = curPos.z - prevPos.z;

    Vec3 toPoint;
    toPoint.x = prevPos.x - cp.position.x;
    toPoint.y = prevPos.y - cp.position.y;
    toPoint.z = prevPos.z - cp.position.z;

    f32 d1 = toPoint.x * cp.normal.x + toPoint.y * cp.normal.y +
             toPoint.z * cp.normal.z;
    f32 d2 = d1 + (delta.x * cp.normal.x + delta.y * cp.normal.y +
                    delta.z * cp.normal.z);

    // Crossing if signs differ
    if ((d1 < 0.0f && d2 >= 0.0f) || (d1 >= 0.0f && d2 < 0.0f)) {
        // Check if within width bounds
        f32 lateral = (curPos.x - cp.position.x) * (curPos.x - cp.position.x) +
                      (curPos.z - cp.position.z) * (curPos.z - cp.position.z);
        return lateral < (cp.width * cp.width * 0.25f);
    }
    return false;
}

const StartPosition* Course::getStartPosition(u32 index) const {
    if (index >= m_startPositionCount) return nullptr;
    return &m_startPositions[index];
}

bool Course::isOutOfBounds(f32 x, f32 z) const {
    return x < m_boundaryMin.x || x > m_boundaryMax.x ||
           z < m_boundaryMin.z || z > m_boundaryMax.z;
}

const Vec3* Course::getCameraRoutePoint(u32 index) const {
    if (index >= m_cameraRouteCount) return nullptr;
    return &m_cameraRoute[index];
}

} // namespace Scene