// pad_bridge.cpp — Bridges Wii PAD/KPAD input to Platform::InputManager
//
// In MKWii, KPADRead (channel 0) is the primary input path. This file
// provides the PAD_getInputState() function that pad.hpp calls to get
// the current keyboard/gamepad state from Platform::InputManager.

#include "platform/input.hpp"

// Bridge function called by PADRead/KPADRead/WPADRead in pad.hpp
extern "C" {

const Platform::InputState* PAD_getInputState() {
    return &Platform::InputManager::getState();
}

// @addr 0x8057e900 — sub_getTurnInput
// Reads the analog stick X input for PlayerSub10's turn calculations.
// Returns a value in [-1.0, +1.0] where negative = left, positive = right.
// The 'obj' parameter is the PlayerSub10 pointer (unused in this bridge;
// in the original game it indexes per-player input channels).
f32 sub_getTurnInput(void* obj) {
    (void)obj;
    return Platform::InputManager::getState().steer;
}

} // extern "C"
