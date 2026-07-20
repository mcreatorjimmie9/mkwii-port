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

} // namespace Scene