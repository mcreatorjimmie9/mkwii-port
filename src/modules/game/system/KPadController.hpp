#pragma once
// KPadController.hpp — Gamepad controller shim
#include "../../rk_types.h"
#include "../../EGG/math.h"

class KPadController {
public:
    u32 buttonsPressed;
    u32 buttonsHeld;
    u32 buttonsReleased;
    f32 stickX;
    f32 stickY;
    f32 triggerL;
    f32 triggerR;

    bool isPressed(u32 button) const { return (buttonsPressed & button) != 0; }
    bool isHeld(u32 button) const { return (buttonsHeld & button) != 0; }
};
