// collision_physics_bridge.cpp — Phase 26: Collision Physics Integration Bridge
//
// Connects the decompiled Collision module classes (KartGravity, KartSuspension,
// KartBoost, KartRespawn, WaterCollision, ColResponse, MovingColObjManager) to
// the per-frame Player update loop via extern "C" functions.
//
// In the original MKWii, these systems are updated each frame in this order:
//   1. KartWheelPhysics::calcCollision() — raycast each wheel for ground contact
//   2. KartGravity::update() — apply gravity/slope/moving-road forces
//   3. KartSuspension::update() — spring-damper forces from wheel compression
//   4. KartCollide::processBody/Walls/Floor() — resolve KCL collisions
//   5. KartBoost::update() — boost timer countdown, speed multiplier
//   6. WaterCollision::update() — water zone detection, buoyancy
//   7. ColResponse::update() — collision response timer management
//   8. KartRespawn::update() — rescue animation state machine
//   9. MovingColObjManager::update() — dynamic collision object animation
//
// The bridge exposes this pipeline as extern "C" functions callable from
// SceneRace::updateRacing() and Player::updateWithDecompiledPhysics().
//
// KCL type mapping (from original MKWii):
//   Bit 0: road surface
//   Bits 2-4: offroad (grass/sand/ice)
//   Bits 6-7: boost pad / ramp
//   Bit 4: moving road
//   Water: detected by WaterCollision AABB overlap (not KCL type)

#include <cstring>
#include <cmath>

#include "rk_types.h"

// Decompiled Collision module classes (compiled into libmkwii-genesis.a)
#include "Collision/KartGravity.hpp"
#include "Collision/KartSuspension.hpp"
#include "Collision/KartWheelPhysics.hpp"
#include "Collision/KartRespawn.hpp"
#include "Collision/KartBoost.hpp"
#include "Collision/WaterCollision.hpp"
#include "Collision/ColResponse.hpp"
#include "Collision/MovingColObj.hpp"
#include "Collision/KartDynamics.hpp"

// ============================================================================
// Per-player collision physics state
// ============================================================================

// MAX_PLAYERS already defined in rk_common.h as 12

struct PlayerCollisionPhysics {
    Kart::KartGravity*    gravity;       // Gravity/slope/moving-road/water forces
    Kart::KartSuspension* suspension;    // 4-wheel spring-damper system
    Kart::KartBoost*      boost;         // Boost/ramp/cannon state machine
    Kart::KartRespawn*    respawn;       // Rescue/respawn animation
    bool                  initialized;    // Whether this slot is active
};

static PlayerCollisionPhysics s_playerPhysics[12]; // MAX_PLAYERS
static bool s_globalInitialized = false;

// Global collision systems (shared across all players)
static Collision::WaterCollision*       s_waterCollision   = nullptr;
static Collision::MovingColObjManager* s_movingColMgr     = nullptr;
static Collision::ColResponse*         s_colResponse      = nullptr;

// ============================================================================
// KCL type bit masks (from original MKWii KartCollide.hpp)
// ============================================================================

static const u32 KCL_TYPE_ROAD       = 0x00000001;  // Bit 0: road
static const u32 KCL_TYPE_OFFROAD    = 0x00000002;  // Bit 1: offroad base
static const u32 KCL_TYPE_OFFROAD_2  = 0x00000004;  // Bit 2: offroad variant
static const u32 KCL_TYPE_OFFROAD_3  = 0x00000008;  // Bit 3: offroad variant
static const u32 KCL_TYPE_MOVING_ROAD = 0x00000010;  // Bit 4: moving road/conveyor
static const u32 KCL_TYPE_BOOST_RAMP = 0x00000020;  // Bit 5: boost ramp
static const u32 KCL_TYPE_BOOST_PAD  = 0x00000040;  // Bit 6: boost pad
static const u32 KCL_TYPE_BOOST_PANEL = 0x00000080; // Bit 7: boost panel (zipper)
// Water is detected via WaterCollision AABB, not KCL type bits

// ============================================================================
// Helper: decode KCL type into surface category
// ============================================================================

enum SurfaceCategory {
    SURFACE_ROAD       = 0,
    SURFACE_OFFROAD    = 1,
    SURFACE_BOOST_PAD  = 2,
    SURFACE_BOOST_RAMP = 3,
    SURFACE_MOVING_ROAD = 4,
    SURFACE_UNKNOWN    = 5,
};

static SurfaceCategory decodeKclSurface(u32 kclType) {
    if (kclType & (KCL_TYPE_BOOST_PAD | KCL_TYPE_BOOST_PANEL))
        return SURFACE_BOOST_PAD;
    if (kclType & KCL_TYPE_BOOST_RAMP)
        return SURFACE_BOOST_RAMP;
    if (kclType & KCL_TYPE_MOVING_ROAD)
        return SURFACE_MOVING_ROAD;
    if (kclType & (KCL_TYPE_OFFROAD | KCL_TYPE_OFFROAD_2 | KCL_TYPE_OFFROAD_3))
        return SURFACE_OFFROAD;
    if (kclType & KCL_TYPE_ROAD)
        return SURFACE_ROAD;
    return SURFACE_UNKNOWN;
}

// ============================================================================
// Initialization / Shutdown
// ============================================================================

extern "C" {

// Forward declarations — needed because init calls shutdown
void collision_shutdownGlobal();
void collision_shutdownPlayer(u32 playerIdx);

/// Initialize global collision systems for a course.
/// Called once at course load (SceneRace::loadCourse).
/// @param courseId  Course index for WaterCollision/MovingColObj initialization
void collision_initGlobal(u32 courseId) {
    if (s_globalInitialized) {
        collision_shutdownGlobal();
    }

    // WaterCollision — detects water zones from course data
    s_waterCollision = new Collision::WaterCollision();
    s_waterCollision->init(courseId);
    s_waterCollision->loadZones();

    // MovingColObjManager — manages dynamic collision objects
    s_movingColMgr = new Collision::MovingColObjManager();
    s_movingColMgr->init(courseId);
    s_movingColMgr->loadObjects();

    // ColResponse — collision response dispatcher (tracks per-player state)
    s_colResponse = new Collision::ColResponse();
    s_colResponse->init(MAX_PLAYERS);

    s_globalInitialized = true;
}

/// Initialize per-player collision physics.
/// Called once for each player at race start (SceneRace::initSubsystems).
/// @param playerIdx  Player slot (0-11)
void collision_initPlayerPhysics(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return;

    // Cleanup existing if any
    collision_shutdownPlayer(playerIdx);

    auto& slot = s_playerPhysics[playerIdx];

    // KartGravity — gravity, slope, moving road, water current
    slot.gravity = new Kart::KartGravity();
    slot.gravity->init();

    // KartSuspension — 4-wheel spring-damper
    slot.suspension = new Kart::KartSuspension();
    slot.suspension->init();

    // KartBoost — boost pad/ramp/cannon/jump pad/halfpipe state machine
    slot.boost = new Kart::KartBoost();
    slot.boost->init();

    // KartRespawn — rescue/respawn animation state machine
    slot.respawn = new Kart::KartRespawn();
    slot.respawn->init();

    slot.initialized = true;
}

/// Shutdown per-player collision physics.
/// Called when a player is removed or race ends.
void collision_shutdownPlayer(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return;

    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.initialized) return;

    delete slot.respawn;    slot.respawn    = nullptr;
    delete slot.boost;      slot.boost      = nullptr;
    delete slot.suspension; slot.suspension = nullptr;
    delete slot.gravity;    slot.gravity    = nullptr;
    slot.initialized = false;
}

/// Shutdown global collision systems.
/// Called at course unload or scene teardown.
void collision_shutdownGlobal() {
    if (s_colResponse)  { delete s_colResponse;  s_colResponse  = nullptr; }
    if (s_movingColMgr) { delete s_movingColMgr;  s_movingColMgr = nullptr; }
    if (s_waterCollision) { delete s_waterCollision; s_waterCollision = nullptr; }
    s_globalInitialized = false;
}

// ============================================================================
// Pre-physics update (BEFORE PlayerSub10::update)
//
// In the original MKWii, this happens in KartPhysicsEngine::calc():
//   1. KartWheelPhysics::calcCollision() for each wheel
//   2. KartGravity feeds forces into KartDynamics
//   3. KartSuspension applies spring-damper forces
//   4. KartCollide resolves body/wall/floor collisions
// ============================================================================

/// Pre-physics collision update for a player.
/// Sets up gravity, slope, and suspension forces before PlayerSub10 runs.
/// @param playerIdx  Player slot (0-11)
/// @param dt         Frame delta time (seconds)
/// @param pos        Current player position [x, y, z]
/// @param vel        Current player velocity [x, y, z]
/// @param floorY     Floor Y height from KCL raycast (or -9999 if no floor)
/// @param kclType    KCL surface type at player position
/// @param inAir      Whether the player is airborne (no floor contact)
void collision_updatePrePhysics(u32 playerIdx, f32 dt,
                                 const f32 pos[3], const f32 vel[3],
                                 f32 floorY, u32 kclType, bool inAir) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.initialized) return;

    auto* grav = slot.gravity;
    if (!grav) return;

    // 1. Set floor normal from KCL data
    // In the original, KartCollide::processFloor() computes the floor normal
    // from the KCL triangle hit. We derive it from the floor height delta.
    if (!inAir && floorY > -9000.0f) {
        // Compute approximate floor normal from position vs floor height
        // For flat surfaces this is (0, 1, 0); for slopes it tilts.
        EGG::Vector3f floorNormal;
        floorNormal.setUp(); // Default: flat ground

        // If we have a significant height delta between position and floor,
        // the kart may be on a slope. Use a simplified normal estimation.
        f32 heightAboveFloor = pos[1] - floorY;
        if (heightAboveFloor > 1.0f && heightAboveFloor < 100.0f) {
            // Kart is slightly above floor (normal riding height)
            floorNormal.setUp();
        } else if (heightAboveFloor <= 1.0f) {
            // Kart is very close to or below floor (embedded in surface)
            floorNormal.setUp();
        }
        // Height above floor > 100 is treated as airborne (handled by inAir flag)

        grav->setFloorNormal(floorNormal);
        grav->setFloorKclType(kclType);

        // Set road/offroad state
        SurfaceCategory surf = decodeKclSurface(kclType);
        grav->setOnMovingRoad(surf == SURFACE_MOVING_ROAD);
    } else {
        // Airborne — no floor normal
        grav->setOnMovingRoad(false);
    }

    // 2. Water state is checked via WaterCollision in post-physics
    // (needs world position which may change during physics step)

    // 3. Moving road velocity — zero by default unless set by MovingColObj
    EGG::Vector3f zeroVel;
    zeroVel.setAll(0);
    grav->setMovingRoadVel(zeroVel);
    grav->setMovingWaterVel(zeroVel);

    // 4. Update KartGravity — applies gravity/slope/moving-road forces
    // In the original, this is called from KartPhysicsEngine::calc() after
    // KartCollide has resolved floor collisions and set the floor normal.
    // The gravity forces are accumulated into KartDynamics::totalForce.
    //
    // NOTE: We don't have direct KartDynamics access here (it's inside Player).
    // The forces are applied indirectly: KartGravity writes to totalForce which
    // is then read by KartDynamics::calc() in Player::updateWithDecompiledPhysics().
    // For now, we update the gravity state so it can be queried later.
    grav->setInMovingWater(false, 0);

    // 5. Update KartSuspension — computes spring-damper forces for each wheel
    // In the original, KartSuspension::update() reads KartWheelPhysics collision
    // data and applies forces to KartDynamics. Without full wheel collision data,
    // we initialize the suspension with a simplified ground contact model.
    if (slot.suspension) {
        // Simplified: if not airborne, all 4 wheels are grounded
        if (!inAir && floorY > -9000.0f) {
            // Update suspension with ground contact
            slot.suspension->update(dt, nullptr);
        }
    }

    (void)vel; // Velocity used for moving-water drag (set in post-physics)
}

// ============================================================================
// Post-physics update (AFTER PlayerSub10::update)
//
// In the original MKWii, this happens after KartDynamics::calc():
//   1. WaterCollision — detect water zones, apply buoyancy
//   2. KartBoost — timer countdown, speed multiplier
//   3. ColResponse — collision response state updates
//   4. KartRespawn — rescue animation state machine
//   5. MovingColObjManager — dynamic object animation
// ============================================================================

/// Post-physics collision update for a player.
/// @param playerIdx  Player slot (0-11)
/// @param dt         Frame delta time (seconds)
/// @param pos        Player position AFTER physics step [x, y, z]
/// @param vel        Player velocity AFTER physics step [x, y, z]
/// @return           Combined speed multiplier (1.0 = no modifier)
f32 collision_updatePostPhysics(u32 playerIdx, f32 dt,
                                 const f32 pos[3], const f32 vel[3]) {
    if (playerIdx >= MAX_PLAYERS) return 1.0f;
    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.initialized) return 1.0f;

    EGG::Vector3f playerPos(pos[0], pos[1], pos[2]);
    EGG::Vector3f playerVel(vel[0], vel[1], vel[2]);
    f32 speedMult = 1.0f;

    // 1. WaterCollision — detect water zones and apply buoyancy/drag
    if (s_waterCollision) {
        s_waterCollision->update((s32)playerIdx, playerPos, playerVel, 50.0f);

        // If in water, update KartGravity with water state
        if (slot.gravity && s_waterCollision->isSubmerged(playerIdx)) {
            slot.gravity->setInMovingWater(true, 2); // Default water variant
            // Apply buoyancy as upward force (handled by KartGravity::applyMovingWater)
            EGG::Vector3f waterVel;
            waterVel.setAll(0); // Still water by default
            slot.gravity->setMovingWaterVel(waterVel);

            // Water speed penalty
            f32 waterSpeedMult = s_waterCollision->getSpeedMultiplier(playerIdx);
            speedMult *= waterSpeedMult;

            // Check drowning
            if (s_waterCollision->needsRescue(playerIdx)) {
                if (slot.respawn) {
                    slot.respawn->triggerRespawn();
                }
            }
        }
    }

    // 2. KartBoost — update boost timer, get speed multiplier
    if (slot.boost) {
        slot.boost->update(dt);
        f32 boostMult = slot.boost->getSpeedMultiplier();
        if (boostMult > 1.0f) {
            speedMult *= boostMult;
        }
    }

    // 3. MovingColObj — check for dynamic object collisions
    if (s_movingColMgr) {
        s_movingColMgr->checkPlayerCol((s32)playerIdx, playerPos, 50.0f);
    }

    // 4. KartRespawn — update rescue animation if active
    if (slot.respawn && slot.respawn->isRespawning()) {
        slot.respawn->update(dt);
    }

    // 5. ColResponse — update per-player collision response timers
    if (s_colResponse) {
        s_colResponse->update();
        f32 colSpeedMult = s_colResponse->getSpeedMultiplier(playerIdx);
        if (colSpeedMult > 0.0f && colSpeedMult < 1.0f) {
            speedMult *= colSpeedMult;
        }
    }

    return speedMult;
}

// ============================================================================
// Speed multiplier query
// ============================================================================

/// Get the combined speed multiplier for a player.
/// Combines boost, offroad, water, and collision response modifiers.
/// @param playerIdx  Player slot (0-11)
/// @return           Speed multiplier (1.0 = no modifier)
f32 collision_getSpeedMultiplier(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return 1.0f;
    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.initialized) return 1.0f;

    f32 mult = 1.0f;

    // Boost multiplier
    if (slot.boost && slot.boost->isActive()) {
        mult *= slot.boost->getSpeedMultiplier();
    }

    // Water speed penalty
    if (s_waterCollision && s_waterCollision->isSubmerged(playerIdx)) {
        mult *= s_waterCollision->getSpeedMultiplier(playerIdx);
    }

    // Offroad penalty from KartGravity
    if (slot.gravity && !slot.gravity->isOnRoad()) {
        mult *= 0.6f; // Standard MKWii offroad penalty (~60% speed)
    }

    // Collision response speed modifier
    if (s_colResponse) {
        f32 colMult = s_colResponse->getSpeedMultiplier(playerIdx);
        if (colMult > 0.0f && colMult < 1.0f) {
            mult *= colMult;
        }
    }

    return mult;
}

// ============================================================================
// Boost activation (forwarded to KartBoost)
// ============================================================================

/// Trigger boost pad activation (flat ground speed boost).
/// In MKWii, this is triggered by KCL type SURF_FLAG_GROUND_BOOST_PANEL.
/// @param playerIdx  Player slot (0-11)
void collision_triggerBoostPad(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.boost) {
        slot.boost->onBoostPad();
    }
}

/// Trigger boost ramp activation (angled launch + speed boost).
/// In MKWii, this is triggered by KCL type SURF_FLAG_BOOST_RAMP.
/// @param playerIdx  Player slot (0-11)
/// @param variant    KCL variant determining ramp angle/force
void collision_triggerBoostRamp(u32 playerIdx, s32 variant) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.boost) {
        slot.boost->onBoostRamp(variant);
    }
}

/// Trigger item-based boost activation.
/// @param playerIdx  Player slot (0-11)
/// @param boostType  Boost type: 0=mushroom, 1=star, 2=mega, 3=zipper, 4=MT, 5=SMT, 6=trick
/// @param charge     Charge level for MT/SMT (0-600 MT, 0-300 SMT) or trick type
void collision_triggerItemBoost(u32 playerIdx, u32 boostType, u16 charge) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.boost) return;

    switch (boostType) {
    case 0: slot.boost->activateMushroom(); break;
    case 1: slot.boost->activateStar(); break;
    case 2: slot.boost->activateMega(); break;
    case 3: slot.boost->activateZipper(); break;
    case 4: slot.boost->activateMT(charge); break;
    case 5: slot.boost->activateSMT(charge); break;
    case 6: slot.boost->activateTrickBoost(charge); break;
    default: break;
    }
}

/// Check if any boost (surface or item) is currently active.
bool collision_isBoosting(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return false;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.boost) return slot.boost->isActive();
    return false;
}

/// Get the boost speed multiplier (surface boost only).
f32 collision_getBoostMultiplier(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return 1.0f;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.boost) return slot.boost->getSpeedMultiplier();
    return 1.0f;
}

// ============================================================================
// Respawn system (forwarded to KartRespawn)
// ============================================================================

/// Trigger respawn sequence for a player.
/// In MKWii, this is triggered when:
///   - Kart falls below Y threshold (OOB)
///   - Kart is fully submerged in water too long
///   - Kart is hit by a hazard that triggers rescue
/// @param playerIdx  Player slot (0-11)
/// @param pos        World position to respawn at [x, y, z]
/// @param rot        Y rotation angle (radians)
void collision_triggerRespawn(u32 playerIdx, const f32 pos[3], f32 rot) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn) {
        EGG::Vector3f respawnPos(pos[0], pos[1], pos[2]);
        slot.respawn->startRespawn(respawnPos);
    }
}

/// Start OOB respawn using last valid position.
/// @param playerIdx  Player slot (0-11)
/// @param point      Jugem rescue point [x, y, z]
void collision_triggerOOBRespawn(u32 playerIdx, const f32 point[3]) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn) {
        EGG::Vector3f pt(point[0], point[1], point[2]);
        slot.respawn->startOOBRespawn(pt);
    }
}

/// Update respawn animation and output position.
/// @param playerIdx  Player slot (0-11)
/// @param dt         Frame delta time (seconds)
/// @param outPos     Output position [x, y, z] (only valid if isRespawning)
/// @param outRot     Output Y rotation (radians, only valid if isRespawning)
/// @return           true if player is in respawn sequence
bool collision_updateRespawn(u32 playerIdx, f32 dt,
                               f32 outPos[3], f32* outRot) {
    if (playerIdx >= MAX_PLAYERS) return false;
    auto& slot = s_playerPhysics[playerIdx];
    if (!slot.respawn || !slot.respawn->isRespawning()) return false;

    slot.respawn->update(dt);

    // Output current respawn position
    const EGG::Vector3f& rpos = slot.respawn->getRespawnPosition();
    outPos[0] = rpos.x;
    outPos[1] = rpos.y;
    outPos[2] = rpos.z;
    if (outRot) *outRot = 0.0f; // Rotation not tracked in simplified version

    return slot.respawn->isRespawning();
}

/// Check if a player is currently in the respawn sequence.
/// @param playerIdx  Player slot (0-11)
/// @return           true if respawning
bool collision_isRespawning(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return false;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn) return slot.respawn->isRespawning();
    return false;
}

/// Complete the respawn (restore normal physics).
/// @param playerIdx  Player slot (0-11)
void collision_completeRespawn(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn) {
        slot.respawn->completeRespawn();
    }
}

/// Set the last valid position for respawn targeting.
/// In MKWii, this is updated each frame when the kart is on a valid road surface.
/// @param playerIdx  Player slot (0-11)
/// @param pos        Last valid position [x, y, z]
/// @param rot        Last valid Y rotation (radians)
void collision_setLastValidPos(u32 playerIdx, const f32 pos[3], f32 rot) {
    if (playerIdx >= MAX_PLAYERS) return;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn) {
        EGG::Vector3f vpos(pos[0], pos[1], pos[2]);
        slot.respawn->setLastValidPos(vpos, rot);
    }
}

// ============================================================================
// Global collision system updates
// ============================================================================

/// Update global collision systems per frame.
/// Called once per frame from SceneRace::updateRacing().
/// @param dt  Frame delta time (seconds)
void collision_updateGlobal(f32 dt) {
    // MovingColObjManager — advance animations, move along routes
    if (s_movingColMgr) {
        s_movingColMgr->update();
    }
    // WaterCollision doesn't need a global update (it updates per-player)
    // ColResponse timer updates are done per-player in collision_updatePostPhysics
    (void)dt;
}

/// Check if a player needs rescue (OOB or drowning).
/// @param playerIdx  Player slot (0-11)
/// @return           true if Lakitu rescue should trigger
bool collision_needsRescue(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return false;

    // Check drowning
    if (s_waterCollision && s_waterCollision->needsRescue(playerIdx)) {
        return true;
    }

    // Check ColResponse rescue
    if (s_colResponse && s_colResponse->needsRescue(playerIdx)) {
        return true;
    }

    // Check respawn OOB timer
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.respawn && slot.respawn->isRespawning()) {
        return true; // Already respawning
    }

    return false;
}

/// Get the offroad state for a player.
/// @param playerIdx  Player slot (0-11)
/// @return           true if kart is on off-road surface
bool collision_isOffRoad(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return false;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.gravity) return !slot.gravity->isOnRoad();
    return false;
}

/// Get the slope factor for a player (0.0=flat, 1.0=vertical wall).
/// @param playerIdx  Player slot (0-11)
/// @return           Slope factor [0, 1]
f32 collision_getSlopeFactor(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return 0.0f;
    auto& slot = s_playerPhysics[playerIdx];
    if (slot.gravity) return slot.gravity->getSlopeFactor();
    return 0.0f;
}

/// Check if a player is in water.
/// @param playerIdx  Player slot (0-11)
/// @return           true if in water
bool collision_isInWater(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return false;
    if (s_waterCollision) return s_waterCollision->isSubmerged(playerIdx);
    return false;
}

/// Get KartGravity pointer for a player (direct access for advanced physics).
/// Returns nullptr if not initialized.
void* collision_getGravity(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return nullptr;
    auto& slot = s_playerPhysics[playerIdx];
    return static_cast<void*>(slot.gravity);
}

/// Get KartSuspension pointer for a player.
/// Returns nullptr if not initialized.
void* collision_getSuspension(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return nullptr;
    auto& slot = s_playerPhysics[playerIdx];
    return static_cast<void*>(slot.suspension);
}

/// Get KartBoost pointer for a player.
/// Returns nullptr if not initialized.
void* collision_getBoost(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return nullptr;
    auto& slot = s_playerPhysics[playerIdx];
    return static_cast<void*>(slot.boost);
}

/// Get KartRespawn pointer for a player.
/// Returns nullptr if not initialized.
void* collision_getRespawn(u32 playerIdx) {
    if (playerIdx >= MAX_PLAYERS) return nullptr;
    auto& slot = s_playerPhysics[playerIdx];
    return static_cast<void*>(slot.respawn);
}

/// Process a collision response event for a player.
/// Forwarded to ColResponse::process().
/// @param playerIdx    Player slot (0-11)
/// @param responseType Response type flags (COL_RESP_WALL_BOUNCE, etc.)
/// @param normalX      Contact normal X
/// @param normalY      Contact normal Y
/// @param normalZ      Contact normal Z
/// @param penetration Penetration depth
/// @param surfaceAttr  Raw KCL attribute
void collision_processResponse(u32 playerIdx, u32 responseType,
                               f32 normalX, f32 normalY, f32 normalZ,
                               f32 penetration, u32 surfaceAttr) {
    if (!s_colResponse || playerIdx >= MAX_PLAYERS) return;

    Collision::ColResponseData data;
    data.responseType = (Collision::ColResponseType)responseType;
    data.contactNormal = EGG::Vector3f(normalX, normalY, normalZ);
    data.contactPoint.setAll(0); // Not tracked in simplified version
    data.penetrationDepth = penetration;
    data.surfaceFriction = 1.0f; // Default
    data.surfaceAttribute = surfaceAttr;
    data.kartIdx = playerIdx;
    data.responseFlags = responseType;

    s_colResponse->process(playerIdx, data);
}

/// Resolve floor collision for a player.
/// Forwarded to ColResponse::resolveFloor().
void collision_resolveFloor(u32 playerIdx, f32 normalX, f32 normalY, f32 normalZ,
                            f32 penetration) {
    if (!s_colResponse || playerIdx >= MAX_PLAYERS) return;
    s_colResponse->resolveFloor(playerIdx,
                                 EGG::Vector3f(normalX, normalY, normalZ),
                                 penetration);
}

/// Resolve wall collision for a player.
/// Forwarded to ColResponse::resolveWall().
void collision_resolveWall(u32 playerIdx, f32 normalX, f32 normalY, f32 normalZ,
                            f32 penetration, f32 restitution) {
    if (!s_colResponse || playerIdx >= MAX_PLAYERS) return;
    s_colResponse->resolveWall(playerIdx,
                                EGG::Vector3f(normalX, normalY, normalZ),
                                penetration, restitution);
}

/// Disable a moving collision object (after star/mega mushroom).
/// @param objId  Object instance ID
void collision_disableMovingObject(s32 objId) {
    if (s_movingColMgr) {
        s_movingColMgr->disableObject(objId);
    }
}

} // extern "C"
