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

} // extern "C"
