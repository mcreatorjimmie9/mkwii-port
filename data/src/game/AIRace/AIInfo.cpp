#include "AIInfo.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <cmath>

namespace Enemy {

// Action bit definitions (matching MKW internal AI action flags)
enum AIAction {
    AI_ACTION_STEER_LEFT    = 0x0001,
    AI_ACTION_STEER_RIGHT   = 0x0002,
    AI_ACTION_ACCEL          = 0x0004,
    AI_ACTION_BRAKE          = 0x0008,
    AI_ACTION_DRIFT          = 0x0010,
    AI_ACTION_ITEM           = 0x0020,
    AI_ACTION_HOP            = 0x0040,
    AI_ACTION_LOOK_BACK      = 0x0080,
    AI_ACTION_TRICK          = 0x0100,
    AI_ACTION_MT_RELEASE     = 0x0200,
    AI_ACTION_WHEELIE        = 0x0400,
    AI_ACTION_SLIPSTREAM     = 0x0800,
};

// KPadRaceInputState button masks (matching Wii/GC PAD bits)
// These correspond to the buttons bitfield in KPadRaceInputState
enum KPadButton {
    KPAD_BUTTON_A     = 0x0001,
    KPAD_BUTTON_B     = 0x0002,
    KPAD_BUTTON_X     = 0x0004,
    KPAD_BUTTON_Y     = 0x0008,
    KPAD_TRIGGER_L    = 0x0010,
    KPAD_TRIGGER_R    = 0x0020,
    KPAD_TRIGGER_Z    = 0x0040,
    KPAD_DPAD_UP      = 0x0800,
    KPAD_DPAD_DOWN    = 0x0400,
    KPAD_DPAD_LEFT    = 0x0200,
    KPAD_DPAD_RIGHT   = 0x1000,
    KPAD_BUTTON_START = 0x0100,
};

// Initialize an AIInfo struct with default values
// @addr 0x80575000
void AIInfo_init(AIInfo* info) {
    info->mpAI = nullptr;
    info->mpInput = nullptr;
    info->mpPathHandler = nullptr;
    info->mActions = 0;
    info->mPrevActions = 0;
    info->mStickX = 0.0f;
    info->mStickXTarget = 0.0f;
    info->mStickXSmoothed = 0.0f;
    info->mStickY = 0.0f;
    info->mStickYTarget = 0.0f;
    info->mSmoothFrames = 0;
}

// Reset per-frame state (clears actions and stick)
// @addr 0x80575030
void AIInfo_resetFrame(AIInfo* info) {
    info->mActions = 0;
    info->mStickX = 0.0f;
}

// Check if a specific action is set
// @addr 0x80575050
bool AIInfo_hasAction(const AIInfo* info, u16 action) {
    return (info->mActions & action) != 0;
}

// Set an action flag
// @addr 0x80575070
void AIInfo_setAction(AIInfo* info, u16 action) {
    info->mActions |= action;
}

// Clear an action flag
// @addr 0x80575090
void AIInfo_clearAction(AIInfo* info, u16 action) {
    info->mActions &= ~action;
}

// Per-frame update: smooth stick inputs and detect button edges
// @addr 0x805750B0
void AIInfo_calc(AIInfo* info) {
    // Save previous actions for edge detection
    info->mPrevActions = info->mActions;

    // Run stick smoothing over 3-5 frames
    AIInfo_updateStickSmoothing(info);

    // Copy smoothed stick to the primary stick field used by toKPadInput
    info->mStickX = info->mStickXSmoothed;
    info->mStickY = info->mStickYTarget;
}

// Smoothly interpolate stick X toward the target value.
// Uses exponential smoothing: current += (target - current) * 0.3f
// Clamped to the valid analog stick range [-128, 127] (as raw value)
// or [-1.0, 1.0] in normalized form used by KPadRaceInputState.
// @addr 0x805750E0
void AIInfo_updateStickSmoothing(AIInfo* info) {
    const f32 SMOOTH_FACTOR = 0.3f;
    const f32 MIN_STICK = -1.0f;
    const f32 MAX_STICK = 1.0f;

    // Interpolate smoothed value toward target
    f32 delta = info->mStickXTarget - info->mStickXSmoothed;
    info->mStickXSmoothed += delta * SMOOTH_FACTOR;

    // Clamp to valid range
    if (info->mStickXSmoothed < MIN_STICK) {
        info->mStickXSmoothed = MIN_STICK;
    } else if (info->mStickXSmoothed > MAX_STICK) {
        info->mStickXSmoothed = MAX_STICK;
    }

    // Track smoothing frames for debugging / external queries
    if (info->mSmoothFrames < 5) {
        info->mSmoothFrames++;
    }

    // If we've converged close enough, snap to target
    if (std::abs(delta) < 0.01f) {
        info->mStickXSmoothed = info->mStickXTarget;
    }
}

// Set the target steering value. Maps from -1.0 (full left) to +1.0 (full right).
// Internally converts to raw stick range: -1.0→-128, +1.0→127, then
// normalizes back to [-1.0, 1.0] for the smoothing target.
// @addr 0x80575120
void AIInfo_setSteerValue(AIInfo* info, f32 steer) {
    // Clamp input to [-1.0, 1.0]
    if (steer < -1.0f) {
        steer = -1.0f;
    } else if (steer > 1.0f) {
        steer = 1.0f;
    }
    info->mStickXTarget = steer;

    // Set steer action flags based on direction
    if (steer < -0.1f) {
        AIInfo_setAction(info, AI_ACTION_STEER_LEFT);
        AIInfo_clearAction(info, AI_ACTION_STEER_RIGHT);
    } else if (steer > 0.1f) {
        AIInfo_setAction(info, AI_ACTION_STEER_RIGHT);
        AIInfo_clearAction(info, AI_ACTION_STEER_LEFT);
    } else {
        AIInfo_clearAction(info, AI_ACTION_STEER_LEFT);
        AIInfo_clearAction(info, AI_ACTION_STEER_RIGHT);
    }
}

// Set the accelerate button state
// @addr 0x80575160
void AIInfo_setAccelValue(AIInfo* info, bool accel) {
    if (accel) {
        AIInfo_setAction(info, AI_ACTION_ACCEL);
        info->mStickYTarget = -1.0f; // Negative Y is forward in MKW
    } else {
        AIInfo_clearAction(info, AI_ACTION_ACCEL);
        info->mStickYTarget = 0.0f;
    }
}

// Set the brake button state
// @addr 0x80575180
void AIInfo_setBrakeValue(AIInfo* info, bool brake) {
    if (brake) {
        AIInfo_setAction(info, AI_ACTION_BRAKE);
    } else {
        AIInfo_clearAction(info, AI_ACTION_BRAKE);
    }
}

// Set the drift/shoulder button state
// @addr 0x805751A0
void AIInfo_setDriftValue(AIInfo* info, bool drift) {
    if (drift) {
        AIInfo_setAction(info, AI_ACTION_DRIFT);
    } else {
        AIInfo_clearAction(info, AI_ACTION_DRIFT);
    }
}

// Set the item use button state
// @addr 0x805751C0
void AIInfo_setItemValue(AIInfo* info, bool item) {
    if (item) {
        AIInfo_setAction(info, AI_ACTION_ITEM);
    } else {
        AIInfo_clearAction(info, AI_ACTION_ITEM);
    }
}

// Set the hop input state
// @addr 0x805751E0
void AIInfo_setHopValue(AIInfo* info, bool hop) {
    if (hop) {
        AIInfo_setAction(info, AI_ACTION_HOP);
    } else {
        AIInfo_clearAction(info, AI_ACTION_HOP);
    }
}

// Return the current smoothed steering value [-1.0, 1.0]
// @addr 0x80575200
f32 AIInfo_getSteerSmoothed(const AIInfo* info) {
    return info->mStickXSmoothed;
}

// Return the full action flags bitmask
// @addr 0x80575220
u16 AIInfo_getActions(const AIInfo* info) {
    return info->mActions;
}

// Update AI inputs from the path following system.
// Converts the desired steering from the path controller, applies
// acceleration (always on unless braking), and sets drift if needed.
// @addr 0x80575240
void AIInfo_setFromPathFollower(AIInfo* info, f32 desiredSteer, f32 speed,
    bool shouldDrift) {
    // Set steering from path follower output
    AIInfo_setSteerValue(info, desiredSteer);

    // AI always accelerates unless speed is very low and we're in a
    // tight turn that requires braking instead
    bool shouldBrake = false;
    if (speed < 20.0f && std::abs(desiredSteer) > 0.7f) {
        shouldBrake = true;
    }
    AIInfo_setAccelValue(info, !shouldBrake);
    AIInfo_setBrakeValue(info, shouldBrake);

    // Set drift based on path follower recommendation
    AIInfo_setDriftValue(info, shouldDrift);
}

// Trigger item use action from the item system
// @addr 0x80575280
void AIInfo_setFromItemSystem(AIInfo* info, bool useItem) {
    // Only set item action if not already active (edge-triggered)
    if (useItem && !(info->mPrevActions & AI_ACTION_ITEM)) {
        AIInfo_setItemValue(info, true);
    } else if (!useItem) {
        AIInfo_setItemValue(info, false);
    }
}

// Convert AIInfo actions to KPadRaceInputState for input injection
// @addr 0x80575100
void AIInfo_toKPadInput(System::KPadRaceInputState* out, const AIInfo* info) {
    // Clear output to neutral state
    out->buttons = 0;
    out->mStick.x = 0.0f;
    out->mStick.y = 0.0f;

    // Stick X from the smoothed steering value (range -1.0 to 1.0)
    out->mStick.x = info->mStickX;

    // Stick Y from the accel state (negative is forward in MKW)
    if (info->mActions & AI_ACTION_ACCEL) {
        out->mStick.y = -1.0f;
    }

    // Map AI action flags to controller button bits
    if (info->mActions & AI_ACTION_BRAKE) {
        out->buttons |= KPAD_TRIGGER_L;
    }
    if (info->mActions & AI_ACTION_DRIFT) {
        out->buttons |= KPAD_TRIGGER_R;
    }
    if (info->mActions & AI_ACTION_ITEM) {
        out->buttons |= KPAD_BUTTON_A;
    }
    if (info->mActions & AI_ACTION_HOP) {
        out->buttons |= KPAD_BUTTON_X;
    }
    if (info->mActions & AI_ACTION_LOOK_BACK) {
        out->buttons |= KPAD_BUTTON_Y;
    }
    if (info->mActions & AI_ACTION_WHEELIE) {
        out->buttons |= KPAD_TRIGGER_Z;
    }
    if (info->mActions & AI_ACTION_TRICK) {
        out->buttons |= KPAD_BUTTON_B;
    }
}

} // namespace Enemy