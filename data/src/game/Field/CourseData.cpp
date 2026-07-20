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
{
    // Zero-initialize properties
    for (s32 i = 0; i < (s32)sizeof(CourseProperties); i++) {
        reinterpret_cast<u8*>(&mProperties)[i] = 0;
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

} // namespace Field
