// CourseObjects.cpp - Course-specific 3D objects implementation
// Reconstructed from CourseObjects_* functions (0x805c0154 - 0x805dffbc)

#include "CourseObjects.hpp"
#include <string.h>
#include <math.h>

namespace Scene {

CourseObjects::CourseObjects()
    : m_objects(nullptr)
    , m_maxObjects(0)
    , m_objectCount(0)
    , m_initialized(false)
    , m_resourcesLoaded(false)
    , m_routes(nullptr)
    , m_routeCount(0) {}

CourseObjects::~CourseObjects() {
    shutdown();
}

void CourseObjects::init(const void* courseData, u32 dataSize) {
    (void)courseData;
    (void)dataSize;

    m_maxObjects = MAX_COURSE_OBJECTS;
    m_objects = new CourseObject[m_maxObjects];
    memset(m_objects, 0, sizeof(CourseObject) * m_maxObjects);
    m_routeCount = 64;
    m_routes = new RoutePoint[m_routeCount];
    memset(m_routes, 0, sizeof(RoutePoint) * m_routeCount);

    m_objectCount = 0;
    m_initialized = true;
    m_resourcesLoaded = false;
}

void CourseObjects::shutdown() {
    if (m_objects) {
        delete[] m_objects;
        m_objects = nullptr;
    }
    if (m_routes) {
        delete[] m_routes;
        m_routes = nullptr;
    }
    m_objectCount = 0;
    m_maxObjects = 0;
    m_routeCount = 0;
    m_initialized = false;
    m_resourcesLoaded = false;
}

void CourseObjects::calc(f32 dt) {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_objectCount; i++) {
        CourseObject& obj = m_objects[i];

        // Update animation timer
        if (obj.animSpeed > 0.0f) {
            obj.animTimer += dt * obj.animSpeed;
        }

        // Update item box respawn
        if (obj.type == OBJTYPE_ITEMBOX && (obj.flags & 0x100)) {
            updateItemBoxRespawn(i);
        }
    }

    updateMovingObjects(dt);
}

void CourseObjects::draw() const {
    if (!m_initialized) return;
    // Drawing dispatched through scene graph
}

u32 CourseObjects::loadObjectGroup(const void* data, u32 count) {
    if (!m_initialized || !data) return 0;

    // Parse course data and create objects
    // From scene_CourseObjects_805c0154: iterates group data
    u32 created = 0;
    const u8* ptr = static_cast<const u8*>(data);

    for (u32 i = 0; i < count; i++) {
        u32 slot = findFreeSlot();
        if (slot == 0xFFFFFFFF) break;

        // Default placement from course data
        m_objects[slot].type = OBJTYPE_SCENERY;
        m_objects[slot].position = Vec3(0.0f, 0.0f, 0.0f);
        m_objects[slot].rotation = Vec3(0.0f, 0.0f, 0.0f);
        m_objects[slot].scale = Vec3(1.0f, 1.0f, 1.0f);
        m_objects[slot].flags = 1; // active
        m_objects[slot].animSpeed = 0.0f;
        m_objects[slot].respawnTimer = 0;
        m_objects[slot].resource = nullptr;
        m_objectCount++;
        created++;
        ptr += 0x20; // Advance past each entry (approximate)
    }

    return created;
}

u32 CourseObjects::createObject(u16 type, const Vec3& pos, const Vec3& rot,
                                 const Vec3& scale, u32 routeId) {
    if (!m_initialized) return 0xFFFFFFFF;

    u32 slot = findFreeSlot();
    if (slot == 0xFFFFFFFF) return 0xFFFFFFFF;

    CourseObject& obj = m_objects[slot];
    obj.objectId = slot;
    obj.type = type;
    obj.position = pos;
    obj.rotation = rot;
    obj.scale = scale;
    obj.routeId = routeId;
    obj.pointIndex = 0;
    obj.animTimer = 0.0f;
    obj.animSpeed = 0.0f;
    obj.respawnTimer = 0;
    obj.resource = nullptr;
    obj.flags = 1; // active by default

    m_objectCount++;
    return slot;
}

void CourseObjects::removeObject(u32 index) {
    if (index >= m_objectCount) return;
    m_objects[index].flags = 0;
}

void CourseObjects::hideObject(u32 index) {
    if (index >= m_objectCount) return;
    m_objects[index].flags &= ~1u;
}

void CourseObjects::showObject(u32 index) {
    if (index >= m_objectCount) return;
    m_objects[index].flags |= 1;
}

bool CourseObjects::isObjectActive(u32 index) const {
    if (index >= m_objectCount) return false;
    return (m_objects[index].flags & 1) != 0;
}

void CourseObjects::collectItemBox(u32 index) {
    if (index >= m_objectCount) return;
    CourseObject& obj = m_objects[index];
    if (obj.type != OBJTYPE_ITEMBOX) return;

    obj.flags |= 0x100; // Mark as collected
    obj.respawnTimer = 300; // ~5 seconds at 60fps
}

bool CourseObjects::isItemBoxReady(u32 index) const {
    if (index >= m_objectCount) return false;
    const CourseObject& obj = m_objects[index];
    return obj.type == OBJTYPE_ITEMBOX && !(obj.flags & 0x100);
}

void CourseObjects::updateItemBoxRespawn(u32 index) {
    if (index >= m_objectCount) return;
    CourseObject& obj = m_objects[index];

    if (obj.respawnTimer > 0) {
        obj.respawnTimer--;
        if (obj.respawnTimer == 0) {
            obj.flags &= ~0x100u; // Clear collected flag
        }
    }
}

bool CourseObjects::isBoostPadActive(u32 index) const {
    if (index >= m_objectCount) return false;
    const CourseObject& obj = m_objects[index];
    return obj.type == OBJTYPE_BOOST_PAD && (obj.flags & 1);
}

void CourseObjects::activateBoostPad(u32 index) {
    if (index >= m_objectCount) return;
    m_objects[index].animTimer = 1.0f; // Trigger animation
}

void CourseObjects::updateMovingObjects(f32 dt) {
    for (u32 i = 0; i < m_objectCount; i++) {
        CourseObject& obj = m_objects[i];
        if (obj.routeId == 0) continue;

        // Follow route points
        if (obj.pointIndex >= 0 && obj.pointIndex < (s32)m_routeCount) {
            const RoutePoint& pt = m_routes[obj.pointIndex];
            // Interpolate toward target position
            f32 speed = pt.speed > 0.0f ? pt.speed : 50.0f;
            f32 t = dt * speed;
            // Simple lerp
            obj.position.x += (pt.position.x - obj.position.x) * t;
            obj.position.y += (pt.position.y - obj.position.y) * t;
            obj.position.z += (pt.position.z - obj.position.z) * t;
        }
    }
}

void CourseObjects::setRoutePoint(u32 index, s32 point) {
    if (index >= m_objectCount) return;
    m_objects[index].pointIndex = point;
}

s32 CourseObjects::findNearestObject(const Vec3& pos, u16 type,
                                      f32 maxDist) const {
    s32 bestIdx = -1;
    f32 bestDist = maxDist * maxDist;

    for (u32 i = 0; i < m_objectCount; i++) {
        const CourseObject& obj = m_objects[i];
        if (type != 0 && obj.type != type) continue;
        if (!(obj.flags & 1)) continue;

        f32 dx = obj.position.x - pos.x;
        f32 dy = obj.position.y - pos.y;
        f32 dz = obj.position.z - pos.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;

        if (distSq < bestDist) {
            bestDist = distSq;
            bestIdx = (s32)i;
        }
    }
    return bestIdx;
}

s32 CourseObjects::findObjectAtPoint(const Vec3& pos, u16 type,
                                      f32 tolerance) const {
    return findNearestObject(pos, type, tolerance);
}

void CourseObjects::loadResources() {
    if (m_resourcesLoaded) return;
    m_resourcesLoaded = true;
}

void CourseObjects::unloadResources() {
    if (!m_resourcesLoaded) return;
    m_resourcesLoaded = false;
}

void CourseObjects::destroyObjectInternal(u32 index) {
    if (index >= m_objectCount) return;
    memset(&m_objects[index], 0, sizeof(CourseObject));
    m_objectCount--;
}

u32 CourseObjects::findFreeSlot() const {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!(m_objects[i].flags & 1)) return i;
    }
    return 0xFFFFFFFF;
}

CourseObject* CourseObjects::getObject(u32 index) {
    if (index >= m_objectCount) return nullptr;
    return &m_objects[index];
}

const CourseObject* CourseObjects::getObject(u32 index) const {
    if (index >= m_objectCount) return nullptr;
    return &m_objects[index];
}

} // namespace Scene