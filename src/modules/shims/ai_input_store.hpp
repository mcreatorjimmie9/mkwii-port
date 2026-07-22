// ai_input_store.hpp — Per-player AI input storage for pad_bridge
//
// When CPU players use the decompiled PlayerSub10 physics pipeline, their
// input comes from the AI controller instead of the human input device.
// This store holds the per-player AI-generated InputState so that the
// extern "C" bridge functions (sub_getTurnInput, sub_getAccelInput, etc.)
// can return the correct values for each player.
//
// In the original MKWii, this is handled by KPadAI — each player slot has
// its own KPad instance, and the AI writes its computed input to that KPad.
// We replicate this mechanism with a simple per-player InputState array.

#pragma once

#include "platform/input.hpp"
#include <rk_types.h>

#define AI_INPUT_MAX_PLAYERS 12

// Global AI input storage (accessible from both C++ and extern "C" bridges)
struct AIInputGlobalStore {
    Platform::InputState playerInput[AI_INPUT_MAX_PLAYERS];
    bool hasInput[AI_INPUT_MAX_PLAYERS];
    Platform::InputState zeroInput;

    AIInputGlobalStore() {
        for (int i = 0; i < AI_INPUT_MAX_PLAYERS; i++) {
            hasInput[i] = false;
        }
    }
};

// Single global instance
inline AIInputGlobalStore& getAIInputStore() {
    static AIInputGlobalStore s_store;
    return s_store;
}

namespace AIInputStore {

// Set the AI-generated input for a specific player.
// This is called by Player::update() before PlayerSub10::update().
inline void setPlayerInput(u32 playerIdx, const Platform::InputState& input) {
    if (playerIdx >= AI_INPUT_MAX_PLAYERS) return;
    auto& store = getAIInputStore();
    store.playerInput[playerIdx] = input;
    store.hasInput[playerIdx] = true;
}

// Check if a player has AI input available (set this frame).
inline bool hasAIInput(u32 playerIdx) {
    if (playerIdx >= AI_INPUT_MAX_PLAYERS) return false;
    return getAIInputStore().hasInput[playerIdx];
}

// Get the AI input for a player. Returns zeroed state if not set.
inline const Platform::InputState& getPlayerInput(u32 playerIdx) {
    if (playerIdx >= AI_INPUT_MAX_PLAYERS) return getAIInputStore().zeroInput;
    return getAIInputStore().playerInput[playerIdx];
}

// Reset all AI inputs at the start of each frame.
// Called by SceneRace::updateRacing() before processing any players.
inline void resetFrame() {
    auto& store = getAIInputStore();
    for (u32 i = 0; i < AI_INPUT_MAX_PLAYERS; i++) {
        store.hasInput[i] = false;
    }
}

} // namespace AIInputStore
