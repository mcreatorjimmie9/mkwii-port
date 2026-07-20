#pragma once
// MapObjDirector.hpp - Course map object management
// Reconstructed from MapObj_* and scene_MapObj_* functions (0x806b00e4+)
//
// MapObjDirector handles the loading, placement, and per-frame update
// of static and animated map objects that are part of the course
// geometry (trees, buildings, signs, billboards, etc.).
// These are distinct from CourseObjects (which are gameplay-relevant)
// in that MapObjs are primarily visual and part of the course BMD model.

#include "rk_common.h"
#include <EGG/math.h>

namespace Scene {

// =============================================================================
// MapObjType — Known map object subtypes
// =============================================================================
enum MapObjType {
    MAPOBJ_STATIC = 0,
    MAPOBJ_ANIMATED = 1,
    MAPOBJ_PHYSICS = 2,
    MAPOBJ_EFFECT = 3,
    MAPOBJ_SOUND = 4,
    MAPOBJ_ROAD = 5,
};

// =============================================================================
// MapObjEntry — A single map object instance
// =============================================================================
struct MapObjEntry {
    void* model;            // BMD/BCK model data
    u16 typeId;
    u16 flags;
    u8 animFlags;           // Animation state flags
    u8 variantId;           // Color/LOD variant
    u16 animFrame;          // Current animation frame
    u16 animFrameMax;       // Total frames in animation
    f32 animSpeed;          // Animation speed
    Vec3 position;
    Vec3 rotation;
    Vec3 scale;
    f32 boundingRadius;     // For culling
    bool visible;
    bool loaded;
};

// =============================================================================
// MapObjDirector — Course map object manager
//
// Loads from the course's map object section (.bmd scenes),
// handles LOD switching, visibility culling, animation playback,
// and per-frame draw dispatching.
// =============================================================================
class MapObjDirector {
public:
    MapObjDirector();
    ~MapObjDirector();

    // Lifecycle
    void init(u32 maxObjects);
    void shutdown();
    void loadFromCourse(const void* courseData);
    void calc(f32 dt);
    void draw() const;

    // Object management
    u32 addObject(u16 typeId, const Vec3& pos, const Vec3& rot,
                   const Vec3& scale, u8 variant = 0);
    void removeObject(u32 index);
    void removeAll();

    // Queries
    u32 getObjectCount() const { return m_objectCount; }
    u32 getLoadedCount() const;
    MapObjEntry* getObject(u32 index);
    const MapObjEntry* getObject(u32 index) const;
    MapObjEntry* findByType(u16 typeId);
    MapObjEntry* findByPosition(const Vec3& pos, f32 radius);
    MapObjEntry* findById(u32 id) const;
    u32 findByTypeAll(u16 typeId, MapObjEntry** outResults, u32 maxResults) const;
    u32 getVisibleCount() const;
    void getBoundingBox(Vec3& outMin, Vec3& outMax) const;
    void setVariant(u32 index, u8 variant);
    void recalcBoundingRadius(u32 index);
    void swapObjects(u32 a, u32 b);
    u32 getMemoryUsage() const;

    // Animation
    void setAnimation(u32 index, u16 frame, u16 maxFrame, f32 speed);
    void advanceAnimation(u32 index, f32 dt);
    bool isAnimationComplete(u32 index) const;

    // Visibility / culling
    void setVisible(u32 index, bool visible);
    void cullAgainstFrustum(const Vec3& camPos, const Vec3& camDir,
                             f32 fov, f32 aspect);
    bool isObjectVisible(u32 index) const;

    // Transform / flag management
    void updateObjectTransform(u32 index, const Vec3& pos, const Vec3& rot);
    void setObjectFlags(u32 index, u32 flags);
    void setObjectScale(u32 index, const Vec3& scale);

    // Resource management
    bool areResourcesLoaded() const { return m_resourcesLoaded; }
    void loadResources();
    void unloadResources();

    // Low-level drawing for frustum-culled dispatch
    void drawObject(const MapObjEntry& entry) const;

private:
    static const u32 MAX_MAPOBJS = 4096;

    MapObjEntry* m_objects;
    u32 m_maxObjects;
    u32 m_objectCount;
    bool m_initialized;
    bool m_resourcesLoaded;

    u32 findFreeSlot() const;
    void updateAnimation(MapObjEntry& entry, f32 dt);
    bool isInFrustum(const MapObjEntry& entry, const Vec3& camPos,
                      const Vec3& camDir, f32 fov, f32 aspect) const;
};

} // namespace Scene