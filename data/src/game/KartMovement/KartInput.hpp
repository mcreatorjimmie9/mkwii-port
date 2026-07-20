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

    // Get trigger value normalized to [0, 1]
    // @addr 0x80594200
    f32 getTrigger(u32 triggerIdx) const;

    // Set AI-controlled input (used when player is remote/ghost)
    // @addr 0x80594250
    void setAIInput(const System::KPadRaceInputState& aiState);

    // Reset all inputs to neutral
    // @addr 0x80594300
    void resetToNeutral();

    u8 field_0x04[36];
    System::KPadRaceInputState currentInputState;
    System::KPadRaceInputState lastInputState;
    u8 field_0x58[128];
};

} // namespace Kart
