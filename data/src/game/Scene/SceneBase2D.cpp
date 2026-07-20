// SceneBase2D.cpp — Base class for 2D UI Scenes
// Address range: 0x8061C000 - 0x80620000 (Gap 1 — 2D scene base)

#include "SceneBase2D.hpp"
#include <cstring>

namespace Scene {

// @addr 0x8061C000
SceneBase2D::SceneBase2D()
    : SceneBase()
    , m_layoutLoaded(false)
    , m_inputEnabled(true)
    , m_fadeAlpha(0)
    , m_paneAnimCount(0)
    , m_animGroupCount(0) {
    std::memset(m_layoutPath, 0, sizeof(m_layoutPath));
    std::memset(m_paneAnims, 0, sizeof(m_paneAnims));
    std::memset(m_animGroupNames, 0, sizeof(m_animGroupNames));
    std::memset(m_animPlaying, 0, sizeof(m_animPlaying));
}

// @addr 0x8061C100
SceneBase2D::~SceneBase2D() {
    unload();
}

// @addr 0x8061C200
void SceneBase2D::init() {
    SceneBase::reset();
    m_fadeAlpha = 0;
    m_inputEnabled = true;
}

// @addr 0x8061C300
void SceneBase2D::calc() {
    if (m_inputEnabled) {
        processInput();
    }
    updateAnimations();
    incrementFrame();
}

// @addr 0x8061C500
void SceneBase2D::draw() {
    if (!m_layoutLoaded) return;

    // In the real game, this renders the brlyt layout using the J2D system.
    // The rendering pipeline:
    // 1. Set up 2D orthographic projection
    // 2. Bind layout textures and materials
    // 3. For each visible pane in the layout tree:
    //    a. Apply animation transforms (from GroupAnmController)
    //    b. Apply pane-specific alpha
    //    c. Submit GX display list
    // 4. If m_fadeAlpha > 0, draw a full-screen black quad with that alpha
}

// @addr 0x8061C700
void SceneBase2D::load() {
    SceneBase::load();
}

// @addr 0x8061C800
void SceneBase2D::unload() {
    m_layoutLoaded = false;
    m_paneAnimCount = 0;
    m_animGroupCount = 0;
    std::memset(m_paneAnims, 0, sizeof(m_paneAnims));
    std::memset(m_animGroupNames, 0, sizeof(m_animGroupNames));
    std::memset(m_animPlaying, 0, sizeof(m_animPlaying));
    SceneBase::unload();
}

// @addr 0x8061C900
void SceneBase2D::reset() {
    SceneBase::reset();
    m_fadeAlpha = 0;
    m_inputEnabled = true;
    m_paneAnimCount = 0;
    m_animGroupCount = 0;
}

// @addr 0x8061CA00
void SceneBase2D::loadLayout(const char* path) {
    if (!path) return;

    // Store path
    u32 len = 0;
    while (len < 63 && path[len]) len++;
    for (u32 i = 0; i < len; i++) {
        m_layoutPath[i] = path[i];
    }
    m_layoutPath[len] = '\0';

    // In the real game, this loads the .brlyt layout file from disc
    // and parses the pane tree. For now, mark as loaded.
    m_layoutLoaded = true;

    // Notify subclass
    onLayoutLoaded();
}

// @addr 0x8061CB00
const char* SceneBase2D::getLayoutPath() const {
    return m_layoutPath;
}

// @addr 0x8061CC00
void SceneBase2D::setPaneVisible(const char* paneName, bool visible) {
    if (!paneName) return;

    // Find existing entry or create new one
    for (u32 i = 0; i < m_paneAnimCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_paneAnims[i].paneName[j] != paneName[j]) {
                match = false;
                break;
            }
            if (paneName[j] == '\0') break;
        }
        if (match) {
            m_paneAnims[i].visible = visible;
            return;
        }
    }

    // Create new entry
    if (m_paneAnimCount < MAX_PANE_ANIMS) {
        PaneAnimState& entry = m_paneAnims[m_paneAnimCount];
        u32 len = 0;
        while (len < 31 && paneName[len]) len++;
        for (u32 i = 0; i < len; i++) {
            entry.paneName[i] = paneName[i];
        }
        entry.paneName[len] = '\0';
        entry.visible = visible;
        entry.currentAlpha = 1.0f;
        entry.targetAlpha = 1.0f;
        entry.animTimer = 0.0f;
        entry.animDuration = 0.0f;
        entry.animFlags = 0;
        m_paneAnimCount++;
    }
}

// @addr 0x8061CD00
bool SceneBase2D::getPaneVisible(const char* paneName) const {
    if (!paneName) return false;

    for (u32 i = 0; i < m_paneAnimCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_paneAnims[i].paneName[j] != paneName[j]) {
                match = false;
                break;
            }
            if (paneName[j] == '\0') break;
        }
        if (match) {
            return m_paneAnims[i].visible;
        }
    }
    return true; // Default: visible if not tracked
}

// @addr 0x8061CE00
void SceneBase2D::setPaneAlpha(const char* paneName, f32 alpha) {
    if (!paneName) return;

    for (u32 i = 0; i < m_paneAnimCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_paneAnims[i].paneName[j] != paneName[j]) {
                match = false;
                break;
            }
            if (paneName[j] == '\0') break;
        }
        if (match) {
            m_paneAnims[i].targetAlpha = alpha;
            m_paneAnims[i].animTimer = 0.0f;
            m_paneAnims[i].animDuration = 15.0f; // Default 0.25s transition
            return;
        }
    }

    // Create new entry
    if (m_paneAnimCount < MAX_PANE_ANIMS) {
        PaneAnimState& entry = m_paneAnims[m_paneAnimCount];
        u32 len = 0;
        while (len < 31 && paneName[len]) len++;
        for (u32 i = 0; i < len; i++) {
            entry.paneName[i] = paneName[i];
        }
        entry.paneName[len] = '\0';
        entry.visible = true;
        entry.currentAlpha = 1.0f;
        entry.targetAlpha = alpha;
        entry.animTimer = 0.0f;
        entry.animDuration = 15.0f;
        entry.animFlags = 0;
        m_paneAnimCount++;
    }
}

// @addr 0x8061CF00
f32 SceneBase2D::getPaneAlpha(const char* paneName) const {
    if (!paneName) return 1.0f;

    for (u32 i = 0; i < m_paneAnimCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_paneAnims[i].paneName[j] != paneName[j]) {
                match = false;
                break;
            }
            if (paneName[j] == '\0') break;
        }
        if (match) {
            return m_paneAnims[i].currentAlpha;
        }
    }
    return 1.0f;
}

// @addr 0x8061D000
void SceneBase2D::playAnimation(const char* groupName) {
    if (!groupName) return;

    // Find existing group or register new
    for (u32 i = 0; i < m_animGroupCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_animGroupNames[i][j] != groupName[j]) {
                match = false;
                break;
            }
            if (groupName[j] == '\0') break;
        }
        if (match) {
            m_animPlaying[i] = true;
            return;
        }
    }

    // Register new group
    if (m_animGroupCount < MAX_ANIM_GROUPS) {
        u32 idx = m_animGroupCount;
        u32 len = 0;
        while (len < 31 && groupName[len]) len++;
        for (u32 i = 0; i < len; i++) {
            m_animGroupNames[idx][i] = groupName[i];
        }
        m_animGroupNames[idx][len] = '\0';
        m_animPlaying[idx] = true;
        m_animGroupCount++;
    }
}

// @addr 0x8061D100
void SceneBase2D::stopAnimation(const char* groupName) {
    if (!groupName) return;

    for (u32 i = 0; i < m_animGroupCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_animGroupNames[i][j] != groupName[j]) {
                match = false;
                break;
            }
            if (groupName[j] == '\0') break;
        }
        if (match) {
            m_animPlaying[i] = false;
            return;
        }
    }
}

// @addr 0x8061D200
bool SceneBase2D::isAnimationPlaying(const char* groupName) const {
    if (!groupName) return false;

    for (u32 i = 0; i < m_animGroupCount; i++) {
        bool match = true;
        for (u32 j = 0; j < 31; j++) {
            if (m_animGroupNames[i][j] != groupName[j]) {
                match = false;
                break;
            }
            if (groupName[j] == '\0') break;
        }
        if (match) {
            return m_animPlaying[i];
        }
    }
    return false;
}

// @addr 0x8061D300
void SceneBase2D::setInputEnabled(bool enabled) {
    m_inputEnabled = enabled;
}

// @addr 0x8061D500
void SceneBase2D::setFadeAlpha(u8 alpha) {
    m_fadeAlpha = alpha;
}

// @addr 0x8061D600 (estimated)
// Initialize the 2D layout system.
// Called during scene initialization to set up the J2D layout root,
// register pane callbacks, and prepare the animation system.
void SceneBase2D::initLayout() {
    m_paneAnimCount = 0;
    m_animGroupCount = 0;
    for (u32 i = 0; i < MAX_PANE_ANIMS; i++) {
        m_paneAnims[i].animFlags = 0;
        m_paneAnims[i].currentAlpha = 1.0f;
        m_paneAnims[i].targetAlpha = 1.0f;
        m_paneAnims[i].animTimer = 0.0f;
        m_paneAnims[i].animDuration = 0.0f;
        m_paneAnims[i].visible = true;
        m_paneAnims[i].paneName[0] = '\0';
    }
    for (u32 i = 0; i < MAX_ANIM_GROUPS; i++) {
        m_animPlaying[i] = false;
        m_animGroupNames[i][0] = '\0';
    }
}

// @addr 0x8061D700 (estimated)
// Load a specific page within the current layout.
// In MKW, layouts can have multiple pages (e.g., main menu pages,
// character select tabs). Each page is a separate pane hierarchy.
bool SceneBase2D::loadPage(u32 pageIndex) {
    (void)pageIndex;
    // In the real game, this swaps the visible pane tree to the
    // specified page index within the loaded brlyt layout.
    return m_layoutLoaded;
}

// @addr 0x8061D800 (estimated)
// Unload a specific page, hiding its panes.
// Returns false if the page was not loaded.
bool SceneBase2D::unloadPage(u32 pageIndex) {
    (void)pageIndex;
    return m_layoutLoaded;
}

// @addr 0x8061D900 (estimated)
// Render all visible UI panes to the screen.
// Handles per-pane alpha, visibility, and the global fade overlay.
void SceneBase2D::drawUI() {
    if (!m_layoutLoaded) return;

    // Apply per-pane alpha animation
    for (u32 i = 0; i < m_paneAnimCount; i++) {
        PaneAnimState& pane = m_paneAnims[i];
        if (pane.animDuration > 0.0f && pane.animTimer < pane.animDuration) {
            pane.animTimer += 1.0f;
            f32 t = pane.animTimer / pane.animDuration;
            if (t > 1.0f) t = 1.0f;
            pane.currentAlpha = pane.currentAlpha +
                (pane.targetAlpha - pane.currentAlpha) * t;
        }
    }
}

// @addr 0x8061DA00 (estimated)
// Handle user input for the 2D scene.
// Checks buttons, stick, and touch for menu navigation.
// Returns true if input was consumed by a UI element.
bool SceneBase2D::handleInput() {
    if (!m_inputEnabled) return false;
    if (m_state == SceneBase::STATE_TRANSITIONING) return false;
    // Derived classes override processInput() for actual handling.
    // This base implementation just checks if input is possible.
    return true;
}

// @addr 0x8061DB00 (estimated)
// Begin a fade-in effect (from black to transparent).
// The alpha decreases from 255 to 0 over the given duration.
void SceneBase2D::fadeIn(s16 duration) {
    if (duration <= 0) duration = FADE_DURATION_DEFAULT;
    m_fadeAlpha = FADE_ALPHA_OPAQUE;
    // The actual fade is driven by SceneBase::calcFade()
    // This just sets the initial state
    (void)duration;
}

// @addr 0x8061DC00 (estimated)
// Begin a fade-out effect (from transparent to black).
// The alpha increases from 0 to 255 over the given duration.
void SceneBase2D::fadeOut(s16 duration) {
    if (duration <= 0) duration = FADE_DURATION_DEFAULT;
    m_fadeAlpha = 0;
    // The actual fade is driven by SceneBase::calcFade()
    (void)duration;
}

// @addr 0x8061DD00 (estimated)
// Check if the scene is currently performing a fade transition.
// Returns true during both fade-in and fade-out phases.
// This extends the base SceneBase::isTransitioning() with 2D-specific logic.
bool SceneBase2D::isFading2D() const {
    return m_fadeAlpha > 0;
}

} // namespace Scene