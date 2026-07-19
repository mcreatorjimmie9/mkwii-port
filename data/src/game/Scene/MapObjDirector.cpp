// MapObjDirector.cpp - Course map object management implementation
// Reconstructed from MapObj_* and scene_MapObj_* functions (0x806b00e4+)

#include "MapObjDirector.hpp"
#include <string.h>
#include <math.h>

namespace Scene {

MapObjDirector::MapObjDirector()
    : m_objects(nullptr)
    , m_maxObjects(0)
    , m_objectCount(0)
    , m_initialized(false)
    , m_resourcesLoaded(false) {}

MapObjDirector::~MapObjDirector() {
    shutdown();
}

void MapObjDirector::init(u32 maxObjects) {
    m_maxObjects = maxObjects > 0 ? maxObjects : MAX_MAPOBJS;
    m_objects = new MapObjEntry[m_maxObjects];
    memset(m_objects, 0, sizeof(MapObjEntry) * m_maxObjects);

    for (u32 i = 0; i < m_maxObjects; i++) {
        m_objects[i].loaded = false;
        m_objects[i].visible = true;
        m_objects[i].model = nullptr;
        m_objects[i].scale = Vec3(1.0f, 1.0f, 1.0f);
        m_objects[i].boundingRadius = 100.0f;
    }

    m_objectCount = 0;
    m_initialized = true;
}

void MapObjDirector::shutdown() {
    if (m_objects) {
        delete[] m_objects;
        m_objects = nullptr;
    }
    m_maxObjects = 0;
    m_objectCount = 0;
    m_initialized = false;
    m_resourcesLoaded = false;
}

void MapObjDirector::loadFromCourse(const void* courseData) {
    if (!m_initialized || !courseData) return;
    (void)courseData;
    // Parse map object section from course data
}

void MapObjDirector::calc(f32 dt) {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;
        if (m_objects[i].animSpeed > 0.0f) {
            updateAnimation(m_objects[i], dt);
        }
    }
}

void MapObjDirector::draw() const {
    if (!m_initialized) return;
    // Frustum-culled draw dispatch
}

u32 MapObjDirector::addObject(u16 typeId, const Vec3& pos, const Vec3& rot,
                                const Vec3& scale, u8 variant) {
    if (!m_initialized) return 0xFFFFFFFF;

    u32 slot = findFreeSlot();
    if (slot == 0xFFFFFFFF) return 0xFFFFFFFF;

    MapObjEntry& obj = m_objects[slot];
    obj.typeId = typeId;
    obj.position = pos;
    obj.rotation = rot;
    obj.scale = scale;
    obj.variantId = variant;
    obj.animFrame = 0;
    obj.animFrameMax = 1;
    obj.animSpeed = 0.0f;
    obj.animFlags = 0;
    obj.flags = 0;
    obj.boundingRadius = 100.0f;
    obj.visible = true;
    obj.loaded = true;
    obj.model = nullptr;

    m_objectCount++;
    return slot;
}

void MapObjDirector::removeObject(u32 index) {
    if (index >= m_maxObjects) return;
    m_objects[index].loaded = false;
    m_objects[index].model = nullptr;
    m_objectCount--;
}

void MapObjDirector::removeAll() {
    if (!m_objects) return;
    for (u32 i = 0; i < m_maxObjects; i++) {
        m_objects[i].loaded = false;
        m_objects[i].model = nullptr;
    }
    m_objectCount = 0;
}

MapObjEntry* MapObjDirector::getObject(u32 index) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return nullptr;
    return &m_objects[index];
}

const MapObjEntry* MapObjDirector::getObject(u32 index) const {
    if (index >= m_maxObjects || !m_objects[index].loaded) return nullptr;
    return &m_objects[index];
}

void MapObjDirector::setAnimation(u32 index, u16 frame, u16 maxFrame,
                                     f32 speed) {
    if (index >= m_maxObjects) return;
    MapObjEntry& obj = m_objects[index];
    obj.animFrame = frame;
    obj.animFrameMax = maxFrame > 0 ? maxFrame : 1;
    obj.animSpeed = speed;
    obj.animFlags = speed > 0.0f ? 1 : 0;
}

void MapObjDirector::advanceAnimation(u32 index, f32 dt) {
    if (index >= m_maxObjects) return;
    updateAnimation(m_objects[index], dt);
}

bool MapObjDirector::isAnimationComplete(u32 index) const {
    if (index >= m_maxObjects) return true;
    const MapObjEntry& obj = m_objects[index];
    return obj.animFrame >= obj.animFrameMax - 1;
}

void MapObjDirector::setVisible(u32 index, bool visible) {
    if (index >= m_maxObjects) return;
    m_objects[index].visible = visible;
}

void MapObjDirector::cullAgainstFrustum(const Vec3& camPos, const Vec3& camDir,
                                           f32 fov, f32 aspect) {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;
        m_objects[i].visible = isInFrustum(m_objects[i], camPos, camDir, fov, aspect);
    }
}

void MapObjDirector::loadResources() {
    if (m_resourcesLoaded) return;
    m_resourcesLoaded = true;
}

void MapObjDirector::unloadResources() {
    if (!m_resourcesLoaded) return;
    for (u32 i = 0; i < m_maxObjects; i++) {
        m_objects[i].model = nullptr;
    }
    m_resourcesLoaded = false;
}

u32 MapObjDirector::findFreeSlot() const {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) return i;
    }
    return 0xFFFFFFFF;
}

void MapObjDirector::updateAnimation(MapObjEntry& entry, f32 dt) {
    if (entry.animFrameMax <= 1) return;

    entry.animFrame += (u16)(entry.animSpeed * dt * 30.0f);
    if (entry.animFrame >= entry.animFrameMax) {
        // Loop animation
        entry.animFrame = entry.animFrame % entry.animFrameMax;
    }
}

bool MapObjDirector::isInFrustum(const MapObjEntry& entry, const Vec3& camPos,
                                    const Vec3& camDir, f32 fov, f32 aspect) const {
    // Simplified sphere-frustum culling
    Vec3 toObj;
    toObj.x = entry.position.x - camPos.x;
    toObj.z = entry.position.z - camPos.z;

    f32 dot = toObj.x * camDir.x + toObj.z * camDir.z;
    if (dot < 0.0f) return false; // Behind camera

    f32 dist = sqrtf(toObj.x * toObj.x + toObj.y * toObj.y + toObj.z * toObj.z);
    f32 halfFov = fov * 0.5f * (3.14159265f / 180.0f);
    f32 objSize = entry.boundingRadius / (dist > 0.01f ? dist : 0.01f);

    return objSize > tanf(halfFov * aspect) || objSize > tanf(halfFov) ||
           dist < entry.boundingRadius * 2.0f;
}

} // namespace Scene