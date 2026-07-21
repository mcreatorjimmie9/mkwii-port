#pragma once
// =============================================================================
// BitmapFont.hpp — Embedded 5x7 bitmap font for HUD text rendering (M10)
// MAESTRO Phase 7, Milestone M10: Polish
// =============================================================================
//
// Renders ASCII text (32-126) using a built-in 5x7 pixel font.
// Each character is drawn as a grid of small colored quads via OpenGL.
// Also provides drawRect() for HUD panel backgrounds.
// No external font files needed.
//
// Dependencies: rk_types.h
// =============================================================================

#include "rk_types.h"

class BitmapFont {
public:
    BitmapFont();
    ~BitmapFont();

    // Non-copyable
    BitmapFont(const BitmapFont&) = delete;
    BitmapFont& operator=(const BitmapFont&) = delete;

    // -- GL initialization -----------------------------------------------------

    /// Create GL resources (VAO, VBO, shader) for rendering.
    bool initGL();

    /// Release GL resources.
    void cleanupGL();

    // -- Text drawing ----------------------------------------------------------

    /// Draw a text string at pixel position (x, y) from top-left.
    void drawText(f32 x, f32 y, const char* text,
                  f32 r, f32 g, f32 b, f32 alpha, f32 scale,
                  u32 screenW, u32 screenH);

    /// Formatted text draw (printf-style).
    void drawTextf(f32 x, f32 y, f32 scale,
                   u32 screenW, u32 screenH,
                   f32 r, f32 g, f32 b,
                   const char* fmt, ...);

    // -- Rectangle drawing (HUD panels) ---------------------------------------

    /// Draw a filled rectangle as a HUD panel background.
    void drawRect(f32 x, f32 y, f32 w, f32 h,
                  f32 r, f32 g, f32 b, f32 a,
                  u32 screenW, u32 screenH);

    // -- Metrics --------------------------------------------------------------

    /// Get the width of a text string in pixels at given scale.
    f32 measureText(const char* text, f32 scale) const;

    /// Alias used by HUD code.
    f32 measureTextWidth(const char* text, f32 scale) const {
        return measureText(text, scale);
    }

    /// Get standard character height at given scale.
    f32 getCharHeight(f32 scale) const { return 7.0f * scale; }

    /// Get standard character width at given scale.
    f32 getCharWidth(f32 scale) const { return 5.0f * scale; }

private:
    // -- GL handles ------------------------------------------------------------
    u32  m_vao;
    u32  m_vbo;
    u32  m_shaderProgram;
    s32  m_orthoLoc;      // mat4 uniform
    s32  m_colorLoc;      // vec4 uniform
    s32  m_offsetLoc;
    s32  m_scaleLoc;

    // -- Internal: set up ortho projection -------------------------------------
    void setOrtho(u32 screenW, u32 screenH);

    // -- Static font data ------------------------------------------------------
    static const u8 s_font[96][7];  // 5x7 bitmaps for ASCII 32-126
};
