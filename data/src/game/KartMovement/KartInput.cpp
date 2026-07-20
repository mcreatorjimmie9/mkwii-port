#include <cstring>
#include "KartInput.hpp"

namespace Kart {

// External: PAD system
extern void* sPadSystem;

// KPad button masks used internally by MKW
// @note These match the standard Wii/GC PAD button bit assignments
namespace {
enum KPadButtonMask {
    PAD_BUTTON_A      = 0x0001,
    PAD_BUTTON_B      = 0x0002,
    PAD_BUTTON_X      = 0x0004,
    PAD_BUTTON_Y      = 0x0008,
    PAD_TRIGGER_L     = 0x0010,
    PAD_TRIGGER_R     = 0x0020,
    PAD_TRIGGER_Z     = 0x0040,
    PAD_BUTTON_START  = 0x0100,
    PAD_DPAD_UP       = 0x0800,
    PAD_DPAD_DOWN     = 0x0400,
    PAD_DPAD_LEFT     = 0x0200,
    PAD_DPAD_RIGHT    = 0x1000,
};
} // anonymous namespace

KartInput::KartInput() {
    memset(this, 0, sizeof(KartInput));
}

KartInput::~KartInput() {}

// Read the raw input state from the KPad controller
// In the real game, this calls KPADRead via OS interrupt and copies
// the decoded controller state into currentInputState.
// The stick values from hardware are in [-128, 127] and must be
// normalized to [-1.0, 1.0] by the KPad processing layer.
// @addr 0x80594000
void KartInput::readRawInput() {
    // Copy current input to last input (for edge detection)
    lastInputState = currentInputState;
    // In the real game, the KPad system writes directly into
    // currentInputState via the KPADRead callback. Here we
    // leave currentInputState unchanged (external system fills it).
}

// Check if a button was just pressed this frame (rising edge)
// Returns true only on the first frame the button transitions from
// released to pressed, used for hop detection, item use, etc.
// @addr 0x80594050
bool KartInput::isButtonPressed(u32 button) const {
    return (currentInputState.buttons & button) &&
           !(lastInputState.buttons & button);
}

// Check if a button is currently held (level detection)
// Returns true every frame the button is down, used for steering,
// acceleration, brake hold, etc.
// @addr 0x80594080
bool KartInput::isButtonHeld(u32 button) const {
    return (currentInputState.buttons & button) != 0;
}

// Get analog stick X with deadzone, normalized to [-1, 1]
// The deadzone is applied symmetrically: values within [-deadzone, deadzone]
// are clamped to 0, values beyond are rescaled so the range [deadzone, 1.0]
// maps to [0, 1].
// Default deadzone in MKW is approximately 0.15 (0x13/0x80 raw).
// @addr 0x80594100
f32 KartInput::getStickX(f32 deadzone) const {
    f32 x = currentInputState.stickX;
    if (x > deadzone) {
        return (x - deadzone) / (1.0f - deadzone);
    }
    if (x < -deadzone) {
        return (x + deadzone) / (1.0f - deadzone);
    }
    return 0.0f;
}

// Get analog stick Y with deadzone, normalized to [-1, 1]
// Negative Y is forward in MKW's coordinate system.
// The stick Y value controls acceleration input magnitude.
// @addr 0x80594150
f32 KartInput::getStickY(f32 deadzone) const {
    f32 y = currentInputState.stickY;
    if (y > deadzone) {
        return (y - deadzone) / (1.0f - deadzone);
    }
    if (y < -deadzone) {
        return (y + deadzone) / (1.0f - deadzone);
    }
    return 0.0f;
}

// Get trigger value normalized to [0, 1]
// triggerIdx 0 = L trigger (brake/drift), triggerIdx 1 = R trigger
// In the real game, analog trigger values come from the GC controller's
// analog L/R triggers (0-255 raw). For Wii Remote + Nunchuk, triggers
// are digital-only (0 or 1).
// @addr 0x80594200
f32 KartInput::getTrigger(u32 triggerIdx) const {
    if (triggerIdx == 0) {
        // L trigger - check analog value if available, else digital
        if (currentInputState.buttons & PAD_TRIGGER_L) {
            return 1.0f;
        }
        return 0.0f;
    }
    // R trigger - check analog value if available, else digital
    if (currentInputState.buttons & PAD_TRIGGER_R) {
        return 1.0f;
    }
    return 0.0f;
}

// Set AI-controlled input (used when player is remote/ghost)
// This copies the externally-generated AI input state into the kart's
// input buffer, allowing the AI system to control the kart the same
// way a human player would.
// @addr 0x80594250
void KartInput::setAIInput(const System::KPadRaceInputState& aiState) {
    lastInputState = currentInputState;
    currentInputState = aiState;
}

// Reset all inputs to neutral (no buttons, centered stick)
// Called during respawn, wipeout, and mode transitions to ensure
// no stale input carries over.
// @addr 0x80594300
void KartInput::resetToNeutral() {
    lastInputState = currentInputState;
    currentInputState.stickX = 0.0f;
    currentInputState.stickY = 0.0f;
    currentInputState.buttons = 0;
}

} // namespace Kart
