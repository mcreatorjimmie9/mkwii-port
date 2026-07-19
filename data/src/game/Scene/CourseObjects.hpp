#pragma once
// CourseObjects.hpp - Course-specific 3D objects (item boxes, obstacles, etc.)
// Reconstructed from CourseObjects_* functions (0x805c0154 - 0x805dffbc)
//
// CourseObjects handles the placement, animation, and interaction of
// objects that are part of the race course itself — item boxes, boost
// pads, moving platforms, cannon entrances, etc.
// This is separate from ObjectDirector which handles dynamic scene objects.

#include "rk_common.h"
#include <EGG/math.h>

namespace Scene {

// =============================================================================
// CourseObject — A single course-placed object instance
// =============================================================================
struct CourseObject {
    u32 objectId;          // Unique ID within the course
    u16 type;              // Object type (boost pad, item box, etc.)
    u16 flags;             // State flags (active, hidden, collected, etc.)
    Vec3 position;         // World position
    Vec3 rotation;         // Yaw/pitch/roll
    Vec3 scale;            // Object scale
    u32 routeId;           // Linked route ID for moving objects
    s32 pointIndex;        // Current point on route
    f32 animTimer;         // Animation timer for cycling objects
    f32 animSpeed;         // Animation speed multiplier
    u32 respawnTimer;      // Frames until respawn (for item boxes)
    void* resource;        // Loaded model/texture resource
};

// =============================================================================
// CourseObjType — Known course object type IDs
// =============================================================================
enum CourseObjType {
    OBJTYPE_NONE = 0,
    OBJTYPE_ITEMBOX = 1,
    OBJTYPE_BOOST_PAD = 2,
    OBJTYPE_BOOST_RAMP = 3,
    OBJTYPE_JUMP_PAD = 4,
    OBJTYPE_ROAD_OBJECT = 5,
    OBJTYPE_SCENERY = 6,
    OBJTYPE_MOVING_PLATFORM = 7,
    OBJTYPE_CANNON = 8,
    OBJTYPE_MUSHROOM_GIANT = 9,
    OBJTYPE_STUNT_RAMP = 10,
    OBJTYPE_TRICK_RAMP = 11,
    OBJTYPE_HALF_PIPE = 12,
    OBJTYPE_GLIDER_PAD = 13,
    OBJTYPE_COIN = 14,
    OBJTYPE_COUNT = 15,
};

// =============================================================================
// CourseObjects — Manages all objects placed in the current course
//
// Loads from the course's object data section, creates instances,
// handles per-frame updates (animation, respawn, collision checks),
// and provides query interfaces for the race logic.
// =============================================================================
class CourseObjects {
public:
    CourseObjects();
    ~CourseObjects();

    // Lifecycle
    void init(const void* courseData, u32 dataSize);
    void shutdown();
    void calc(f32 dt);
    void draw() const;

    // Object queries
    u32 getObjectCount() const { return m_objectCount; }
    CourseObject* getObject(u32 index);
    const CourseObject* getObject(u32 index) const;

    // Batch creation (from scene_CourseObjects_805c0154 — main factory)
    u32 loadObjectGroup(const void* data, u32 count);
    u32 createObject(u16 type, const Vec3& pos, const Vec3& rot,
                      const Vec3& scale, u32 routeId = 0);

    // Per-object operations
    void removeObject(u32 index);
    void hideObject(u32 index);
    void showObject(u32 index);
    bool isObjectActive(u32 index) const;

    // Item box management
    void collectItemBox(u32 index);
    bool isItemBoxReady(u32 index) const;
    void updateItemBoxRespawn(u32 index);

    // Boost pad queries
    bool isBoostPadActive(u32 index) const;
    void activateBoostPad(u32 index);

    // Moving object support
    void updateMovingObjects(f32 dt);
    void setRoutePoint(u32 index, s32 point);

    // Search / proximity
    s32 findNearestObject(const Vec3& pos, u16 type, f32 maxDist) const;
    s32 findObjectAtPoint(const Vec3& pos, u16 type, f32 tolerance) const;

    // Resource management
    void loadResources();
    void unloadResources();
    bool areResourcesLoaded() const { return m_resourcesLoaded; }

private:
    static const u32 MAX_COURSE_OBJECTS = 2048;

    CourseObject* m_objects;
    u32 m_maxObjects;
    u32 m_objectCount;
    bool m_initialized;
    bool m_resourcesLoaded;

    // Route data for moving objects (from scene_CourseObjects_805c1e70 area)
    struct RoutePoint {
        Vec3 position;
        f32 speed;
        u8 flags;
    };

    RoutePoint* m_routes;
    u32 m_routeCount;

    void destroyObjectInternal(u32 index);
    u32 findFreeSlot() const;
};

} // namespace Scene