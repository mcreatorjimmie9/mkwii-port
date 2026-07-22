// effect_bridge.cpp — Phase 23: Real effect/scale/status bridge wiring
//
// Connects the effect, scale, status, KCL query, and wheelie stub functions
// from pad_bridge.cpp to the platform layer's EffectDirector and KartState.
//
// In the original MKWii, these are called by PlayerSub10's update chain to:
//   - Scale/Body: manipulate kart visual scale (mega, squish, invisibility)
//   - Status effects: clear ink, update invisibility, manage squish animation
//   - KCL queries: get surface type, gravity, vehicle type from collision data
//   - Wheelie: handle bike wheelie state
//   - Rumble: handle controller vibration feedback

#include <cstring>
#include <cmath>

#include "rk_types.h"

// EffectDirector from decompiled layer
#include "Scene/EffectDirector.hpp"

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

// --- KCL / Collision query stubs ---

// @addr 0x8059040c — sub_getKclInfo
void* sub_getKclInfo(void* p) {
    (void)p;
    return nullptr;
}

// @addr 0x805908b4 — sub_getKclVehicleType
void* sub_getKclVehicleType(void* p) {
    (void)p;
    return nullptr;
}

// @addr 0x80590a50 — sub_getKclGravity
void sub_getKclGravity(void* p) {
    (void)p;
}

// @addr 0x8059032c — sub_getStickyRoad
void sub_getStickyRoad(void* p) {
    (void)p;
}

// @addr 0x805903ec — sub_getAirState
void sub_getAirState(void* p) {
    (void)p;
}

// @addr 0x80590a80 — sub_getDriftDir
void sub_getDriftDir(void* p) {
    (void)p;
}

// @addr 0x8059088c — sub_getRacerInfo
void* sub_getRacerInfo(void* p) {
    (void)p;
    return nullptr;
}

// @addr 0x805b4f48 — sub_getHitboxGroup
void* sub_getHitboxGroup(void* p) {
    // Hitbox group is accessed via PlayerPointers virtual method
    // For now return nullptr — the collision system handles hitbox internally
    (void)p;
    return nullptr;
}

} // extern "C"
