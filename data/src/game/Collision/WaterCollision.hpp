#pragma once
// WaterCollision.hpp — Water Surface Detection & Buoyancy Physics
// GENESIS Phase 29: Manages water surface interactions including:
//   - Water zone detection from JMap water areas
//   - Buoyancy force calculation based on kart submersion
//   - Water entry/exit splash effects
//   - Speed penalty while driving through water
//   - Lakitu rescue trigger when fully submerged
// Original addresses: 0x804Cxxxx-0x804Dxxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Collision {

// Water zone definition (from JMap "water" area entries)
struct WaterZone {
    EGG::Vector3f minBounds;    // AABB minimum corner
    EGG::Vector3f maxBounds;    // AABB maximum corner
    f32 waterLevel;              // Water surface Y height
    f32 flowSpeed;              // Current flow speed (0 = still water)
    EGG::Vector3f flowDirection; // Current flow direction
    s32 zoneId;                  // Water zone ID
    u8 isToxic;                 // 1 = lava/slush (instant Lakitu rescue)
    u8 isDeep;                  // 1 = deep water (faster speed penalty)
};

// Per-player water interaction state
struct PlayerWaterState {
    bool mbInWater;              // Player is currently in water zone
    bool mbFullySubmerged;       // Kart is completely underwater
    bool mbWasOnLand;            // Was on land last frame (for entry detection)
    s32 activeZoneId;            // Active water zone (-1 = none)
    f32 submersionDepth;         // How deep the kart is below surface
    f32 waterTimer;              // Time spent in water (for rescue trigger)
    f32 entrySpeed;              // Speed at water entry (for splash intensity)
    EGG::Vector3f lastWaterNormal; // Water surface normal at last check
    u8 splashEffectId;          // Visual effect ID for splash
};

// WaterCollision — manages water zones and player water interactions
class WaterCollision {
public:
    /* WaterCollision_ctor @ 0x804D1000 */
    WaterCollision();
    /* WaterCollision_dtor @ 0x804D1040 */
    ~WaterCollision();

    // Initialize water collision for a course
    /* WaterCollision_init @ 0x804D1080 */
    void init(u32 courseId);

    // Load water zones from course data
    /* WaterCollision_loadZones @ 0x804D1100 */
    bool loadZones();

    // Update water collision for a player
    /* WaterCollision_update @ 0x804D1200 */
    void update(s32 playerIdx, const EGG::Vector3f& playerPos,
                const EGG::Vector3f& playerVel, f32 boundingRadius);

    // Calculate buoyancy force for a submerged kart
    /* WaterCollision_calcBuoyancy @ 0x804D1300 */
    EGG::Vector3f calcBuoyancy(s32 playerIdx, const EGG::Vector3f& playerPos,
                               f32 kartMass);

    // Get speed penalty multiplier for driving in water
    /* WaterCollision_getSpeedMultiplier @ 0x804D1400 */
    f32 getSpeedMultiplier(s32 playerIdx) const;

    // Check if a player needs Lakitu rescue (fully submerged too long)
    /* WaterCollision_needsRescue @ 0x804D1500 */
    bool needsRescue(s32 playerIdx) const;

    // Get water state for a player
    const PlayerWaterState& getPlayerState(s32 playerIdx) const;

    // Get number of water zones
    s32 getZoneCount() const { return mZoneCount; }

    // Reset all player states
    void reset();

    /// Check if a player's position contacts any water plane
    /* WaterCollision_detectWater @ 0x804D1600 */
    bool detectWater(s32 playerIdx, const EGG::Vector3f& playerPos) const;

    /// Calculate water entry effects: splash intensity, speed reduction
    /* WaterCollision_calcWaterEntry @ 0x804D1700 */
    f32 calcWaterEntry(s32 playerIdx, const EGG::Vector3f& playerVel);

    /// Calculate viscous drag force from water resistance
    /* WaterCollision_calcWaterDrag @ 0x804D1800 */
    EGG::Vector3f calcWaterDrag(s32 playerIdx, const EGG::Vector3f& playerVel) const;

    /// Check if a player is fully submerged
    /* WaterCollision_isSubmerged @ 0x804D1900 */
    bool isSubmerged(s32 playerIdx) const;

    /// Get the water surface height at a given world position
    /* WaterCollision_getWaterHeight @ 0x804D1A00 */
    f32 getWaterHeight(const EGG::Vector3f& pos) const;

    /// Handle drowning logic: check submersion depth and trigger rescue
    /* WaterCollision_handleDrowning @ 0x804D1B00 */
    bool handleDrowning(s32 playerIdx, f32 dt);

private:
    static const s32 MAX_WATER_ZONES = 8;
    static const f32 RESCUE_TIMEOUT;      // Frames before Lakitu rescue
    static const f32 MAX_WATER_SPEED;      // Speed cap in water
    static const f32 BUOYANCY_FORCE;       // Upward force per unit depth
    static const f32 DRAG_COEFFICIENT;      // Water drag multiplier

    // Find which water zone a position is in
    s32 findWaterZone(const EGG::Vector3f& pos) const;

    WaterZone mZones[MAX_WATER_ZONES];
    s32 mZoneCount;
    PlayerWaterState mPlayerStates[MAX_PLAYER_COUNT];
    u32 mCourseId;
};

} // namespace Collision
