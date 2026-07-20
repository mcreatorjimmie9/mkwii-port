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

// Start position data (from KMP KPRT section)
struct StartPosition {
    EGG::Vector3f position;     // Grid position
    EGG::Vector3f rotation;     // Facing direction (Euler angles)
    u16 playerIndex;            // 0-11 for 12-player grid
};

// Route point (from KMP RPPN / RPKP sections)
struct RoutePoint {
    EGG::Vector3f position;
    u8 pointType;               // 0=route, 1=respawn, 2=cannon
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

// World-space bounding box
struct CourseBoundingBox {
    EGG::Vector3f min;
    EGG::Vector3f max;
};

// Course descriptor — full course metadata container
class CourseData {
public:
    /* CourseData_ctor @ 0x804B1000 */
    CourseData();
    /* CourseData_dtor @ 0x804B1040 */
    ~CourseData();

    // Load course data from JMap for a given course ID
    // Parses course file header, reads section offsets (KCL, KMP, MDL, TEX)
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

    // --- Phase 37 additions ---

    // Get KCL collision data pointer and size
    // @addr 0x804B1E00
    const u8* getKclData() const { return mpKclData; }
    u32 getKclSize() const { return mKclSize; }

    // Get KMP course map data
    // @addr 0x804B1E40
    const u8* getKmpData() const { return mpKmpData; }
    u32 getKmpSize() const { return mKmpSize; }

    // Get start positions from KMP KPRT section
    // @addr 0x804B1E80
    const StartPosition* getStartPositions() const { return mStartPositions; }
    u32 getStartPositionCount() const { return mStartPositionCount; }

    // Get checkpoint positions array
    // @addr 0x804B1EC0
    const EGG::Vector3f* getCheckpointPositions() const { return mCheckpointPositions; }

    // Get route/respawn points from KMP
    // @addr 0x804B1F00
    const RoutePoint* getRoutePoints() const { return mRoutePoints; }
    u32 getRoutePointCount() const { return mRoutePointCount; }

    // Get area count (same as getAreaCount, alias for KMP compatibility)
    // @addr 0x804B1F40
    u32 getAreaCountU32() const { return (u32)mAreaCount; }

    // Get object name from KMP GOBJ section
    // @addr 0x804B1F80
    const char* getObjectName(u32 index) const;

    // Get enemy route paths from KMP ENPT section
    // @addr 0x804B1FC0
    const RoutePoint* getEnemyPaths() const { return mEnemyPaths; }
    u32 getEnemyPathCount() const { return mEnemyPathCount; }

    // Get cannon blast paths from KMP CNPT section
    // @addr 0x804B2000
    const RoutePoint* getCannonPaths() const { return mCannonPaths; }
    u32 getCannonPathCount() const { return mCannonPathCount; }

    // Get collision sphere count from KMP
    // @addr 0x804B2040
    u32 getSphereCount() const { return mSphereCount; }

    // Get course world bounding box
    // @addr 0x804B2080
    CourseBoundingBox getBoundingBox() const { return mBoundingBox; }

    // Get object count from KMP GOBJ section
    u32 getObjectCount() const { return mObjectCount; }

private:
    static const s32 MAX_COURSE_AREAS = 32;
    static const s32 MAX_SCENERY_ZONES = 64;
    static const s32 MAX_CHECKPOINTS = 64;
    static const u32 MAX_START_POSITIONS = 12;  // MAX_PLAYER_COUNT
    static const u32 MAX_ROUTE_POINTS = 256;
    static const u32 MAX_ENEMY_PATHS = 128;
    static const u32 MAX_CANNON_PATHS = 16;
    static const u32 MAX_OBJECT_NAMES = 256;

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

    // --- Phase 37: KCL/KMP/Section data ---
    const u8* mpKclData;        // KCL collision binary data
    u32 mKclSize;               // KCL data size in bytes
    const u8* mpKmpData;        // KMP course map binary data
    u32 mKmpSize;               // KMP data size in bytes

    // Start positions from KMP KPRT section
    StartPosition mStartPositions[MAX_START_POSITIONS];
    u32 mStartPositionCount;

    // Route and respawn points from KMP RPPN/RPKP
    RoutePoint mRoutePoints[MAX_ROUTE_POINTS];
    u32 mRoutePointCount;

    // Enemy paths from KMP ENPT
    RoutePoint mEnemyPaths[MAX_ENEMY_PATHS];
    u32 mEnemyPathCount;

    // Cannon paths from KMP CNPT
    RoutePoint mCannonPaths[MAX_CANNON_PATHS];
    u32 mCannonPathCount;

    // Collision sphere count from KMP
    u32 mSphereCount;

    // Course world bounds (computed from all areas)
    CourseBoundingBox mBoundingBox;

    // Object names from KMP GOBJ section
    const char* mObjectNames[MAX_OBJECT_NAMES];
    u32 mObjectCount;
};

// Validate course data integrity (checksum, magic, section offsets)
// @addr 0x804B2100
bool CourseData_verifyChecksum(const u8* data, u32 size);

} // namespace Field
