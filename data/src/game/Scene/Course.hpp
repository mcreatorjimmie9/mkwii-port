#pragma once
// Course.hpp - Race course data and runtime state
// Reconstructed from Course_* and scene_Course_* functions (0x80690034+)
//
// The Course class represents the loaded race track including:
// - Road surface data (sectors, checkpoints, start positions)
// - Terrain height queries
// - Lap counting logic
// - Course-wide parameters (gravity, boundaries, etc.)
// - Collision with static course geometry

#include "rk_common.h"
#include <EGG/math.h>

namespace Scene {

// =============================================================================
// RoadSector — One sector of the road mesh
// =============================================================================
struct RoadSector {
    Vec3 center;          // Center of the sector
    Vec3 normal;          // Surface normal
    f32 friction;         // Off-road / road friction
    u16 surfaceType;      // Road, off-road, boost, etc.
    u16 flags;
};

// =============================================================================
// Checkpoint — Lap boundary checkpoint
// =============================================================================
struct Checkpoint {
    Vec3 position;
    Vec3 normal;
    f32 width;
    f32 height;
    u16 id;
    u8 lapLine;           // Is this the finish line?
    u8 keyCheckpoint;     // Must be crossed for valid lap
};

// =============================================================================
// CannonPoint — Cannon entry and exit positions
// =============================================================================
struct CannonPoint {
    Vec3 entryPos;       // Position where kart enters the cannon
    Vec3 exitPos;        // Position where kart exits the cannon
    Vec3 exitDir;        // Exit direction vector
    u8  index;           // Cannon index
    u8  active;          // Whether this cannon is enabled
    u8  padding[2];
};

// =============================================================================
// JugemPoint — Off-road rescue (Lakitu pickup) position
// =============================================================================
struct JugemPoint {
    Vec3 position;       // Rescue drop point position
    Vec3 forward;        // Forward direction when placed back
    u16 areaId;          // Area this point belongs to
    u16 padding;
};

// =============================================================================
// StartPosition — Kart starting grid position
// =============================================================================
struct StartPosition {
    Vec3 position;
    Vec3 forward;
    Vec3 up;
    u8 playerIndex;
    u8 column;
    u8 row;
    u8 padding;
};

// =============================================================================
// Course — The race course
//
// Loads from the course archive, provides spatial queries, manages
// lap checkpoints, and exposes course-wide parameters.
// =============================================================================
class Course {
public:
    enum SurfaceType {
        SURFACE_ROAD = 0,
        SURFACE_OFFROAD = 1,
        SURFACE_BOOST = 2,
        SURFACE_TRICK = 3,
        SURFACE_HALFPIPE = 4,
        SURFACE_GLIDER = 5,
        SURFACE_ICE = 6,
        SURFACE_SAND = 7,
    };

    Course();
    ~Course();

    // Lifecycle
    void init();
    bool load(u16 courseId);
    void unload();
    void calc(f32 dt);
    void draw() const;

    // Height queries (from Course_validate_806901d8 area)
    f32 getHeight(f32 x, f32 z) const;
    f32 getHeightExact(f32 x, f32 z) const;

    // Road sector queries
    const RoadSector* getRoadSector(f32 x, f32 z) const;
    u16 getSurfaceType(f32 x, f32 z) const;
    f32 getFriction(f32 x, f32 z) const;

    // Checkpoint / lap management
    u32 getCheckpointCount() const { return m_checkpointCount; }
    const Checkpoint* getCheckpoint(u32 index) const;
    bool checkCrossedCheckpoint(u32 checkpointId, const Vec3& prevPos,
                                  const Vec3& curPos) const;

    // Start positions
    u32 getStartPositionCount() const { return m_startPositionCount; }
    const StartPosition* getStartPosition(u32 index) const;

    // Course properties
    u16 getCourseId() const { return m_courseId; }
    f32 getGravity() const { return m_gravity; }
    bool isLoaded() const { return m_loaded; }
    const char* getName() const;
    void* getKCL() const;
    void* getKMP() const;

    // Boundaries
    f32 getBoundaryMinX() const { return m_boundaryMin.x; }
    f32 getBoundaryMaxX() const { return m_boundaryMax.x; }
    f32 getBoundaryMinZ() const { return m_boundaryMin.z; }
    f32 getBoundaryMaxZ() const { return m_boundaryMax.z; }
    bool isOutOfBounds(f32 x, f32 z) const;

    // Camera route for auto-camera
    u32 getCameraRouteCount() const { return m_cameraRouteCount; }
    const Vec3* getCameraRoutePoint(u32 index) const;

    // Model / collision access (for rendering and physics)
    void* getModel() const { return m_modelData; }
    void* getCollision() const { return m_collisionData; }

    // Start point by u8 index (convenience wrapper for getStartPosition)
    const StartPosition* getStartPoint(u8 index) const;

    // Cannon points
    u32 getCannonPointCount() const { return m_cannonPointCount; }
    const CannonPoint* getCannonPoint(u8 index) const;

    // Jugem (rescue) points
    u32 getJugemPointCount() const { return m_jugemPointCount; }
    const JugemPoint* getJugemPoints() const { return m_jugemPoints; }
    const JugemPoint* getJugemPoint(u32 index) const;

    // Finish line access
    const Checkpoint* getFinishLinePoint() const;

    // Course bounding box
    void getCourseBounds(Vec3& outMin, Vec3& outMax) const;
    void getBoundingBox(Vec3& outMin, Vec3& outMax) const;

    // Height query via KCL-style downward raycast
    // @addr 0x806901d8
    f32 getHeightAt(f32 x, f32 z) const;

private:
    static const u32 MAX_SECTORS = 4096;
    static const u32 MAX_CHECKPOINTS = 64;
    static const u32 MAX_START_POSITIONS = 12;
    static const u32 MAX_CAMERA_POINTS = 1024;

    // Loaded data
    RoadSector* m_sectors;
    u32 m_sectorCount;
    Checkpoint* m_checkpoints;
    u32 m_checkpointCount;
    StartPosition* m_startPositions;
    u32 m_startPositionCount;
    Vec3* m_cameraRoute;
    u32 m_cameraRouteCount;

    // Course properties
    u16 m_courseId;
    f32 m_gravity;
    Vec3 m_boundaryMin;
    Vec3 m_boundaryMax;
    bool m_loaded;

    // Spatial grid for fast sector lookup
    void* m_spatialGrid;

    // Model / collision data (opaque handles to BMD / KCL)
    void* m_modelData;
    void* m_collisionData;
    u32 m_modelDataSize;
    u32 m_collisionDataSize;

    // Cannon points
    static const u32 MAX_CANNON_POINTS = 16;
    CannonPoint* m_cannonPoints;
    u32 m_cannonPointCount;

    // Jugem (rescue) points
    static const u32 MAX_JUGEM_POINTS = 64;
    JugemPoint* m_jugemPoints;
    u32 m_jugemPointCount;

    // Course name (loaded from BRRES or course database)
    const char* m_courseName;
};

} // namespace Scene