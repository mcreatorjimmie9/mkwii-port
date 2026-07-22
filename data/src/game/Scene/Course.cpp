// Course.cpp - Race course data and runtime state implementation
// Reconstructed from Course_* and scene_Course_* functions (0x80690034+)

#include "Course.hpp"
#include "../Field/CourseColManager.hpp"
#include <string.h>
#include <math.h>
#include <cstdio>

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
    , m_spatialGrid(nullptr)
    , m_modelData(nullptr)
    , m_collisionData(nullptr)
    , m_modelDataSize(0)
    , m_collisionDataSize(0)
    , m_cannonPoints(nullptr)
    , m_cannonPointCount(0)
    , m_jugemPoints(nullptr)
    , m_jugemPointCount(0)
    , m_courseName(nullptr)
    , m_platformLoaded(false) {}

Course::~Course() {
    unload();
}

// =============================================================================
// load — Load course by ID: allocate buffers, set up default data
//
// In the real game this opens the BRRES archive for the given courseId,
// extracts the BMD (model), KCL (collision), enemy item paths, cannon
// and respawn points, and builds the spatial grid.  This stub performs
// the allocation and provides default checkpoint/start/finish data.
// =============================================================================
bool Course::load(u16 courseId) {
    unload();

    m_courseId = courseId;
    m_gravity = -1.0f;

    // --- Allocate sector storage (road surface mesh) ---
    m_sectors = new RoadSector[MAX_SECTORS];
    for (u32 _i = 0; _i < MAX_SECTORS; _i++) m_sectors[_i] = {};
    m_sectorCount = 0;

    // --- Allocate checkpoint storage ---
    m_checkpoints = new Checkpoint[MAX_CHECKPOINTS];
    for (u32 _i = 0; _i < MAX_CHECKPOINTS; _i++) m_checkpoints[_i] = {};
    m_checkpointCount = 2; // Minimum: start line + halfway key checkpoint

    // Set up default start/finish checkpoint (index 0)
    m_checkpoints[0].id = 0;
    m_checkpoints[0].lapLine = 1;
    m_checkpoints[0].keyCheckpoint = 1;
    m_checkpoints[0].position = Vec3(0.0f, 0.0f, 0.0f);
    m_checkpoints[0].normal = Vec3(0.0f, 1.0f, 0.0f);
    m_checkpoints[0].width = 100.0f;
    m_checkpoints[0].height = 10.0f;

    // Halfway key checkpoint (index 1)
    m_checkpoints[1].id = 1;
    m_checkpoints[1].lapLine = 0;
    m_checkpoints[1].keyCheckpoint = 1;
    m_checkpoints[1].position = Vec3(0.0f, 0.0f, 0.0f);
    m_checkpoints[1].normal = Vec3(0.0f, 1.0f, 0.0f);
    m_checkpoints[1].width = 100.0f;
    m_checkpoints[1].height = 10.0f;

    // --- Allocate start positions (grid of up to 12) ---
    m_startPositions = new StartPosition[MAX_START_POSITIONS];
    for (u32 _i = 0; _i < MAX_START_POSITIONS; _i++) m_startPositions[_i] = {};
    m_startPositionCount = MAX_START_POSITIONS;

    // Lay out a 2-wide, 6-deep starting grid
    for (u32 i = 0; i < MAX_START_POSITIONS; i++) {
        u8 row = static_cast<u8>(i / 2);
        u8 col = static_cast<u8>(i % 2);
        m_startPositions[i].playerIndex = static_cast<u8>(i);
        m_startPositions[i].column = col;
        m_startPositions[i].row = row;
        // Stagger: odd rows are offset laterally and forward
        f32 lateral = (col == 0) ? -3.0f : 3.0f;
        f32 forward = -row * 12.0f;
        m_startPositions[i].position = Vec3(lateral, 0.0f, forward);
        m_startPositions[i].forward = Vec3(0.0f, 0.0f, 1.0f);
        m_startPositions[i].up = Vec3(0.0f, 1.0f, 0.0f);
    }

    // --- Allocate camera route ---
    m_cameraRoute = new Vec3[MAX_CAMERA_POINTS];
    for (u32 _i = 0; _i < MAX_CAMERA_POINTS; _i++) m_cameraRoute[_i] = {};
    m_cameraRouteCount = 0;

    // --- Allocate cannon points ---
    m_cannonPoints = new CannonPoint[MAX_CANNON_POINTS];
    for (u32 _i = 0; _i < MAX_CANNON_POINTS; _i++) m_cannonPoints[_i] = {};
    m_cannonPointCount = 0;

    // --- Allocate Jugem (rescue) points ---
    m_jugemPoints = new JugemPoint[MAX_JUGEM_POINTS];
    for (u32 _i = 0; _i < MAX_JUGEM_POINTS; _i++) m_jugemPoints[_i] = {};
    m_jugemPointCount = 0;

    // --- Model / collision data ---
    // In the real game these are loaded from the BRRES archive.
    // m_modelData    = extracted BMD model data
    // m_collisionData = extracted KCL collision data
    m_modelData = nullptr;
    m_collisionData = nullptr;
    m_modelDataSize = 0;
    m_collisionDataSize = 0;

    // --- Compute default boundaries ---
    // The real game reads the course's min/max extents from the BMD bounding box.
    m_boundaryMin = Vec3(-500.0f, -50.0f, -500.0f);
    m_boundaryMax = Vec3(500.0f, 100.0f, 500.0f);

    m_loaded = true;
    return true;
}

// =============================================================================
// unload — Free all course resources
// =============================================================================
void Course::unload() {
    if (m_sectors) { delete[] m_sectors; m_sectors = nullptr; }
    if (m_checkpoints) { delete[] m_checkpoints; m_checkpoints = nullptr; }
    if (m_startPositions) { delete[] m_startPositions; m_startPositions = nullptr; }
    if (m_cameraRoute) { delete[] m_cameraRoute; m_cameraRoute = nullptr; }
    if (m_cannonPoints) { delete[] m_cannonPoints; m_cannonPoints = nullptr; }
    if (m_jugemPoints) { delete[] m_jugemPoints; m_jugemPoints = nullptr; }

    // Model and collision data are opaque blobs; free them if allocated
    if (m_modelData) { delete[] static_cast<u8*>(m_modelData); m_modelData = nullptr; }
    if (m_collisionData) { delete[] static_cast<u8*>(m_collisionData); m_collisionData = nullptr; }

    m_sectorCount = 0;
    m_checkpointCount = 0;
    m_startPositionCount = 0;
    m_cameraRouteCount = 0;
    m_cannonPointCount = 0;
    m_jugemPointCount = 0;
    m_modelDataSize = 0;
    m_collisionDataSize = 0;
    m_loaded = false;
}

// =============================================================================
// calc / draw — Per-frame course updates
// =============================================================================
void Course::calc(f32 dt) {
    if (!m_loaded) return;
    // Course-level per-frame updates (animated course elements, etc.)
    (void)dt;
}

void Course::draw() const {
    if (!m_loaded) return;
    // The model is rendered by the graphics backend using m_modelData.
    // No CPU-side draw calls needed here in the port.
}

// =============================================================================
// Height queries
// =============================================================================
f32 Course::getHeight(f32 x, f32 z) const {
    if (!m_loaded) return 0.0f;
    // From Course_validate_806901d8: height field lookup
    //
    // In the real game, this walks the KCL collision octree to find
    // the triangle directly below (x, z) and returns the interpolated
    // height. The KCL stores a spatial octree that partitions the course
    // into cells, each containing triangle indices.
    //
    // When no sectors are loaded, return a default flat height.
    // When sectors are loaded, find the nearest sector and return
    // its center Y (simplified version of triangle interpolation).
    //
    // The real implementation uses Moller-Trumbore ray-triangle
    // intersection along the Y axis for precise height queries.

    if (m_sectorCount == 0) return 0.0f;

    // Find nearest road sector for approximate height
    const RoadSector* nearest = nullptr;
    f32 nearestDist = 1e30f;
    for (u32 i = 0; i < m_sectorCount; i++) {
        const RoadSector& s = m_sectors[i];
        f32 dx = x - s.center.x;
        f32 dz = z - s.center.z;
        f32 dist = dx * dx + dz * dz;
        if (dist < nearestDist) {
            nearestDist = dist;
            nearest = &s;
        }
    }

    // Return sector's Y height if found and within reasonable range
    if (nearest && nearestDist < 10000.0f) {
        return nearest->center.y;
    }

    // No sector found - return default ground plane height
    return 0.0f;
}

// =============================================================================
// getHeightAt — KCL-style downward raycast for height
//
// Casts a ray from (x, +Y_max, z) straight down and returns the first
// intersection height with the course collision mesh.  Falls back to
// getHeight() when no KCL data is loaded.
// @addr 0x806901d8
// =============================================================================
f32 Course::getHeightAt(f32 x, f32 z) const {
    if (!m_loaded) return 0.0f;

    // Try CourseColManager first (uses KCL octree + ray-triangle intersection)
    if (Field::CourseColManager::instance()->isLoaded()) {
        f32 rayStartY = m_boundaryMax.y + 100.0f;
        f32 floorY = Field::CourseColManager::instance()->getFloorAt(x, rayStartY, z);
        if (floorY < rayStartY) {
            return floorY;
        }
    }

    // Fallback to sector-based height
    return getHeight(x, z);
}

f32 Course::getHeightExact(f32 x, f32 z) const {
    // From scene_Course_80691000: exact height with normal interpolation
    return getHeight(x, z);
}

// =============================================================================
// Road sector queries
// =============================================================================
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

// =============================================================================
// Checkpoint management
// =============================================================================
const Checkpoint* Course::getCheckpoint(u32 index) const {
    if (index >= m_checkpointCount) return nullptr;
    return &m_checkpoints[index];
}

const Checkpoint* Course::getFinishLinePoint() const {
    // The finish line is always checkpoint index 0 (set in load())
    if (m_checkpointCount == 0) return nullptr;
    return &m_checkpoints[0];
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

// =============================================================================
// Start positions
// =============================================================================
const StartPosition* Course::getStartPosition(u32 index) const {
    if (index >= m_startPositionCount) return nullptr;
    return &m_startPositions[index];
}

const StartPosition* Course::getStartPoint(u8 index) const {
    return getStartPosition(static_cast<u32>(index));
}

// =============================================================================
// Cannon points
// =============================================================================
const CannonPoint* Course::getCannonPoint(u8 index) const {
    u32 idx = static_cast<u32>(index);
    if (idx >= m_cannonPointCount) return nullptr;
    return &m_cannonPoints[idx];
}

// =============================================================================
// Jugem (rescue) points
// =============================================================================
const JugemPoint* Course::getJugemPoint(u32 index) const {
    if (index >= m_jugemPointCount) return nullptr;
    return &m_jugemPoints[index];
}

// =============================================================================
// Course bounds
// =============================================================================
void Course::getCourseBounds(Vec3& outMin, Vec3& outMax) const {
    outMin = m_boundaryMin;
    outMax = m_boundaryMax;
}

bool Course::isOutOfBounds(f32 x, f32 z) const {
    return x < m_boundaryMin.x || x > m_boundaryMax.x ||
           z < m_boundaryMin.z || z > m_boundaryMax.z;
}

// =============================================================================
// Camera route
// =============================================================================
const Vec3* Course::getCameraRoutePoint(u32 index) const {
    if (index >= m_cameraRouteCount) return nullptr;
    return &m_cameraRoute[index];
}

// =============================================================================
// init — Initialize with default state (no loading)
// @addr 0x80690034
// =============================================================================

/* Course_init @ 0x80690034 */
void Course::init() {
    unload();
    m_courseId = 0xFFFF;
    m_gravity = -1.0f;
    m_boundaryMin = Vec3(-1000.0f, 0.0f, -1000.0f);
    m_boundaryMax = Vec3(1000.0f, 100.0f, 1000.0f);
    m_loaded = false;
    m_courseName = nullptr;
}

// =============================================================================
// getName — Get the course name string
// @addr 0x80690050
// =============================================================================

/* Course_getName @ 0x80690050 */
const char* Course::getName() const {
    if (m_courseName != nullptr) {
        return m_courseName;
    }
    static char sBuf[32];
    snprintf(sBuf, sizeof(sBuf), "Course_%u", (u32)m_courseId);
    return sBuf;
}

// =============================================================================
// getKCL — Get the KCL collision data pointer
// @addr 0x80690068
// =============================================================================

/* Course_getKCL @ 0x80690068 */
void* Course::getKCL() const {
    return m_collisionData;
}

// =============================================================================
// getKMP — Get the KMP (course map parameter) data pointer
// @addr 0x80690080
// =============================================================================

/* Course_getKMP @ 0x80690080 */
void* Course::getKMP() const {
    return nullptr;
}

// =============================================================================
// Phase 24: loadFromPlatform — Load course data from platform TrackManager
//
// Called via course_bridge from SceneRace::initSubsystems() after the
// platform TrackManager has parsed the KMP file. This fills the decompiled
// Course's checkpoint, start position, cannon point, and Jugem point arrays
// with real data from the course, enabling proper decompiled layer queries.
//
// In the original MKWii, Course::load() opens the BRRES archive, extracts
// BMD/KCL/KMP, and populates these same arrays. On PC, the platform TrackManager
// handles archive parsing, and this bridge function provides the results.
// =============================================================================
void Course::loadFromPlatform(u32 checkpointCount, const Checkpoint* checkpoints,
                              u32 startPosCount, const StartPosition* startPositions,
                              u32 cannonCount, const CannonPoint* cannonPoints,
                              u32 jugemCount, const JugemPoint* jugemPoints,
                              const Vec3& boundaryMin, const Vec3& boundaryMax) {
    // --- Checkpoints ---
    if (checkpoints != nullptr && checkpointCount > 0) {
        u32 maxCP = (checkpointCount < MAX_CHECKPOINTS) ? checkpointCount : MAX_CHECKPOINTS;
        for (u32 i = 0; i < maxCP; i++) {
            m_checkpoints[i] = checkpoints[i];
        }
        m_checkpointCount = maxCP;
    }

    // --- Start positions ---
    if (startPositions != nullptr && startPosCount > 0) {
        u32 maxSP = (startPosCount < MAX_START_POSITIONS) ? startPosCount : MAX_START_POSITIONS;
        for (u32 i = 0; i < maxSP; i++) {
            m_startPositions[i] = startPositions[i];
        }
        m_startPositionCount = maxSP;
    }

    // --- Cannon points ---
    if (cannonPoints != nullptr && cannonCount > 0) {
        u32 maxCP = (cannonCount < MAX_CANNON_POINTS) ? cannonCount : MAX_CANNON_POINTS;
        for (u32 i = 0; i < maxCP; i++) {
            m_cannonPoints[i] = cannonPoints[i];
        }
        m_cannonPointCount = maxCP;
    }

    // --- Jugem (rescue) points ---
    if (jugemPoints != nullptr && jugemCount > 0) {
        u32 maxJP = (jugemCount < MAX_JUGEM_POINTS) ? jugemCount : MAX_JUGEM_POINTS;
        for (u32 i = 0; i < maxJP; i++) {
            m_jugemPoints[i] = jugemPoints[i];
        }
        m_jugemPointCount = maxJP;
    }

    // --- Boundary ---
    m_boundaryMin = boundaryMin;
    m_boundaryMax = boundaryMax;

    m_platformLoaded = true;
    m_loaded = true;

    printf("[Course] Loaded from platform: %u checkpoints, %u start positions, "
           "%u cannon points, %u jugem points\n",
           m_checkpointCount, m_startPositionCount,
           m_cannonPointCount, m_jugemPointCount);
}

// =============================================================================
// getBoundingBox — Get the course axis-aligned bounding box
// @addr 0x80690098
// =============================================================================

/* Course_getBoundingBox @ 0x80690098 */
void Course::getBoundingBox(Vec3& outMin, Vec3& outMax) const {
    outMin = m_boundaryMin;
    outMax = m_boundaryMax;
}

} // namespace Scene