// =============================================================================
// HUD.cpp — Heads-Up Display overlay implementation (M10 Polish)
// =============================================================================

#include "game/HUD.hpp"
#include <cstdio>
#include <cmath>
#include <cstring>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// =============================================================================
// Position suffix
// =============================================================================

const char* HUD::posSuffix(u32 pos) {
    static const char* suffix[] = {"st", "nd", "rd", "th",
                                   "th", "th", "th", "th", "th", "th", "th", "th"};
    return suffix[(pos > 4) ? 4 : (pos - 1)];
}

// =============================================================================
// Constructor / Destructor
// =============================================================================

HUD::HUD()
    : m_position(1)
    , m_currentLap(1)
    , m_totalLaps(3)
    , m_speed(0.0f)
    , m_countdownTimer(3.0f)
    , m_countdownActive(false)
    , m_finished(false)
    , m_finishPosition(1) {
    m_itemName[0] = '\0';
    m_lapTime[0] = '\0';
    m_raceTime[0] = '\0';
    m_finishTime[0] = '\0';
}

HUD::~HUD() {
    cleanupGL();
}

// =============================================================================
// initGL
// =============================================================================

bool HUD::initGL() {
    return m_font.initGL();
}

// =============================================================================
// cleanupGL
// =============================================================================

void HUD::cleanupGL() {
    m_font.cleanupGL();
}

// =============================================================================
// render — Draw full HUD overlay with text
// =============================================================================

void HUD::render(u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    GL3::gl.glEnable(GL3::GL_BLEND);
    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);
    GL3::gl.glDisable(GL3::GL_DEPTH_TEST);

    f32 pw = static_cast<f32>(screenW);
    f32 ph = static_cast<f32>(screenH);

    // =========================================================================
    // COUNTDOWN OVERLAY
    // =========================================================================
    if (m_countdownActive) {
        f32 num = std::ceil(m_countdownTimer);
        if (num > 0.0f) {
            // Dark semi-transparent background
            m_font.drawRect(0, 0, pw, ph, 0.0f, 0.0f, 0.0f, 0.5f, screenW, screenH);

            f32 cdScale = 12.0f;
            if (num <= 3.0f && num > 0.5f) {
                // "3", "2", "1"
                char digitStr[4];
                std::snprintf(digitStr, sizeof(digitStr), "%d", static_cast<int>(num));
                f32 tw = m_font.measureTextWidth(digitStr, cdScale);
                f32 tx = (pw - tw) * 0.5f;
                f32 ty = (ph - m_font.getCharHeight(cdScale)) * 0.5f;
                // Shadow
                m_font.drawText(tx + 3.0f, ty + 3.0f, digitStr,
                                0.0f, 0.0f, 0.0f, 0.7f,
                                cdScale, screenW, screenH);
                // Main (red for 3, yellow for 2, green for 1)
                if (num >= 2.5f) {
                    m_font.drawText(tx, ty, digitStr,
                                    1.0f, 0.2f, 0.2f, 1.0f,
                                    cdScale, screenW, screenH);
                } else if (num >= 1.5f) {
                    m_font.drawText(tx, ty, digitStr,
                                    1.0f, 0.9f, 0.1f, 1.0f,
                                    cdScale, screenW, screenH);
                } else {
                    m_font.drawText(tx, ty, digitStr,
                                    0.2f, 1.0f, 0.2f, 1.0f,
                                    cdScale, screenW, screenH);
                }
            } else {
                // "GO!"
                const char* goStr = "GO!";
                f32 tw = m_font.measureTextWidth(goStr, cdScale);
                f32 tx = (pw - tw) * 0.5f;
                f32 ty = (ph - m_font.getCharHeight(cdScale)) * 0.5f;
                m_font.drawText(tx + 3.0f, ty + 3.0f, goStr,
                                0.0f, 0.0f, 0.0f, 0.7f,
                                cdScale, screenW, screenH);
                m_font.drawText(tx, ty, goStr,
                                0.2f, 1.0f, 0.2f, 1.0f,
                                cdScale, screenW, screenH);
            }
        }

        GL3::gl.glDisable(GL3::GL_BLEND);
        GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
        return;
    }

    // =========================================================================
    // TOP-LEFT PANEL: Position + Lap
    // =========================================================================
    {
        m_font.drawRect(10, 10, 220, 80, 0.0f, 0.0f, 0.0f, 0.6f,
                        screenW, screenH);

        // Position: "1st"
        f32 posScale = 5.0f;
        char posStr[8];
        std::snprintf(posStr, sizeof(posStr), "%u%s", m_position, posSuffix(m_position));
        m_font.drawText(20, 18, posStr, 1.0f, 1.0f, 0.0f, 1.0f,
                        posScale, screenW, screenH);

        // Lap: "LAP 1/3"
        f32 lapScale = 3.0f;
        char lapStr[16];
        std::snprintf(lapStr, sizeof(lapStr), "LAP %u/%u", m_currentLap, m_totalLaps);
        m_font.drawText(20, 60, lapStr, 0.6f, 0.8f, 1.0f, 1.0f,
                        lapScale, screenW, screenH);
    }

    // =========================================================================
    // TOP-RIGHT PANEL: Speed
    // =========================================================================
    {
        f32 panelW = 260.0f;
        m_font.drawRect(pw - panelW - 10, 10, panelW, 55,
                        0.0f, 0.0f, 0.0f, 0.6f, screenW, screenH);

        f32 spdScale = 4.0f;
        char spdStr[16];
        std::snprintf(spdStr, sizeof(spdStr), "%.0f km/h", m_speed);
        m_font.drawText(pw - panelW, 18, spdStr,
                        0.0f, 1.0f, 0.3f, 1.0f,
                        spdScale, screenW, screenH);
    }

    // =========================================================================
    // BOTTOM-LEFT PANEL: Race time + Lap time
    // =========================================================================
    {
        m_font.drawRect(10, ph - 70, 310, 60, 0.0f, 0.0f, 0.0f, 0.6f,
                        screenW, screenH);

        f32 timeScale = 2.5f;

        // "RACE" label
        m_font.drawText(20, ph - 65, "RACE", 0.6f, 0.6f, 0.6f, 0.8f,
                        timeScale, screenW, screenH);
        // Race time value
        f32 raceLabelW = m_font.measureTextWidth("RACE ", timeScale);
        m_font.drawText(20 + raceLabelW, ph - 65, m_raceTime,
                        1.0f, 1.0f, 1.0f, 1.0f,
                        timeScale, screenW, screenH);

        // "LAP" label
        m_font.drawText(20, ph - 35, "LAP ", 0.6f, 0.6f, 0.6f, 0.8f,
                        timeScale, screenW, screenH);
        // Lap time value
        f32 lapLabelW = m_font.measureTextWidth("LAP ", timeScale);
        m_font.drawText(20 + lapLabelW, ph - 35, m_lapTime,
                        0.0f, 1.0f, 1.0f, 1.0f,
                        timeScale, screenW, screenH);
    }

    // =========================================================================
    // BOTTOM-RIGHT PANEL: Item
    // =========================================================================
    {
        f32 panelW = 250.0f;
        m_font.drawRect(pw - panelW - 10, ph - 70, panelW, 60,
                        0.0f, 0.0f, 0.0f, 0.6f, screenW, screenH);

        // Item color based on type
        f32 ir = 0.4f, ig = 0.4f, ib = 0.4f;
        if (m_itemName[0] != '\0' && m_itemName[0] != '-') {
            ir = 1.0f; ig = 0.7f; ib = 0.1f;
        }

        f32 itemScale = 3.0f;
        // "ITEM" label
        m_font.drawText(pw - panelW, ph - 65, "ITEM", 0.6f, 0.6f, 0.6f, 0.8f,
                        2.0f, screenW, screenH);
        // Item name
        f32 itemLabelW = m_font.measureTextWidth("ITEM ", 2.0f);
        m_font.drawText(pw - panelW + itemLabelW, ph - 65, m_itemName,
                        ir, ig, ib, 1.0f,
                        itemScale, screenW, screenH);
    }

    // =========================================================================
    // FINISHED OVERLAY
    // =========================================================================
    if (m_finished) {
        // Semi-transparent dark overlay
        m_font.drawRect(0, 0, pw, ph, 0.0f, 0.0f, 0.0f, 0.7f,
                        screenW, screenH);

        // Results box
        f32 boxW = 450.0f;
        f32 boxH = 250.0f;
        f32 boxX = (pw - boxW) * 0.5f;
        f32 boxY = (ph - boxH) * 0.5f;

        m_font.drawRect(boxX, boxY, boxW, boxH,
                        0.05f, 0.05f, 0.15f, 0.95f, screenW, screenH);
        m_font.drawRect(boxX, boxY, boxW, 3.0f,
                        1.0f, 0.8f, 0.0f, 1.0f, screenW, screenH);

        // "FINISH" title
        f32 finScale = 5.0f;
        const char* finStr = "FINISH";
        f32 finW = m_font.measureTextWidth(finStr, finScale);
        m_font.drawText((pw - finW) * 0.5f, boxY + 20, finStr,
                        1.0f, 0.8f, 0.0f, 1.0f,
                        finScale, screenW, screenH);

        // Position: "1st PLACE"
        f32 posScale2 = 4.0f;
        char posStr2[16];
        std::snprintf(posStr2, sizeof(posStr2), "%u%s PLACE",
                      m_finishPosition, posSuffix(m_finishPosition));
        f32 posW2 = m_font.measureTextWidth(posStr2, posScale2);
        m_font.drawText((pw - posW2) * 0.5f, boxY + 80, posStr2,
                        0.2f, 0.8f, 1.0f, 1.0f,
                        posScale2, screenW, screenH);

        // Time
        f32 timeScale2 = 3.0f;
        f32 timeW = m_font.measureTextWidth(m_finishTime, timeScale2);
        f32 labelW = m_font.measureTextWidth("TIME ", timeScale2);
        m_font.drawText((pw - labelW - timeW) * 0.5f, boxY + 150, "TIME ",
                        0.6f, 0.6f, 0.6f, 1.0f,
                        timeScale2, screenW, screenH);
        m_font.drawText((pw - labelW - timeW) * 0.5f + labelW, boxY + 150,
                        m_finishTime, 0.0f, 1.0f, 0.5f, 1.0f,
                        timeScale2, screenW, screenH);

        // "PRESS ESC TO EXIT"
        f32 escScale = 2.5f;
        const char* escStr = "PRESS ESC TO EXIT";
        f32 escW = m_font.measureTextWidth(escStr, escScale);
        m_font.drawText((pw - escW) * 0.5f, boxY + 200, escStr,
                        0.5f, 0.5f, 0.5f, 0.8f,
                        escScale, screenW, screenH);
    }

    GL3::gl.glDisable(GL3::GL_BLEND);
    GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
#else
    (void)screenW; (void)screenH;
#endif
}
