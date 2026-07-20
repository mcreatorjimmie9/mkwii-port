// SceneCaryard.cpp — Character Select / Kart Select Scene implementation
// Reconstructed from Scene module (0x8052xxxx)
//
// The CaryardScene manages the character and kart selection flow in
// Mario Kart Wii. Players browse a 6-column character grid, pick a
// kart from a horizontal strip, view stat bars, and confirm before
// entering the race. Supports up to 4 local players.

#include "SceneCaryard.hpp"
#include <string.h>

namespace Scene {

// =============================================================================
// Constants
// =============================================================================

// Character grid layout
static const s32 CHAR_GRID_COLS = 6;
static const s32 CHAR_GRID_ROWS = 6;      // 36 characters max
static const s32 CHAR_COUNT = 36;

// Kart browser layout
static const s32 KART_COUNT = 36;
static const s32 KARTS_PER_PAGE = 6;

// Stat indices for vehicle stats display
static const s32 STAT_SPEED       = 0;
static const s32 STAT_ACCEL       = 1;
static const s32 STAT_WEIGHT      = 2;
static const s32 STAT_HANDLING    = 3;
static const s32 STAT_OFFROAD     = 4;
static const s32 STAT_MINITURBO   = 5;
static const s32 STAT_COUNT       = 6;

// Animation timing
static const u32 MODEL_ROTATE_SPEED = 0x200; // Rotation units per frame
static const f32 CURSOR_MOVE_DURATION = 8.0f; // Frames for cursor animation
static const f32 TRANSITION_FADE_SPEED = 0.04f;

// =============================================================================
// Anonymous namespace — Vehicle stat table stubs
// =============================================================================
namespace {

// Vehicle base stats table — filled in from game data.
// Real game loads from KartParam.arc / KartStats.bin.
// Each entry: speed, accel, weight, handling, offroad, mini-turbo (0-100 scale).
struct VehicleStats {
    u8 speed;
    u8 accel;
    u8 weight;
    u8 handling;
    u8 offroad;
    u8 miniTurbo;
};

// Placeholder stat table — in the real game this is loaded from archives
static const VehicleStats s_kartStats[KART_COUNT] = {};

// Placeholder character weight classes
// 0 = light, 1 = medium, 2 = heavy
static const u8 s_charWeightClass[CHAR_COUNT] = {};

// Get combined stats for a character + kart pairing.
// Character weight class modifies kart base stats.
void getCombinedStats(s32 charId, s32 kartId, u8 out[STAT_COUNT]) {
    if (charId < 0 || charId >= CHAR_COUNT || kartId < 0 || kartId >= KART_COUNT) {
        memset(out, 0, STAT_COUNT);
        return;
    }

    const VehicleStats& base = s_kartStats[kartId];
    u8 weightClass = s_charWeightClass[charId];

    // Weight class modifies the effective stats
    // Light characters: +accel, -weight, +handling
    // Heavy characters: +speed, +weight, -accel
    s32 speedMod = 0, accelMod = 0, weightMod = 0;
    s32 handlingMod = 0, offroadMod = 0, turboMod = 0;

    switch (weightClass) {
    case 0: // Light
        accelMod = +5;
        weightMod = -10;
        handlingMod = +3;
        offroadMod = +2;
        break;
    case 2: // Heavy
        speedMod = +3;
        weightMod = +10;
        accelMod = -3;
        handlingMod = -2;
        break;
    default: // Medium — no modification
        break;
    }

    out[STAT_SPEED]     = (u8)((s32)base.speed + speedMod);
    out[STAT_ACCEL]     = (u8)((s32)base.accel + accelMod);
    out[STAT_WEIGHT]    = (u8)((s32)base.weight + weightMod);
    out[STAT_HANDLING]  = (u8)((s32)base.handling + handlingMod);
    out[STAT_OFFROAD]   = (u8)((s32)base.offroad + offroadMod);
    out[STAT_MINITURBO] = (u8)((s32)base.miniTurbo + turboMod);
}

// Clamp a value to [min, max] range.
s32 clamp(s32 val, s32 minVal, s32 maxVal) {
    if (val < minVal) return minVal;
    if (val > maxVal) return maxVal;
    return val;
}

} // anonymous namespace

// =============================================================================
// Constructor / Destructor
// =============================================================================

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
    , m_kartModelRes(nullptr) {
    // All fields explicitly initialized — scene starts in character
    // selection state for player 0 by default.
}

CaryardScene::~CaryardScene() {
    // Release any held model resources
    m_charModelRes = nullptr;
    m_kartModelRes = nullptr;
    m_modelLoaded = false;
}

// =============================================================================
// init — Initialize the caryard scene
// =============================================================================
// @addr 0x8052c100 (estimated)
//
// Resets all selection state and loads the default character model
// for the initial preview display.

void CaryardScene::init() {
    // Reset selection state
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

    // Load UI layout: character grid panel, kart browser panel,
    // stat bars panel, confirm button.
    // In the real game this loads from UI/Layout/Caryard.brlyt

    // Load default character model for initial display
    loadCharacterModel(m_selectedCharId);

    // Initialize stat display with default selection
    updateStatDisplay();

    // Setup background — course preview image for the selected track
    // In the real game this renders a small 3D preview of the course
    // or loads a pre-rendered background image from the track archive.
}

// =============================================================================
// calc — Per-frame update
// =============================================================================
// @addr 0x8052c200 (estimated)
//
// Main update loop for the selection screen. Dispatches to the
// appropriate sub-handler based on current selection state.
// Also advances the animation timer and transition progress.

void CaryardScene::calc() {
    m_animTimer++;

    // Advance state transition animation
    if (m_transitionProgress < 1.0f) {
        m_transitionProgress += TRANSITION_FADE_SPEED;
        if (m_transitionProgress > 1.0f) {
            m_transitionProgress = 1.0f;
        }
    }

    // Dispatch to state-specific update logic
    switch (m_state) {
    case SEL_CHARACTER:
        updateCharacterCursor();
        break;

    case SEL_KART:
        updateKartCursor();
        break;

    case SEL_CONFIRM:
        // Waiting for the player to press the confirm button.
        // The confirm button appears after character and kart are chosen.
        break;

    case SEL_COMPLETE:
        // Selection is done — the scene is transitioning out.
        // SceneDirector will handle the fade and switch.
        break;
    }

    // Slowly rotate the preview model for visual appeal
    // Model rotation is handled in draw() based on m_animTimer
}

// =============================================================================
// draw — Render the selection screen
// =============================================================================
// @addr 0x8052c300 (estimated)

void CaryardScene::draw() {
    // --- 3D model preview (bottom half of screen) ---
    // Render the currently selected character model or kart model
    // on the display platform. The model rotates slowly based on
    // m_animTimer for visual appeal.
    //
    // If in SEL_CHARACTER state, show the character model
    // If in SEL_KART or SEL_CONFIRM, show the kart model with
    // the confirmed character riding it.

    // --- UI overlay (top half / sidebar) ---
    // 1. Character grid (6x6) — highlight m_charCursorRow/Col
    // 2. Kart strip (horizontal scroll) — highlight m_selectedKartId
    // 3. Stat bars:
    //    - Speed:     out[STAT_SPEED]
    //    - Accel:     out[STAT_ACCEL]
    //    - Weight:    out[STAT_WEIGHT]
    //    - Handling:  out[STAT_HANDLING]
    //    - Offroad:   out[STAT_OFFROAD]
    //    - Mini-Turbo: out[STAT_MINITURBO]
    // 4. Player indicator (P1/P2/P3/P4) based on m_playerIdx
    // 5. Confirm button (visible in SEL_CONFIRM state)
}

// =============================================================================
// selectCharacter — Set the highlighted character
// =============================================================================
// @addr 0x8052c400 (estimated)
//
// Updates the cursor position in the character grid, loads the
// new character model, plays a sound, and refreshes the stat display.

void CaryardScene::selectCharacter(s32 charId) {
    if (m_state != SEL_CHARACTER) return;

    // Clamp to valid range
    charId = clamp(charId, 0, CHAR_COUNT - 1);

    m_selectedCharId = charId;

    // Update grid cursor position to match the flat index
    m_charCursorRow = charId / CHAR_GRID_COLS;
    m_charCursorCol = charId % CHAR_GRID_COLS;

    // Load the new character model for preview
    loadCharacterModel(charId);

    // Play cursor movement sound
    playSelectSound();

    // Refresh stat bars for the new character + kart combination
    updateStatDisplay();
}

// =============================================================================
// selectKart — Set the highlighted kart
// =============================================================================
// @addr 0x8052c4a0 (estimated)

void CaryardScene::selectKart(s32 kartId) {
    if (m_state != SEL_KART) return;

    // Clamp to valid range
    kartId = clamp(kartId, 0, KART_COUNT - 1);

    m_selectedKartId = kartId;

    // Load the new kart model for preview
    loadKartModel(kartId);

    // Play cursor movement sound
    playSelectSound();

    // Refresh stat bars
    updateStatDisplay();
}

// =============================================================================
// confirmSelection — Advance through the selection flow
// =============================================================================
// @addr 0x8052c540 (estimated)
//
// State machine progression:
//   SEL_CHARACTER → SEL_KART (confirm character, move to kart pick)
//   SEL_KART      → SEL_CONFIRM (confirm kart, show confirm button)
//   SEL_CONFIRM   → SEL_COMPLETE (all done, ready to race)

void CaryardScene::confirmSelection() {
    if (m_state == SEL_CHARACTER) {
        // Lock in character choice
        m_confirmedCharId = m_selectedCharId;
        m_state = SEL_KART;
        m_transitionProgress = 0.0f;

        // Preload the kart model for the kart selection screen
        loadKartModel(m_selectedKartId);

    } else if (m_state == SEL_KART) {
        // Lock in kart choice
        m_confirmedKartId = m_selectedKartId;
        m_state = SEL_CONFIRM;

        // Show the kart with the confirmed character in the preview

    } else if (m_state == SEL_CONFIRM) {
        // Final confirmation — player is ready to race
        m_state = SEL_COMPLETE;
        m_transitionProgress = 0.0f;

        // Play the confirmation sound
        playConfirmSound();

        // SceneDirector will detect isComplete() and transition
        // to the race loading scene.
    }
    // SEL_COMPLETE — no action, already done
}

// =============================================================================
// Private: updateCharacterCursor
// =============================================================================
// @addr 0x8052c600 (estimated)
//
// Handles D-pad navigation within the 6-column character grid.
// Wraps at edges. On each cursor movement, triggers selectCharacter
// and updates the preview model.

void CaryardScene::updateCharacterCursor() {
    // In the real game, this reads input from the InputManager
    // for the current player (m_playerIdx) and processes:
    //
    // D-Pad Right:  col = (col + 1) % CHAR_GRID_COLS
    // D-Pad Left:   col = (col - 1 + CHAR_GRID_COLS) % CHAR_GRID_COLS
    // D-Pad Down:   row = (row + 1) % CHAR_GRID_ROWS
    // D-Pad Up:     row = (row - 1 + CHAR_GRID_ROWS) % CHAR_GRID_ROWS
    //
    // A-Press:      confirmSelection()
    //
    // On cursor change:
    //   s32 newId = row * CHAR_GRID_COLS + col;
    //   if (newId != m_selectedCharId) selectCharacter(newId);
}

// =============================================================================
// Private: updateKartCursor
// =============================================================================
// @addr 0x8052c700 (estimated)
//
// Handles left/right navigation in the horizontal kart strip.
// The strip scrolls when the cursor reaches the edges.

void CaryardScene::updateKartCursor() {
    // D-Pad Right:  kartId = (kartId + 1) % KART_COUNT
    // D-Pad Left:   kartId = (kartId - 1 + KART_COUNT) % KART_COUNT
    // B-Press:      go back to SEL_CHARACTER (m_state = SEL_CHARACTER)
    // A-Press:      confirmSelection()
    //
    // On cursor change:
    //   selectKart(newKartId);
}

// =============================================================================
// Private: updateStatDisplay
// =============================================================================
// @addr 0x8052c800 (estimated)
//
// Computes combined character + kart stats and updates the 6 stat bars
// displayed on the selection screen. Each stat bar is filled proportionally
// to the stat value (0–100 maps to 0–full bar width).

void CaryardScene::updateStatDisplay() {
    // Determine which character/kart IDs to display
    s32 charId = m_selectedCharId;
    s32 kartId = m_selectedKartId;

    // In kart selection state, character is already confirmed
    if (m_state == SEL_KART || m_state == SEL_CONFIRM) {
        charId = m_confirmedCharId;
    }

    u8 stats[STAT_COUNT];
    getCombinedStats(charId, kartId, stats);

    // Update each stat bar UI element:
    //   statBar[STAT_SPEED].setFill(stats[STAT_SPEED] / 100.0f);
    //   statBar[STAT_ACCEL].setFill(stats[STAT_ACCEL] / 100.0f);
    //   ... (same for weight, handling, offroad, mini-turbo)
    //
    // Stat bars are color-coded:
    //   High (>75): green
    //   Medium (40-75): yellow
    //   Low (<40): red

    (void)stats; // Suppress unused warning — stats are applied to UI
}

// =============================================================================
// Private: loadCharacterModel
// =============================================================================
// @addr 0x8052c8a0 (estimated)
//
// Loads the 3D model for the given character from their BRRES archive.
// In the real game, character models are in:
//   /Race/Character/<charName>/Model.brres

void CaryardScene::loadCharacterModel(s32 charId) {
    // Release previous model if loaded
    m_charModelRes = nullptr;
    m_modelLoaded = false;

    if (charId < 0 || charId >= CHAR_COUNT) {
        return;
    }

    // Load character model from archive
    // m_charModelRes = ModelLoader::load(charModelPaths[charId]);
    // Set up display transform (position, rotation, scale)
    // Register model bones for animation

    m_modelLoaded = true;
}

// =============================================================================
// Private: loadKartModel
// =============================================================================
// @addr 0x8052c940 (estimated)
//
// Loads the 3D model for the given kart/vehicle from its BRRES archive.
// Kart models are in:
//   /Race/Kart/<kartName>/Model.brres

void CaryardScene::loadKartModel(s32 kartId) {
    // Release previous kart model if loaded
    m_kartModelRes = nullptr;
    m_modelLoaded = false;

    if (kartId < 0 || kartId >= KART_COUNT) {
        return;
    }

    // Load kart model from archive
    // m_kartModelRes = ModelLoader::load(kartModelPaths[kartId]);
    // Set up display transform
    // If character model is loaded, attach character to kart

    m_modelLoaded = true;
}

// =============================================================================
// Private: playSelectSound — Cursor movement sound
// =============================================================================
// @addr 0x8052c9e0 (estimated)

void CaryardScene::playSelectSound() {
    // Play SE_MENU_CURSOR sound effect
    // SoundManager::playSE(SE_MENU_CURSOR, m_playerIdx);
}

// =============================================================================
// Private: playConfirmSound — Selection confirmed sound
// =============================================================================
// @addr 0x8052ca00 (estimated)

void CaryardScene::playConfirmSound() {
    // Play SE_MENU_DECIDE sound effect
    // SoundManager::playSE(SE_MENU_DECIDE, m_playerIdx);
}

} // namespace Scene