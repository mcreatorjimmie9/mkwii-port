#pragma once

#include <rk_types.h>
#include <decomp.h>

#include <KPadController.hpp>

namespace Kart {

class KartInput {
public:
    KartInput();
    virtual ~KartInput();

    // Read the raw input state from the KPad controller
    // @addr 0x80594000
    void readRawInput();

    // Check if a button was just pressed this frame (edge detection)
    // @addr 0x80594050
    bool isButtonPressed(u32 button) const;

    // Check if a button is currently held
    // @addr 0x80594080
    bool isButtonHeld(u32 button) const;

    // Get analog stick X with deadzone, normalized to [-1, 1]
    // @addr 0x80594100
    f32 getStickX(f32 deadzone) const;

    // Get analog stick Y with deadzone, normalized to [-1, 1]
    // @addr 0x80594150
    f32 getStickY(f32 deadzone) const;

    // Get stick X with default deadzone
    f32 getStickX() const;

    // Get stick Y with default deadzone
    f32 getStickY() const;

    // Get trigger value normalized to [0, 1]
    // @addr 0x80594200
    f32 getTrigger(u32 triggerIdx) const;

    // Set AI-controlled input (used when player is remote/ghost)
    // @addr 0x80594250
    void setAIInput(const System::KPadRaceInputState& aiState);

    // Reset all inputs to neutral
    // @addr 0x80594300
    void resetToNeutral();

    // Process raw input with driver-assist filtering and smoothing.
    // Called after readRawInput() to produce final kart-facing input values.
    void processInput();

    // Set raw button state directly (for external injection, e.g. replay).
    void setRawButtonState(u32 buttons);

    // Set raw analog stick state directly (for external injection).
    // Values should be in [-1.0, 1.0] range.
    void setRawStickState(f32 stickX, f32 stickY);

    // Check if steering is currently directed to the left.
    // Returns true if stick X is beyond the negative deadzone threshold.
    bool isSteeringLeft() const;

    // Check if steering is currently directed to the right.
    // Returns true if stick X is beyond the positive deadzone threshold.
    bool isSteeringRight() const;

    // Get the absolute magnitude of the steering input.
    // Returns value in [0.0, 1.0].
    f32 getSteeringMagnitude() const;

    // Check if any input is currently active (buttons or stick).
    // Useful for idle detection and controller disconnect.
    bool hasAnyInput() const;

    // Get a const reference to the current input state.
    const System::KPadRaceInputState& getInputState() const;

    // Set the per-kart analog deadzone radius.
    void setDeadzone(f32 radius);

    // Get the per-kart analog deadzone radius.
    f32 getDeadzone() const { return m_deadzone; }

    // Full initialization of input system
    void init();

    // Per-frame input update (read + process)
    void update();

    // Check if brake button is held
    bool isBraking() const;

    // Check if accelerate button is held
    bool isAccelerating() const;

    // Check if drifting (steering + drift button)
    bool isDrifting() const;

    // Get L trigger value
    f32 getTriggerL();

    // Get R trigger value
    f32 getTriggerR();

    // Apply deadzone to raw stick values in-place
    void applyDeadzone();

    // Check if item use button pressed this frame
    bool isItemUse() const;

    // D-pad helpers
    bool isDpadUp() const;
    bool isDpadDown() const;
    bool isDpadLeft() const;
    bool isDpadRight() const;
    bool isDpadAny() const;
    bool isPausePressed() const;
    void getDpadDirection(s32* outX, s32* outY) const;

    // Raw input access
    f32 getRawStickX() const;
    f32 getRawStickY() const;

    // Edge detection
    bool isButtonReleased(u32 button) const;
    u32 getButtons() const;
    u32 getButtonsChanged() const;
    u32 getTrickDirection() const;

    u8 field_0x04[36];
    System::KPadRaceInputState currentInputState;
    System::KPadRaceInputState lastInputState;
    u8 field_0x58[124];
    f32 m_deadzone;  // Per-kart analog stick deadzone radius
};

} // namespace Kart
