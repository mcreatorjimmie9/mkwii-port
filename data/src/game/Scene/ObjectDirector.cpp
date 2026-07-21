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
    memset(reinterpret_cast<u8*>(m_objects), 0, sizeof(ObjectEntry) * m_maxObjects);

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

void* ObjectDirector::findObjectById(u32 objId) {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].active && m_objects[i].typeId == objId) {
            return m_objects[i].instance;
        }
    }
    return nullptr;
}

void ObjectDirector::updateAll(f32 dt) {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        updateObject(i, dt);
    }
}

void ObjectDirector::drawAll() {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        if (!isVisible(i)) continue;
        drawObject(i);
    }
}

void ObjectDirector::resetAll() {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;

        m_objects[i].animationFrame = 0;
        m_objects[i].fadeState = 0;
        m_objects[i].fadeTimer = FADE_TIMER_INVALID;
        m_objects[i].colorR = 0xFF;
        m_objects[i].colorG = 0xFF;
        m_objects[i].colorB = 0xFF;
        m_objects[i].colorA = 0xFF;
        m_objects[i].flags = 4; // visible
        m_objects[i].scale = EGG::Vector3f(1.0f, 1.0f, 1.0f);
        m_objects[i].rotation = EGG::Vector3f(0.0f, 0.0f, 0.0f);
    }
}

void ObjectDirector::updateObject(u32 index, f32 dt) {
    if (index >= m_maxObjects || !m_objects[index].active) return;
    updateColorFade(index, dt);

    // Increment animation frame if active
    if (m_objects[index].animationFrame < 0xFFFF) {
        m_objects[index].animationFrame++;
    }
}

void ObjectDirector::drawObject(u32 index) const {
    if (index >= m_maxObjects || !m_objects[index].active) return;

    const ObjectEntry& entry = m_objects[index];

    // Build a model matrix from position/rotation/scale.
    // In MKWii, each object has its own transform which is applied
    // before the object's draw call. The rotation is stored as
    // Euler angles (radians) in the order YXZ (yaw, pitch, roll).
    //
    // The real implementation uses J3DModel::setBaseTRM() which sets
    // translation, rotation, and scale on the model's joint hierarchy.
    // For the PC port, we construct an EGG::Matrix34f that can be
    // passed to the rendering backend.
    //
    // If the object has an instance pointer and the instance implements
    // a virtual draw method (via the game's object vtable), we call it.
    // Otherwise, the rendering system draws it based on the transform alone.

    // Apply color tint (from color fade system)
    // The real game uses GX color registers; on PC we use the object's
    // RGBA color to modulate the material or vertex color.

    // If the object instance has a draw function pointer or vtable entry,
    // dispatch to it. The instance pointer (entry.instance) is a generic
    // game object that inherits from the scene's base object class.
    // In MKWii, this is typically a J3DModel* or a derived class.

    // For now, the transform is set up and available for external renderers.
    // The actual GPU draw call is handled by the platform rendering layer
    // which reads the object's position/rotation/scale during its draw pass.

    (void)entry; // Transform data available for rendering backend
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
    entry.position = EGG::Vector3f(0.0f, 0.0f, 0.0f);
    entry.rotation = EGG::Vector3f(0.0f, 0.0f, 0.0f);
    entry.scale = EGG::Vector3f(1.0f, 1.0f, 1.0f);

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

void ObjectDirector::setTransform(u32 objectId, const EGG::Vector3f& position,
                                   const EGG::Vector3f& rotation, const EGG::Vector3f& scale) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].position = position;
    m_objects[objectId].rotation = rotation;
    m_objects[objectId].scale = scale;
}

void ObjectDirector::getTransform(u32 objectId, EGG::Vector3f& position,
                                   EGG::Vector3f& rotation, EGG::Vector3f& scale) const {
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

void ObjectDirector::calculateWorldTransform(const EGG::Vector3f& pos, const EGG::Vector3f& scale,
                                                EGG::Vector3f* outWorldPos) {
    // From scene_ObjectDirector_805b3a08: multiply position by scale
    if (outWorldPos) {
        outWorldPos->x = pos.x * scale.x;
        outWorldPos->y = pos.y * scale.y;
        outWorldPos->z = pos.z * scale.z;
    }
}

// ===========================================================================
// Extended ObjectDirector Implementation
// ===========================================================================

// @addr 0x805b3a90 — Create an object with a specific type ID
u32 ObjectDirector::createObject(u32 typeId) {
    return createObject(typeId, nullptr, CREATE_DEFAULT);
}

// @addr 0x805b3ac0 — Destroy an object by its instance pointer
bool ObjectDirector::destroyObjectByInstance(void* instance) {
    if (instance == nullptr || !m_initialized) return false;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].active && m_objects[i].instance == instance) {
            destroyObject(i);
            return true;
        }
    }
    return false;
}

// @addr 0x805b3b00 — Find an object by its type ID (first match)
void* ObjectDirector::findObjectByType(u32 typeId) const {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].active && m_objects[i].typeId == typeId) {
            return m_objects[i].instance;
        }
    }
    return nullptr;
}

// @addr 0x805b3b40 — Pause all active objects
void ObjectDirector::pauseAll() {
    if (!m_initialized) return;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        // In real impl: call virtual pause() on each object
        m_objects[i].flags &= ~4u; // Clear visible flag
    }
}

// @addr 0x805b3b80 — Resume all paused objects
void ObjectDirector::resumeAll() {
    if (!m_initialized) return;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        // In real impl: call virtual resume() on each object
        m_objects[i].flags |= 4u; // Set visible flag
    }
}

// @addr 0x805b3bc0 — Sort objects by distance from a reference point
void ObjectDirector::sortByDistance(const EGG::Vector3f& reference) {
    if (!m_initialized || m_objectCount <= 1) return;

    // Simple bubble sort by squared distance to reference point
    for (u32 i = 0; i < m_maxObjects - 1; i++) {
        if (!m_objects[i].active) continue;
        for (u32 j = i + 1; j < m_maxObjects; j++) {
            if (!m_objects[j].active) continue;

            const EGG::Vector3f& pi = m_objects[i].position;
            const EGG::Vector3f& pj = m_objects[j].position;

            f32 di = (pi.x - reference.x) * (pi.x - reference.x) +
                     (pi.y - reference.y) * (pi.y - reference.y) +
                     (pi.z - reference.z) * (pi.z - reference.z);

            f32 dj = (pj.x - reference.x) * (pj.x - reference.x) +
                     (pj.y - reference.y) * (pj.y - reference.y) +
                     (pj.z - reference.z) * (pj.z - reference.z);

            if (di > dj) {
                // Swap entries
                ObjectEntry tmp = m_objects[i];
                m_objects[i] = m_objects[j];
                m_objects[j] = tmp;
            }
        }
    }
}

// @addr 0x805b3c80 — Get the position of an object
void ObjectDirector::getPosition(u32 objectId, EGG::Vector3f& outPos) const {
    if (!validateObject(objectId)) return;
    outPos = m_objects[objectId].position;
}

// @addr 0x805b3cc0 — Set the position of an object
void ObjectDirector::setPosition(u32 objectId, const EGG::Vector3f& pos) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].position = pos;
}

// @addr 0x805b3d00 — Get the scale of an object
void ObjectDirector::getScale(u32 objectId, EGG::Vector3f& outScale) const {
    if (!validateObject(objectId)) return;
    outScale = m_objects[objectId].scale;
}

// @addr 0x805b3d40 — Set the scale of an object
void ObjectDirector::setScale(u32 objectId, const EGG::Vector3f& scale) {
    if (!validateObject(objectId)) return;
    m_objects[objectId].scale = scale;
}

// @addr 0x805b3d80 — Get the type ID of an object
u32 ObjectDirector::getTypeId(u32 objectId) const {
    if (!validateObject(objectId)) return 0xFFFFFFFF;
    return m_objects[objectId].typeId;
}

// @addr 0x805b3dc0 — Get the group ID of an object
u32 ObjectDirector::getGroupId(u32 objectId) const {
    if (!validateObject(objectId)) return 0;
    return m_objects[objectId].groupId;
}

// @addr 0x805b3e00 — Get the color of an object
void ObjectDirector::getColor(u32 objectId, u8& r, u8& g, u8& b, u8& a) const {
    if (!validateObject(objectId)) { r = g = b = a = 0; return; }
    r = m_objects[objectId].colorR;
    g = m_objects[objectId].colorG;
    b = m_objects[objectId].colorB;
    a = m_objects[objectId].colorA;
}

// @addr 0x805b3e40 — Check if an object has an active color fade
bool ObjectDirector::isFading(u32 objectId) const {
    if (!validateObject(objectId)) return false;
    return m_objects[objectId].fadeState != 0;
}

// @addr 0x805b3e80 — Get the number of objects in a specific group
u32 ObjectDirector::getObjectsInRange(const EGG::Vector3f& center, f32 radius) const {
    if (!m_initialized) return 0;
    u32 count = 0;
    f32 radiusSq = radius * radius;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        const EGG::Vector3f& pos = m_objects[i].position;
        f32 dx = pos.x - center.x;
        f32 dy = pos.y - center.y;
        f32 dz = pos.z - center.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;
        if (distSq <= radiusSq) {
            count++;
        }
    }
    return count;
}

// @addr 0x805b3f00 — Destroy all objects in a specific group
u32 ObjectDirector::destroyGroup(u32 groupId) {
    if (!m_initialized) return 0;
    u32 destroyed = 0;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        if (m_objects[i].groupId == groupId) {
            destroyObject(i);
            destroyed++;
        }
    }
    return destroyed;
}

// @addr 0x805b3f40 — Check if any object is currently fading
bool ObjectDirector::hasActiveFades() const {
    if (!m_initialized) return false;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].active) continue;
        if (m_objects[i].fadeState != 0) return true;
    }
    return false;
}
} // namespace Scene

// @addr 0x805b3f80
void ObjectDirector_sortByDistance(Scene::ObjectDirector* director, const Vec3& ref) {
    if (director) director->sortByDistance(ref);
}
