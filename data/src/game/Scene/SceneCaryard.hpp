#pragma once
// SceneCaryard.hpp — Character Select / Kart Select Scene
// Reconstructed from Scene module (0x8052xxxx)
//
// CaryardScene handles the character and kart selection flow.
// Players cycle through characters, view stats, and pick a kart
// before entering the race.

#include "rk_common.h"

namespace Scene {

// =============================================================================
// CaryardScene — Character and kart selection screen
//
// Manages the character grid, kart browser, stat display,
// and confirmation flow. Supports local multiplayer selection.
// =============================================================================
class CaryardScene {
public:
    enum SelectionState {
        SEL_CHARACTER = 0,   // Choosing a character
        SEL_KART      = 1,   // Choosing a kart
        SEL_CONFIRM   = 2,   // Confirming selection
        SEL_COMPLETE  = 3,   // Selection done, transitioning
    };

    enum MenuCursor {
        CURSOR_CHARACTER = 0,
        CURSOR_KART      = 1,
        CURSOR_CONFIRM   = 2,
        CURSOR_COUNT     = 3,
    };

    CaryardScene();
    ~CaryardScene();

    /// Initialize the caryard scene (load models, layouts, etc.)
    void init();

    /// Per-frame update (handle input, animate selection, etc.)
    void calc();

    /// Render the scene (character model, kart model, UI overlay)
    void draw();

    /// Select a character by ID.
    /// @param charId  Character index (0-35 for MKWii roster)
    void selectCharacter(s32 charId);

    /// Select a kart/vehicle by ID.
    /// @param kartId  Vehicle index
    void selectKart(s32 kartId);

    /// Confirm the current character + kart selection and proceed.
    void confirmSelection();

    // State queries
    SelectionState getSelectionState() const { return m_state; }
    s32 getSelectedCharacter() const { return m_selectedCharId; }
    s32 getSelectedKart() const { return m_selectedKartId; }
    s32 getPlayerIdx() const { return m_playerIdx; }

    /// Set which player is selecting (for multiplayer).
    void setPlayerIdx(s32 idx) { m_playerIdx = idx; }

    /// Check if selection is complete.
    bool isComplete() const { return m_state == SEL_COMPLETE; }

private:
    void updateCharacterCursor();
    void updateKartCursor();
    void updateStatDisplay();
    void loadCharacterModel(s32 charId);
    void loadKartModel(s32 kartId);
    void playSelectSound();
    void playConfirmSound();

    SelectionState m_state;
    s32 m_playerIdx;           // Current player selecting (0-3)
    s32 m_selectedCharId;      // Currently highlighted character
    s32 m_selectedKartId;      // Currently highlighted kart
    s32 m_confirmedCharId;     // Confirmed character selection
    s32 m_confirmedKartId;     // Confirmed kart selection
    s32 m_charCursorRow;       // Character grid cursor row
    s32 m_charCursorCol;       // Character grid cursor column
    u32 m_animTimer;           // Animation timer for transitions
    f32 m_transitionProgress;  // 0.0-1.0 for state transitions
    bool m_modelLoaded;        // Whether current model is loaded
    void* m_charModelRes;      // Character model resource
    void* m_kartModelRes;      // Kart model resource
};

} // namespace Scene