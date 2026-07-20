#include "AIInfo.hpp"
#include <rk_types.h>
#include <decomp.h>

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

// Initialize an AIInfo struct with default values
// @addr 0x80575000
void AIInfo_init(AIInfo* info) {
    info->mpAI = nullptr;
    info->mpInput = nullptr;
    info->mpPathHandler = nullptr;
    info->mActions = 0;
    info->mStickX = 0.0f;
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

// Convert AIInfo actions to KPadRaceInputState for input injection
// @addr 0x80575100
void AIInfo_toKPadInput(System::KPadRaceInputState* out, const AIInfo* info) {
    // Clear output to neutral state
    out->buttons = 0;
    out->mStick.x = 0.0f;
    out->mStick.y = 0.0f;

    // Stick X is directly from mStickX (range -1.0 to 1.0)
    out->mStick.x = info->mStickX;

    // If accelerating, push stick Y forward (negative is forward in MKW)
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
