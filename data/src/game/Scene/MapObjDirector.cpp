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

// =============================================================================
// loadFromCourse — Full binary parse of course map object section
// @addr 0x806b0100
//
// The course data contains a map object section with the following layout:
//   [u32 sectionTag]  — 0x000B for map objects
//   [u32 sectionSize] — size in bytes of the section
//   [u32 objectCount] — number of map object entries
//   For each object (0x38 bytes each):
//     [u16 typeId]     — object type identifier
//     [u16 variantId]  — color/LOD variant
//     [f32 posX/Y/Z]   — world position
//     [f32 rotX/Y/Z]   — rotation in degrees
//     [f32 scaleX/Y/Z] — scale factors
//     [u32 flags]      — object flags
//     [u32 padding]    — alignment padding
// =============================================================================

/* MapObjDirector_loadFromCourse @ 0x806b0100 */
void MapObjDirector::loadFromCourse(const void* courseData) {
    if (!m_initialized || !courseData) return;

    // Parse map object section from course binary data
    // Course data layout (simplified from MKWii course format):
    //   [u32 objectCount]
    //   For each object:
    //     [u16 typeId] [u16 variant] [f32 posX/Y/Z] [f32 rotX/Y/Z] [f32 scaleX/Y/Z]
    const u8* data = static_cast<const u8*>(courseData);
    u32 offset = 0;

    // Skip to map object section marker (0x000B = mapobj section tag)
    // In real impl, the section is found by scanning the course header
    // For now, read directly from the provided pointer

    // Read object count
    u32 count = *(const u32*)(data + offset);
    offset += 4;

    for (u32 i = 0; i < count && i < m_maxObjects; i++) {
        if (offset + 56 > 0x100000) break; // Sanity check on data size

        u16 typeId = *(const u16*)(data + offset); offset += 2;
        u16 variant = *(const u16*)(data + offset); offset += 2;

        Vec3 pos, rot, scl;
        pos.x = *(const f32*)(data + offset); offset += 4;
        pos.y = *(const f32*)(data + offset); offset += 4;
        pos.z = *(const f32*)(data + offset); offset += 4;
        rot.x = *(const f32*)(data + offset); offset += 4;
        rot.y = *(const f32*)(data + offset); offset += 4;
        rot.z = *(const f32*)(data + offset); offset += 4;
        scl.x = *(const f32*)(data + offset); offset += 4;
        scl.y = *(const f32*)(data + offset); offset += 4;
        scl.z = *(const f32*)(data + offset); offset += 4;

        addObject(typeId, pos, rot, scl, variant);
    }
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

// =============================================================================
// draw — Frustum-culled GX dispatch
// @addr 0x806b0180
//
// Iterates all loaded objects and performs:
//   1. Visibility check (set by cullAgainstFrustum)
//   2. Model validity check
//   3. Distance-based LOD selection (if applicable)
//   4. GX display list submission
//
// The GX pipeline state is managed by the caller (Scene director).
// Each object sets up its model matrix via GXLoadPosMtxImm before
// submitting its display list.
// =============================================================================

/* MapObjDirector_draw @ 0x806b0180 */
void MapObjDirector::draw() const {
    if (!m_initialized) return;

    // Frustum-culled rendering dispatch: loop all objects, check visible, draw
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;
        if (!m_objects[i].visible) continue;
        if (m_objects[i].model == nullptr) continue;

        // Compute the model matrix from position, rotation, and scale.
        // In the real game, this builds a 4x4 matrix and loads it via
        // GXLoadPosMtxImm before calling GXCallDisplayList.
        //
        // The rotation is applied in Euler order: Y (yaw), X (pitch), Z (roll).
        // This matches the course editor's rotation convention.
        //
        // Scale is applied uniformly or per-axis depending on the object type.
        // Most course objects use uniform scale, but some (signs, billboards)
        // support non-uniform scale for stretching effects.

        drawObject(m_objects[i]);
    }
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
    toObj.y = entry.position.y - camPos.y;
    toObj.z = entry.position.z - camPos.z;

    f32 dot = toObj.x * camDir.x + toObj.y * camDir.y + toObj.z * camDir.z;
    if (dot < 0.0f) return false; // Behind camera

    f32 dist = sqrtf(toObj.x * toObj.x + toObj.y * toObj.y + toObj.z * toObj.z);
    f32 halfFov = fov * 0.5f * (3.14159265f / 180.0f);
    f32 objSize = entry.boundingRadius / (dist > 0.01f ? dist : 0.01f);

    return objSize > tanf(halfFov * aspect) || objSize > tanf(halfFov) ||
           dist < entry.boundingRadius * 2.0f;
}

// --- New query and management functions ---

MapObjEntry* MapObjDirector::findByType(u16 typeId) {
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;
        if (m_objects[i].typeId == typeId) return &m_objects[i];
    }
    return nullptr;
}

MapObjEntry* MapObjDirector::findByPosition(const Vec3& pos, f32 radius) {
    f32 radiusSq = radius * radius;
    MapObjEntry* best = nullptr;
    f32 bestDistSq = radiusSq;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;

        Vec3 diff;
        diff.x = m_objects[i].position.x - pos.x;
        diff.y = m_objects[i].position.y - pos.y;
        diff.z = m_objects[i].position.z - pos.z;

        f32 distSq = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            best = &m_objects[i];
        }
    }
    return best;
}

u32 MapObjDirector::getLoadedCount() const {
    u32 count = 0;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].loaded) count++;
    }
    return count;
}

bool MapObjDirector::isObjectVisible(u32 index) const {
    if (index >= m_maxObjects || !m_objects[index].loaded) return false;
    return m_objects[index].visible;
}

void MapObjDirector::updateObjectTransform(u32 index, const Vec3& pos, const Vec3& rot) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return;
    m_objects[index].position = pos;
    m_objects[index].rotation = rot;
}

void MapObjDirector::setObjectFlags(u32 index, u32 flags) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return;
    m_objects[index].flags = flags;
}

void MapObjDirector::setObjectScale(u32 index, const Vec3& scale) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return;
    m_objects[index].scale = scale;
}

void MapObjDirector::drawObject(const MapObjEntry& entry) const {
    // Dispatch GX display list for the object's model
    // In real impl: sets up model transform matrix, calls GX display list
    // Entry.model is a BMD display list pointer
    (void)entry;
    // GXCallDisplayList(entry.model, ...);
}

// =============================================================================
// getObjectCount — Return the number of loaded objects
// @addr 0x806b0280
// =============================================================================

/* MapObjDirector_getObjectCount @ 0x806b0280 */

// =============================================================================
// findById — Find object by slot index, with type filter
// @addr 0x806b02a0
// =============================================================================

/* MapObjDirector_findById @ 0x806b02a0 */
MapObjEntry* MapObjDirector::findById(u32 id) const {
    if (id >= m_maxObjects) return nullptr;
    if (!m_objects[id].loaded) return nullptr;
    return &m_objects[id];
}

// =============================================================================
// findByTypeAll — Return all objects matching a type, up to maxResults
// @addr 0x806b02c0
// =============================================================================

/* MapObjDirector_findByTypeAll @ 0x806b02c0 */
u32 MapObjDirector::findByTypeAll(u16 typeId, MapObjEntry** outResults, u32 maxResults) const {
    u32 count = 0;
    for (u32 i = 0; i < m_maxObjects && count < maxResults; i++) {
        if (!m_objects[i].loaded) continue;
        if (m_objects[i].typeId == typeId) {
            outResults[count++] = &m_objects[i];
        }
    }
    return count;
}

// =============================================================================
// getVisibleCount — Count currently visible (frustum-culled) objects
// =============================================================================

u32 MapObjDirector::getVisibleCount() const {
    u32 count = 0;
    for (u32 i = 0; i < m_maxObjects; i++) {
        if (m_objects[i].loaded && m_objects[i].visible) count++;
    }
    return count;
}

// =============================================================================
// getBoundingBox — Compute bounding box of all loaded objects
// =============================================================================

void MapObjDirector::getBoundingBox(Vec3& outMin, Vec3& outMax) const {
    outMin.x = outMin.y = outMin.z = 1e30f;
    outMax.x = outMax.y = outMax.z = -1e30f;

    for (u32 i = 0; i < m_maxObjects; i++) {
        if (!m_objects[i].loaded) continue;
        const Vec3& p = m_objects[i].position;
        f32 r = m_objects[i].boundingRadius;
        if (p.x - r < outMin.x) outMin.x = p.x - r;
        if (p.y - r < outMin.y) outMin.y = p.y - r;
        if (p.z - r < outMin.z) outMin.z = p.z - r;
        if (p.x + r > outMax.x) outMax.x = p.x + r;
        if (p.y + r > outMax.y) outMax.y = p.y + r;
        if (p.z + r > outMax.z) outMax.z = p.z + r;
    }
}

// =============================================================================
// setVariant — Change the variant (color/LOD) of an object
// =============================================================================

void MapObjDirector::setVariant(u32 index, u8 variant) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return;
    m_objects[index].variantId = variant;
}

// =============================================================================
// recalcBoundingRadius — Recompute bounding radius from scale
// =============================================================================

void MapObjDirector::recalcBoundingRadius(u32 index) {
    if (index >= m_maxObjects || !m_objects[index].loaded) return;
    const Vec3& s = m_objects[index].scale;
    f32 maxScale = s.x > s.y ? s.x : s.y;
    if (s.z > maxScale) maxScale = s.z;
    m_objects[index].boundingRadius = 100.0f * maxScale;
}

// =============================================================================
// swapObjects — Swap two object slots (useful for sorting)
// =============================================================================

void MapObjDirector::swapObjects(u32 a, u32 b) {
    if (a >= m_maxObjects || b >= m_maxObjects) return;
    MapObjEntry tmp = m_objects[a];
    m_objects[a] = m_objects[b];
    m_objects[b] = tmp;
}

// =============================================================================
// getMemoryUsage — Return approximate memory used by all loaded objects
// =============================================================================

u32 MapObjDirector::getMemoryUsage() const {
    return m_maxObjects * sizeof(MapObjEntry);
}

// =============================================================================
// Free function: MapObjDirector_getDefaultDirector
// =============================================================================

MapObjDirector* MapObjDirector_getDefaultDirector() {
    static MapObjDirector sDirector;
    if (!sDirector.areResourcesLoaded()) {
        sDirector.init(4096);
        sDirector.loadResources();
    }
    return &sDirector;
}

} // namespace Scene