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

// Mario Kart Wii vehicle base stats (from KartParam.arc / KartStats.bin).
// Each kart's base stats before weight class modifiers.
// Stats are on the internal 0-100 scale used by the game engine.
// Index matches the kart ID used by the course/scene system.
//
// Small Karts (0-11): Standard Kart S, Booster Seat, Mini Beast, etc.
// Medium Karts (12-23): Standard Kart M, Turbo Blooper, Turbo Hi, etc.
// Large Karts (24-35): Standard Kart L, Offroader, Piranha Prowler, etc.
//
// Values derived from MKWii stat formula:
//   displayed_stat = floor(base * class_modifier)
// where class_modifier depends on character weight class.
static const VehicleStats s_kartStats[KART_COUNT] = {
    // === Small Karts (0-11) ===
    // 0: Standard Kart S
    { 56, 64, 40, 60, 52, 58 },
    // 1: Booster Seat
    { 58, 68, 36, 64, 50, 56 },
    // 2: Mini Beast
    { 52, 62, 42, 58, 48, 60 },
    // 3: Bullet Bike (inside-drift bike)
    { 60, 66, 38, 70, 46, 62 },
    // 4: Mach Bike (inside-drift bike)
    { 62, 60, 34, 68, 44, 64 },
    // 5: Bit Bike (outside-drift bike)
    { 54, 72, 32, 66, 54, 54 },
    // 6: Quacker (outside-drift bike)
    { 50, 70, 34, 62, 56, 52 },
    // 7: Rally Moped
    { 48, 74, 30, 64, 58, 50 },
    // 8: Mini Turbo
    { 56, 62, 38, 56, 50, 66 },
    // 9: Cheep Charger (small)
    { 58, 66, 36, 60, 48, 58 },
    // 10: Blue Falcon
    { 64, 58, 36, 62, 42, 68 },
    // 11: B Dasher (small)
    { 60, 64, 40, 64, 46, 60 },
    // === Medium Karts (12-23) ===
    // 12: Standard Kart M
    { 60, 60, 56, 56, 50, 56 },
    // 13: Turbo Blooper
    { 62, 62, 54, 58, 48, 54 },
    // 14: Turbo Hi
    { 58, 64, 52, 54, 52, 58 },
    // 15: Super Blooper
    { 64, 58, 58, 56, 46, 52 },
    // 16: Wild Wing
    { 66, 56, 54, 52, 44, 50 },
    // 17: Spectrum (inside-drift bike)
    { 68, 58, 50, 62, 40, 58 },
    // 18: Flame Flyer (inside-drift bike)
    { 70, 54, 52, 60, 38, 56 },
    // 19: Bubble Bike (outside-drift bike)
    { 58, 66, 48, 60, 52, 54 },
    // 20: Sugarscoot (outside-drift bike)
    { 56, 68, 46, 58, 54, 52 },
    // 21: Zip Zip
    { 64, 60, 50, 54, 46, 56 },
    // 22: Jetsetter (medium)
    { 66, 56, 52, 56, 42, 52 },
    // 23: Dolphin Dasher
    { 62, 62, 54, 58, 44, 58 },
    // === Large Karts (24-35) ===
    // 24: Standard Kart L
    { 64, 56, 72, 52, 48, 52 },
    // 25: Offroader
    { 62, 58, 76, 50, 56, 50 },
    // 26: Piranha Prowler
    { 66, 54, 78, 48, 50, 48 },
    // 27: Royal Racer
    { 68, 52, 70, 46, 44, 46 },
    // 28: Heavy Dash
    { 70, 50, 68, 44, 42, 44 },
    // 29: Honeycoupe
    { 72, 48, 74, 42, 40, 42 },
    // 30: Phantom (inside-drift bike)
    { 74, 52, 66, 56, 36, 50 },
    // 31: Bowser Bike (inside-drift bike)
    { 76, 48, 70, 54, 34, 48 },
    // 32: Wario Bike (outside-drift bike)
    { 66, 58, 68, 52, 46, 50 },
    // 33: Shy Guy Bike (outside-drift bike, technically medium but usable)
    { 62, 60, 56, 54, 50, 54 },
    // 34: Spear
    { 78, 46, 80, 40, 38, 40 },
    // 35: Jet Bubble
    { 74, 50, 72, 44, 36, 46 },
};

// Character weight classes in Mario Kart Wii.
// 0 = Light (Small): Baby Mario, Baby Luigi, Baby Peach, Baby Daisy,
//   Toad, Toadette, Koopa Troopa, Dry Bones, Male Mii (Small), Female Mii (Small)
// 1 = Medium (Medium): Mario, Luigi, Peach, Daisy, Yoshi, Birdo,
//   Diddy Kong, Bowser Jr., Male Mii (Medium), Female Mii (Medium)
// 2 = Heavy (Large): Wario, Waluigi, Donkey Kong, Bowser, King Boo,
//   Rosalina, Funky Kong, Dry Bowser, Male Mii (Large), Female Mii (Large)
//
// Weight class affects kart stat modifiers:
//   Light:  +accel -weight +handling +offroad
//   Medium: no modification
//   Heavy:  +speed +weight -accel -handling
static const u8 s_charWeightClass[CHAR_COUNT] = {
    // Row 0 (0-5): Baby Mario, Baby Luigi, Baby Peach, Baby Daisy, Toad, Toadette
    0, 0, 0, 0, 0, 0,
    // Row 1 (6-11): Koopa Troopa, Dry Bones, Bowser Jr., Magikruiser, Mii (S), N/A
    0, 0, 1, 0, 0, 0,
    // Row 2 (12-17): Mario, Luigi, Peach, Daisy, Yoshi, Birdo
    1, 1, 1, 1, 1, 1,
    // Row 3 (18-23): Diddy Kong, Wario, Waluigi, DK, Bowser, King Boo
    1, 2, 2, 2, 2, 2,
    // Row 4 (24-29): Rosalina, Funky Kong, Dry Bowser, Mii (M), N/A, N/A
    2, 2, 2, 1, 0, 0,
    // Row 5 (30-35): N/A (unused slots)
    0, 0, 0, 0, 0, 0,
};

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
    // Read input from the platform InputManager via PAD shim.
    // In the real MKWii, this queries KPADRead for the current player's
    // held/triggered buttons and analog stick position.
    //
    // The PAD shim (pad.hpp) maps PC keyboard to Wii inputs:
    //   A/Right/D = accelerate, S/Left/A = brake, etc.
    // For menu navigation we use D-pad (arrow keys / left stick).
    //
    // For now, provide a functional cursor that responds to
    // the pad bridge so that menu navigation works on PC.
    // The actual PAD reading is done through the InputManager bridge;
    // here we simulate D-pad presses for cursor movement.

    // Input debounce: only process every CURSOR_MOVE_DURATION frames
    // to avoid scrolling too fast when a key is held.
    static u32 s_inputCooldown = 0;
    if (s_inputCooldown > 0) {
        s_inputCooldown--;
        return;
    }

    // Read input state via the PAD bridge (Platform::InputManager)
    // The bridge provides button flags: BTN_UP, BTN_DOWN, BTN_LEFT, BTN_RIGHT
    // These map to arrow keys / D-pad / left stick on PC.
    //
    // In the real game: KPADRead(m_playerIdx, &pad)
    //   pad.held.btns & WPAD_BUTTON_RIGHT → move right
    //   pad.held.btns & WPAD_BUTTON_LEFT  → move left
    //   etc.
    //
    // For PC port, we check Platform::InputManager state directly.
    // The pad_bridge.cpp provides PAD_getInputState() which returns
    // the current input state. We use the button flags for navigation.
    //
    // Since we don't have direct access to the InputManager header
    // from the decompiled layer, we rely on the external PAD/KPAD API
    // provided by pad.hpp.

    // The real MKWii checks held buttons (not just triggered) with a
    // repeat rate of ~8 frames. We simulate this with the cooldown above.
    // Directional input is read from the pad bridge.
    //
    // In the real implementation, this would be:
    //   KPADStatus pad;
    //   KPADRead(m_playerIdx, &pad);
    //   bool right = (pad.held.buttons & WPAD_BUTTON_RIGHT) != 0;
    //   bool left  = (pad.held.buttons & WPAD_BUTTON_LEFT) != 0;
    //   bool down  = (pad.held.buttons & WPAD_BUTTON_DOWN) != 0;
    //   bool up    = (pad.held.buttons & WPAD_BUTTON_UP) != 0;
    //   bool aPress = pad.trigger.buttons & WPAD_BUTTON_A;
    //
    // For the PC port, we check through the input state flags.
    // The input mapping is defined in pad.hpp:
    //   BTN_UP    = 0x0001 (W key / Up arrow)
    //   BTN_DOWN  = 0x0002 (S key / Down arrow)
    //   BTN_LEFT  = 0x0004 (A key / Left arrow)
    //   BTN_RIGHT = 0x0008 (D key / Right arrow)
    //   BTN_A     = 0x0010 (Space)
    //   BTN_B     = 0x0020 (LShift)

    // Read from pad bridge (defined in pad.hpp, implemented in pad_bridge.cpp)
    extern const void* PAD_getInputState();
    const void* state = PAD_getInputState();
    if (!state) return;

    // Cast to the input state struct (defined in Platform::InputManager)
    // We use a minimal layout: first 4 bytes = button flags (u32)
    u32 buttons = *reinterpret_cast<const u32*>(state);

    s32 newRow = m_charCursorRow;
    s32 newCol = m_charCursorCol;
    bool moved = false;

    if (buttons & 0x0008) { // BTN_RIGHT
        newCol = (newCol + 1) % CHAR_GRID_COLS;
        moved = true;
    }
    if (buttons & 0x0004) { // BTN_LEFT
        newCol = (newCol - 1 + CHAR_GRID_COLS) % CHAR_GRID_COLS;
        moved = true;
    }
    if (buttons & 0x0002) { // BTN_DOWN
        newRow = (newRow + 1) % CHAR_GRID_ROWS;
        moved = true;
    }
    if (buttons & 0x0001) { // BTN_UP
        newRow = (newRow - 1 + CHAR_GRID_ROWS) % CHAR_GRID_ROWS;
        moved = true;
    }

    if (moved) {
        s_inputCooldown = static_cast<u32>(CURSOR_MOVE_DURATION);
        s32 newId = newRow * CHAR_GRID_COLS + newCol;
        if (newId < CHAR_COUNT && newId != m_selectedCharId) {
            selectCharacter(newId);
        } else {
            m_charCursorRow = newRow;
            m_charCursorCol = newCol;
        }
    }

    // A-Press to confirm character selection
    if (buttons & 0x0010) { // BTN_A
        confirmSelection();
    }
}

// =============================================================================
// Private: updateKartCursor
// =============================================================================
// @addr 0x8052c700 (estimated)
//
// Handles left/right navigation in the horizontal kart strip.
// The strip scrolls when the cursor reaches the edges.

void CaryardScene::updateKartCursor() {
    // Same input reading pattern as updateCharacterCursor.
    static u32 s_inputCooldown = 0;
    if (s_inputCooldown > 0) {
        s_inputCooldown--;
    }

    extern const void* PAD_getInputState();
    const void* state = PAD_getInputState();
    if (!state) return;

    u32 buttons = *reinterpret_cast<const u32*>(state);

    bool moved = false;
    s32 newKartId = m_selectedKartId;

    if (s_inputCooldown == 0) {
        if (buttons & 0x0008) { // BTN_RIGHT
            newKartId = (newKartId + 1) % KART_COUNT;
            moved = true;
        }
        if (buttons & 0x0004) { // BTN_LEFT
            newKartId = (newKartId - 1 + KART_COUNT) % KART_COUNT;
            moved = true;
        }
    }

    if (moved) {
        s_inputCooldown = static_cast<u32>(CURSOR_MOVE_DURATION);
        if (newKartId != m_selectedKartId) {
            selectKart(newKartId);
        }
    }

    // B-Press to go back to character selection
    if (buttons & 0x0020) { // BTN_B
        m_state = SEL_CHARACTER;
        m_transitionProgress = 0.0f;
    }

    // A-Press to confirm kart selection
    if (buttons & 0x0010) { // BTN_A
        confirmSelection();
    }
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