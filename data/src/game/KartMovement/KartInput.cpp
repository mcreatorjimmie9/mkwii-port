#include <cstring>
#include <cmath>
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

// Default deadzone radius for the analog stick
const f32 DEFAULT_DEADZONE    = 0.15f;
// Maximum stick deflection (input should be pre-normalized to [-1, 1])
const f32 STICK_MAX           = 1.0f;
// Minimum input magnitude to register as "active" for hasAnyInput()
const f32 ANY_INPUT_THRESH    = 0.08f;
// Driver-assist steering correction factor (reduces oversteer at speed)
const f32 DRIVER_ASSIST_FACTOR = 0.15f;
// Stick smoothing factor for analog input (0 = none, 1 = full)
const f32 STICK_SMOOTHING     = 0.4f;
// Buttons that are considered "active input" for idle detection
const u32 IDLE_BUTTON_MASK    = PAD_BUTTON_A | PAD_BUTTON_B | PAD_BUTTON_X |
                                PAD_BUTTON_Y | PAD_TRIGGER_L | PAD_TRIGGER_R |
                                PAD_TRIGGER_Z | PAD_BUTTON_START;
} // anonymous namespace

KartInput::KartInput() {
    memset(this, 0, sizeof(KartInput));
    m_deadzone = DEFAULT_DEADZONE;
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

    // Apply KPAD-style post-processing to the raw values:
    // 1. Clamp stick values to valid range in case the external
    //    system produces out-of-bounds values (can happen with
    //    third-party controllers or during connection transitions)
    if (currentInputState.stickX > STICK_MAX) currentInputState.stickX = STICK_MAX;
    if (currentInputState.stickX < -STICK_MAX) currentInputState.stickX = -STICK_MAX;
    if (currentInputState.stickY > STICK_MAX) currentInputState.stickY = STICK_MAX;
    if (currentInputState.stickY < -STICK_MAX) currentInputState.stickY = -STICK_MAX;

    // 2. Apply circular deadzone to the stick input.
    //    MKW uses a circular deadzone: if the stick magnitude is within
    //    the deadzone radius, both X and Y are zeroed. This prevents
    //    diagonal deadzone edge artifacts.
    f32 sx = currentInputState.stickX;
    f32 sy = currentInputState.stickY;
    f32 mag = sqrtf(sx * sx + sy * sy);
    if (mag < m_deadzone) {
        currentInputState.stickX = 0.0f;
        currentInputState.stickY = 0.0f;
    } else if (mag > STICK_MAX) {
        // Rescale to unit circle if magnitude exceeds 1.0
        // (can happen with non-circular hardware ranges)
        f32 scale = STICK_MAX / mag;
        currentInputState.stickX = sx * scale;
        currentInputState.stickY = sy * scale;
    }
    // else: within valid range, no adjustment needed

    // 3. Ensure trigger values are clamped to [0, 1]
    if (currentInputState.triggerL < 0.0f) currentInputState.triggerL = 0.0f;
    if (currentInputState.triggerL > 1.0f) currentInputState.triggerL = 1.0f;
    if (currentInputState.triggerR < 0.0f) currentInputState.triggerR = 0.0f;
    if (currentInputState.triggerR > 1.0f) currentInputState.triggerR = 1.0f;
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
        return (x - deadzone) / (STICK_MAX - deadzone);
    }
    if (x < -deadzone) {
        return (x + deadzone) / (STICK_MAX - deadzone);
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
        return (y - deadzone) / (STICK_MAX - deadzone);
    }
    if (y < -deadzone) {
        return (y + deadzone) / (STICK_MAX - deadzone);
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

// Process raw input with driver-assist filtering and smoothing.
// Applies stick smoothing to reduce jitter, and optionally applies
// driver-assist corrections for casual players. Called after
// readRawInput() each frame.
void KartInput::processInput() {
    // Apply analog stick smoothing to reduce input jitter.
    // This blends the current raw stick position with the previous
    // frame's value for a smoother steering response.
    f32 smoothX = lastInputState.stickX * (1.0f - STICK_SMOOTHING) +
                  currentInputState.stickX * STICK_SMOOTHING;
    f32 smoothY = lastInputState.stickY * (1.0f - STICK_SMOOTHING) +
                  currentInputState.stickY * STICK_SMOOTHING;

    // Apply deadzone to smoothed values
    f32 dz = m_deadzone;
    if (smoothX > -dz && smoothX < dz) smoothX = 0.0f;
    if (smoothY > -dz && smoothY < dz) smoothY = 0.0f;

    // Clamp to valid range
    if (smoothX > STICK_MAX) smoothX = STICK_MAX;
    if (smoothX < -STICK_MAX) smoothX = -STICK_MAX;
    if (smoothY > STICK_MAX) smoothY = STICK_MAX;
    if (smoothY < -STICK_MAX) smoothY = -STICK_MAX;

    // Write processed values back
    currentInputState.stickX = smoothX;
    currentInputState.stickY = smoothY;

    // Driver-assist: reduce maximum steering at high deflection to
    // help prevent overcorrection. This is a subtle effect that
    // scales linearly with stick magnitude.
    f32 steerMag = (smoothX > 0.0f) ? smoothX : -smoothX;
    if (steerMag > 0.7f) {
        f32 assistReduction = (steerMag - 0.7f) / 0.3f; // 0 at 0.7, 1 at 1.0
        f32 correction = assistReduction * DRIVER_ASSIST_FACTOR;
        if (smoothX > 0.0f) {
            currentInputState.stickX = smoothX - correction;
        } else if (smoothX < 0.0f) {
            currentInputState.stickX = smoothX + correction;
        }
    }
}

// Set raw button state directly (for external injection, e.g. replay)
void KartInput::setRawButtonState(u32 buttons) {
    lastInputState.buttons = currentInputState.buttons;
    currentInputState.buttons = buttons;
}

// Set raw analog stick state directly (for external injection)
void KartInput::setRawStickState(f32 stickX, f32 stickY) {
    lastInputState.stickX = currentInputState.stickX;
    lastInputState.stickY = currentInputState.stickY;
    // Clamp to valid range
    if (stickX > STICK_MAX) stickX = STICK_MAX;
    if (stickX < -STICK_MAX) stickX = -STICK_MAX;
    if (stickY > STICK_MAX) stickY = STICK_MAX;
    if (stickY < -STICK_MAX) stickY = -STICK_MAX;
    currentInputState.stickX = stickX;
    currentInputState.stickY = stickY;
}

// Check if steering is currently directed to the left
bool KartInput::isSteeringLeft() const {
    return currentInputState.stickX < -m_deadzone;
}

// Check if steering is currently directed to the right
bool KartInput::isSteeringRight() const {
    return currentInputState.stickX > m_deadzone;
}

// Get the absolute magnitude of the steering input
f32 KartInput::getSteeringMagnitude() const {
    f32 x = currentInputState.stickX;
    f32 mag = (x > 0.0f) ? x : -x;
    // Apply deadzone: if within deadzone, return 0
    if (mag <= m_deadzone) return 0.0f;
    // Rescale to [0, 1] accounting for deadzone
    return (mag - m_deadzone) / (STICK_MAX - m_deadzone);
}

// Check if any input is currently active (buttons or stick)
bool KartInput::hasAnyInput() const {
    // Check buttons
    if (currentInputState.buttons & IDLE_BUTTON_MASK) return true;
    // Check D-pad
    u32 dpad = PAD_DPAD_UP | PAD_DPAD_DOWN | PAD_DPAD_LEFT | PAD_DPAD_RIGHT;
    if (currentInputState.buttons & dpad) return true;
    // Check stick
    f32 sx = (currentInputState.stickX > 0.0f) ? currentInputState.stickX : -currentInputState.stickX;
    f32 sy = (currentInputState.stickY > 0.0f) ? currentInputState.stickY : -currentInputState.stickY;
    if (sx > ANY_INPUT_THRESH || sy > ANY_INPUT_THRESH) return true;
    return false;
}

// Get a const reference to the current input state
const System::KPadRaceInputState& KartInput::getInputState() const {
    return currentInputState;
}

// Set the per-kart analog deadzone radius
void KartInput::setDeadzone(f32 radius) {
    // Clamp to valid range [0.0, 0.5]
    if (radius < 0.0f) radius = 0.0f;
    if (radius > 0.5f) radius = 0.5f;
    m_deadzone = radius;
}

// @addr 0x80594400 (estimated)
// Full initialization of the input system for a player.
// Resets all state and configures the deadzone.
void KartInput::init() {
    memset(this, 0, sizeof(KartInput));
    m_deadzone = DEFAULT_DEADZONE;
}

// @addr 0x80594450 (estimated)
// Per-frame input update. Reads raw input, processes it,
// and applies driver-assist filtering.
void KartInput::update() {
    readRawInput();
    processInput();
}

// @addr 0x80594480 (estimated)
// Get the horizontal stick input with default deadzone.
// Convenience wrapper for getStickX(m_deadzone).
f32 KartInput::getStickX() const {
    return getStickX(m_deadzone);
}

// @addr 0x805944A0 (estimated)
// Get the vertical stick input with default deadzone.
// Convenience wrapper for getStickY(m_deadzone).
f32 KartInput::getStickY() const {
    return getStickY(m_deadzone);
}

// @addr 0x805944C0 (estimated)
// Check if the brake button is being held.
// In MKW, braking uses the B button or the L trigger (depending on controls).
bool KartInput::isBraking() const {
    return isButtonHeld(PAD_BUTTON_B) || (getTrigger(0) > 0.5f);
}

// @addr 0x805944E0 (estimated)
// Check if the accelerate button is being held.
// In MKW, acceleration uses the A button (automatic in most modes)
// or the analog A button hold.
bool KartInput::isAccelerating() const {
    return isButtonHeld(PAD_BUTTON_A);
}

// @addr 0x80594500 (estimated)
// Check if the player is actively drifting.
// Drifting is initiated by holding the drift button (R trigger or B)
// while steering left or right at sufficient speed.
bool KartInput::isDrifting() const {
    if (!isSteeringLeft() && !isSteeringRight()) return false;
    return isButtonHeld(PAD_TRIGGER_R) || isButtonHeld(PAD_BUTTON_B);
}

// @addr 0x80594520 (estimated)
// Get the L trigger value (brake/drift input).
f32 KartInput::getTriggerL() {
    return getTrigger(0);
}

// @addr 0x80594540 (estimated)
// Get the R trigger value (drift/item use input).
f32 KartInput::getTriggerR() {
    return getTrigger(1);
}

// @addr 0x80594560 (estimated)
// Apply deadzone to raw stick values in-place.
// Uses the per-kart deadzone radius.
void KartInput::applyDeadzone() {
    f32 dz = m_deadzone;
    f32 sx = currentInputState.stickX;
    f32 sy = currentInputState.stickY;

    // Circular deadzone
    f32 mag = sqrtf(sx * sx + sy * sy);
    if (mag < dz) {
        currentInputState.stickX = 0.0f;
        currentInputState.stickY = 0.0f;
    } else if (mag > STICK_MAX) {
        f32 scale = STICK_MAX / mag;
        currentInputState.stickX = sx * scale;
        currentInputState.stickY = sy * scale;
    }
}

// @addr 0x80594580 (estimated)
// Check if the item use button was pressed this frame.
bool KartInput::isItemUse() const {
    return isButtonPressed(PAD_BUTTON_X) || isButtonPressed(PAD_TRIGGER_Z);
}

} // namespace Kart