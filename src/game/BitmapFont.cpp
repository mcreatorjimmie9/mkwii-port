// =============================================================================
// BitmapFont.cpp — Embedded 5x7 bitmap font implementation (M10)
// MAESTRO Phase 7, Milestone M10: Polish
// =============================================================================

#include "game/BitmapFont.hpp"
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <cstdlib>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// =============================================================================
// 5x7 pixel font data — standard ASCII printable characters (32-126)
// Each byte encodes one row of 5 pixels (MSB=left).
// =============================================================================
const u8 BitmapFont::s_font[96][7] = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // ' '
    {0x04,0x04,0x04,0x04,0x00,0x04,0x00}, // '!'
    {0x0A,0x0A,0x00,0x00,0x00,0x00,0x00}, // '"'
    {0x0A,0x1F,0x0A,0x0A,0x1F,0x0A,0x00}, // '#'
    {0x04,0x0F,0x14,0x0E,0x05,0x1E,0x04}, // '$'
    {0x18,0x19,0x02,0x04,0x08,0x13,0x03}, // '%'
    {0x08,0x14,0x14,0x08,0x15,0x12,0x0D}, // '&'
    {0x04,0x04,0x08,0x00,0x00,0x00,0x00}, // '''
    {0x02,0x04,0x08,0x08,0x08,0x04,0x02}, // '('
    {0x08,0x04,0x02,0x02,0x02,0x04,0x08}, // ')'
    {0x00,0x04,0x15,0x0E,0x15,0x04,0x00}, // '*'
    {0x00,0x04,0x04,0x1F,0x04,0x04,0x00}, // '+'
    {0x00,0x00,0x00,0x00,0x04,0x04,0x08}, // ','
    {0x00,0x00,0x00,0x1F,0x00,0x00,0x00}, // '-'
    {0x00,0x00,0x00,0x00,0x00,0x04,0x00}, // '.'
    {0x01,0x01,0x02,0x04,0x08,0x10,0x10}, // '/'
    {0x0E,0x11,0x13,0x15,0x19,0x11,0x0E}, // '0'
    {0x04,0x0C,0x04,0x04,0x04,0x04,0x0E}, // '1'
    {0x0E,0x11,0x01,0x02,0x04,0x08,0x1F}, // '2'
    {0x0E,0x11,0x01,0x06,0x01,0x11,0x0E}, // '3'
    {0x02,0x06,0x0A,0x12,0x1F,0x02,0x02}, // '4'
    {0x1F,0x10,0x1E,0x01,0x01,0x11,0x0E}, // '5'
    {0x06,0x08,0x10,0x1E,0x11,0x11,0x0E}, // '6'
    {0x1F,0x01,0x02,0x04,0x08,0x08,0x08}, // '7'
    {0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E}, // '8'
    {0x0E,0x11,0x11,0x0F,0x01,0x02,0x0C}, // '9'
    {0x00,0x04,0x00,0x00,0x00,0x04,0x00}, // ':'
    {0x00,0x04,0x00,0x00,0x04,0x04,0x08}, // ';'
    {0x02,0x04,0x08,0x10,0x08,0x04,0x02}, // '<'
    {0x00,0x00,0x1F,0x00,0x1F,0x00,0x00}, // '='
    {0x08,0x04,0x02,0x01,0x02,0x04,0x08}, // '>'
    {0x0E,0x11,0x01,0x02,0x04,0x00,0x04}, // '?'
    {0x0E,0x11,0x17,0x15,0x17,0x10,0x0E}, // '@'
    {0x0E,0x11,0x11,0x1F,0x11,0x11,0x11}, // 'A'
    {0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E}, // 'B'
    {0x0E,0x11,0x10,0x10,0x10,0x11,0x0E}, // 'C'
    {0x1C,0x12,0x11,0x11,0x11,0x12,0x1C}, // 'D'
    {0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F}, // 'E'
    {0x1F,0x10,0x10,0x1E,0x10,0x10,0x10}, // 'F'
    {0x0E,0x11,0x10,0x17,0x11,0x11,0x0F}, // 'G'
    {0x11,0x11,0x11,0x1F,0x11,0x11,0x11}, // 'H'
    {0x0E,0x04,0x04,0x04,0x04,0x04,0x0E}, // 'I'
    {0x07,0x02,0x02,0x02,0x02,0x12,0x0C}, // 'J'
    {0x11,0x12,0x14,0x18,0x14,0x12,0x11}, // 'K'
    {0x10,0x10,0x10,0x10,0x10,0x10,0x1F}, // 'L'
    {0x11,0x1B,0x15,0x15,0x11,0x11,0x11}, // 'M'
    {0x11,0x19,0x15,0x13,0x11,0x11,0x11}, // 'N'
    {0x0E,0x11,0x11,0x11,0x11,0x11,0x0E}, // 'O'
    {0x1E,0x11,0x11,0x1E,0x10,0x10,0x10}, // 'P'
    {0x0E,0x11,0x11,0x11,0x15,0x12,0x0D}, // 'Q'
    {0x1E,0x11,0x11,0x1E,0x14,0x12,0x11}, // 'R'
    {0x0E,0x11,0x10,0x0E,0x01,0x11,0x0E}, // 'S'
    {0x1F,0x04,0x04,0x04,0x04,0x04,0x04}, // 'T'
    {0x11,0x11,0x11,0x11,0x11,0x11,0x0E}, // 'U'
    {0x11,0x11,0x11,0x11,0x11,0x0A,0x04}, // 'V'
    {0x11,0x11,0x11,0x15,0x15,0x15,0x0A}, // 'W'
    {0x11,0x11,0x0A,0x04,0x0A,0x11,0x11}, // 'X'
    {0x11,0x11,0x0A,0x04,0x04,0x04,0x04}, // 'Y'
    {0x1F,0x01,0x02,0x04,0x08,0x10,0x1F}, // 'Z'
    {0x0E,0x08,0x08,0x08,0x08,0x08,0x0E}, // '['
    {0x10,0x10,0x08,0x04,0x02,0x01,0x01}, // '\'
    {0x0E,0x02,0x02,0x02,0x02,0x02,0x0E}, // ']'
    {0x04,0x0A,0x11,0x00,0x00,0x00,0x00}, // '^'
    {0x00,0x00,0x00,0x00,0x00,0x00,0x1F}, // '_'
    {0x08,0x04,0x02,0x00,0x00,0x00,0x00}, // '`'
    {0x00,0x00,0x0E,0x01,0x0F,0x11,0x0F}, // 'a'
    {0x10,0x10,0x1E,0x11,0x11,0x11,0x1E}, // 'b'
    {0x00,0x00,0x0E,0x11,0x10,0x11,0x0E}, // 'c'
    {0x01,0x01,0x0F,0x11,0x11,0x11,0x0F}, // 'd'
    {0x00,0x00,0x0E,0x11,0x1F,0x10,0x0E}, // 'e'
    {0x02,0x04,0x0E,0x04,0x04,0x04,0x04}, // 'f'
    {0x00,0x00,0x0F,0x11,0x0F,0x01,0x0E}, // 'g'
    {0x10,0x10,0x1E,0x11,0x11,0x11,0x11}, // 'h'
    {0x04,0x00,0x0C,0x04,0x04,0x04,0x0E}, // 'i'
    {0x02,0x00,0x06,0x02,0x02,0x12,0x0C}, // 'j'
    {0x10,0x10,0x12,0x14,0x18,0x14,0x12}, // 'k'
    {0x0C,0x04,0x04,0x04,0x04,0x04,0x0E}, // 'l'
    {0x00,0x00,0x1A,0x15,0x15,0x15,0x15}, // 'm'
    {0x00,0x00,0x1E,0x11,0x11,0x11,0x11}, // 'n'
    {0x00,0x00,0x0E,0x11,0x11,0x11,0x0E}, // 'o'
    {0x00,0x00,0x1E,0x11,0x1E,0x10,0x10}, // 'p'
    {0x00,0x00,0x0F,0x11,0x0F,0x01,0x01}, // 'q'
    {0x00,0x00,0x16,0x19,0x10,0x10,0x10}, // 'r'
    {0x00,0x00,0x0F,0x10,0x0E,0x01,0x1E}, // 's'
    {0x04,0x04,0x1F,0x04,0x04,0x04,0x02}, // 't'
    {0x00,0x00,0x11,0x11,0x11,0x11,0x0F}, // 'u'
    {0x00,0x00,0x11,0x11,0x11,0x0A,0x04}, // 'v'
    {0x00,0x00,0x11,0x11,0x15,0x15,0x0A}, // 'w'
    {0x00,0x00,0x11,0x0A,0x04,0x0A,0x11}, // 'x'
    {0x00,0x00,0x11,0x11,0x0F,0x01,0x0E}, // 'y'
    {0x00,0x00,0x1F,0x02,0x04,0x08,0x1F}, // 'z'
    {0x02,0x04,0x04,0x08,0x04,0x04,0x02}, // '{'
    {0x04,0x04,0x04,0x00,0x04,0x04,0x04}, // '|'
    {0x08,0x04,0x04,0x02,0x04,0x04,0x08}, // '}'
    {0x00,0x00,0x08,0x15,0x02,0x00,0x00}, // '~'
};

// =============================================================================
// Constructor / Destructor
// =============================================================================

BitmapFont::BitmapFont()
    : m_vao(0), m_vbo(0), m_shaderProgram(0)
    , m_orthoLoc(-1), m_colorLoc(-1), m_offsetLoc(-1), m_scaleLoc(-1) {}

BitmapFont::~BitmapFont() {
    cleanupGL();
}

// =============================================================================
// initGL — Create shader and dynamic VBO for batched rendering
// =============================================================================

bool BitmapFont::initGL() {
#ifdef HAS_OPENGL
    // Vertex shader: positions in VBO are already in pixel-space.
    // Ortho matrix maps [0,W]x[0,H] -> [-1,+1] clip space.
    const char* vertSrc =
        "#version 330 core\n"
        "layout(location=0) in vec2 aPos;\n"
        "uniform mat4 u_ortho;\n"
        "void main() {\n"
        "    gl_Position = u_ortho * vec4(aPos, 0.0, 1.0);\n"
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
    m_offsetLoc = -1;
    m_scaleLoc  = -1;

    // Dynamic VBO — 512KB pre-allocated for batched pixel quads
    GL3::gl.glGenVertexArrays(1, &m_vao);
    GL3::gl.glGenBuffers(1, &m_vbo);

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER, 512 * 1024, nullptr,
                          GL3::GL_DYNAMIC_DRAW);
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

void BitmapFont::cleanupGL() {
#ifdef HAS_OPENGL
    if (m_vao) { GL3::gl.glDeleteVertexArrays(1, &m_vao); m_vao = 0; }
    if (m_vbo) { GL3::gl.glDeleteBuffers(1, &m_vbo); m_vbo = 0; }
    if (m_shaderProgram) { GL3::gl.glDeleteProgram(m_shaderProgram); m_shaderProgram = 0; }
    m_orthoLoc = -1;
    m_colorLoc = -1;
    m_offsetLoc = -1;
    m_scaleLoc  = -1;
#endif
}

// =============================================================================
// setOrtho — Build ortho projection: [0,W]x[0,H] -> [-1,+1] clip space
// =============================================================================

void BitmapFont::setOrtho(u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    f32 o[16] = {0};
    o[0] = 2.0f / static_cast<f32>(screenW);
    o[5] = -2.0f / static_cast<f32>(screenH);
    o[10] = -1.0f;
    o[12] = -1.0f;
    o[13] = 1.0f;
    o[15] = 1.0f;
    GL3::gl.glUniformMatrix4fv(m_orthoLoc, 1, GL3::GL_FALSE, o);
#endif
}

// =============================================================================
// drawText — Batch-render entire string in a single draw call
// =============================================================================

void BitmapFont::drawText(f32 x, f32 y, const char* text,
                           f32 r, f32 g, f32 b, f32 alpha, f32 scale,
                           u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!text || !m_vao || !m_shaderProgram) return;

    // Count active pixels to size buffer
    u32 pixelCount = 0;
    for (u32 i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 32 && text[i] <= 126) {
            int idx = static_cast<int>(text[i]) - 32;
            const u8* glyph = s_font[idx];
            for (int row = 0; row < 7; row++) {
                u8 bits = glyph[row];
                for (int col = 0; col < 5; col++) {
                    if (bits & (1 << (4 - col))) pixelCount++;
                }
            }
        }
    }
    if (pixelCount == 0) return;

    // Each pixel = 1 quad = 2 triangles = 6 vertices = 12 floats
    u32 floatCount = pixelCount * 12;
    f32* verts = static_cast<f32*>(std::malloc(floatCount * sizeof(f32)));
    if (!verts) return;

    f32 pixGap = scale * 0.1f;
    f32 pixSize = scale - pixGap;
    f32 cx = x;
    u32 vi = 0;

    for (u32 i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 32 && text[i] <= 126) {
            int idx = static_cast<int>(text[i]) - 32;
            const u8* glyph = s_font[idx];

            for (int row = 0; row < 7; row++) {
                for (int col = 0; col < 5; col++) {
                    if (glyph[row] & (1 << (4 - col))) {
                        f32 px = cx + col * scale + pixGap * 0.5f;
                        f32 py = y + row * scale + pixGap * 0.5f;

                        // Triangle 1: TL, TR, BR
                        verts[vi++] = px;            verts[vi++] = py;
                        verts[vi++] = px + pixSize;  verts[vi++] = py;
                        verts[vi++] = px + pixSize;  verts[vi++] = py + pixSize;
                        // Triangle 2: TL, BR, BL
                        verts[vi++] = px;            verts[vi++] = py;
                        verts[vi++] = px + pixSize;  verts[vi++] = py + pixSize;
                        verts[vi++] = px;            verts[vi++] = py + pixSize;
                    }
                }
            }
        }
        cx += 5.0f * scale + scale;  // char width + spacing
    }

    // Upload batched vertex data and draw
    GL3::gl.glUseProgram(m_shaderProgram);
    setOrtho(screenW, screenH);
    GL3::gl.glUniform4f(m_colorLoc, r, g, b, alpha);

    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferSubData(GL3::GL_ARRAY_BUFFER, 0,
                             vi * sizeof(f32), verts);

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glDrawArrays(GL3::GL_TRIANGLES, 0, pixelCount * 6);
    GL3::gl.glBindVertexArray(0);
    GL3::gl.glUseProgram(0);

    std::free(verts);
#else
    (void)x; (void)y; (void)text;
    (void)r; (void)g; (void)b; (void)alpha; (void)scale;
    (void)screenW; (void)screenH;
#endif
}

// =============================================================================
// drawTextf — Formatted text draw
// =============================================================================

void BitmapFont::drawTextf(f32 x, f32 y, f32 scale,
                            u32 screenW, u32 screenH,
                            f32 r, f32 g, f32 b,
                            const char* fmt, ...) {
    char buf[256];
    va_list args;
    va_start(args, fmt);
    std::vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);
    drawText(x, y, buf, r, g, b, 1.0f, scale, screenW, screenH);
}

// =============================================================================
// measureText — Pixel width of string at given scale
// =============================================================================

f32 BitmapFont::measureText(const char* text, f32 scale) const {
    if (!text) return 0.0f;
    u32 len = 0;
    for (; text[len] != '\0'; len++) {}
    if (len == 0) return 0.0f;
    return len * (5.0f * scale + scale) - scale;
}

// =============================================================================
// drawRect — Draw a filled rectangle (for HUD panel backgrounds)
// =============================================================================

void BitmapFont::drawRect(f32 x, f32 y, f32 w, f32 h,
                           f32 r, f32 g, f32 b, f32 a,
                           u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_vao || !m_shaderProgram) return;

    // One quad = 2 triangles = 6 vertices = 12 floats
    f32 verts[12] = {
        x,     y,      x + w, y,      x + w, y + h,
        x,     y,      x + w, y + h,  x,     y + h,
    };

    GL3::gl.glUseProgram(m_shaderProgram);
    setOrtho(screenW, screenH);
    GL3::gl.glUniform4f(m_colorLoc, r, g, b, a);

    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferSubData(GL3::GL_ARRAY_BUFFER, 0,
                             sizeof(verts), verts);

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glDrawArrays(GL3::GL_TRIANGLES, 0, 6);
    GL3::gl.glBindVertexArray(0);
    GL3::gl.glUseProgram(0);
#else
    (void)x; (void)y; (void)w; (void)h;
    (void)r; (void)g; (void)b; (void)a;
    (void)screenW; (void)screenH;
#endif
}
