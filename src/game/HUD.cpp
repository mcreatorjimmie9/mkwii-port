// =============================================================================
// HUD.cpp — Heads-Up Display overlay implementation (M9)
// MAESTRO Phase 7, Milestone M9: Full Race
// =============================================================================

#include "game/HUD.hpp"
#include <cstdio>
#include <cmath>
#include <cstring>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// =============================================================================
// Simple digit rendering: each digit 0-9 is a 3x5 pixel bitmap
// =============================================================================
// Each row is 3 bits (left to right), top to bottom
static const u8 DIGIT_BITMAPS[10][5] = {
    // 0
    { 0x07, 0x05, 0x05, 0x05, 0x07 },
    // 1
    { 0x02, 0x06, 0x02, 0x02, 0x07 },
    // 2
    { 0x07, 0x01, 0x07, 0x04, 0x07 },
    // 3
    { 0x07, 0x01, 0x07, 0x01, 0x07 },
    // 4
    { 0x05, 0x05, 0x07, 0x01, 0x01 },
    // 5
    { 0x07, 0x04, 0x07, 0x01, 0x07 },
    // 6
    { 0x07, 0x04, 0x07, 0x05, 0x07 },
    // 7
    { 0x07, 0x05, 0x01, 0x01, 0x01 },
    // 8
    { 0x07, 0x05, 0x07, 0x05, 0x07 },
    // 9
    { 0x07, 0x05, 0x07, 0x01, 0x07 },
};

// =============================================================================
// HUD — Constructor / Destructor
// =============================================================================

HUD::HUD()
    : m_position(1)
    , m_currentLap(1)
    , m_totalLaps(3)
    , m_speed(0.0f)
    , m_countdownTimer(3.0f)
    , m_countdownActive(false)
    , m_finished(false)
    , m_finishPosition(1)
    , m_vao(0)
    , m_vbo(0)
    , m_shaderProgram(0)
    , m_orthoLoc(-1)
    , m_colorLoc(-1)
    , m_posScaleLoc(-1) {
    m_itemName[0] = '\0';
    m_lapTime[0] = '\0';
    m_raceTime[0] = '\0';
    m_finishTime[0] = '\0';
}

HUD::~HUD() {
    cleanupGL();
}

// =============================================================================
// initGL — Create shader and quad geometry
// =============================================================================

bool HUD::initGL() {
#ifdef HAS_OPENGL
    // Simple fullscreen quad shader for HUD rectangles
    const char* vertSrc =
        "#version 330 core\n"
        "layout(location=0) in vec2 aPos;\n"
        "uniform mat4 u_ortho;\n"
        "uniform vec4 u_posScale;\n"  // (x, y, scaleX, scaleY) in pixels
        "out vec2 vUV;\n"
        "void main() {\n"
        "    vUV = aPos * 0.5 + 0.5;\n"
        "    vec2 pixelPos = aPos * u_posScale.zw + u_posScale.xy;\n"
        "    gl_Position = u_ortho * vec4(pixelPos, 0.0, 1.0);\n"
        "}\n";

    const char* fragSrc =
        "#version 330 core\n"
        "uniform vec4 u_color;\n"
        "out vec4 fragColor;\n"
        "void main() {\n"
        "    fragColor = u_color;\n"
        "}\n";

    auto compileShader = [](u32 type, const char* src) -> u32 {
        u32 shader = GL3::gl.glCreateShader(type);
        GL3::gl.glShaderSource(shader, 1, &src, nullptr);
        GL3::gl.glCompileShader(shader);
        s32 ok = 0;
        GL3::gl.glGetShaderiv(shader, GL3::GL_COMPILE_STATUS, &ok);
        if (!ok) {
            GL3::gl.glDeleteShader(shader);
            return 0;
        }
        return shader;
    };

    u32 vs = compileShader(GL3::GL_VERTEX_SHADER, vertSrc);
    u32 fs = compileShader(GL3::GL_FRAGMENT_SHADER, fragSrc);
    if (!vs || !fs) {
        if (vs) GL3::gl.glDeleteShader(vs);
        if (fs) GL3::gl.glDeleteShader(fs);
        return false;
    }

    m_shaderProgram = GL3::gl.glCreateProgram();
    GL3::gl.glAttachShader(m_shaderProgram, vs);
    GL3::gl.glAttachShader(m_shaderProgram, fs);
    GL3::gl.glLinkProgram(m_shaderProgram);
    GL3::gl.glDeleteShader(vs);
    GL3::gl.glDeleteShader(fs);

    s32 linkOk = 0;
    GL3::gl.glGetProgramiv(m_shaderProgram, GL3::GL_LINK_STATUS, &linkOk);
    if (!linkOk) {
        GL3::gl.glDeleteProgram(m_shaderProgram);
        m_shaderProgram = 0;
        return false;
    }

    m_orthoLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_ortho");
    m_colorLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_color");
    m_posScaleLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_posScale");

    // Unit quad [-1,+1] x [-1,+1]
    static const f32 quadVerts[6][2] = {
        { -1.0f, -1.0f }, {  1.0f, -1.0f }, {  1.0f,  1.0f },
        { -1.0f, -1.0f }, {  1.0f,  1.0f }, { -1.0f,  1.0f },
    };

    GL3::gl.glGenVertexArrays(1, &m_vao);
    GL3::gl.glGenBuffers(1, &m_vbo);

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER, sizeof(quadVerts),
                          quadVerts, GL3::GL_STATIC_DRAW);
    GL3::gl.glVertexAttribPointer(0, 2, GL3::GL_FLOAT, GL3::GL_FALSE,
                                  0, nullptr);
    GL3::gl.glEnableVertexAttribArray(0);
    GL3::gl.glBindVertexArray(0);

    return true;
#else
    return false;
#endif
}

// =============================================================================
// cleanupGL
// =============================================================================

void HUD::cleanupGL() {
#ifdef HAS_OPENGL
    if (m_vao) { GL3::gl.glDeleteVertexArrays(1, &m_vao); m_vao = 0; }
    if (m_vbo) { GL3::gl.glDeleteBuffers(1, &m_vbo); m_vbo = 0; }
    if (m_shaderProgram) { GL3::gl.glDeleteProgram(m_shaderProgram); m_shaderProgram = 0; }
    m_orthoLoc = -1;
    m_colorLoc = -1;
    m_posScaleLoc = -1;
#endif
}

// =============================================================================
// drawRect — Draw a single filled rectangle
// =============================================================================

void HUD::drawRect(f32 x, f32 y, f32 w, f32 h,
                     f32 r, f32 g, f32 b, f32 a,
                     const f32* ortho, u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_vao || !m_shaderProgram) return;

    GL3::gl.glUseProgram(m_shaderProgram);

    // Convert pixel coords to clip space via ortho projection
    if (ortho) {
        GL3::gl.glUniformMatrix4fv(m_orthoLoc, 1, GL3::GL_FALSE, ortho);
    } else {
        // Build ortho on the fly: maps [0, screenW] x [0, screenH] to [-1,1]x[-1,1]
        f32 o[16] = {0};
        o[0] = 2.0f / static_cast<f32>(screenW);
        o[5] = -2.0f / static_cast<f32>(screenH);
        o[10] = -1.0f;
        o[12] = -1.0f;
        o[13] = 1.0f;
        o[15] = 1.0f;
        GL3::gl.glUniformMatrix4fv(m_orthoLoc, 1, GL3::GL_FALSE, o);
    }

    GL3::gl.glUniform4f(m_colorLoc, r, g, b, a);
    GL3::gl.glUniform4f(m_posScaleLoc, x, y, w, h);

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glDrawArrays(GL3::GL_TRIANGLES, 0, 6);
    GL3::gl.glBindVertexArray(0);
    GL3::gl.glUseProgram(0);
#else
    (void)x; (void)y; (void)w; (void)h;
    (void)r; (void)g; (void)b; (void)a;
    (void)ortho; (void)screenW; (void)screenH;
#endif
}

// =============================================================================
// render — Draw full HUD overlay
// =============================================================================

void HUD::render(u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_vao || !m_shaderProgram) return;

    // Enable blending for transparency
    GL3::gl.glEnable(GL3::GL_BLEND);
    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);
    GL3::gl.glDisable(GL3::GL_DEPTH_TEST);

    f32 pw = static_cast<f32>(screenW);
    f32 ph = static_cast<f32>(screenH);
    const f32* nullOrtho = nullptr;

    // =========================================================================
    // COUNTDOWN OVERLAY (big centered number)
    // =========================================================================
    if (m_countdownActive) {
        f32 num = std::ceil(m_countdownTimer);
        if (num > 0.0f) {
            // Dark semi-transparent background
            drawRect(0, 0, pw, ph, 0.0f, 0.0f, 0.0f, 0.5f, nullOrtho, screenW, screenH);

            // Large number
            f32 size = 200.0f;
            f32 cx = pw * 0.5f - size * 0.5f;
            f32 cy = ph * 0.5f - size * 0.5f;

            if (num <= 3.0f) {
                // Draw the number using colored blocks (large pixel art)
                // Just draw a colored square with the number approximation
                f32 colors[3];
                if (num >= 2.0f) {
                    colors[0] = 1.0f; colors[1] = 0.2f; colors[2] = 0.2f;  // Red
                } else {
                    colors[0] = 0.2f; colors[1] = 1.0f; colors[2] = 0.2f;  // Green (GO!)
                }
                drawRect(cx, cy, size, size, colors[0], colors[1], colors[2], 0.9f,
                         nullOrtho, screenW, screenH);

                // Number text (simplified: just a large digit indicator)
                u32 digit = static_cast<u32>(num);
                if (digit >= 1 && digit <= 3) {
                    const u8* bmp = DIGIT_BITMAPS[digit];
                    f32 pixSize = size / 5.0f;
                    f32 offset = (size - pixSize * 3.0f) * 0.5f;
                    for (int row = 0; row < 5; row++) {
                        for (int col = 0; col < 3; col++) {
                            if (bmp[row] & (1 << (2 - col))) {
                                drawRect(cx + offset + col * pixSize,
                                         cy + offset + (4 - row) * pixSize,
                                         pixSize - 2.0f, pixSize - 2.0f,
                                         1.0f, 1.0f, 1.0f, 1.0f,
                                         nullOrtho, screenW, screenH);
                            }
                        }
                    }
                }
            }
        }

        GL3::gl.glDisable(GL3::GL_BLEND);
        GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
        return;
    }

    // =========================================================================
    // TOP-LEFT: Position + Lap
    // =========================================================================
    {
        // Background panel
        drawRect(10, 10, 250, 110, 0.0f, 0.0f, 0.0f, 0.6f,
                 nullOrtho, screenW, screenH);

        // Position: "1st" / "2nd" etc.
        const char* posSuffix[] = {"st", "nd", "rd", "th", "th", "th",
                                  "th", "th", "th", "th", "th", "th"};
        u32 posIdx = (m_position > 4) ? 4 : (m_position - 1);
        // Just draw a white bar as position indicator (simplified)
        f32 barWidth = 100.0f + m_position * 20.0f;
        drawRect(20, 20, barWidth, 30, 1.0f, 1.0f, 0.0f, 0.9f,
                 nullOrtho, screenW, screenH);

        // Lap: "LAP 1/3"
        drawRect(20, 70, 120, 30, 0.2f, 0.8f, 1.0f, 0.9f,
                 nullOrtho, screenW, screenH);
        drawRect(160, 70, 30, 30, 1.0f, 1.0f, 0.0f, 0.9f,
                 nullOrtho, screenW, screenH);  // current lap indicator
    }

    // =========================================================================
    // TOP-RIGHT: Speed
    // =========================================================================
    {
        drawRect(pw - 200, 10, 190, 50, 0.0f, 0.0f, 0.0f, 0.6f,
                 nullOrtho, screenW, screenH);

        // Speed bar (proportional to max speed ~3000)
        f32 speedFrac = (m_speed / 3000.0f);
        if (speedFrac > 1.0f) speedFrac = 1.0f;
        drawRect(pw - 190, 20, 170.0f * speedFrac, 30,
                 0.0f, 1.0f, 0.0f, 0.9f, nullOrtho, screenW, screenH);
    }

    // =========================================================================
    // BOTTOM-LEFT: Race time + Lap time
    // =========================================================================
    {
        drawRect(10, ph - 70, 300, 60, 0.0f, 0.0f, 0.0f, 0.6f,
                 nullOrtho, screenW, screenH);

        // Race time bar
        drawRect(20, ph - 60, 200, 20, 1.0f, 1.0f, 1.0f, 0.8f,
                 nullOrtho, screenW, screenH);
        // Lap time bar
        drawRect(20, ph - 30, 200, 20, 0.0f, 1.0f, 1.0f, 0.8f,
                 nullOrtho, screenW, screenH);
    }

    // =========================================================================
    // BOTTOM-RIGHT: Item
    // =========================================================================
    {
        drawRect(pw - 220, ph - 70, 210, 60, 0.0f, 0.0f, 0.0f, 0.6f,
                 nullOrtho, screenW, screenH);

        // Item indicator (colored block)
        f32 itemR = 0.3f, itemG = 0.3f, itemB = 0.3f;
        if (m_itemName[0] != '\0') {
            // Color based on item type
            itemR = 1.0f; itemG = 0.5f; itemB = 0.0f;  // Orange placeholder
        }
        drawRect(pw - 200, ph - 55, 50, 40, itemR, itemG, itemB, 0.9f,
                 nullOrtho, screenW, screenH);
    }

    // =========================================================================
    // FINISHED OVERLAY
    // =========================================================================
    if (m_finished) {
        // Semi-transparent dark overlay
        drawRect(0, 0, pw, ph, 0.0f, 0.0f, 0.0f, 0.7f,
                 nullOrtho, screenW, screenH);

        // Results box
        f32 boxW = 400.0f;
        f32 boxH = 200.0f;
        f32 boxX = (pw - boxW) * 0.5f;
        f32 boxY = (ph - boxH) * 0.5f;

        drawRect(boxX, boxY, boxW, boxH, 0.1f, 0.1f, 0.2f, 0.95f,
                 nullOrtho, screenW, screenH);

        // "FINISH" bar
        drawRect(boxX + 20, boxY + 20, boxW - 40, 40, 1.0f, 0.8f, 0.0f, 1.0f,
                 nullOrtho, screenW, screenH);

        // Position bar
        drawRect(boxX + 20, boxY + 80, boxW - 40, 40, 0.2f, 0.8f, 1.0f, 1.0f,
                 nullOrtho, screenW, screenH);

        // Time bar
        drawRect(boxX + 20, boxY + 140, boxW - 40, 40, 0.0f, 1.0f, 0.5f, 1.0f,
                 nullOrtho, screenW, screenH);
    }

    GL3::gl.glDisable(GL3::GL_BLEND);
    GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
#else
    (void)screenW; (void)screenH;
#endif
}
