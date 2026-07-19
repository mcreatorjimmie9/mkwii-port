#pragma once

#include "KPadController.hpp"

namespace System {

// KPadAI: AI-controlled pad input state, extends KPad with AI stick data
// Used to provide synthesized input from the AI system
struct KPadAI: public KPad {
    KPadAI();

    // setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState
    // Address: 0x80523E94
    // Size: 16 bytes, 4 instructions
    // Copies the AI-generated race input state into the KPad
    void setInputState(KPadRaceInputState* inputState);

    // The stick values are stored at offsets relative to the base class
    // that correspond to the u16 zeroing in the constructor:
    // 0xC6, 0xC8 (raw stick X/Y), 0x1B2, 0x1B4 (sub-stick X/Y),
    // 0x29E, 0x2A0 (trigger L/R), 0x38A, 0x38C (additional inputs)
};

// KPadAIController: Manages AI input calculation and dispatch
// Bridges the AI engine output to the KPadRaceInputState
struct KPadAIController {
    // calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState
    // Address: 0x80526F40
    // Size: 76 bytes, 19 instructions
    void calcInner(KPadRaceInputState* raceInput, KPadUIInputState* uiInput);
};

} // namespace System