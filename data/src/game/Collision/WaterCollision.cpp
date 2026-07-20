// WaterCollision.cpp — Water Surface & Buoyancy Implementation
// GENESIS Phase 29
// Original addresses: 0x804Dxxxx-0x804Dxxxx

#include "WaterCollision.hpp"
#include <cmath>

namespace Collision {

const f32 WaterCollision::RESCUE_TIMEOUT = 180.0f;  // 3 seconds at 60fps
const f32 WaterCollision::MAX_WATER_SPEED = 50.0f;
const f32 WaterCollision::BUOYANCY_FORCE = 9.8f;     // Gravity inverse
const f32 WaterCollision::DRAG_COEFFICIENT = 0.4f;

/* WaterCollision_ctor @ 0x804D1000 */
WaterCollision::WaterCollision()
    : mZoneCount(0)
    , mCourseId(0)
{
    for (s32 i = 0; i < MAX_WATER_ZONES; i++) {
        mZones[i].waterLevel = 0.0f;
        mZones[i].flowSpeed = 0.0f;
        mZones[i].flowDirection = EGG::Vector3f::zero;
        mZones[i].zoneId = i;
        mZones[i].isToxic = 0;
        mZones[i].isDeep = 0;
        mZones[i].minBounds = EGG::Vector3f::zero;
        mZones[i].maxBounds = EGG::Vector3f::zero;
    }
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].mbInWater = false;
        mPlayerStates[i].mbFullySubmerged = false;
        mPlayerStates[i].mbWasOnLand = true;
        mPlayerStates[i].activeZoneId = -1;
        mPlayerStates[i].submersionDepth = 0.0f;
        mPlayerStates[i].waterTimer = 0.0f;
        mPlayerStates[i].entrySpeed = 0.0f;
        mPlayerStates[i].lastWaterNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);
        mPlayerStates[i].splashEffectId = 0;
    }
}

/* WaterCollision_dtor @ 0x804D1040 */
WaterCollision::~WaterCollision() {}

/* WaterCollision_init @ 0x804D1080 */
void WaterCollision::init(u32 courseId) {
    mCourseId = courseId;
    mZoneCount = 0;
    reset();
    loadZones();
}

/* WaterCollision_loadZones @ 0x804D1100 */
bool WaterCollision::loadZones() {
    // Water zones are defined in JMap "area" entries with type 3 (water).
    // Each course has different water configurations:
    // - Maple Treeway: no water (pure land course)
    // - Cheep Cheep Beach: ocean water along edges
    // - DK Jungle: river water in jungle areas
    // - Coconut Mall: fountain water in center
    // - Sherbet Land: ice water (slow = freeze)
    // - Grumble Volcano: lava (toxic, instant rescue)

    switch (mCourseId) {
    case 3: // Grumble Volcano — lava zones
        mZones[0].minBounds = EGG::Vector3f(-500.0f, -50.0f, -500.0f);
        mZones[0].maxBounds = EGG::Vector3f(500.0f, 0.0f, 500.0f);
        mZones[0].waterLevel = -20.0f;
        mZones[0].flowSpeed = 0.0f;
        mZones[0].flowDirection = EGG::Vector3f::zero;
        mZones[0].isToxic = 1; // Lava — instant Lakitu rescue
        mZones[0].isDeep = 1;
        mZoneCount = 1;
        break;
    case 13: // Cheep Cheep Beach — ocean
        mZones[0].minBounds = EGG::Vector3f(-2000.0f, -50.0f, -2000.0f);
        mZones[0].maxBounds = EGG::Vector3f(2000.0f, 0.0f, 2000.0f);
        mZones[0].waterLevel = -5.0f;
        mZones[0].flowSpeed = 5.0f;
        mZones[0].flowDirection = EGG::Vector3f(0.0f, 0.0f, 1.0f);
        mZones[0].isToxic = 0;
        mZones[0].isDeep = 1;
        mZoneCount = 1;
        break;
    case 18: // Sherbet Land — ice water
        mZones[0].minBounds = EGG::Vector3f(-800.0f, -50.0f, -800.0f);
        mZones[0].maxBounds = EGG::Vector3f(800.0f, 0.0f, 800.0f);
        mZones[0].waterLevel = -10.0f;
        mZones[0].flowSpeed = 2.0f;
        mZones[0].flowDirection = EGG::Vector3f(1.0f, 0.0f, 0.0f);
        mZones[0].isToxic = 0;
        mZones[0].isDeep = 0;
        mZoneCount = 1;
        break;
    default:
        mZoneCount = 0;
        break;
    }
    return true;
}

/* WaterCollision_findWaterZone @ 0x804D1120 (internal) */
s32 WaterCollision::findWaterZone(const EGG::Vector3f& pos) const {
    for (s32 i = 0; i < mZoneCount; i++) {
        const WaterZone& zone = mZones[i];
        if (pos.x >= zone.minBounds.x && pos.x <= zone.maxBounds.x &&
            pos.z >= zone.minBounds.z && pos.z <= zone.maxBounds.z &&
            pos.y <= zone.waterLevel) {
            return i;
        }
    }
    return -1;
}

/* WaterCollision_update @ 0x804D1200 */
void WaterCollision::update(s32 playerIdx, const EGG::Vector3f& playerPos,
                            const EGG::Vector3f& playerVel, f32 boundingRadius) {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return;
    }

    PlayerWaterState& state = mPlayerStates[playerIdx];
    s32 zoneIdx = findWaterZone(playerPos);

    if (zoneIdx >= 0) {
        // Player is in a water zone
        const WaterZone& zone = mZones[zoneIdx];

        if (!state.mbInWater) {
            // First frame entering water — record entry speed for splash
            state.entrySpeed = std::sqrt(playerVel.x * playerVel.x +
                                           playerVel.y * playerVel.y +
                                           playerVel.z * playerVel.z);
            state.splashEffectId = (state.entrySpeed > 40.0f) ? 2 : 1;
        }

        state.mbInWater = true;
        state.mbWasOnLand = false;
        state.activeZoneId = zoneIdx;
        state.submersionDepth = zone.waterLevel - playerPos.y;

        // Check if fully submerged (kart center is below surface)
        state.mbFullySubmerged = state.submersionDepth > boundingRadius;

        // Update water timer for rescue trigger
        if (state.mbFullySubmerged) {
            state.waterTimer += 1.0f / 60.0f;
        } else {
            state.waterTimer = 0.0f; // Reset if partially submerged
        }

        state.lastWaterNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);
    } else {
        // Player is not in water
        if (state.mbInWater) {
            // Just exited water — could play exit splash
            state.splashEffectId = 0;
        }
        state.mbInWater = false;
        state.mbWasOnLand = true;
        state.activeZoneId = -1;
        state.submersionDepth = 0.0f;
        state.waterTimer = 0.0f;
        state.mbFullySubmerged = false;
    }
}

/* WaterCollision_calcBuoyancy @ 0x804D1300 */
EGG::Vector3f WaterCollision::calcBuoyancy(s32 playerIdx,
                                           const EGG::Vector3f& playerPos,
                                           f32 kartMass) {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return EGG::Vector3f::zero;
    }

    const PlayerWaterState& state = mPlayerStates[playerIdx];
    if (!state.mbInWater || state.activeZoneId < 0) {
        return EGG::Vector3f::zero;
    }

    const WaterZone& zone = mZones[state.activeZoneId];

    // Buoyancy force: proportional to submersion depth and water density
    // F_buoyancy = rho_water * g * V_submerged
    // Simplified: upward force increases with depth below surface
    f32 depthFactor = state.submersionDepth / 100.0f; // Normalize
    if (depthFactor > 1.0f) depthFactor = 1.0f;
    if (depthFactor < 0.0f) depthFactor = 0.0f;

    f32 buoyancyForce = BUOYANCY_FORCE * depthFactor * kartMass * 0.01f;

    // Apply flow direction force
    EGG::Vector3f flowForce = zone.flowDirection * zone.flowSpeed * 0.01f;

    return EGG::Vector3f(flowForce.x, buoyancyForce, flowForce.z);
}

/* WaterCollision_getSpeedMultiplier @ 0x804D1400 */
f32 WaterCollision::getSpeedMultiplier(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return 1.0f;
    }

    const PlayerWaterState& state = mPlayerStates[playerIdx];
    if (!state.mbInWater) {
        return 1.0f;
    }

    if (state.activeZoneId < 0) {
        return 0.7f; // Generic water penalty
    }

    const WaterZone& zone = mZones[state.activeZoneId];

    // Water speed penalties:
    // - Shallow water: 85% speed (multiplier 0.85)
    // - Deep water: 65% speed (multiplier 0.65)
    // - Lava/toxic: 0% speed (rescue triggered instead)
    if (zone.isToxic) {
        return 0.0f;
    }
    if (zone.isDeep) {
        return 0.65f;
    }
    return 0.85f;
}

/* WaterCollision_needsRescue @ 0x804D1500 */
bool WaterCollision::needsRescue(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= MAX_PLAYER_COUNT) {
        return false;
    }

    const PlayerWaterState& state = mPlayerStates[playerIdx];
    if (!state.mbInWater) {
        return false;
    }

    // Toxic zones (lava) trigger immediate rescue
    if (state.activeZoneId >= 0 && mZones[state.activeZoneId].isToxic) {
        return true;
    }

    // Normal water: rescue after being fully submerged for too long
    return state.mbFullySubmerged && state.waterTimer >= RESCUE_TIMEOUT;
}

/* WaterCollision_getPlayerState */
const PlayerWaterState& WaterCollision::getPlayerState(s32 playerIdx) const {
    return mPlayerStates[playerIdx];
}

/* WaterCollision_reset */
void WaterCollision::reset() {
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].mbInWater = false;
        mPlayerStates[i].mbFullySubmerged = false;
        mPlayerStates[i].mbWasOnLand = true;
        mPlayerStates[i].activeZoneId = -1;
        mPlayerStates[i].submersionDepth = 0.0f;
        mPlayerStates[i].waterTimer = 0.0f;
        mPlayerStates[i].entrySpeed = 0.0f;
    }
}

} // namespace Collision
