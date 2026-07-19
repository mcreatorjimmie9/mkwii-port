#include "SceneCaryard.hpp"

namespace Scene {

CaryardScene::CaryardScene()
    : m_state(SEL_CHARACTER)
    , m_playerIdx(0)
    , m_selectedCharId(0)
    , m_selectedKartId(0)
    , m_confirmedCharId(-1)
    , m_confirmedKartId(-1)
    , m_charCursorRow(0)
    , m_charCursorCol(0)
    , m_animTimer(0)
    , m_transitionProgress(0.0f)
    , m_modelLoaded(false)
    , m_charModelRes(nullptr)
    , m_kartModelRes(nullptr) {}

CaryardScene::~CaryardScene() {}

void CaryardScene::init() {
    m_state = SEL_CHARACTER;
    m_selectedCharId = 0;
    m_selectedKartId = 0;
    m_confirmedCharId = -1;
    m_confirmedKartId = -1;
    m_charCursorRow = 0;
    m_charCursorCol = 0;
    m_animTimer = 0;
    m_transitionProgress = 0.0f;
    m_modelLoaded = false;
    m_charModelRes = nullptr;
    m_kartModelRes = nullptr;

    // Load default character model for initial display
    loadCharacterModel(m_selectedCharId);
}

void CaryardScene::calc() {
    m_animTimer++;

    switch (m_state) {
    case SEL_CHARACTER:
        updateCharacterCursor();
        break;
    case SEL_KART:
        updateKartCursor();
        break;
    case SEL_CONFIRM:
        // Waiting for player to press confirm
        break;
    case SEL_COMPLETE:
        // Transitioning out — nothing to update
        break;
    }
}

void CaryardScene::draw() {
    // Render character/kart model preview
    // Render stat bars (speed, acceleration, handling, drift, offroad, mini-turbo)
    // Render selection cursor and UI layout
}

void CaryardScene::selectCharacter(s32 charId) {
    if (m_state != SEL_CHARACTER) return;

    m_selectedCharId = charId;
    loadCharacterModel(charId);
    playSelectSound();
    updateStatDisplay();
}

void CaryardScene::selectKart(s32 kartId) {
    if (m_state != SEL_KART) return;

    m_selectedKartId = kartId;
    loadKartModel(kartId);
    playSelectSound();
    updateStatDisplay();
}

void CaryardScene::confirmSelection() {
    if (m_state == SEL_CHARACTER) {
        m_confirmedCharId = m_selectedCharId;
        m_state = SEL_KART;
        m_transitionProgress = 0.0f;
        loadKartModel(m_selectedKartId);
    } else if (m_state == SEL_KART) {
        m_confirmedKartId = m_selectedKartId;
        m_state = SEL_CONFIRM;
    } else if (m_state == SEL_CONFIRM) {
        m_state = SEL_COMPLETE;
        playConfirmSound();
    }
}

// --- Private methods ---

void CaryardScene::updateCharacterCursor() {
    // Handle D-pad/grid navigation for character selection
    // Characters are arranged in a 6-column grid
}

void CaryardScene::updateKartCursor() {
    // Handle left/right navigation for kart selection
    // Karts are displayed in a horizontal strip
}

void CaryardScene::updateStatDisplay() {
    // Update the stat bar display for the currently selected
    // character + kart combination
}

void CaryardScene::loadCharacterModel(s32 charId) {
    (void)charId;
    // Load the character's 3D model for the preview
    // In the real game, this loads from the character's BRRES archive
    m_modelLoaded = true;
}

void CaryardScene::loadKartModel(s32 kartId) {
    (void)kartId;
    // Load the kart's 3D model for the preview
    m_modelLoaded = true;
}

void CaryardScene::playSelectSound() {
    // Play menu cursor sound effect (SE_MENU_CURSOR)
}

void CaryardScene::playConfirmSound() {
    // Play menu confirm sound effect (SE_MENU_DECIDE)
}

} // namespace Scene