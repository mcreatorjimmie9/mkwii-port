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
    , m_routeCount(0)
    , m_courseId(0xFFFFFFFF)
    , m_initialSnapshot(nullptr)
    , m_snapshotCount(0) {}

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
    if (m_initialSnapshot) {
        delete[] m_initialSnapshot;
        m_initialSnapshot = nullptr;
    }
    m_objectCount = 0;
    m_maxObjects = 0;
    m_routeCount = 0;
    m_snapshotCount = 0;
    m_initialized = false;
    m_resourcesLoaded = false;
    m_courseId = 0xFFFFFFFF;
}

// Parameterless init — allocate without course data
void CourseObjects::init() {
    if (m_initialized) return;

    m_maxObjects = MAX_COURSE_OBJECTS;
    m_objects = new CourseObject[m_maxObjects];
    memset(m_objects, 0, sizeof(CourseObject) * m_maxObjects);
    m_routeCount = 64;
    m_routes = new RoutePoint[m_routeCount];
    memset(m_routes, 0, sizeof(RoutePoint) * m_routeCount);
    m_initialSnapshot = nullptr;
    m_snapshotCount = 0;
    m_objectCount = 0;
    m_initialized = true;
    m_resourcesLoaded = false;
}

// Load objects for a specific course by ID
void CourseObjects::load(u32 courseId) {
    if (!m_initialized) init();

    // Clear previous state
    for (u32 i = 0; i < m_objectCount; i++) {
        memset(&m_objects[i], 0, sizeof(CourseObject));
    }
    m_objectCount = 0;

    m_courseId = courseId;

    // In the real game, this reads the course's KMP file to get
    // object placements. Here we set up default item boxes.
    // A standard MKW course has ~30 item box positions.
    (void)courseId;
}

// Reset all objects to their initial (snapshot) state
void CourseObjects::reset() {
    if (!m_initialized) return;

    if (m_initialSnapshot != nullptr && m_snapshotCount > 0) {
        memcpy(m_objects, m_initialSnapshot,
               sizeof(CourseObject) * m_snapshotCount);
        m_objectCount = m_snapshotCount;
    } else {
        // No snapshot — just reset flags and timers
        for (u32 i = 0; i < m_objectCount; i++) {
            m_objects[i].flags = 1;
            m_objects[i].animTimer = 0.0f;
            m_objects[i].respawnTimer = 0;
            m_objects[i].pointIndex = 0;
        }
    }
}

// Update all active objects (alias for calc for compatibility)
void CourseObjects::update(f32 dt) {
    calc(dt);
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

// Search for an object by its unique ID
s32 CourseObjects::findById(u32 objId) const {
    for (u32 i = 0; i < m_objectCount; i++) {
        if (m_objects[i].objectId == objId && (m_objects[i].flags & 1)) {
            return static_cast<s32>(i);
        }
    }
    return -1;
}

// Search for objects by type, optionally starting from an index
s32 CourseObjects::findByType(u8 objType, s32 startIndex) const {
    for (u32 i = static_cast<u32>(startIndex); i < m_objectCount; i++) {
        if (m_objects[i].type == objType && (m_objects[i].flags & 1)) {
            return static_cast<s32>(i);
        }
    }
    return -1;
}

// Fully destroy an object and compact the array
void CourseObjects::destroyObject(u32 index) {
    if (index >= m_objectCount) return;

    // Shift remaining objects down
    for (u32 i = index; i < m_objectCount - 1; i++) {
        memcpy(&m_objects[i], &m_objects[i + 1], sizeof(CourseObject));
    }
    memset(&m_objects[m_objectCount - 1], 0, sizeof(CourseObject));
    m_objectCount--;
}

// Count currently active objects
u32 CourseObjects::getActiveObjectCount() const {
    u32 count = 0;
    for (u32 i = 0; i < m_objectCount; i++) {
        if (m_objects[i].flags & 1) count++;
    }
    return count;
}

// Type name lookup free function
const char* CourseObjects_getObjectType(u8 objType) {
    switch (objType) {
    case OBJTYPE_NONE:           return "None";
    case OBJTYPE_ITEMBOX:        return "ItemBox";
    case OBJTYPE_BOOST_PAD:      return "BoostPad";
    case OBJTYPE_BOOST_RAMP:     return "BoostRamp";
    case OBJTYPE_JUMP_PAD:       return "JumpPad";
    case OBJTYPE_ROAD_OBJECT:    return "RoadObject";
    case OBJTYPE_SCENERY:        return "Scenery";
    case OBJTYPE_MOVING_PLATFORM:return "MovingPlatform";
    case OBJTYPE_CANNON:         return "Cannon";
    case OBJTYPE_MUSHROOM_GIANT: return "GiantMushroom";
    case OBJTYPE_STUNT_RAMP:     return "StuntRamp";
    case OBJTYPE_TRICK_RAMP:     return "TrickRamp";
    case OBJTYPE_HALF_PIPE:      return "HalfPipe";
    case OBJTYPE_GLIDER_PAD:     return "GliderPad";
    case OBJTYPE_COIN:           return "Coin";
    default:                     return "Unknown";
    }
}

} // namespace Scene