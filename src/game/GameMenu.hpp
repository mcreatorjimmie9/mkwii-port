#pragma once
// =============================================================================
// GameMenu.hpp — Pre-race start menu (M10 Polish)
// =============================================================================
//
// Simple title screen with "PRESS ENTER TO START" prompt.
// Uses BitmapFont for all text rendering.
//
// Dependencies: rk_types.h, BitmapFont.hpp
// =============================================================================

#include "rk_types.h"

class BitmapFont;

class GameMenu {
public:
    GameMenu();
    ~GameMenu();

    GameMenu(const GameMenu&) = delete;
    GameMenu& operator=(const GameMenu&) = delete;

    /// Initialize the menu with track name.
    void init(const char* trackName);

    /// Update menu state. Call once per frame.
    /// @param dt       Delta time in seconds
    /// @param enterPressed  True if Enter/Return was pressed this frame
    /// @return true if the player pressed Enter to start the race
    bool update(f32 dt, bool enterPressed);

    /// Render the menu overlay.
    /// @param screenW  Screen width
    /// @param screenH  Screen height
    void render(u32 screenW, u32 screenH);

    /// Initialize GL resources.
    bool initGL();

    /// Release GL resources.
    void cleanupGL();

    bool isStarted() const { return m_started; }

private:
    bool  m_started;
    f32   m_timer;       // Total time spent on menu (for animation)
    char  m_trackName[64];

    // Embedded bitmap font
    BitmapFont* m_font;  // Non-owning pointer — set via initGL()
};
