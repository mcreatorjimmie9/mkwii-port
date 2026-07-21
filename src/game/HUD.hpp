#pragma once
// =============================================================================
// HUD.hpp — Heads-Up Display overlay (M10 Polish — now with BitmapFont text)
// =============================================================================
//
// Renders 2D HUD overlay on top of the 3D scene: position, lap, speed,
// race time, item held, and countdown/final results. Uses BitmapFont for
// all text rendering and colored quads for background panels.
//
// Dependencies: rk_types.h, EGG/math.h, BitmapFont.hpp
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"
#include "game/BitmapFont.hpp"
#include <cstdio>

class KartEntity;  // forward decl

// =============================================================================
// HUD — 2D overlay renderer
// =============================================================================
class HUD {
public:
    HUD();
    ~HUD();

    HUD(const HUD&) = delete;
    HUD& operator=(const HUD&) = delete;

    // -- Initialization -------------------------------------------------------

    bool initGL();
    void cleanupGL();

    // -- Rendering -------------------------------------------------------------

    void render(u32 screenW, u32 screenH);

    // -- Data setters (call before render) ---------------------------------------

    void setPosition(u32 pos) { m_position = pos; }
    void setLap(u32 current, u32 total) { m_currentLap = current; m_totalLaps = total; }
    void setSpeed(f32 speed) { m_speed = speed; }

    void setItem(const char* itemName) {
        if (itemName) {
            std::snprintf(m_itemName, sizeof(m_itemName), "%s", itemName);
        } else {
            m_itemName[0] = '\0';
        }
    }

    void setLapTime(const char* str) {
        if (str) {
            std::snprintf(m_lapTime, sizeof(m_lapTime), "%s", str);
        } else {
            m_lapTime[0] = '\0';
        }
    }

    void setRaceTime(const char* str) {
        if (str) {
            std::snprintf(m_raceTime, sizeof(m_raceTime), "%s", str);
        } else {
            m_raceTime[0] = '\0';
        }
    }

    void setCountdown(f32 timer, bool active) {
        m_countdownTimer = timer;
        m_countdownActive = active;
    }

    void setFinished(bool finished) { m_finished = finished; }
    void setFinishPosition(u32 pos) { m_finishPosition = pos; }

    void setFinishTime(const char* str) {
        if (str) {
            std::snprintf(m_finishTime, sizeof(m_finishTime), "%s", str);
        } else {
            m_finishTime[0] = '\0';
        }
    }

private:
    // -- State ----------------------------------------------------------------
    u32  m_position;
    u32  m_currentLap;
    u32  m_totalLaps;
    f32  m_speed;
    char m_itemName[32];
    char m_lapTime[16];
    char m_raceTime[16];
    f32  m_countdownTimer;
    bool m_countdownActive;
    bool m_finished;
    u32  m_finishPosition;
    char m_finishTime[16];

    // -- BitmapFont for text rendering ----------------------------------------
    BitmapFont m_font;

    // -- Position suffix helper ------------------------------------------------
    static const char* posSuffix(u32 pos);
};
