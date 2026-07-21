#pragma once
// =============================================================================
// EffectsManager.hpp — Visual effects for race polish (M10)
// =============================================================================
//
// Simple screen-space effects: speed lines, boost flash, star rainbow.
// All rendering uses the BitmapFont's drawRect for colored overlays.
//
// Dependencies: rk_types.h, BitmapFont.hpp
// =============================================================================

#include "rk_types.h"

class BitmapFont;

class EffectsManager {
public:
    EffectsManager();
    ~EffectsManager();

    EffectsManager(const EffectsManager&) = delete;
    EffectsManager& operator=(const EffectsManager&) = delete;

    bool initGL();
    void cleanupGL();

    // -- Trigger effects -------------------------------------------------------

    /// Trigger a boost flash (mushroom/golden mushroom).
    /// Orange overlay on screen edges for the given duration.
    void triggerBoost(f32 duration = 1.0f);

    /// Trigger star invincibility (rainbow cycling overlay).
    void triggerStar(f32 duration = 8.0f);

    /// Trigger a hit flash (red screen flash).
    void triggerHit(f32 duration = 0.5f);

    // -- Update ----------------------------------------------------------------

    /// Advance effect timers.
    /// @param speed  Current kart speed (for speed line intensity)
    /// @param dt     Delta time in seconds
    void update(f32 speed, f32 dt);

    // -- Render ----------------------------------------------------------------

    /// Draw all active effects as screen overlays.
    void render(u32 screenW, u32 screenH);

private:
    // -- Effect states ---------------------------------------------------------
    bool m_boostActive;
    f32  m_boostTimer;
    f32  m_boostDuration;

    bool m_starActive;
    f32  m_starTimer;
    f32  m_starDuration;

    bool m_hitActive;
    f32  m_hitTimer;
    f32  m_hitDuration;

    f32  m_currentSpeed;   // For speed line intensity

    // -- Shared font pointer (non-owning) ------------------------------------
    BitmapFont* m_font;

    // -- Internal: draw screen-edge vignette ----------------------------------
    void drawVignette(f32 r, f32 g, f32 b, f32 a,
                      u32 screenW, u32 screenH);
};
