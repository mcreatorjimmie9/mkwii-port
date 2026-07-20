#pragma once
// CourseData.hpp — Course Metadata & Area Definitions
// GENESIS Phase 27: Course descriptor, area bounds, scenery/object placement
// Original addresses: 0x804Bxxxx-0x804Cxxxx
//
// Manages per-course metadata including JMap area definitions, scenery
// placement zones, minimap bounds, course properties (theme, lap count,
// cannon count, respawn count), and property accessors.

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Field {

// Course theme / environment type (maps to JMap property "cource")
enum CourseTheme {
    COURSE_THEME_MARIO_CIRCUIT   = 0,
    COURSE_THEME_MOO_MOO_MEADOWS = 1,
    COURSE_THEME_MUSHROOM_GORGE  = 2,
    COURSE_THEME_GRUMBLE_VOLCANO = 3,
    COURSE_THEME_COCONUT_MALL    = 4,
    COURSE_THEME_DK_SUMMIT       = 5,
    COURSE_THEME_TOAD_FACTORY    = 6,
    COURSE_THEME_BOWSER_CASTLE   = 7,
    COURSE_THEME_DRY_DRY_DESERT  = 8,
    COURSE_THEME_MOONVIEW_HIGHWAY= 9,
    COURSE_THEME_MAPLE_TREWAY    = 10,
    COURSE_THEME_RAINBOW_ROAD    = 11,
    COURSE_THEME_YOSHI_FALLS     = 12,
    COURSE_THEME_CHEEP_CHEEP_BEACH = 13,
    COURSE_THEME_LUIGI_CIRCUIT   = 14,
    COURSE_THEME_PEACH_GARDENS   = 15,
    COURSE_THEME_DK_JUNGLE       = 16,
    COURSE_THEME_WARIO_STADIUM   = 17,
    COURSE_THEME_SHERBET_LAND     = 18,
    COURSE_THEME_BC_BATTLE_ARENA = 19,
    COURSE_THEME_BLOCK_FORT       = 20,
    COURSE_THEME_FUNKY_STADIUM   = 21,
    COURSE_THEME_THUNDER_ISLAND   = 22,
    COURSE_THEME_CHAIN_LINK_FORT = 23,
    COURSE_THEME_COCONUT_CRUNCH  = 24,
    COURSE_THEME_MAKIN_MATTERS   = 25,
    COURSE_THEME_FLOWER_CUP      = 26,
    COURSE_THEME_STAR_CUP        = 27,
    COURSE_THEME_SPECIAL_CUP     = 28,
    COURSE_THEME_BANANA_CUP      = 29,
    COURSE_THEME_SHELL_CUP       = 30,
    COURSE_THEME_LIGHTNING_CUP    = 31,
    COURSE_THEME_COUNT           = 32,
};

// Course area definition (from JMap "area" entries)
struct CourseArea {
    EGG::Vector3f minBounds;    // AABB minimum corner
    EGG::Vector3f maxBounds;    // AABB maximum corner
    f32 priority;                // Area priority (higher = more important)
    s32 areaType;               // 0=general, 1=off-road, 2=invisible wall
    s32 groupId;                // JMap group this area belongs to
};

// Scenery placement zone (where background objects spawn)
struct SceneryZone {
    EGG::Vector3f position;     // Zone center position
    f32 radius;                 // Zone spawn radius
    s32 sceneryType;            // Type of scenery to place
    s32 density;                // Number of objects in zone
};

// Course properties block — read from JMap root properties
struct CourseProperties {
    u32 courseId;               // Course ID (0-indexed)
    CourseTheme theme;          // Course theme enum
    u8 lapCount;                // Default lap count (3 for most courses)
    u8 cannonCount;             // Number of cannons on course
    u8 respawnCount;            // Number of respawn points
    u8 startGridSlots;          // Starting grid positions (12 max)
    f32 startStretchLength;     // Length of starting straight
    f32 minimapCenterX;        // Minimap center X
    f32 minimapCenterY;        // Minimap center Y
    f32 minimapSizeX;          // Minimap width
    f32 minimapSizeY;          // Minimap height
    u8 isUnlockable;            // 1 if course is locked initially
    u8 isReverse;               // 1 if reverse variant
    char name[32];             // Internal course name
};

// Course descriptor — full course metadata container
class CourseData {
public:
    /* CourseData_ctor @ 0x804B1000 */
    CourseData();
    /* CourseData_dtor @ 0x804B1040 */
    ~CourseData();

    // Load course data from JMap for a given course ID
    /* CourseData_load @ 0x804B1100 */
    bool load(u32 courseId);

    // Unload current course data
    /* CourseData_unload @ 0x804B1200 */
    void unload();

    // Get course properties (read-only)
    /* CourseData_getProperties @ 0x804B1300 */
    const CourseProperties& getProperties() const;

    // Get number of defined course areas
    /* CourseData_getAreaCount @ 0x804B1400 */
    s32 getAreaCount() const;

    // Get course area by index
    /* CourseData_getArea @ 0x804B1500 */
    const CourseArea* getArea(s32 areaIdx) const;

    // Get number of scenery zones
    /* CourseData_getSceneryZoneCount @ 0x804B1600 */
    s32 getSceneryZoneCount() const;

    // Get scenery zone by index
    /* CourseData_getSceneryZone @ 0x804B1700 */
    const SceneryZone* getSceneryZone(s32 zoneIdx) const;

    // Query if a world position is inside any course area
    /* CourseData_isInArea @ 0x804B1800 */
    bool isInArea(f32 x, f32 y, f32 z, s32 areaType) const;

    // Get JMap property value by name
    /* CourseData_getJMapValue @ 0x804B1900 */
    bool getJMapValue(const char* name, f32* outValue) const;

    // Get course theme
    /* CourseData_getTheme @ 0x804B1A00 */
    CourseTheme getTheme() const { return mProperties.theme; }

    // Get lap count for current course
    /* CourseData_getLapCount @ 0x804B1B00 */
    u8 getLapCount() const { return mProperties.lapCount; }

    // Get cannon count
    u8 getCannonCount() const { return mProperties.cannonCount; }

    // Get total number of checkpoint sequences
    /* CourseData_getCheckpointCount @ 0x804B1C00 */
    s32 getCheckpointCount() const { return mCheckpointCount; }

    // Get checkpoint positions for lap validation
    /* CourseData_getCheckpointPos @ 0x804B1D00 */
    const EGG::Vector3f* getCheckpointPos(s32 cpIdx) const;

private:
    static const s32 MAX_COURSE_AREAS = 32;
    static const s32 MAX_SCENERY_ZONES = 64;
    static const s32 MAX_CHECKPOINTS = 64;

    CourseProperties mProperties;
    CourseArea mAreas[MAX_COURSE_AREAS];
    s32 mAreaCount;
    SceneryZone mSceneryZones[MAX_SCENERY_ZONES];
    s32 mSceneryZoneCount;
    EGG::Vector3f mCheckpointPositions[MAX_CHECKPOINTS];
    s32 mCheckpointCount;
    u8* mpJMapBuffer;          // Raw JMap data buffer
    u32 mJMapBufferSize;       // Size of loaded JMap data
    bool mbLoaded;              // Course data loaded flag
};

} // namespace Field
