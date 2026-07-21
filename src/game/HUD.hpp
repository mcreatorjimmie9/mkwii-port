#pragma once
// =============================================================================
// HUD.hpp — Heads-Up Display overlay for M9
// MAESTRO Phase 7, Milestone M9: Full Race
// =============================================================================
//
// Renders 2D HUD overlay on top of the 3D scene: position, lap, speed,
// race time, item held, and countdown/final results. Uses OpenGL
// orthographic projection with text rendered as simple colored quads.
//
// Dependencies: rk_types.h, EGG/math.h, RaceSession.hpp, ItemBox.hpp
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"
#include <cstdio>

class KartEntity;  // forward decl

// =============================================================================
// HUD — 2D overlay renderer
// =============================================================================
class HUD {
public:
    HUD();
    ~HUD();

    // Non-copyable
    HUD(const HUD&) = delete;
    HUD& operator=(const HUD&) = delete;

    // -- Initialization -------------------------------------------------------

    /// Initialize GL resources for HUD rendering (shader, quad VAO, etc.)
    bool initGL();

    /// Release GL resources.
    void cleanupGL();

    // -- Rendering -------------------------------------------------------------

    /// Draw the full HUD overlay.
    /// @param screenW  Screen width in pixels
    /// @param screenH  Screen height in pixels
    void render(u32 screenW, u32 screenH);

    // -- Data setters (call before render) ---------------------------------------

    /// Set race position display (1-indexed).
    void setPosition(u32 pos) { m_position = pos; }

    /// Set current lap display (1-indexed).
    void setLap(u32 current, u32 total) { m_currentLap = current; m_totalLaps = total; }

    /// Set speed display (units/sec).
    void setSpeed(f32 speed) { m_speed = speed; }

    /// Set item type name for display.
    void setItem(const char* itemName) {
        if (itemName) {
            std::snprintf(m_itemName, sizeof(m_itemName), "%s", itemName);
        } else {
            m_itemName[0] = '\0';
        }
    }

    /// Set current lap time string.
    void setLapTime(const char* str) {
        if (str) {
            std::snprintf(m_lapTime, sizeof(m_lapTime), "%s", str);
        } else {
            m_lapTime[0] = '\0';
        }
    }

    /// Set total race time string.
    void setRaceTime(const char* str) {
        if (str) {
            std::snprintf(m_raceTime, sizeof(m_raceTime), "%s", str);
        } else {
            m_raceTime[0] = '\0';
        }
    }

    /// Set countdown timer (displayed during pre-race).
    void setCountdown(f32 timer, bool active) {
        m_countdownTimer = timer;
        m_countdownActive = active;
    }

    /// Set race finished state.
    void setFinished(bool finished) { m_finished = finished; }

    /// Set final position for results display.
    void setFinishPosition(u32 pos) { m_finishPosition = pos; }

    /// Set final time for results display.
    void setFinishTime(const char* str) {
        if (str) {
            std::snprintf(m_finishTime, sizeof(m_finishTime), "%s", str);
        } else {
            m_finishTime[0] = '\0';
        }
    }

private:
    // -- State ----------------------------------------------------------------
    u32  m_position;       // Race position (1-indexed)
    u32  m_currentLap;     // Current lap
    u32  m_totalLaps;      // Total laps
    f32  m_speed;          // Current speed
    char m_itemName[32];   // Held item name
    char m_lapTime[16];    // Current lap time
    char m_raceTime[16];   // Total race time
    f32  m_countdownTimer; // Countdown remaining
    bool m_countdownActive;
    bool m_finished;       // Race is over
    u32  m_finishPosition; // Final race position
    char m_finishTime[16]; // Final race time

    // -- GL handles ------------------------------------------------------------
    u32 m_vao;
    u32 m_vbo;
    u32 m_shaderProgram;
    s32 m_orthoLoc;        // Uniform: mat4 ortho projection
    s32 m_colorLoc;        // Uniform: vec4 text color
    s32 m_posScaleLoc;    // Uniform: vec4 (x, y, scaleX, scaleY)

    // -- Internal: draw a filled rectangle (HUD building block) ------------------
    void drawRect(f32 x, f32 y, f32 w, f32 h,
                  f32 r, f32 g, f32 b, f32 a,
                  const f32* ortho, u32 screenW, u32 screenH);
};
