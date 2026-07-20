#pragma once
// ObjectDirector.hpp - 3D object management within a scene
// Reconstructed from ObjectDirector_* functions (0x805b0028 - 0x805c0154)
//
// ObjectDirector manages the lifecycle, creation, destruction, and
// per-frame update of 3D objects that exist within a scene. In MKWii,
// this includes karts, item boxes, course decorations, etc.
// It uses a linked-list / array-based object pool pattern.

#include "rk_common.h"
#include <EGG/math.h>

typedef EGG::Vector3f Vec3;

namespace Scene {

// Forward declarations
class SceneBase;

// =============================================================================
// ObjectDirector — Manages 3D scene objects
//
// Each object gets an ID, a type, and is arranged in spatial groups.
// The director handles creation (create), validation (validate), and
// per-frame calc/draw dispatching.
// =============================================================================
class ObjectDirector {
public:
    // Object lifecycle states (passed as param_4 in validate calls)
    enum CreateFlag {
        CREATE_DEFAULT = 0,
        CREATE_DELAYED = 3,
        CREATE_DEFERRED = 4,
        CREATE_IMMEDIATE = 5,
        CREATE_NO_INIT = 6,
    };

    // Color/priority override for special object types
    static const u32 PRIORITY_OVERRIDE = 0x1A;

    ObjectDirector();
    ~ObjectDirector();

    // Main lifecycle
    void init(u32 maxObjects);
    void calc(f32 dt);
    void draw() const;

    // Object management
    u32 createObject(u32 typeId, void* initData, CreateFlag flag = CREATE_DEFAULT);
    void destroyObject(u32 objectId);
    void destroyAllObjects();
    void* findObjectById(u32 objId);
    void updateAll(f32 dt);
    void drawAll();
    void resetAll();

    // Validation (assert-fail guards from decompiled code)
    bool validateObject(u32 objectId) const;
    bool validateObjectIndex(u32 index) const;
    bool validateBufferSize(u32 size) const;

    // Object lookup
    u32 getObjectCount() const { return m_objectCount; }
    u32 getMaxObjects() const { return m_maxObjects; }
    void* getObject(u32 index) const;

    // Group management
    void addObjectToGroup(u32 objectId, u32 groupId);
    u32 getGroupSize(u32 groupId) const;

    // Visibility / culling
    void setVisible(u32 objectId, bool visible);
    bool isVisible(u32 objectId) const;

    // Animation control
    void setAnimationFrame(u32 objectId, u16 frame);
    u16 getAnimationFrame(u32 objectId) const;

    // Position / transform helpers (from 0x805b18fc, 0x805b1db4)
    void setTransform(u32 objectId, const EGG::Vector3f& position, const EGG::Vector3f& rotation,
                      const EGG::Vector3f& scale);
    void getTransform(u32 objectId, EGG::Vector3f& position, EGG::Vector3f& rotation,
                      EGG::Vector3f& scale) const;

    // Color management (from 0x805b0c64, 0x805b0da0 — alpha fade)
    void startColorFade(u32 objectId, u8 alpha, u8 delay);
    void updateColorFade(u32 objectId, f32 dt);
    void setColor(u32 objectId, u8 r, u8 g, u8 b, u8 a);

    // Resource loading (from 0x805b3a08, 0x805b3a90 — transform calc)
    void calculateWorldTransform(const EGG::Vector3f& pos, const EGG::Vector3f& scale,
                                 EGG::Vector3f* outWorldPos);

    // Per-object update/draw
    void updateObject(u32 index, f32 dt);
    void drawObject(u32 index) const;

    // Extended API
    // @addr 0x805b3a90
    u32 createObject(u32 typeId);
    // @addr 0x805b3ac0
    bool destroyObjectByInstance(void* instance);
    // @addr 0x805b3b00
    void* findObjectByType(u32 typeId) const;
    // @addr 0x805b3b40
    void pauseAll();
    // @addr 0x805b3b80
    void resumeAll();
    // @addr 0x805b3bc0
    void sortByDistance(const EGG::Vector3f& reference);
    // @addr 0x805b3c80
    void getPosition(u32 objectId, EGG::Vector3f& outPos) const;
    // @addr 0x805b3cc0
    void setPosition(u32 objectId, const EGG::Vector3f& pos);
    // @addr 0x805b3d00
    void getScale(u32 objectId, EGG::Vector3f& outScale) const;
    // @addr 0x805b3d40
    void setScale(u32 objectId, const EGG::Vector3f& scale);
    // @addr 0x805b3d80
    u32 getTypeId(u32 objectId) const;
    // @addr 0x805b3dc0
    u32 getGroupId(u32 objectId) const;
    // @addr 0x805b3e00
    void getColor(u32 objectId, u8& r, u8& g, u8& b, u8& a) const;
    // @addr 0x805b3e40
    bool isFading(u32 objectId) const;
    // @addr 0x805b3e80
    u32 getObjectsInRange(const EGG::Vector3f& center, f32 radius) const;
    // @addr 0x805b3f00
    u32 destroyGroup(u32 groupId);
    // @addr 0x805b3f40
    bool hasActiveFades() const;

private:
    // Object entry stored in the pool
    struct ObjectEntry {
        void* instance;        // The actual object pointer
        u32 typeId;            // Object type identifier
        u16 animationFrame;    // Current animation frame
        u16 flags;             // Visibility and state flags
        EGG::Vector3f position;
        EGG::Vector3f rotation;
        EGG::Vector3f scale;
        u8 colorR, colorG, colorB, colorA;
        u8 fadeState;          // 0 = none, 1 = fading out, 2 = fading in
        u16 fadeTimer;
        u32 groupId;
        bool active;
    };

    static const u32 MAX_OBJECTS_DEFAULT = 256;
    static const u16 FADE_TIMER_INVALID = 0xFFFF;

    ObjectEntry* m_objects;
    u32 m_maxObjects;
    u32 m_objectCount;
    bool m_initialized;
};

} // namespace Scene

// @addr 0x805b3f80
void ObjectDirector_sortByDistance(Scene::ObjectDirector* director, const Vec3& ref);
