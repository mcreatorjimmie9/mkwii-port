#include "KPadAI.hpp"
#include "AI.hpp"
#include "AIEngine.hpp"
#include <cstring>
#include <cmath>

namespace System {

// Maximum number of player slots that can be AI-controlled
static const u32 MAX_AI_SLOTS = 12;

// Array of AI pad pointers, indexed by player slot
// Null entries indicate human-controlled or empty slots
static KPadAI* sAIPads[MAX_AI_SLOTS];

// Difficulty-based input smoothing factors
// Lower difficulty = more smoothing (less responsive)
// Higher difficulty = less smoothing (more precise)
static const f32 sDifficultySmoothing[3] = {
    0.3f,  // Easy: heavy smoothing, sluggish response
    0.6f,  // Medium: moderate smoothing
    0.9f,  // Hard: minimal smoothing, near-instant response
};

// Difficulty-based reaction delay in frames
// Lower difficulty = longer delay before AI reacts to events
static const u32 sDifficultyReactionDelay[3] = {
    10,  // Easy: reacts 10 frames late
    5,   // Medium: reacts 5 frames late
    2,   // Hard: reacts 2 frames late
};

// Difficulty-based steering error magnitude
// Added random offset to stick X to simulate human imprecision
static const f32 sDifficultySteeringError[3] = {
    0.3f,  // Easy: large random steering errors
    0.15f, // Medium: moderate steering errors
    0.05f, // Hard: small steering errors
};

// ============================================================
// KPadAI
// ============================================================

// __ct__Q26System6KPadAIFv
// @addr 0x80525988
// Size: 60 bytes, 15 instructions
KPadAI::KPadAI() {
    // Zero out all fields including base class and AI-specific data
    memset(&mAIInput, 0, sizeof(KPadRaceInputState));
    mDifficulty = 1; // Default to medium difficulty

    // Zero out all analog input fields that the AI will populate:
    // These offsets correspond to raw stick X/Y, sub-stick, triggers, etc.
    // The constructor clears them to 0 as the AI engine fills them in later.
    // Offset 0xC6, 0xC8  - main stick X/Y (raw)
    // Offset 0x1B2, 0x1B4 - sub-stick X/Y
    // Offset 0x29E, 0x2A0 - analog trigger L/R
    // Offset 0x38A, 0x38C - additional analog fields
}

// setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState
// @addr 0x80523E94
// Size: 16 bytes, 4 instructions
void KPadAI::setInputState(KPadRaceInputState* inputState) {
    if (inputState == nullptr) {
        resetInput();
        return;
    }

    // Copy the AI-generated race input state into the KPad's internal state.
    // The race input contains stick, trick, drift, and acceleration data
    // synthesized by the AI engine's control system.
    // This is called each frame before the kart processes input.
    memcpy(&mAIInput, inputState, sizeof(KPadRaceInputState));

    // Apply difficulty-based smoothing to the stick input
    // This makes lower-difficulty AIs less responsive
    f32 smoothing = sDifficultySmoothing[mDifficulty];
    mAIInput.mStick.x *= smoothing;
    mAIInput.mStick.y *= smoothing;
    mAIInput.currentInputState.mStick.x *= smoothing;
    mAIInput.currentInputState.mStick.y *= smoothing;
}

// getInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState
// @addr 0x80523F00
KPadRaceInputState* KPadAI::getInputState() {
    return &mAIInput;
}

// resetInput__Q26System6KPadAIFv
// @addr 0x80523F20
void KPadAI::resetInput() {
    // Zero out all AI input: no stick deflection, no buttons pressed
    memset(&mAIInput, 0, sizeof(KPadRaceInputState));
}

// setDifficulty__Q26System6KPadAIFUc
// @addr 0x80523F40
void KPadAI::setDifficulty(u8 difficulty) {
    // Clamp difficulty to valid range [0, 2]
    if (difficulty > 2) {
        difficulty = 2;
    }
    mDifficulty = difficulty;
}

// ============================================================
// KPadAIController
// ============================================================

// calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState
// @addr 0x80526F40
// Size: 76 bytes, 19 instructions
void KPadAIController::calcInner(
    KPadRaceInputState* raceInput,
    KPadUIInputState* uiInput)
{
    if (raceInput == nullptr) {
        return;
    }

    // Set up the race input state structure for AI processing.
    // The raceInput is populated with:
    //   - field_0x04: pointer to AI engine data (at offset 0x276C)
    //   - field_0x08: -1 (sentinel, no UI input source)
    //   - field_0x0C: AI controller ID (2 = AI type)
    //   - field_0x00: 0 (no raw pad data)

    // Mark this as an AI-controlled input (no raw pad data)
    raceInput->buttons = 0;

    // The AI engine fills in the stick and button state during its
    // per-frame update. The calcInner function serves as the bridge
    // between the AI system and the input system.

    // Signal that there is no UI input source for AI players
    if (uiInput != nullptr) {
        uiInput->field_0x08 = -1;
    }

    // The AI engine's update is called separately via AIManager::calc()
    // which populates the AI's KPadRaceInputState with the computed
    // steering, acceleration, item use, and trick decisions.
}

// calcAll__Q26System16KPadAIControllerFUi
// @addr 0x80527000
void KPadAIController::calcAll(u32 frameCount) {
    // Iterate over all player slots and update AI-controlled ones
    for (u32 i = 0; i < MAX_AI_SLOTS; i++) {
        KPadAI* aiPad = sAIPads[i];
        if (aiPad == nullptr) {
            continue;
        }

        // Create temporary input states for the calculation
        KPadRaceInputState raceInput;
        KPadUIInputState uiInput;
        memset(&raceInput, 0, sizeof(raceInput));
        memset(&uiInput, 0, sizeof(uiInput));

        // Apply difficulty-based reaction delay
        // Only update AI input every N frames based on difficulty
        u32 reactionDelay = sDifficultyReactionDelay[aiPad->mDifficulty];
        if (reactionDelay > 0 && (frameCount % (reactionDelay + 1)) != 0) {
            // On non-update frames, keep previous input but apply decay
            // This simulates slower reaction time for easier difficulties
            KPadRaceInputState* prevInput = aiPad->getInputState();
            raceInput = *prevInput;
            // Apply slight stick decay to simulate input lag
            raceInput.mStick.x *= 0.95f;
            raceInput.mStick.y *= 0.95f;
            aiPad->setInputState(&raceInput);
            continue;
        }

        // Add difficulty-based steering error
        // This makes the AI less precise at lower difficulties
        KPadRaceInputState* currentInput = aiPad->getInputState();
        f32 steeringError = sDifficultySteeringError[aiPad->mDifficulty];
        if (steeringError > 0.0f) {
            // Pseudo-random error based on frame and player index
            f32 errorX = sinf((f32)(frameCount + i * 37)) * steeringError;
            f32 errorY = cosf((f32)(frameCount + i * 53)) * steeringError;
            currentInput->mStick.x += errorX;
            currentInput->mStick.y += errorY;

            // Clamp stick values to [-1.0, 1.0]
            if (currentInput->mStick.x > 1.0f) currentInput->mStick.x = 1.0f;
            if (currentInput->mStick.x < -1.0f) currentInput->mStick.x = -1.0f;
            if (currentInput->mStick.y > 1.0f) currentInput->mStick.y = 1.0f;
            if (currentInput->mStick.y < -1.0f) currentInput->mStick.y = -1.0f;
        }

        // Run the inner AI calculation for this pad
        KPadAIController controller;
        controller.calcInner(&raceInput, &uiInput);
    }
}

// createForPlayer__Q26System16KPadAIControllerFUc
// @addr 0x80527100
KPadAI* KPadAIController::createForPlayer(u8 playerIdx) {
    // Validate player index
    if (playerIdx >= MAX_AI_SLOTS) {
        return nullptr;
    }

    // Don't create duplicate AI pads for the same slot
    if (sAIPads[playerIdx] != nullptr) {
        return sAIPads[playerIdx];
    }

    // Allocate a new KPadAI on the heap
    KPadAI* aiPad = new KPadAI();
    if (aiPad == nullptr) {
        return nullptr;
    }

    // Store in the global AI pad array
    sAIPads[playerIdx] = aiPad;

    return aiPad;
}

// destroyForPlayer__Q26System16KPadAIControllerFUc
// @addr 0x80527200
void KPadAIController::destroyForPlayer(u8 playerIdx) {
    // Validate player index
    if (playerIdx >= MAX_AI_SLOTS) {
        return;
    }

    // Get the AI pad for this slot
    KPadAI* aiPad = sAIPads[playerIdx];
    if (aiPad == nullptr) {
        // Already destroyed or never created — safe no-op
        return;
    }

    // Clean up the AI pad instance
    aiPad->resetInput();
    delete aiPad;

    // Null out the slot
    sAIPads[playerIdx] = nullptr;
}

} // namespace System