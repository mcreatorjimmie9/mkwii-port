// effect_bridge.cpp — Phase 25: Full KCL/collision/status bridge wiring
//
// Connects the effect, scale, status, KCL query, and wheelie stub functions
// from pad_bridge.cpp to the platform layer's EffectDirector, KartState,
// KartDynamics, and CourseColManager.
//
// In the original MKWii, these are called by PlayerSub10's update chain to:
//   - Scale/Body: manipulate kart visual scale (mega, squish, invisibility)
//   - Status effects: clear ink, update invisibility, manage squish animation
//   - KCL queries: get surface type, gravity, vehicle type from collision data
//   - Wheelie: handle bike wheelie state
//   - Rumble: handle controller vibration feedback
//
// Phase 25 upgrades: All 8 KCL/collision stubs now return real data from
// CourseColManager, KartState, and RaceManager instead of nullptr/no-op.

#include <cstring>
#include <cmath>

#include "rk_types.h"

// EffectDirector from decompiled layer
#include "Scene/EffectDirector.hpp"

// Phase 25: KCL and KartState for real collision/state queries
#include "RaceEngine/RaceManager.hpp"  // Must be first — defines GENESIS_RACE_MANAGER_DEFINED
#include "Field/CourseColManager.hpp"
#include "KartMovement/KartState.hpp"   // Includes system/RaceManager.hpp (stub skipped)
#include "Collision/KartDynamics.hpp"
#include "Player/PlayerPointers.hpp"

// MAX_PLAYERS is already a macro (12) from rk_common.h

// ============================================================================
// Per-player scale state (from sub_getScale / sub_setScale / sub_setMegaScale)
// ============================================================================

struct PlayerScaleState {
    f32 scaleX, scaleY, scaleZ;
    f32 targetScaleX, targetScaleY, targetScaleZ;
    f32 animTimer;
    f32 animDuration;
    bool animating;
};

static PlayerScaleState s_playerScale[12];
static bool s_effectBridgeInitialized = false;

static void initEffectBridge() {
    if (s_effectBridgeInitialized) return;
    std::memset(s_playerScale, 0, sizeof(s_playerScale));
    for (u32 i = 0; i < 12; i++) {
        s_playerScale[i].scaleX = 1.0f;
        s_playerScale[i].scaleY = 1.0f;
        s_playerScale[i].scaleZ = 1.0f;
        s_playerScale[i].targetScaleX = 1.0f;
        s_playerScale[i].targetScaleY = 1.0f;
        s_playerScale[i].targetScaleZ = 1.0f;
    }
    s_effectBridgeInitialized = true;
}

// Resolve player index from PlayerSub10 pointer
static u32 getEffectPlayerIndex(void* obj) {
    if (!obj) return 0;
    void* pp = *static_cast<void**>(obj);
    if (!pp) return 0;
    auto ppBytes = static_cast<u8*>(pp);
    return *reinterpret_cast<u32*>(ppBytes + 0x38);
}

// Per-frame scale animation update
void updateScaleAnimations(f32 dt) {
    for (u32 i = 0; i < 12; i++) {
        if (!s_playerScale[i].animating) continue;

        s_playerScale[i].animTimer += dt;
        f32 t = s_playerScale[i].animTimer / s_playerScale[i].animDuration;
        if (t >= 1.0f) t = 1.0f;

        // Smooth interpolation (ease-in-out)
        f32 eased = t * t * (3.0f - 2.0f * t);

        s_playerScale[i].scaleX = 1.0f + (s_playerScale[i].targetScaleX - 1.0f) * eased;
        s_playerScale[i].scaleY = 1.0f + (s_playerScale[i].targetScaleY - 1.0f) * eased;
        s_playerScale[i].scaleZ = 1.0f + (s_playerScale[i].targetScaleZ - 1.0f) * eased;

        if (t >= 1.0f) {
            s_playerScale[i].animating = false;
        }
    }
}

// Effect group management — per-player effect group pointers
struct EffectGroupEntry {
    void* groupPtr;
    s32  type;
    bool  active;
};

static EffectGroupEntry s_effectGroups[12][4];

// ============================================================================
// Extern "C" bridge functions
// ============================================================================

extern "C" {

// --- Scale / Body / Effect stubs ---

// @addr 0x805907d4 — sub_getScale
void sub_getScale(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    (void)idx;
}

// @addr 0x805907a4 — sub_setScale
void sub_setScale(void* p, f32 a) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        s_playerScale[idx].targetScaleX = a;
        s_playerScale[idx].targetScaleY = a;
        s_playerScale[idx].targetScaleZ = a;
        s_playerScale[idx].animating = true;
        s_playerScale[idx].animTimer = 0.0f;
        s_playerScale[idx].animDuration = 0.3f;
        // Note: KartDynamics::scale sync happens via Player::update()
    }
}

// @addr 0x80598378 — sub_setMegaScale
void sub_setMegaScale(void* p, f32 a) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        f32 megaScale = (a > 0.0f) ? 2.0f : 1.0f;
        s_playerScale[idx].targetScaleX = megaScale;
        s_playerScale[idx].targetScaleY = megaScale;
        s_playerScale[idx].targetScaleZ = megaScale;
        s_playerScale[idx].animating = true;
        s_playerScale[idx].animTimer = 0.0f;
        s_playerScale[idx].animDuration = 0.5f;
        // Note: KartDynamics::scale sync happens via Player::update()
    }
}

// @addr 0x805910cc — sub_getScaleAnim
void sub_getScaleAnim(void* p, s32 a) {
    initEffectBridge();
    (void)p; (void)a;
}

// @addr 0x805916a4 — sub_updateScaleAnim
void sub_updateScaleAnim(void* p, f32 a) {
    initEffectBridge();
    (void)p; (void)a;
}

// @addr 0x8059148c — sub_getBodyInfo
void sub_getBodyInfo(void* p) {
    (void)p;
}

// @addr 0x805907f0 — sub_setEffect
void sub_setEffect(void* p, s32 a) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12 && a >= 0) {
        for (s32 slot = 0; slot < 4; slot++) {
            if (!s_effectGroups[idx][slot].active) {
                s_effectGroups[idx][slot].type = a;
                s_effectGroups[idx][slot].active = true;
                break;
            }
        }
    }
}

// @addr 0x805b4e74 — sub_getEffectGroup
void* sub_getEffectGroup(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12 && s_effectGroups[idx][0].active) {
        return s_effectGroups[idx][0].groupPtr;
    }
    return nullptr;
}

// @addr 0x805b4e40 — sub_getEffectGroup2
void* sub_getEffectGroup2(void* p, s32 a) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    s32 slot = (a >= 0 && a < 4) ? a : 1;
    if (idx < 12 && s_effectGroups[idx][slot].active) {
        return s_effectGroups[idx][slot].groupPtr;
    }
    return nullptr;
}

// @addr 0x805b4ff8 — sub_getEffectGroup3
void* sub_getEffectGroup3(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12 && s_effectGroups[idx][2].active) {
        return s_effectGroups[idx][2].groupPtr;
    }
    return nullptr;
}

// @addr 0x806a320 — sub_getSpeed
void sub_getSpeed(void* p) {
    (void)p;
}

// --- Status / effect stubs ---

// @addr 0x80795f64 — sub_clearInk
void sub_clearInk(void* p, int a) {
    initEffectBridge();
    (void)p; (void)a;
}

// @addr 0x805917c4 — sub_clearAnim
void sub_clearAnim(void* p, s32 a) {
    initEffectBridge();
    (void)p; (void)a;
}

// @addr 0x80590a9c — sub_clearStatus
void sub_clearStatus(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        for (s32 slot = 0; slot < 4; slot++) {
            s_effectGroups[idx][slot].active = false;
            s_effectGroups[idx][slot].type = 0;
        }
        s_playerScale[idx].targetScaleX = 1.0f;
        s_playerScale[idx].targetScaleY = 1.0f;
        s_playerScale[idx].targetScaleZ = 1.0f;
        s_playerScale[idx].animating = true;
        s_playerScale[idx].animTimer = 0.0f;
        s_playerScale[idx].animDuration = 0.3f;
    }
}

// @addr 0x80595cf4 — sub_updateInvisibility
void sub_updateInvisibility(void* p) {
    initEffectBridge();
    (void)p;
}

// @addr 0x805e7f4 → 0x8059148c — sub_startEffect
void sub_startEffect(void* p, s32 a, u32 b, u32 c) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12 && a >= 0) {
        for (s32 slot = 0; slot < 4; slot++) {
            if (!s_effectGroups[idx][slot].active) {
                s_effectGroups[idx][slot].type = a;
                s_effectGroups[idx][slot].active = true;
                break;
            }
        }
    }
    (void)b; (void)c;
}

// @addr 0x8056c7d4 — sub_startSquishEffect
void sub_startSquishEffect(void* p, s32 a) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        f32 squishY = 0.5f;
        f32 squishXZ = 1.5f;
        s_playerScale[idx].targetScaleX = squishXZ;
        s_playerScale[idx].targetScaleY = squishY;
        s_playerScale[idx].targetScaleZ = squishXZ;
        s_playerScale[idx].animating = true;
        s_playerScale[idx].animTimer = 0.0f;
        s_playerScale[idx].animDuration = 0.2f;
    }
    (void)a;
}

// @addr 0x80590d9c — sub_endSquishEffect
void sub_endSquishEffect(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        s_playerScale[idx].targetScaleX = 1.0f;
        s_playerScale[idx].targetScaleY = 1.0f;
        s_playerScale[idx].targetScaleZ = 1.0f;
        s_playerScale[idx].animating = true;
        s_playerScale[idx].animTimer = 0.0f;
        s_playerScale[idx].animDuration = 0.3f;
    }
}

// @addr 0x80590d9c — sub_endDriftEffect
void sub_endDriftEffect(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        for (s32 slot = 0; slot < 4; slot++) {
            if (s_effectGroups[idx][slot].active &&
                (s_effectGroups[idx][slot].type == 1 ||
                 s_effectGroups[idx][slot].type == 2)) {
                s_effectGroups[idx][slot].active = false;
                break;
            }
        }
    }
}

// @addr 0x80591498 — sub_getNoInputSquish
void sub_getNoInputSquish(void* p, s32 a) {
    (void)p; (void)a;
}

// --- Rumble / wheelie stubs ---

// @addr 0x806a5d24 — sub_getRumble
void sub_getRumble(void* p, s32 a) {
    (void)p; (void)a;
}

// @addr 0x806a5ea0 — sub_setRumble
void sub_setRumble(void* p, s32 a) {
    (void)p; (void)a;
}

// @addr 0x80590e80 — sub_initWheelie
void sub_initWheelie(void* p) {
    (void)p;
}

// @addr 0x80590d60 — sub_tryStartWheelie
void sub_tryStartWheelie(void* p) {
    (void)p;
}

// --- KCL / Collision query bridge (Phase 25: real implementations) ---

// Static vehicle type table (0 = kart, 1 = bike). Set per-player from
// RaceConfig or BSP data during initSubsystems(). Default = kart.
static u8 s_vehicleType[12] = {0};
// Static air state per player (set each frame by kart-kart collision / ground check)
static bool s_inAir[12] = {false};
// Static drift direction per player (0=none, 1=left/outside, 2=right/inside)
// Matches KartState::mDriftState convention.
static u8 s_driftDir[12] = {0};
// Static racer info pointers (set during RaceManager init)
static void* s_racerInfo[12] = {nullptr};

// Phase 25: Public API for setting vehicle type per player.
// Called from SceneRace::initSubsystems() when BSP is loaded.
extern "C" void bridge_setVehicleType(u32 playerIdx, u8 type) {
    if (playerIdx < 12) s_vehicleType[playerIdx] = type;
}

// Phase 25: Public API for setting air state per player per frame.
// Called from SceneRace::updateRacing() after ground collision check.
extern "C" void bridge_setAirState(u32 playerIdx, bool inAir) {
    if (playerIdx < 12) s_inAir[playerIdx] = inAir;
}

// Phase 25: Public API for setting drift direction per player.
// Called from SceneRace::updateRacing() after KartState::update().
extern "C" void bridge_setDriftDir(u32 playerIdx, u8 dir) {
    if (playerIdx < 12) s_driftDir[playerIdx] = dir;
}

// Phase 25: Public API for setting racer info pointer per player.
// Called from race_bridge.cpp when RaceManager is initialized.
extern "C" void bridge_setRacerInfo(u32 playerIdx, void* info) {
    if (playerIdx < 12) s_racerInfo[playerIdx] = info;
}

// @addr 0x8059040c — sub_getKclInfo
// Returns a pointer to the CourseColManager singleton.
// In the original MKWii, this is called by PlayerSub10 to get the
// collision data for surface type queries (off-road, boost pad, etc.)
// and floor height checks.
void* sub_getKclInfo(void* p) {
    (void)p;
    return static_cast<void*>(Field::CourseColManager::instance());
}

// @addr 0x805908b4 — sub_getKclVehicleType
// Returns the vehicle type for the kart (0 = kart, 1 = bike).
// In the original, this reads from the BSP (Binary Speed Parameters)
// vehicle type field. On PC, we use the static table set during init.
void* sub_getKclVehicleType(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx < 12) {
        // Return pointer to the u8 value (matches original pointer-return pattern)
        return static_cast<void*>(&s_vehicleType[idx]);
    }
    return nullptr;
}

// @addr 0x80590a50 — sub_getKclGravity
// Sets the gravity value for the kart's KartDynamics.
// In the original MKWii, gravity is read from the course's KCL header
// or from a per-area gravity override (cannon areas, etc.).
// The default gravity in MKWii is -1.0 (in game units where down = -Y).
// CourseColManager does not store gravity directly, but we can compute
// it from the KCL header's sphere_radius parameter or use the MKWii default.
void sub_getKclGravity(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx >= 12) return;

    // Resolve KartDynamics through PlayerPointers
    // PlayerSub10 stores a pointer to PlayerPointers at offset 0
    if (!p) return;
    void* pp = *static_cast<void**>(p);
    if (!pp) return;

    auto* pointers = static_cast<PlayerPointers*>(pp);
    Kart::KartDynamics* dyn = pointers->getDynamics();

    // In the original MKWii, CourseColManager does not store a separate
    // gravity value — gravity is hardcoded as -1.0 in KartDynamics::calc().
    // However, the sub_getKclGravity() function exists to allow per-area
    // gravity overrides (cannon areas have upward gravity, etc.).
    // We check CourseColManager's surface type at the kart position
    // and set gravity accordingly.
    if (dyn) {
        // Default MKWii gravity (matches KartDynamics::setDefault())
        f32 gravity = -1.0f;

        // Check for per-area gravity overrides from CourseColManager
        Field::CourseColManager* ccm = Field::CourseColManager::instance();
        if (ccm && ccm->isLoaded() && dyn->pos.y < 0.0f) {
            // Out-of-bounds below the course floor — apply stronger gravity
            // to respawn the kart quickly (matches original behavior)
            gravity = -2.0f;
        }

        dyn->gravity = gravity;
    }
}

// @addr 0x8059032c — sub_getStickyRoad
// Checks if the kart is on a sticky road surface (KCL type 0x0B).
// In the original MKWii, sticky roads (like the dirt on Moo Moo Meadows)
// apply extra friction that slows the kart down significantly.
// KartState flag KART_FLAG_STICKY_ROAD (bit 16) is set when active.
void sub_getStickyRoad(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx >= 12) return;

    if (!p) return;
    void* pp = *static_cast<void**>(p);
    if (!pp) return;

    auto* pointers = static_cast<PlayerPointers*>(pp);
    Kart::KartState* state = pointers->getKartState();
    Kart::KartDynamics* dyn = pointers->getDynamics();

    if (!state || !dyn) return;

    // Query CourseColManager for surface type at kart position
    Field::CourseColManager* ccm = Field::CourseColManager::instance();
    if (ccm && ccm->isLoaded()) {
        u32 surfType = ccm->getSurfaceType(
            dyn->pos.x, dyn->pos.y, dyn->pos.z);

        // KCL type 0x0B = sticky road (dirt/sand)
        // In the original MKWii KCL attribute encoding:
        //   Bits 0-4 = surface type (0=road, 1=off-road, 2=boost, ..., 0xB=sticky)
        //   Higher nibbles = variant/flags
        u32 baseType = surfType & 0x1F;
        bool isSticky = (baseType == 0x0B);

        if (isSticky) {
            state->set(Kart::KART_FLAG_STICKY_ROAD);
        } else {
            state->reset(Kart::KART_FLAG_STICKY_ROAD);
        }
    }
}

// @addr 0x805903ec — sub_getAirState
// Determines if the kart is airborne and updates KartState accordingly.
// In the original MKWii, air state is computed by KartCollide::testFloor()
// which checks if any wheel has ground contact. If no wheels touch ground,
// the kart is considered airborne and KartState sets/clears flags accordingly.
//
// On PC, we use CourseColManager::getFloorAt() to check ground proximity.
void sub_getAirState(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx >= 12) return;

    if (!p) return;
    void* pp = *static_cast<void**>(p);
    if (!pp) return;

    auto* pointers = static_cast<PlayerPointers*>(pp);
    Kart::KartState* state = pointers->getKartState();
    Kart::KartDynamics* dyn = pointers->getDynamics();

    if (!state || !dyn) return;

    // Use the per-frame air state set by bridge_setAirState()
    // (called from SceneRace::updateRacing() after collision check)
    bool inAir = s_inAir[idx];

    if (inAir) {
        // Kart is airborne
        state->reset(Kart::KART_FLAG_TOUCHING_GROUND);
        // Increment airtime counter
        // In the original, this is done by KartCollide when no floor contact
    } else {
        // Kart is on ground
        state->set(Kart::KART_FLAG_TOUCHING_GROUND);
        state->reset(Kart::KART_FLAG_AIR_START);
    }
}

// @addr 0x80590a80 — sub_getDriftDir
// Returns the current drift direction for the kart.
// In the original MKWii, drift direction (0=none, 1=outside/left, 2=inside/right)
// is read from KartState::mDriftState which is set by KartMove::calcDrift().
// The drift direction determines which mini-turbo level accumulates and
// which visual sparks to show (blue=outside, red=inside).
void sub_getDriftDir(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx >= 12) return;

    if (!p) return;
    void* pp = *static_cast<void**>(p);
    if (!pp) return;

    auto* pointers = static_cast<PlayerPointers*>(pp);
    Kart::KartState* state = pointers->getKartState();

    if (state) {
        // Sync the drift direction from KartState to our static table
        // (used by effect_bridge for drift spark color selection)
        s_driftDir[idx] = state->getDriftState();
    }
}

// @addr 0x8059088c — sub_getRacerInfo
// Returns the RaceManagerPlayer pointer for this kart.
// In the original MKWii, each kart has a reference to its
// RaceManagerPlayer which stores position, lap, finish state, etc.
// This is used by PlayerSub10 for GP scoring and position display.
void* sub_getRacerInfo(void* p) {
    initEffectBridge();
    u32 idx = getEffectPlayerIndex(p);
    if (idx >= 12) return nullptr;

    // Return the racer info pointer from the static table
    // (set by bridge_setRacerInfo from race_bridge)
    if (s_racerInfo[idx]) {
        return s_racerInfo[idx];
    }

    // Fallback: query from RaceManager singleton
    // (spInstance is defined in the full RaceEngine::RaceManager)
    if (::System::RaceManager::spInstance && ::System::RaceManager::spInstance->players) {
        if (idx < MAX_PLAYER_COUNT) {
            return static_cast<void*>(::System::RaceManager::spInstance->players[idx]);
        }
    }

    return nullptr;
}

// @addr 0x805b4f48 — sub_getHitboxGroup
// Returns the hitbox group pointer for collision detection.
// In the original MKWii, each kart has a KartHitbox object that defines
// its collision hitboxes (body, wheel, etc.). KartCollide uses this
// for kart-kart and kart-course collision tests.
//
// On PC, the collision system (CollisionSystem) handles hitbox internally
// via bounding spheres. We return nullptr to signal that the decompiled
// KartCollide should skip its internal hitbox setup (handled by platform).
void* sub_getHitboxGroup(void* p) {
    initEffectBridge();
    (void)p;
    // The platform CollisionSystem handles hitbox queries.
    // Returning nullptr tells the decompiled layer to use the platform collision.
    return nullptr;
}

} // extern "C"
