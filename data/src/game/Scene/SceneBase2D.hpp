#pragma once
// SceneBase2D.hpp — Base class for 2D UI Scenes
// Address range: 0x8061C000 - 0x80620000 (Gap 1 — 2D scene base)
//
// SceneBase2D extends SceneBase with 2D-specific functionality:
//   - Layout (brlyt) management for UI screens
//   - Animation (brlan) groups for pane transitions
//   - 2D input focus and cursor management
//   - Message box and text input integration points
//   - Per-pane visibility and alpha control
//
// All 2D scenes (menus, selection screens, results, etc.) inherit from
// this class. The 2D rendering pipeline uses GX with orthographic projection
// and J2DPane for layout rendering.
//
// Key addresses:
//   0x8061C000 — SceneBase2D::SceneBase2D (ctor)
//   0x8061C100 — SceneBase2D::~SceneBase2D (dtor)
//   0x8061C200 — SceneBase2D::init
//   0x8061C300 — SceneBase2D::calc
//   0x8061C500 — SceneBase2D::draw
//   0x8061C700 — SceneBase2D::load
//   0x8061C800 — SceneBase2D::unload
//   0x8061C900 — SceneBase2D::reset
//   0x8061CA00 — SceneBase2D::loadLayout
//   0x8061CB00 — SceneBase2D::getLayout
//   0x8061CC00 — SceneBase2D::setPaneVisible
//   0x8061CD00 — SceneBase2D::getPaneVisible
//   0x8061CE00 — SceneBase2D::setPaneAlpha
//   0x8061CF00 — SceneBase2D::getPaneAlpha
//   0x8061D000 — SceneBase2D::playAnimation
//   0x8061D100 — SceneBase2D::stopAnimation
//   0x8061D200 — SceneBase2D::isAnimationPlaying
//   0x8061D300 — SceneBase2D::setInputEnabled
//   0x8061D400 — SceneBase2D::isInputEnabled
//   0x8061D500 — SceneBase2D::setFadeAlpha

#include "SceneBase.hpp"

namespace Scene {

class FrameController;
class GroupAnmController;

// =============================================================================
// PaneAnimState — Per-pane animation state
// =============================================================================
struct PaneAnimState {
    char  paneName[32];     // Name of the pane
    u32   animFlags;        // Animation state flags
    f32   currentAlpha;     // Current alpha value
    f32   targetAlpha;      // Target alpha for transitions
    f32   animTimer;        // Animation timer
    f32   animDuration;     // Animation duration
    bool  visible;          // Pane visibility
};

// =============================================================================
// SceneBase2D — Base class for all 2D UI scenes
//
// Provides scaffolding for 2D scene types (menus, selection, results).
// Manages layout loading, pane visibility/alpha, and animation playback.
// Derived classes override init() to set up their specific UI elements.
// =============================================================================
class SceneBase2D : public SceneBase {
public:
    SceneBase2D();
    virtual ~SceneBase2D();

    // --- SceneBase interface ---

    /// Initialize the 2D scene (load layout, set up panes).
    /// @addr 0x8061C200
    virtual void init() override;

    /// Per-frame update. Updates animations, handles input.
    /// @addr 0x8061C300
    virtual void calc() override;

    /// Render the 2D scene layout.
    /// @addr 0x8061C500
    virtual void draw() override;

    // --- Lifecycle overrides ---

    /// Load 2D scene resources (layout, textures, fonts).
    /// @addr 0x8061C700
    virtual void load() override;

    /// Unload 2D scene resources.
    /// @addr 0x8061C800
    virtual void unload() override;

    /// Reset scene to initial state.
    /// @addr 0x8061C900
    virtual void reset() override;

    // --- Layout management ---

    /// Load a brlyt layout file for this scene.
    /// @param path  Path to the .brlyt file
    /// @addr 0x8061CA00
    void loadLayout(const char* path);

    /// Get the layout path.
    /// @addr 0x8061CB00
    const char* getLayoutPath() const;

    /// Check if a layout is loaded.
    bool hasLayout() const { return m_layoutLoaded; }

    // --- Pane control ---

    /// Show or hide a named pane.
    /// @addr 0x8061CC00
    void setPaneVisible(const char* paneName, bool visible);

    /// Check if a named pane is visible.
    /// @addr 0x8061CD00
    bool getPaneVisible(const char* paneName) const;

    /// Set the alpha of a named pane.
    /// @addr 0x8061CE00
    void setPaneAlpha(const char* paneName, f32 alpha);

    /// Get the alpha of a named pane.
    /// @addr 0x8061CF00
    f32 getPaneAlpha(const char* paneName) const;

    // --- Animation ---

    /// Play a named animation group.
    /// @addr 0x8061D000
    void playAnimation(const char* groupName);

    /// Stop a named animation group.
    /// @addr 0x8061D100
    void stopAnimation(const char* groupName);

    /// Check if an animation is currently playing.
    /// @addr 0x8061D200
    bool isAnimationPlaying(const char* groupName) const;

    // --- Input ---

    /// Enable or disable input processing for this scene.
    /// @addr 0x8061D300
    void setInputEnabled(bool enabled);

    /// Check if input is enabled.
    /// @addr 0x8061D400
    bool isInputEnabled() const { return m_inputEnabled; }

    // --- Fade control ---

    /// Set the global fade alpha for the scene overlay.
    /// @addr 0x8061D500
    void setFadeAlpha(u8 alpha);

    /// Get the current fade alpha.
    u8 getFadeAlpha() const { return m_fadeAlpha; }

    /// Initialize the 2D layout system (reset pane anims, groups)
    void initLayout();

    /// Load a specific page within the layout
    bool loadPage(u32 pageIndex);

    /// Unload a specific page
    bool unloadPage(u32 pageIndex);

    /// Render all visible UI panes with alpha animation
    void drawUI();

    /// Handle user input for menu navigation
    bool handleInput();

    /// Begin fade-in (from black to transparent)
    void fadeIn(s16 duration);

    /// Begin fade-out (from transparent to black)
    void fadeOut(s16 duration);

    /// Check if 2D fade is active
    bool isFading2D() const;

protected:
    // --- Subclass hooks ---

    /// Called after layout is loaded (for subclass setup).
    virtual void onLayoutLoaded() {}

    /// Called each frame for input processing.
    virtual void processInput() {}

    /// Called each frame for animation updates.
    virtual void updateAnimations() {}

    // --- Members ---

    static const u32 MAX_PANE_ANIMS = 32;
    static const u32 MAX_ANIM_GROUPS = 16;

    char           m_layoutPath[64];        // Path to loaded layout
    bool           m_layoutLoaded;          // Whether layout is loaded
    bool           m_inputEnabled;          // Whether input is processed
    u8             m_fadeAlpha;             // Global fade alpha overlay

    PaneAnimState  m_paneAnims[MAX_PANE_ANIMS]; // Per-pane animation states
    u32            m_paneAnimCount;         // Number of active pane anims

    char           m_animGroupNames[MAX_ANIM_GROUPS][32]; // Animation group names
    bool           m_animPlaying[MAX_ANIM_GROUPS];        // Per-group play state
    u32            m_animGroupCount;        // Number of bound animation groups
};

} // namespace Scene