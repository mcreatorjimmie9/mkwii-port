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
// Sound stubs are now in sound_bridge.cpp (Phase 23).
// Effect/scale/KCL stubs are now in effect_bridge.cpp (Phase 23).

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
f32 sub_getTurnInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).steer;
    }
    return Platform::InputManager::getState().steer;
}

// @addr 0x80590a9c — sub_getAccelInput
// Reads the acceleration input (0.0 = no gas, 1.0 = full gas).
f32 sub_getAccelInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).accelerate;
    }
    return Platform::InputManager::getState().accelerate;
}

// @addr 0x80590a80 — sub_getBrakeInput
// Reads the brake input (0.0 = no brake, 1.0 = full brake).
f32 sub_getBrakeInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).brake;
    }
    return Platform::InputManager::getState().brake;
}

// @addr 0x80590aac — sub_getDriftInput
// Returns true when the drift/handbrake button is held.
bool sub_getDriftInput(void* obj) {
    u32 idx = getPlayerIndex(obj);
    if (AIInputStore::hasAIInput(idx)) {
        return AIInputStore::getPlayerInput(idx).drift;
    }
    return Platform::InputManager::getState().drift;
}

// @addr 0x80590aac — sub_getItemInput
// Returns true when the item-use button was pressed this frame (edge trigger).
bool sub_getItemInput(void* obj) {
    (void)obj;
    return Platform::InputManager::getState().item;
}

// @addr 0x80590a9c — sub_getPhysicsInput
// In the original MKWii, this function reads the KPad input state and
// stores the player index. For the port, the PlayerSub10 already stores
// the player index via PlayerPointers, so this is a no-op.
void sub_getPhysicsInput(void* obj) {
    // No-op: player index is already available via PlayerPointers
    (void)obj;
}

// @addr 0x80590aac — sub_getInputState
// Returns the raw KPad button mask for input state queries.
void sub_getInputState(void* obj, s32 playerIdx) {
    // No-op: input is read directly via sub_getTurnInput etc.
    (void)obj;
    (void)playerIdx;
}

} // extern "C"
