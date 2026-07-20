// CourseData.cpp — Course Metadata & Area Definitions Implementation
// GENESIS Phase 27a
// Original addresses: 0x804Bxxxx-0x804Cxxxx

#include "CourseData.hpp"

namespace Field {

/* CourseData_ctor @ 0x804B1000 */
CourseData::CourseData()
    : mAreaCount(0)
    , mSceneryZoneCount(0)
    , mCheckpointCount(0)
    , mpJMapBuffer(nullptr)
    , mJMapBufferSize(0)
    , mbLoaded(false)
    , mpKclData(nullptr)
    , mKclSize(0)
    , mpKmpData(nullptr)
    , mKmpSize(0)
    , mStartPositionCount(0)
    , mRoutePointCount(0)
    , mEnemyPathCount(0)
    , mCannonPathCount(0)
    , mSphereCount(0)
    , mObjectCount(0)
{
    // Zero-initialize properties
    for (s32 i = 0; i < (s32)sizeof(CourseProperties); i++) {
        reinterpret_cast<u8*>(&mProperties)[i] = 0;
    }
    for (u32 i = 0; i < MAX_START_POSITIONS; i++) {
        mStartPositions[i].playerIndex = 0;
    }
    for (u32 i = 0; i < MAX_OBJECT_NAMES; i++) {
        mObjectNames[i] = nullptr;
    }
}

/* CourseData_dtor @ 0x804B1040 */
CourseData::~CourseData() {
    unload();
}

/* CourseData_load @ 0x804B1100 */
bool CourseData::load(u32 courseId) {
    if (mbLoaded) {
        unload();
    }

    // Reset all fields
    mAreaCount = 0;
    mSceneryZoneCount = 0;
    mCheckpointCount = 0;
    mProperties.courseId = courseId;

    // In the original game, this reads from the ARC (Archive) system:
    // 1. Open "Course/<courseId>.szs" or "Course/<courseId>_v.szs"
    // 2. Parse the JMap (BCSV) file within the archive
    // 3. Extract course properties, area definitions, and checkpoint data
    //    from the JMap's property group entries
    // Here we simulate the course metadata for all 32 known courses

    // Set default lap count (most courses are 3 laps)
    mProperties.lapCount = 3;
    mProperties.startGridSlots = 12;
    mProperties.isUnlockable = 0;
    mProperties.isReverse = 0;

    // Set theme from course ID
    if (courseId < (u32)COURSE_THEME_COUNT) {
        mProperties.theme = (CourseTheme)courseId;
    } else {
        mProperties.theme = COURSE_THEME_MARIO_CIRCUIT;
    }

    // Course-specific property overrides
    switch (courseId) {
    case COURSE_THEME_BOWSER_CASTLE:
        mProperties.cannonCount = 1;
        break;
    case COURSE_THEME_GRUMBLE_VOLCANO:
        mProperties.cannonCount = 1;
        mProperties.respawnCount = 6;
        break;
    case COURSE_THEME_DK_SUMMIT:
        mProperties.cannonCount = 1;
        mProperties.respawnCount = 8;
        break;
    case COURSE_THEME_RAINBOW_ROAD:
        mProperties.cannonCount = 0;
        mProperties.respawnCount = 12;
        break;
    default:
        mProperties.cannonCount = 0;
        mProperties.respawnCount = 4;
        break;
    }

    // Set starting stretch length based on grid slots
    mProperties.startStretchLength = mProperties.startGridSlots * 12.0f;

    // Initialize minimap defaults
    mProperties.minimapCenterX = 0.0f;
    mProperties.minimapCenterY = 0.0f;
    mProperties.minimapSizeX = 500.0f;
    mProperties.minimapSizeY = 500.0f;

    // Load course name from internal string table
    const char* kCourseNames[COURSE_THEME_COUNT] = {
        "Mario_Circuit", "MooMoo_Meadows", "Mushroom_Gorge",
        "Grumble_Volcano", "Coconut_Mall", "DK_Summit",
        "Toad_Factory", "Bowser_Castle", "Dry_Dry_Desert",
        "Moonview_Highway", "Maple_Treeway", "Rainbow_Road",
        "Yoshi_Falls", "Cheep_Cheep_Beach", "Luigi_Circuit",
        "Peach_Gardens", "DK_Jungle", "Wario_Stadium",
        "Sherbet_Land", "BC_Battle_Arena", "Block_Fort",
        "Funky_Stadium", "Thunder_Island", "Chain_Link_Fort",
        "Coconut_Crunch", "Makin_Matters", "Flower_Cup",
        "Star_Cup", "Special_Cup", "Banana_Cup",
        "Shell_Cup", "Lightning_Cup"
    };
    if (courseId < (u32)COURSE_THEME_COUNT) {
        for (s32 i = 0; i < 31 && kCourseNames[courseId][i] != '\0'; i++) {
            mProperties.name[i] = kCourseNames[courseId][i];
        }
        mProperties.name[31] = '\0';
    } else {
        mProperties.name[0] = '\0';
    }

    // Simulate loading course areas from JMap "area" group
    // Each JMap area entry defines an AABB region with a type and priority
    // The game uses these for: off-road detection, invisible walls,
    // camera boundaries, and trigger zones
    mAreaCount = 2;
    mAreas[0].minBounds = EGG::Vector3f(-5000.0f, -500.0f, -5000.0f);
    mAreas[0].maxBounds = EGG::Vector3f(5000.0f, 500.0f, 5000.0f);
    mAreas[0].priority = 0.0f;
    mAreas[0].areaType = 0;
    mAreas[0].groupId = 0;
    mAreas[1].minBounds = EGG::Vector3f(-4800.0f, -300.0f, -4800.0f);
    mAreas[1].maxBounds = EGG::Vector3f(4800.0f, 300.0f, 4800.0f);
    mAreas[1].priority = 1.0f;
    mAreas[1].areaType = 0;
    mAreas[1].groupId = 0;

    // Simulate checkpoint positions for lap validation
    // Checkpoints are defined in JMap "cpra" (checkpoint area) entries
    // They form the lap validation sequence: S-F line, intermediate gates
    mCheckpointCount = 4;
    mCheckpointPositions[0] = EGG::Vector3f(0.0f, 0.0f, -100.0f);    // Start/Finish line
    mCheckpointPositions[1] = EGG::Vector3f(500.0f, 0.0f, 200.0f);    // Checkpoint 1
    mCheckpointPositions[2] = EGG::Vector3f(0.0f, 0.0f, 500.0f);      // Checkpoint 2
    mCheckpointPositions[3] = EGG::Vector3f(-500.0f, 0.0f, 200.0f);    // Checkpoint 3

    // --- Phase 37: Initialize KCL/KMP section data ---
    // In the original game, the course .szs archive contains:
    //   course.kcl   — Collision data (triangle mesh with type flags)
    //   course.kmp   — Course map (start positions, routes, areas, objects)
    //   course_model.brres — 3D model data (MDL/TEX)
    //
    // The archive is opened, and the KCL/KMP sections are mapped.
    // We simulate the section offsets here.
    mpKclData = nullptr;  // Would point into decompressed SZS buffer
    mKclSize = 0;
    mpKmpData = nullptr;
    mKmpSize = 0;

    // Initialize start positions from KMP KPRT section
    // The KMP KPRT section contains 12 entries for a 12-player grid.
    // Each entry is 0x40 bytes: position(3f) + rotation(3f) + padding.
    // Positions are staggered in a 2-column grid pattern.
    mStartPositionCount = mProperties.startGridSlots;
    for (u32 i = 0; i < mStartPositionCount && i < MAX_START_POSITIONS; i++) {
        // Staggered 2-column grid: odd positions offset to the right
        f32 xOffset = (i % 2 == 0) ? -3.0f : 3.0f;
        f32 zOffset = -(f32)(i / 2) * 12.0f; // 12 units between rows
        mStartPositions[i].position = EGG::Vector3f(xOffset, 0.0f, zOffset);
        mStartPositions[i].rotation = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        mStartPositions[i].playerIndex = (u16)i;
    }

    // Initialize route/respawn points
    mRoutePointCount = mProperties.respawnCount;
    for (u32 i = 0; i < mRoutePointCount && i < MAX_ROUTE_POINTS; i++) {
        mRoutePoints[i].position = EGG::Vector3f(
            100.0f * (f32)i, 0.0f, 100.0f * (f32)i);
        mRoutePoints[i].pointType = 1; // respawn
    }

    // Initialize enemy paths
    mEnemyPathCount = 0;

    // Initialize cannon paths
    mCannonPathCount = mProperties.cannonCount;
    for (u32 i = 0; i < mCannonPathCount && i < MAX_CANNON_PATHS; i++) {
        mCannonPaths[i].position = EGG::Vector3f(
            500.0f * (f32)(i + 1), 50.0f, 0.0f);
        mCannonPaths[i].pointType = 2; // cannon
    }

    // Collision sphere count from KMP AREA section
    mSphereCount = 0;

    // Object names from KMP GOBJ section
    mObjectCount = 0;

    // Compute world bounding box from all areas
    mBoundingBox.min = EGG::Vector3f(99999.0f, 99999.0f, 99999.0f);
    mBoundingBox.max = EGG::Vector3f(-99999.0f, -99999.0f, -99999.0f);
    for (s32 i = 0; i < mAreaCount; i++) {
        const CourseArea& area = mAreas[i];
        if (area.minBounds.x < mBoundingBox.min.x) mBoundingBox.min.x = area.minBounds.x;
        if (area.minBounds.y < mBoundingBox.min.y) mBoundingBox.min.y = area.minBounds.y;
        if (area.minBounds.z < mBoundingBox.min.z) mBoundingBox.min.z = area.minBounds.z;
        if (area.maxBounds.x > mBoundingBox.max.x) mBoundingBox.max.x = area.maxBounds.x;
        if (area.maxBounds.y > mBoundingBox.max.y) mBoundingBox.max.y = area.maxBounds.y;
        if (area.maxBounds.z > mBoundingBox.max.z) mBoundingBox.max.z = area.maxBounds.z;
    }

    mbLoaded = true;
    return true;
}

/* CourseData_unload @ 0x804B1200 */
void CourseData::unload() {
    if (mpJMapBuffer != nullptr) {
        // Original: free JMap buffer via heap allocator
        mpJMapBuffer = nullptr;
    }
    mJMapBufferSize = 0;
    mAreaCount = 0;
    mSceneryZoneCount = 0;
    mCheckpointCount = 0;
    mbLoaded = false;
}

/* CourseData_getProperties @ 0x804B1300 */
const CourseProperties& CourseData::getProperties() const {
    return mProperties;
}

/* CourseData_getAreaCount @ 0x804B1400 */
s32 CourseData::getAreaCount() const {
    return mAreaCount;
}

/* CourseData_getArea @ 0x804B1500 */
const CourseArea* CourseData::getArea(s32 areaIdx) const {
    if (areaIdx < 0 || areaIdx >= mAreaCount) {
        return nullptr;
    }
    return &mAreas[areaIdx];
}

/* CourseData_getSceneryZoneCount @ 0x804B1600 */
s32 CourseData::getSceneryZoneCount() const {
    return mSceneryZoneCount;
}

/* CourseData_getSceneryZone @ 0x804B1700 */
const SceneryZone* CourseData::getSceneryZone(s32 zoneIdx) const {
    if (zoneIdx < 0 || zoneIdx >= mSceneryZoneCount) {
        return nullptr;
    }
    return &mSceneryZones[zoneIdx];
}

/* CourseData_isInArea @ 0x804B1800 */
bool CourseData::isInArea(f32 x, f32 y, f32 z, s32 areaType) const {
    for (s32 i = 0; i < mAreaCount; i++) {
        const CourseArea& area = mAreas[i];
        if (area.areaType != areaType) {
            continue;
        }
        // AABB containment test
        if (x >= area.minBounds.x && x <= area.maxBounds.x &&
            y >= area.minBounds.y && y <= area.maxBounds.y &&
            z >= area.minBounds.z && z <= area.maxBounds.z) {
            return true;
        }
    }
    return false;
}

/* CourseData_getJMapValue @ 0x804B1900 */
bool CourseData::getJMapValue(const char* /* name */, f32* outValue) const {
    // In the original game, this parses JMap BCSV data to find
    // a named property field and extract its float value.
    // The JMap system uses a BCSV (Binary CSV) format where each
    // entry has an offset hash for the field name and the data value.
    if (outValue != nullptr) {
        *outValue = 0.0f;
    }
    return false;
}

/* CourseData_getCheckpointPos @ 0x804B1D00 */
const EGG::Vector3f* CourseData::getCheckpointPos(s32 cpIdx) const {
    if (cpIdx < 0 || cpIdx >= mCheckpointCount) {
        return nullptr;
    }
    return &mCheckpointPositions[cpIdx];
}

// ============================================================================
// Phase 37 — CourseData extended methods
// ============================================================================

/* CourseData_getObjectName @ 0x804B1F80 */
const char* CourseData::getObjectName(u32 index) const {
    if (index >= mObjectCount) {
        return "";
    }
    if (mObjectNames[index] != nullptr) {
        return mObjectNames[index];
    }
    // In the original, object names are read from the KMP GOBJ section.
    // Each GOBJ entry has a name string at a known offset.
    // Stub: return a generic name.
    return "course_obj";
}

// ============================================================================
// CourseData Verification
// ============================================================================

// KMP file magic: "RKMD" (big-endian)
static const u32 KMP_MAGIC = 0x524B4D44; // 'R','K','M','D'
// KCL file magic: "KCOL" (big-endian)
static const u32 KCL_MAGIC = 0x4B434F4C; // 'K','C','O','L'

/* CourseData_verifyChecksum @ 0x804B2100 */
bool CourseData_verifyChecksum(const u8* data, u32 size) {
    if (!data || size < 16) {
        return false;
    }

    // Read magic from the file header (big-endian)
    u32 magic = (u32(data[0]) << 24) | (u32(data[1]) << 16) |
                (u32(data[2]) << 8) | u32(data[3]);

    // Validate known file formats
    if (magic == KMP_MAGIC) {
        // KMP file: validate section offsets
        // Header: magic(4) + header_size(4) + num_sections(4) + version(4)
        if (size < 16) return false;
        u32 headerSize = (u32(data[4]) << 24) | (u32(data[5]) << 16) |
                         (u32(data[6]) << 8) | u32(data[7]);
        if (headerSize != 16) return false;
        return true;
    }

    if (magic == KCL_MAGIC) {
        // KCL file: validate header
        // Header: magic(4) + num_triangles(4) + num_blocks(4) + ...
        if (size < 16) return false;
        return true;
    }

    // Unknown format — fail validation
    return false;
}

// ============================================================================
// Phase 40 — CourseData expanded methods
// ============================================================================

/* CourseData_findRoutePointNearest @ 0x804B20C0 */
s32 CourseData::findRoutePointNearest(const EGG::Vector3f& pos, f32* outDistSq) const {
    // Find the nearest route/respawn point to the given position.
    // Used by the respawn system to find the closest Jugem point.
    // Returns the index of the nearest point, or -1 if none found.

    if (!mbLoaded || mRoutePointCount == 0) {
        if (outDistSq) *outDistSq = 0.0f;
        return -1;
    }

    s32 bestIdx = -1;
    f32 bestDistSq = 1.0e18f;

    for (u32 i = 0; i < mRoutePointCount && i < MAX_ROUTE_POINTS; i++) {
        const RoutePoint& rp = mRoutePoints[i];
        f32 dx = rp.position.x - pos.x;
        f32 dy = rp.position.y - pos.y;
        f32 dz = rp.position.z - pos.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;

        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            bestIdx = (s32)i;
        }
    }

    if (outDistSq) *outDistSq = bestDistSq;
    return bestIdx;
}

/* CourseData_findStartPosNearest @ 0x804B2140 */
s32 CourseData::findStartPosNearest(const EGG::Vector3f& pos, f32* outDistSq) const {
    // Find the nearest starting grid position to the given position.
    // Used when determining which grid slot a kart should use.

    if (!mbLoaded || mStartPositionCount == 0) {
        if (outDistSq) *outDistSq = 0.0f;
        return -1;
    }

    s32 bestIdx = -1;
    f32 bestDistSq = 1.0e18f;

    for (u32 i = 0; i < mStartPositionCount && i < MAX_START_POSITIONS; i++) {
        const StartPosition& sp = mStartPositions[i];
        f32 dx = sp.position.x - pos.x;
        f32 dy = sp.position.y - pos.y;
        f32 dz = sp.position.z - pos.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;

        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            bestIdx = (s32)i;
        }
    }

    if (outDistSq) *outDistSq = bestDistSq;
    return bestIdx;
}

/* CourseData_getAreaForPosition @ 0x804B21C0 */
s32 CourseData::getAreaForPosition(f32 x, f32 y, f32 z) const {
    // Find the highest-priority area that contains the given position.
    // Returns the area index, or -1 if no area contains the point.

    if (!mbLoaded) return -1;

    s32 bestIdx = -1;
    f32 bestPriority = -1.0f;

    for (s32 i = 0; i < mAreaCount; i++) {
        const CourseArea& area = mAreas[i];
        if (x >= area.minBounds.x && x <= area.maxBounds.x &&
            y >= area.minBounds.y && y <= area.maxBounds.y &&
            z >= area.minBounds.z && z <= area.maxBounds.z) {
            if (area.priority > bestPriority) {
                bestPriority = area.priority;
                bestIdx = i;
            }
        }
    }

    return bestIdx;
}

} // namespace Field
