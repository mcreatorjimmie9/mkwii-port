#pragma once
// HomeButton.hpp — Wii Home Button Menu Handler
// Address range: 0x80616000 - 0x8061C000 (Gap 1 — home button)
//
// HomeButton manages the Wii HOME menu overlay that appears when the
// player presses the HOME button on the Wii Remote. This includes:
//   - Detecting HOME button press events
//   - Showing/hiding the home menu overlay (brlan animated layout)
//   - Managing the home menu's animation controllers
//   - Coordinating with the OS home menu via IOS calls
//
// The home menu overlay uses brlan (binary RLAN animation) files for
// smooth open/close animations. The FrameController drives the
// animation timing, while GroupAnmController manages individual
// animation groups within the layout.
//
// Key addresses:
//   0x80616000 — HomeButton::init
//   0x80616080 — HomeButton::calc
//   0x80616100 — HomeButton::draw
//   0x80616200 — HomeButton::onHomeButtonPress
//   0x80616300 — HomeButton::showMenu
//   0x80616400 — HomeButton::hideMenu
//   0x80616500 — HomeButton::isMenuVisible
//   0x80616540 — HomeButton::isLoading
//   0x80616580 — HomeButton::onMenuOpened
//   0x80616600 — HomeButton::onMenuClosed
//   0x80616700 — HomeButton::selectOption
//   0x80616800 — HomeButton::updateAnimation
//   0x80616900 — HomeButton::getFrameController
//   0x80616940 — HomeButton::getGroupAnmController
//   0x80616980 — HomeButton::setLayout
//   0x80616A00 — HomeButton::setAlpha
//   0x80616A40 — HomeButton::getAlpha
//   0x80616A80 — HomeButton::shutdown
//   0x80616B00 — HomeButton::reset

#include "rk_common.h"

namespace Scene {

// =============================================================================
// HomeMenuState — Home menu lifecycle state
// =============================================================================
enum HomeMenuState {
    HOME_STATE_HIDDEN    = 0,  // Menu not visible
    HOME_STATE_OPENING   = 1,  // Open animation playing
    HOME_STATE_VISIBLE   = 2,  // Menu fully open, awaiting input
    HOME_STATE_CLOSING   = 3,  // Close animation playing
    HOME_STATE_LOADING   = 4,  // Loading layout resources
    HOME_STATE_ERROR     = 5,  // Failed to load
};

// =============================================================================
// HomeMenuOption — Menu item selection
// =============================================================================
enum HomeMenuOption {
    HOME_OPT_RESUME    = 0,  // Return to game
    HOME_OPT_RESET     = 1,  // Reset to Wii menu
    HOME_OPT_WII_MENU  = 2,  // Return to Wii System Menu
    HOME_OPT_COUNT     = 3,
};

// =============================================================================
// FrameController — Animation frame timing controller
//
// Drives the playback of brlan animations by tracking the current
// frame, total frame count, and playback state (playing/paused/looping).
// Used by HomeButton for the open/close animation of the overlay.
//
// The real FrameController is part of the EGG::Anm system.
// =============================================================================
class FrameController {
public:
    enum PlayState {
        PLAY_STOPPED  = 0,
        PLAY_FORWARD  = 1,
        PLAY_BACKWARD = 2,
        PLAY_LOOPING  = 3,
    };

    FrameController();
    ~FrameController();

    /// Initialize the controller.
    void init();

    /// Start playback forward.
    void play();

    /// Start playback backward (for close animation).
    void playReverse();

    /// Stop playback and reset to start.
    void stop();

    /// Pause at current frame.
    void pause();

    /// Resume from paused state.
    void resume();

    /// Per-frame update.
    void calc();

    /// Set the total number of frames.
    void setTotalFrames(f32 total);

    /// Set the playback speed multiplier.
    void setSpeed(f32 speed);

    /// Set current frame directly.
    void setFrame(f32 frame);

    /// Get current frame.
    f32 getFrame() const { return m_currentFrame; }

    /// Get total frame count.
    f32 getTotalFrames() const { return m_totalFrames; }

    /// Get normalized progress (0.0 - 1.0).
    f32 getProgress() const;

    /// Get play state.
    PlayState getState() const { return m_state; }

    /// Check if playback is active.
    bool isPlaying() const;

    /// Check if at the end of playback.
    bool isAtEnd() const;

    /// Check if at the beginning.
    bool isAtStart() const;

private:
    f32       m_currentFrame;   // Current playback frame
    f32       m_totalFrames;    // Total frames in animation
    f32       m_speed;          // Playback speed multiplier
    PlayState m_state;          // Playback state
};

// =============================================================================
// GroupAnmController — Animation group controller for brlan files
//
// Manages a group of related animations that play together as part
// of a layout. Each group can have multiple animation tracks (position,
// rotation, scale, alpha, etc.) that are evaluated at the current frame.
//
// In the real game, this wraps the RLYT/RLAN (brlan) animation system.
// =============================================================================
class GroupAnmController {
public:
    static const u32 MAX_TRACKS = 16;

    GroupAnmController();
    ~GroupAnmController();

    /// Initialize the controller.
    void init();

    /// Bind to an animation group by name/tag.
    void bind(const char* groupName);

    /// Unbind from current group.
    void unbind();

    /// Per-frame update: evaluate all tracks at current time.
    void calc(f32 frame);

    /// Get the alpha value for this animation group.
    f32 getAlpha() const;

    /// Set a user-controlled alpha override.
    void setAlphaOverride(f32 alpha);

    /// Get the X translation from the animation.
    f32 getTranslateX() const;

    /// Get the Y translation from the animation.
    f32 getTranslateY() const;

    /// Get the scale from the animation.
    f32 getScale() const;

    /// Get the rotation (degrees) from the animation.
    f32 getRotation() const;

    /// Check if the group is currently bound.
    bool isBound() const { return m_bound; }

    /// Get the bound group name.
    const char* getGroupName() const { return m_groupName; }

    /// Check if the animation has completed.
    bool isFinished() const;

    /// Set the animation frame range.
    void setFrameRange(f32 start, f32 end);

private:
    char  m_groupName[32];       // Name of bound animation group
    bool  m_bound;               // Whether bound to a group
    f32   m_tracks[MAX_TRACKS];  // Evaluated track values
    f32   m_alphaOverride;       // Alpha override value (-1 = no override)
    f32   m_frameStart;          // Start frame for evaluation
    f32   m_frameEnd;            // End frame for evaluation
    u32   m_flags;               // Controller flags
};

// =============================================================================
// HomeButton — Wii HOME menu overlay controller
//
// Manages the home button menu lifecycle. When the player presses HOME,
// the game pauses and the home menu overlay animates in. The player can
// choose to resume, reset, or return to the Wii System Menu.
// =============================================================================
class HomeButton {
public:
    HomeButton();
    ~HomeButton();

    // --- Lifecycle ---

    /// Initialize the home button system (load layout, set up animation).
    /// @addr 0x80616000
    void init();

    /// Per-frame update. Checks button state, updates animations.
    /// @addr 0x80616080
    void calc();

    /// Render the home menu overlay if visible.
    /// @addr 0x80616100
    void draw();

    /// Shut down the home button system.
    /// @addr 0x80616A80
    void shutdown();

    /// Reset to initial state.
    /// @addr 0x80616B00
    void reset();

    // --- Input handling ---

    /// Called when the HOME button is pressed.
    /// @addr 0x80616200
    void onHomeButtonPress();

    // --- Menu visibility ---

    /// Show the home menu overlay (with open animation).
    /// @addr 0x80616300
    void showMenu();

    /// Hide the home menu overlay (with close animation).
    /// @addr 0x80616400
    void hideMenu();

    /// Check if the home menu is currently visible.
    /// @addr 0x80616500
    bool isMenuVisible() const;

    /// Check if the menu layout is still loading.
    /// @addr 0x80616540
    bool isLoading() const;

    // --- Callbacks ---

    /// Called when the menu has fully opened.
    /// @addr 0x80616580
    void onMenuOpened();

    /// Called when the menu has fully closed.
    /// @addr 0x80616600
    void onMenuClosed();

    // --- Menu interaction ---

    /// Select a menu option (Resume/Reset/Wii Menu).
    /// @addr 0x80616700
    void selectOption(HomeMenuOption option);

    /// Navigate to the next menu item.
    void navigateNext();

    /// Navigate to the previous menu item.
    void navigatePrev();

    /// Get the currently highlighted option.
    HomeMenuOption getSelectedOption() const { return m_selectedOption; }

    // --- Animation ---

    /// Update the menu's open/close animation.
    /// @addr 0x80616800
    void updateAnimation();

    /// Get the frame controller for the menu animation.
    /// @addr 0x80616900
    FrameController* getFrameController() { return &m_frameCtrl; }

    /// Get the group animation controller.
    /// @addr 0x80616940
    GroupAnmController* getGroupAnmController() { return &m_anmCtrl; }

    // --- Layout ---

    /// Set the layout file path for the home menu overlay.
    /// @addr 0x80616980
    void setLayout(const char* brlytPath);

    /// Set the overlay alpha.
    /// @addr 0x80616A00
    void setAlpha(f32 alpha);

    /// Get the overlay alpha.
    /// @addr 0x80616A40
    f32 getAlpha() const;

    // --- State ---

    HomeMenuState getState() const { return m_state; }

    // --- Singleton ---

    static HomeButton* getInstance();

private:
    void loadLayoutResources();
    void freeLayoutResources();
    void executeOption(HomeMenuOption option);

    HomeMenuState     m_state;           // 0x00 — Current state
    HomeMenuOption    m_selectedOption;  // 0x04 — Highlighted menu item
    u32               m_hoverIndex;      // 0x08 — Current hover index
    FrameController   m_frameCtrl;       // 0x0C — Animation frame controller
    GroupAnmController m_anmCtrl;        // Frame animation controller
    f32               m_overlayAlpha;    // Overlay alpha for fade
    u32               m_flags;           // Feature flags
    char              m_layoutPath[64];  // Path to brlyt layout file
    u32               m_pad;             // Padding
    bool              m_resourcesLoaded; // Whether layout resources are loaded

    static HomeButton* s_instance;
};

} // namespace Scene