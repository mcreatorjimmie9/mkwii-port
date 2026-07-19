// ObjectDirector.cpp - 3D object management implementation
// Reconstructed from ObjectDirector_* and scene_ObjectDirector_* functions

#include "ObjectDirector.hpp"
#include <string.h>
#include <math.h>

namespace Scene {

ObjectDirector::ObjectDirector()
    : m_objects(nullptr)
    , m_maxObjects(0)
    , m_objectCount(0)
    , m_initialized(false) {}

ObjectDirector::~ObjectDirector() {
    destroyAllObjects();
    if (m_objects) {
        delete[] m_objects;
        m_objects = nullptr;
    }
}

void ObjectDirector::init(u32 maxObjects) {
    m_maxObjects = maxObjects > 0 ? maxObjects : MAX_OBJECTS_DEFAULT;
    m_objects = new ObjectEntry[m_maxObjects];
    memset(m_objects, 0, sizeof(ObjectEntry) * m_maxObjects);

    // Mark all entries as inactive
    for (u32 i = 0; i < m_maxObjects; i++) {
        m_objects[i].fadeTimer = FADE_TIMER_INVALID;
        m_objects[i].active = false;
        m_objects[i].instance = nullptr;
    }

    m_objectCount = 0;
    m_initialized = true;
}

void ObjectDirector::calc(f32 dt) {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        updateColorFade(i, dt);
    }
}

void ObjectDirector::draw() const {
    if (!m_initialized) return;
    // Drawing is dispatched through virtual calls on each object instance
}

u32 ObjectDirector::createObject(u32 typeId, void* initData, CreateFlag flag) {
    if (!m_initialized) return 0xFFFFFFFF;

    // Find a free slot
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) {
            slot = i;
            break;
        }
    }

    if (slot == 0xFFFFFFFF) return 0xFFFFFFFF; // No space

    ObjectEntry& entry = m_objects[slot];
    entry.instance = initData;
    entry.typeId = typeId;
    entry.active = true;
    entry.flags = 0;
    entry.animationFrame = 0;
    entry.fadeState = 0;
    entry.fadeTimer = FADE_TIMER_INVALID;
    entry.colorR = 0xFF;
    entry.colorG = 0xFF;
    entry.colorB = 0xFF;
    entry.colorA = 0xFF;
    entry.groupId = 0;
    entry.position = Vec3(0.0f, 0.0f, 0.0f);
    entry.rotation = Vec3(0.0f, 0.0f, 0.0f);
    entry.scale = Vec3(1.0f, 1.0f, 1.0f);

    m_objectCount++;
    return slot;
}

void ObjectDirector::destroyObject(u32 objectId) {
    if (!validateObjectIndex(objectId)) return;
    if (!m_objects[objectId].active) return;

    m_objects[objectId].active = false;
    m_objects[objectId].instance = nullptr;
    m_objects[objectId].fadeTimer = FADE_TIMER_INVALID;
    m_objectCount--;
}

void ObjectDirector::destroyAllObjects() {
    if (!m_objects) return;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].active) {
            m_objects[i].active = false;
            m_objects[i].instance = nullptr;
        }
    }
    m_objectCount = 0;
}

bool ObjectDirector::validateObject(u32 objectId) const {
    return objectId < m_maxObjects && m_objects[objectId].active;
}

bool ObjectDirector::validateObjectIndex(u32 index) const {
    // From ObjectDirector_validate_805b1118 / 805b1314 pattern
    if (index == 0 && m_maxObjects == 0) return false;
    return index < m_maxObjects;
}

bool ObjectDirector::validateBufferSize(u32 size) const {
    // From ObjectDirector_validate_805b29e0 pattern
    return size <= m_maxObjects;
}

void* ObjectDirector::getObject(u32 index) const {
    if (!validateObject(index)) return nullptr;
    return m_objects[index].instance;
}

void ObjectDirector::addObjectToGroup(u32 objectId, u32 groupId) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].groupId = groupId;
}

u32 ObjectDirector::getGroupSize(u32 groupId) const {
    u32 count = 0;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].active && m_objects[i].groupId == groupId) count++;
    }
    return count;
}

void ObjectDirector::setVisible(u32 objectId, bool visible) {
    if (!validateObject(objectId)) return;
    if (visible) {
        m_objects[objectId].flags |= 4; // bit 2 = visible
    } else {
        m_objects[objectId].flags &= ~4u;
    }
}

bool ObjectDirector::isVisible(u32 objectId) const {
    if (!validateObject(objectId)) return false;
    return (m_objects[objectId].flags & 4) != 0;
}

void ObjectDirector::setAnimationFrame(u32 objectId, u16 frame) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].animationFrame = frame;
}

u16 ObjectDirector::getAnimationFrame(u32 objectId) const {
    if (!validateObject(objectId)) return 0;
    return m_objects[objectId].animationFrame;
}

void ObjectDirector::setTransform(u32 objectId, const Vec3& position,
                                   const Vec3& rotation, const Vec3& scale) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].position = position;
    m_objects[objectId].rotation = rotation;
    m_objects[objectId].scale = scale;
}

void ObjectDirector::getTransform(u32 objectId, Vec3& position,
                                   Vec3& rotation, Vec3& scale) const {
    if (!validateObject(objectId)) return;
    position = m_objects[objectId].position;
    rotation = m_objects[objectId].rotation;
    scale = m_objects[objectId].scale;
}

// --- Color / fade management (from 0x805b0c64, 0x805b0da0) ---

void ObjectDirector::startColorFade(u32 objectId, u8 alpha, u8 delay) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].colorA = alpha;
    m_objects[objectId].fadeTimer = 0;
    m_objects[objectId].fadeState = 1;
    // Delay is encoded in the fade timer's initial value
    (void)delay;
}

void ObjectDirector::updateColorFade(u32 objectId, f32 dt) {
    if (!validateObject(objectId)) return;
    ObjectEntry& entry = m_objects[objectId];

    if (entry.fadeState == 1) {
        // Fading out
        entry.fadeTimer++;
        if (entry.fadeTimer >= 61) {
            entry.fadeTimer = FADE_TIMER_INVALID;
            entry.fadeState = 0;
            entry.colorA = 0xFF;
            entry.colorR = 0;
            entry.colorG = 0;
            entry.colorB = 0;
        } else {
            // Interpolate alpha toward 0xFF (opaque white for fade effect)
            // From 0x805b0c64: timer increments, alpha blends
            entry.colorA = 0xFF;
        }
    }
}

void ObjectDirector::setColor(u32 objectId, u8 r, u8 g, u8 b, u8 a) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].colorR = r;
    m_objects[objectId].colorG = g;
    m_objects[objectId].colorB = b;
    m_objects[objectId].colorA = a;
}

void ObjectDirector::calculateWorldTransform(const Vec3& pos, const Vec3& scale,
                                                Vec3* outWorldPos) {
    // From scene_ObjectDirector_805b3a08: multiply position by scale
    if (outWorldPos) {
        outWorldPos->x = pos.x * scale.x;
        outWorldPos->y = pos.y * scale.y;
        outWorldPos->z = pos.z * scale.z;
    }
}

} // namespace Scene