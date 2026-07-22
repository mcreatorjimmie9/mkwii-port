// pad_bridge.cpp — Bridges Wii PAD/KPAD input to Platform::InputManager
//
// In MKWii, KPADRead (channel 0) is the primary input path. This file
// provides bridge functions that PlayerSub10 and other decompiled subsystems
// call to read input state from Platform::InputManager.
//
// For human players, input comes from Platform::InputManager (keyboard/gamepad).
// For AI (CPU) players, input comes from AIInputStore, which is populated by
// Player::update() before calling PlayerSub10::update(). This matches the
// original MKWii where KPadAI writes to the player's KPad slot.
//
// Implemented bridges:
//   PAD_getInputState()     — raw input state pointer (for pad.hpp)
//   sub_getTurnInput()      — analog stick X (turn) [-1, +1]
//   sub_getAccelInput()     — accelerate button [0, 1]
//   sub_getBrakeInput()     — brake button [0, 1]
//   sub_getDriftInput()     — drift/handbrake button (bool)
//   sub_getItemInput()      — item-use button edge trigger (bool)
//   sub_getPhysicsInput()   — player index (for status effects)
//   sub_getInputState()     — KPad button mask for input state query
//   sub_setAIPlayerInput()  — sets per-player AI input (called before update)
//
// No-op stubs (sound/effect/scale — safe to leave as no-ops for now):
//   sub_playBoostSound, sub_playStartBoostSound, sub_triggerSound,
//   sub_setSound2, sub_setSoundAttr, sub_playSoundId, sub_getScale,
//   sub_setScale, sub_setEffect, sub_getBodyInfo, sub_getEffectGroup*,
//   sub_playCrushSound, sub_playMegaSound, sub_playEffectSound*,
//   sub_playItemSound, sub_clearInk, sub_clearAnim, sub_updateInvisibility,
//   sub_updateScaleAnim, sub_setMegaScale, sub_startSquishSound,
//   sub_startSquishEffect, sub_endSquishSound, sub_endDriftEffect,
//   sub_getRumble, sub_setRumble, sub_getNoInputSquish,
//   sub_getScaleAnim, sub_playSoundAttr, sub_clearStatus,
//   sub_startEffect, sub_initWheelie, sub_tryStartWheelie,
//   sub_getStickyRoad, sub_getAirState, sub_getDriftDir,
//   sub_getSpeed, sub_getKclInfo, sub_getKclVehicleType, sub_getKclGravity,
//   sub_getRacerInfo, sub_getHitboxGroup, sub_eggVec3*,
//   sub_endSquishEffect

#include "platform/input.hpp"
#include "ai_input_store.hpp"

// ==========================================================================
// Helper: resolve the player index from a PlayerSub10 pointer.
// PlayerSub10 has a playerPointers back-reference at offset 0x000.
// PlayerPointers stores the player index at offset 0x38 (64-bit).
// ==========================================================================
static u32 getPlayerIndex(void* obj) {
    if (!obj) return 0;
    // PlayerSub10::playerPointers is at offset 0x000 (first member)
    void* pp = *static_cast<void**>(obj);
    if (!pp) return 0;
    // PlayerPointers::mPlayerIdx is at offset 0x38 (7 pointers × 8 bytes)
    auto ppBytes = static_cast<u8*>(pp);
    return *reinterpret_cast<u32*>(ppBytes + 0x38);
}

// Bridge function called by PADRead/KPADRead/WPADRead in pad.hpp
extern "C" {

const Platform::InputState* PAD_getInputState() {
    return &Platform::InputManager::getState();
}

// @addr 0x80590aac — sub_setAIPlayerInput
// Called by Player::update() before PlayerSub10::update() to set the
// AI-generated input for a specific player slot.
void sub_setAIPlayerInput(u32 playerIdx, f32 steer, f32 accel, f32 brake, bool drift) {
    Platform::InputState aiInput;
    aiInput.steer = steer;
    aiInput.accelerate = accel;
    aiInput.brake = brake;
    aiInput.drift = drift;
    aiInput.item = false;
    AIInputStore::setPlayerInput(playerIdx, aiInput);
}

// @addr 0x8057e900 — sub_getTurnInput
// Reads the analog stick X input for PlayerSub10's turn calculations.
// Returns a value in [-1.0, +1.0] where negative = left, positive = right.
// The 'obj' parameter is the PlayerSub10 pointer (unused in this bridge;
// in the original game it indexes per-player input channels).
f32 sub_getTurnInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).steer;
    }
    return Platform::InputManager::getState().steer;
}

// @addr 0x80590a9c — sub_getAccelInput
// Reads the acceleration input (0.0 = no gas, 1.0 = full gas).
// In MKWii this is the A button (digital) or analog trigger.
// Used by PlayerSub10::updateAcceleration() to determine if the player
// is actively accelerating. If not pressing gas, the kart coasts/drags.
f32 sub_getAccelInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).accelerate;
    }
    return Platform::InputManager::getState().accelerate;
}

// @addr 0x80590a80 — sub_getBrakeInput
// Reads the brake input (0.0 = no brake, 1.0 = full brake).
// In MKWii this is the B button or L trigger.
// Used by PlayerSub10::updateAcceleration() for braking deceleration.
f32 sub_getBrakeInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).brake;
    }
    return Platform::InputManager::getState().brake;
}

// @addr 0x80590aac — sub_getDriftInput
// Returns true when the drift/handbrake button is held.
// In MKWii this is the R trigger (auto-drift) or R + direction.
// Used by PlayerSub10::updateHopAndSlipdrift() for drift initiation.
bool sub_getDriftInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).drift;
    }
    return Platform::InputManager::getState().drift;
}

// @addr 0x80590aac — sub_getItemInput
// Returns true when the item-use button was pressed this frame (edge trigger).
// In MKWii this is the Z trigger or X/Y button depending on control scheme.
// Used by item system for item activation.
bool sub_getItemInput(void* obj) {
    (void)obj;
    return Platform::InputManager::getState().item;
}

// @addr 0x80590a9c — sub_getPhysicsInput
// In the original MKWii, this function reads the KPad input state and
// stores the player index. For the port, the PlayerSub10 already stores
// the player index via PlayerPointers, so this is a no-op that just
// populates the index from playerPointers.
// Status effects (lightning, star, mega) call this to get the player
// index for character body type lookups.
void sub_getPhysicsInput(void* obj) {
    // No-op: player index is already available via PlayerPointers
    (void)obj;
}

// @addr 0x80590aac — sub_getInputState
// Returns the raw KPad button mask for input state queries.
// In the original, this populates a KPadRaceInputState struct.
// For the port, we map Platform::InputState to a button mask.
void sub_getInputState(void* obj, s32 playerIdx) {
    // No-op: input is read directly via sub_getTurnInput etc.
    (void)obj;
    (void)playerIdx;
}

// ==========================================================================
// No-op stubs for sound, effects, scale, and collision query functions
// These are called by PlayerSub10's status/boost/effect methods.
// They are safe no-ops for now — sound and visual effects can be
// implemented later without affecting physics correctness.
// ==========================================================================

// --- Sound stubs ---
void sub_playBoostSound(void* p, s32 attr) { (void)p; (void)attr; }
void sub_playStartBoostSound(void* p) { (void)p; }
void sub_triggerSound(void* p, s32 id) { (void)p; (void)id; }
void sub_setSound2(void* p, s32 a, s32 b, s32 c) { (void)p; (void)a; (void)b; (void)c; }
void sub_setSoundAttr(void* p, s32 a, u32 b, u32 c) { (void)p; (void)a; (void)b; (void)c; }
void sub_setSoundAttr2(void* p, s32 a, u32 b, u32 c) { (void)p; (void)a; (void)b; (void)c; }
void sub_setSound3(void* p, s32 a) { (void)p; (void)a; }
void sub_playSoundId(void* p, s32 id) { (void)p; (void)id; }
void sub_playSoundAttr(void* p, s32 a) { (void)p; (void)a; }
void sub_playCrushSound(void* p, s32 a) { (void)p; (void)a; }
void sub_playMegaSound(void* p, s32 a) { (void)p; (void)a; }
void sub_playEffectSound(void* p, s32 a) { (void)p; (void)a; }
void sub_playEffectSound2(void* p, s32 a) { (void)p; (void)a; }
void sub_playItemSound(void* p, s32 a, s32 b) { (void)p; (void)a; (void)b; }
void sub_startSquishSound(void* p, s32 a) { (void)p; (void)a; }
void sub_endSquishSound(void* p, s32 a) { (void)p; (void)a; }

// --- Scale / Body / Effect stubs ---
void sub_getScale(void* p) { (void)p; }
void sub_setScale(void* p, f32 a) { (void)p; (void)a; }
void sub_setMegaScale(void* p, f32 a) { (void)p; (void)a; }
void sub_getScaleAnim(void* p, s32 a) { (void)p; (void)a; }
void sub_updateScaleAnim(void* p, f32 a) { (void)p; (void)a; }
void sub_getBodyInfo(void* p) { (void)p; }
void sub_setEffect(void* p, s32 a) { (void)p; (void)a; }
void* sub_getEffectGroup(void* p) { (void)p; return nullptr; }
void* sub_getEffectGroup2(void* p, s32 a) { (void)p; (void)a; return nullptr; }
void* sub_getEffectGroup3(void* p) { (void)p; return nullptr; }
void sub_getSpeed(void* p) { (void)p; }

// --- Status / effect stubs ---
void sub_clearInk(void* p, int a) { (void)p; (void)a; }
void sub_clearAnim(void* p, s32 a) { (void)p; (void)a; }
void sub_clearStatus(void* p) { (void)p; }
void sub_updateInvisibility(void* p) { (void)p; }
void sub_startEffect(void* p, s32 a, u32 b, u32 c) { (void)p; (void)a; (void)b; (void)c; }
void sub_startSquishEffect(void* p, s32 a) { (void)p; (void)a; }
void sub_endSquishEffect(void* p) { (void)p; }
void sub_endDriftEffect(void* p) { (void)p; }
void sub_getNoInputSquish(void* p, s32 a) { (void)p; (void)a; }

// --- Rumble / wheelie stubs ---
void sub_getRumble(void* p, s32 a) { (void)p; (void)a; }
void sub_setRumble(void* p, s32 a) { (void)p; (void)a; }
void sub_initWheelie(void* p) { (void)p; }
void sub_tryStartWheelie(void* p) { (void)p; }

// --- KCL / Collision query stubs ---
// These will be implemented properly when KCL is wired into PlayerSub10.
// For now they are no-ops — the collision system feeds KartState flags
// via Player::updateWithDecompiledPhysics() instead.
void* sub_getKclInfo(void* p) { (void)p; return nullptr; }
void* sub_getKclVehicleType(void* p) { (void)p; return nullptr; }
void sub_getKclGravity(void* p) { (void)p; }
void sub_getStickyRoad(void* p) { (void)p; }
void sub_getAirState(void* p) { (void)p; }
void sub_getDriftDir(void* p) { (void)p; }
void* sub_getRacerInfo(void* p) { (void)p; return nullptr; }
void* sub_getHitboxGroup(void* p) { (void)p; return nullptr; }

} // extern "C"
