// gx_renderer.cpp — Phase 32: GX-to-OpenGL 3.3 Core Renderer Implementation
//
// Translates Wii GX commands into OpenGL 3.3 Core draw calls.
// This is the core rendering backend that makes decompiled rendering code
// (Rendering/*.cpp, Scene/*.cpp, UI/J2DPane.cpp) produce visual output.

#include "platform/gx_renderer.hpp"
#include "shims/gx.hpp" // GXColor, GXLightObj, GXSpotFn, GXDistAttnFn, WGPIPE

namespace GXRenderer {

// ---------------------------------------------------------------------------
// Global state
// ---------------------------------------------------------------------------
static RendererState s_state;
static DecodedVertex* s_vertBuf = nullptr;

// ---------------------------------------------------------------------------
// Default shader — fallback when TEV compilation isn't ready
// ---------------------------------------------------------------------------
static u32 s_defaultProgram = 0;
static s32 s_defaultMvpLoc  = -1;
static s32 s_defaultColLoc  = -1;
static s32 s_defaultTexLoc  = -1;
static s32 s_defaultUseTexLoc = -1;

// ---------------------------------------------------------------------------
// Common shader — supports position + color + single texture
// ---------------------------------------------------------------------------
static const char* COMMON_VERT_SRC =
    "#version 330 core\n"
    "layout(location=0) in vec3 aPos;\n"
    "layout(location=1) in vec4 aColor;\n"
    "layout(location=2) in vec2 aTexCoord;\n"
    "\n"
    "uniform mat4 u_mvp;\n"
    "\n"
    "out vec4 v_color;\n"
    "out vec2 v_texCoord;\n"
    "\n"
    "void main() {\n"
    "    gl_Position = u_mvp * vec4(aPos, 1.0);\n"
    "    v_color = aColor;\n"
    "    v_texCoord = aTexCoord;\n"
    "}\n";

static const char* COMMON_FRAG_SRC =
    "#version 330 core\n"
    "\n"
    "in vec4 v_color;\n"
    "in vec2 v_texCoord;\n"
    "\n"
    "uniform sampler2D u_texture;\n"
    "uniform int u_useTexture;\n"
    "\n"
    "out vec4 fragColor;\n"
    "\n"
    "void main() {\n"
    "    vec4 texColor = (u_useTexture != 0) ? texture(u_texture, v_texCoord) : vec4(1.0);\n"
    "    // MKWii standard TEV: color = texColor * vertexColor, alpha = texAlpha * vertexAlpha\n"
    "    // This matches GXSetTevColorIn(GX_CC_TEXC, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO)\n"
    "    fragColor = texColor * v_color;\n"
    "}\n";

// ---------------------------------------------------------------------------
// GL error checking (debug builds)
// ---------------------------------------------------------------------------
#ifdef DEBUG
#define GX_GL_CHECK() do { \
    GLenum _err = GL3::gl.glGetError(); \
    if (_err != GL3::GL_NO_ERROR) { \
        printf("[GXRenderer] GL error 0x%04X at %s:%d\n", _err, __FILE__, __LINE__); \
    } \
} while(0)
#else
#define GX_GL_CHECK() ((void)0)
#endif

// ---------------------------------------------------------------------------
// Helper: compile a GL shader
// ---------------------------------------------------------------------------
static u32 compileShader(u32 type, const char* src) {
    u32 shader = GL3::gl.glCreateShader(type);
    if (!shader) return 0;
    GL3::gl.glShaderSource(shader, 1, &src, nullptr);
    GL3::gl.glCompileShader(shader);
    s32 ok = 0;
    GL3::gl.glGetShaderiv(shader, GL3::GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[512];
        GL3::gl.glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
        printf("[GXRenderer] Shader compile error: %s\n", log);
        GL3::gl.glDeleteShader(shader);
        return 0;
    }
    return shader;
}

// ---------------------------------------------------------------------------
// Helper: link a GL program from vertex + fragment shaders
// ---------------------------------------------------------------------------
static u32 linkProgram(u32 vs, u32 fs) {
    u32 prog = GL3::gl.glCreateProgram();
    if (!prog) return 0;
    GL3::gl.glAttachShader(prog, vs);
    GL3::gl.glAttachShader(prog, fs);
    GL3::gl.glLinkProgram(prog);
    GL3::gl.glDeleteShader(vs);
    GL3::gl.glDeleteShader(fs);
    s32 ok = 0;
    GL3::gl.glGetProgramiv(prog, GL3::GL_LINK_STATUS, &ok);
    if (!ok) {
        char log[512];
        GL3::gl.glGetProgramInfoLog(prog, sizeof(log), nullptr, log);
        printf("[GXRenderer] Program link error: %s\n", log);
        GL3::gl.glDeleteProgram(prog);
        return 0;
    }
    return prog;
}

// ---------------------------------------------------------------------------
// Helper: build default shader program
// ---------------------------------------------------------------------------
static bool buildDefaultProgram() {
    u32 vs = compileShader(GL3::GL_VERTEX_SHADER, COMMON_VERT_SRC);
    u32 fs = compileShader(GL3::GL_FRAGMENT_SHADER, COMMON_FRAG_SRC);
    if (!vs || !fs) return false;

    s_defaultProgram = linkProgram(vs, fs);
    if (!s_defaultProgram) return false;

    s_defaultMvpLoc    = GL3::gl.glGetUniformLocation(s_defaultProgram, "u_mvp");
    s_defaultColLoc    = GL3::gl.glGetUniformLocation(s_defaultProgram, "u_color");
    s_defaultTexLoc    = GL3::gl.glGetUniformLocation(s_defaultProgram, "u_texture");
    s_defaultUseTexLoc = GL3::gl.glGetUniformLocation(s_defaultProgram, "u_useTexture");

    return true;
}

// ---------------------------------------------------------------------------
// Helper: unpack Wii GXColor (0xAABBGGRR) to float RGBA
// ---------------------------------------------------------------------------
static void unpackColor(u32 wiiColor, f32& r, f32& g, f32& b, f32& a) {
    r = static_cast<f32>((wiiColor >>  0) & 0xFF) / 255.0f;
    g = static_cast<f32>((wiiColor >>  8) & 0xFF) / 255.0f;
    b = static_cast<f32>((wiiColor >> 16) & 0xFF) / 255.0f;
    a = static_cast<f32>((wiiColor >> 24) & 0xFF) / 255.0f;
}

// ---------------------------------------------------------------------------
// Helper: pack float RGBA into Wii GXColor (0xAABBGGRR)
// ---------------------------------------------------------------------------
static u32 packColor(f32 r, f32 g, f32 b, f32 a) {
    u32 cr = static_cast<u32>(r * 255.0f) & 0xFF;
    u32 cg = static_cast<u32>(g * 255.0f) & 0xFF;
    u32 cb = static_cast<u32>(b * 255.0f) & 0xFF;
    u32 ca = static_cast<u32>(a * 255.0f) & 0xFF;
    return cr | (cg << 8) | (cb << 16) | (ca << 24);
}

// ---------------------------------------------------------------------------
// Helper: convert GX primitive type to GL enum
// ---------------------------------------------------------------------------
static u32 gxPrimToGL(u8 gxPrim) {
    switch (gxPrim) {
        case 0x80: return GL3::GL_TRIANGLES;      // GX_QUADS
        case 0x90: return GL3::GL_TRIANGLES;      // GX_TRIANGLES
        case 0x98: return GL3::GL_TRIANGLES;      // GX_TRIANGLE_STRIP (converted)
        case 0xA0: return GL3::GL_TRIANGLES;      // GX_TRIANGLE_FAN (converted)
        case 0xA8: return GL3::GL_LINES;          // GX_LINES
        case 0xB0: return GL3::GL_LINES;          // GX_LINE_STRIP
        case 0xB8: return GL3::GL_TRIANGLES;       // GX_POINTS (as GL_POINTS not loaded)
        default:   return GL3::GL_TRIANGLES;
    }
}

// ---------------------------------------------------------------------------
// Helper: convert GX blend factor to GL enum
// ---------------------------------------------------------------------------
static u32 gxBLENDToGL(u8 factor) {
    switch (factor) {
        case 0: return GL3::GL_ZERO;                 // GX_BL_ZERO
        case 1: return GL3::GL_ONE;                  // GX_BL_ONE
        case 2: return GL3::GL_SRC_ALPHA;            // GX_BL_SRCALPHA
        case 3: return GL3::GL_ONE_MINUS_SRC_ALPHA;  // GX_BL_INVSRCALPHA
        case 4: return GL3::GL_DST_ALPHA;            // GX_BL_DSTALPHA
        case 5: return GL3::GL_ONE_MINUS_DST_ALPHA;  // GX_BL_INVDSTALPHA
        case 6: return GL3::GL_SRC_ALPHA;            // GX_BL_SRCCLR (approximation)
        case 7: return GL3::GL_ONE_MINUS_SRC_ALPHA;  // GX_BL_INVSRCCLR
        default: return GL3::GL_SRC_ALPHA;
    }
}

// ---------------------------------------------------------------------------
// Helper: convert GX compare func to GL enum
// ---------------------------------------------------------------------------
static u32 gxCompareToGL(u8 func) {
    switch (func) {
        case 0: return GL3::GL_NEVER;    // GX_NEVER
        case 1: return GL3::GL_LESS;     // GX_LESS
        case 2: return GL3::GL_EQUAL;    // GX_EQUAL
        case 3: return GL3::GL_LEQUAL;   // GX_LEQUAL
        case 4: return GL3::GL_GREATER;  // GX_GREATER
        case 5: return GL3::GL_NOTEQUAL; // GX_NEQUAL
        case 6: return GL3::GL_GEQUAL;   // GX_GEQUAL
        case 7: return GL3::GL_ALWAYS;   // GX_ALWAYS
        default: return GL3::GL_LESS;
    }
}

// ---------------------------------------------------------------------------
// Helper: convert GX wrap mode to GL enum
// ---------------------------------------------------------------------------
static u32 gxWrapToGL(u8 wrap) {
    switch (wrap) {
        case 0: return GL3::GL_REPEAT;         // GX_WT_REPEAT
        case 1: return GL3::GL_CLAMP_TO_EDGE;  // GX_WT_CLAMP
        case 2: return GL3::GL_MIRRORED_REPEAT; // GX_WT_MIRROR (approximation)
        default: return GL3::GL_CLAMP_TO_EDGE;
    }
}

// ---------------------------------------------------------------------------
// Helper: convert GX tex filter to GL enum
// ---------------------------------------------------------------------------
static u32 gxFilterToGL(u8 filter) {
    switch (filter) {
        case 0: return GL3::GL_NEAREST;                // GX_TF_NEAREST
        case 1: return GL3::GL_LINEAR;                  // GX_TF_LINEAR
        case 2: return GL3::GL_NEAREST_MIPMAP_NEAREST; // GX_TF_NEAR_MIP_NEAR
        case 3: return GL3::GL_LINEAR_MIPMAP_NEAREST;  // GX_TF_LIN_MIP_NEAR
        case 4: return GL3::GL_NEAREST_MIPMAP_LINEAR;  // GX_TF_NEAR_MIP_LIN
        case 5: return GL3::GL_LINEAR_MIPMAP_LINEAR;   // GX_TF_LIN_MIP_LIN
        default: return GL3::GL_LINEAR;
    }
}

// ---------------------------------------------------------------------------
// Texture format decoder: Wii format → GL_RGBA8
// All Wii textures are decoded to RGBA8 for GL compatibility.
// ---------------------------------------------------------------------------

// I4: 4-bit intensity (4 pixels per byte)
static void decodeI4(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 y = 0; y < h; y++) {
        for (u32 x = 0; x < w; x++) {
            u8 shift = 4 - ((x & 3) * 4); // High nibble first
            u8 val = ((src[(y * w + x) / 4] >> shift) & 0xF) * 17; // 0x0F → 0xFF
            dst[y * w + x] = 0xFF000000 | (val << 16) | (val << 8) | val;
        }
    }
}

// I8: 8-bit intensity
static void decodeI8(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 i = 0; i < (u32)(w * h); i++) {
        u8 val = src[i];
        dst[i] = 0xFF000000 | (val << 16) | (val << 8) | val;
    }
}

// IA4: 4-bit intensity + 4-bit alpha (2 pixels per byte)
static void decodeIA4(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 y = 0; y < h; y++) {
        for (u32 x = 0; x < w; x++) {
            u8 byte = src[(y * w + x) / 2];
            u8 i, a;
            if ((x & 1) == 0) {
                // Even pixel: high nibble = intensity, low nibble = alpha
                i = (byte >> 4) * 17;
                a = (byte & 0xF) * 17;
            } else {
                // Odd pixel: swapped
                a = (byte >> 4) * 17;
                i = (byte & 0xF) * 17;
            }
            dst[y * w + x] = (a << 24) | (i << 16) | (i << 8) | i;
        }
    }
}

// IA8: 8-bit intensity + 8-bit alpha
static void decodeIA8(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 i = 0; i < (u32)(w * h); i++) {
        u8 a = src[i * 2 + 0];
        u8 intensity = src[i * 2 + 1];
        dst[i] = (a << 24) | (intensity << 16) | (intensity << 8) | intensity;
    }
}

// RGB565: 16-bit color, no alpha
static void decodeRGB565(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 i = 0; i < (u32)(w * h); i++) {
        u16 val = *reinterpret_cast<const u16*>(src + i * 2);
        u8 r = ((val >> 11) & 0x1F) * 255 / 31;
        u8 g = ((val >>  5) & 0x3F) * 255 / 63;
        u8 b = ((val      ) & 0x1F) * 255 / 31;
        dst[i] = 0xFF000000 | (b << 16) | (g << 8) | r;
    }
}

// RGB5A3: 16-bit with 3-bit alpha or no alpha selector
static void decodeRGB5A3(const u8* src, u32* dst, u16 w, u16 h) {
    for (u32 i = 0; i < (u32)(w * h); i++) {
        u16 val = *reinterpret_cast<const u16*>(src + i * 2);
        if (val & 0x8000) {
            // Bit 15 set: RGB5A3 format
            u8 r = ((val >> 10) & 0x1F) * 255 / 31;
            u8 g = ((val >>  5) & 0x1F) * 255 / 31;
            u8 b = ((val      ) & 0x1F) * 255 / 31;
            u8 a = ((val >> 15) & 0x7) * 255 / 7;
            dst[i] = (a << 24) | (b << 16) | (g << 8) | r;
        } else {
            // Bit 15 clear: RGB5 with bit 15-13 as alpha
            u8 a = ((val >> 12) & 0x7) * 255 / 7;
            u8 r = ((val >>  8) & 0xF) * 255 / 15;
            u8 g = ((val >>  4) & 0xF) * 255 / 15;
            u8 b = ((val      ) & 0xF) * 255 / 15;
            dst[i] = (a << 24) | (b << 16) | (g << 8) | r;
        }
    }
}

// RGBA8: 32-bit RGBA (already native format)
static void decodeRGBA8(const u8* src, u32* dst, u16 w, u16 h) {
    // Wii stores RGBA as two 16-bit blocks per pixel: ARGB low 16, ARGB high 16
    // Byte order: R, G, B, A (2 bytes each)
    for (u32 i = 0; i < (u32)(w * h); i++) {
        // Wii RGBA8 is stored as: [A,R] [G,B] per pixel (big-endian pairs)
        u8 a = src[i * 4 + 0];
        u8 r = src[i * 4 + 1];
        u8 g = src[i * 4 + 2];
        u8 b = src[i * 4 + 3];
        dst[i] = (a << 24) | (b << 16) | (g << 8) | r; // Store as Wii order
    }
}

// CMPR: S3TC/DXT1 compressed texture (4x4 blocks, 8 bytes per block)
static void decodeCMPR(const u8* src, u32* dst, u16 w, u16 h) {
    // Ensure dimensions are multiple of 4
    u16 bw = (w + 3) & ~3;
    u16 bh = (h + 3) & ~3;

    for (u32 by = 0; by < bh; by += 4) {
        for (u32 bx = 0; bx < bw; bx += 4) {
            u32 blockIdx = (by / 4) * (bw / 4) + (bx / 4);
            const u8* block = src + blockIdx * 8;

            // Decode DXT1 block
            u16 c0 = *reinterpret_cast<const u16*>(block + 0);
            u16 c1 = *reinterpret_cast<const u16*>(block + 2);
            u32 lookup = *reinterpret_cast<const u32*>(block + 4);

            // Expand 565 colors to 888
            u8 r0 = ((c0 >> 11) & 0x1F) * 255 / 31;
            u8 g0 = ((c0 >>  5) & 0x3F) * 255 / 63;
            u8 b0 = ((c0      ) & 0x1F) * 255 / 31;
            u8 r1 = ((c1 >> 11) & 0x1F) * 255 / 31;
            u8 g1 = ((c1 >>  5) & 0x3F) * 255 / 63;
            u8 b1 = ((c1      ) & 0x1F) * 255 / 31;

            // 4-color palette (or 3-color + transparent for DXT1)
            u32 colors[4];
            colors[0] = 0xFF000000 | (b0 << 16) | (g0 << 8) | r0;
            colors[1] = 0xFF000000 | (b1 << 16) | (g1 << 8) | r1;
            if (c0 > c1) {
                colors[2] = 0xFF000000
                    | ((((2*b0+b1+1)/3) & 0xFF) << 16)
                    | ((((2*g0+g1+1)/3) & 0xFF) << 8)
                    | (((2*r0+r1+1)/3) & 0xFF);
                colors[3] = 0xFF000000
                    | ((((b0+2*b1+1)/3) & 0xFF) << 16)
                    | ((((g0+2*g1+1)/3) & 0xFF) << 8)
                    | (((r0+2*r1+1)/3) & 0xFF);
            } else {
                colors[2] = 0xFF000000
                    | ((((b0+b1+1)/2) & 0xFF) << 16)
                    | ((((g0+g1+1)/2) & 0xFF) << 8)
                    | (((r0+r1+1)/2) & 0xFF);
                colors[3] = 0x00000000; // Transparent
            }

            // Write 4x4 block
            for (u32 py = 0; py < 4; py++) {
                for (u32 px = 0; px < 4; px++) {
                    u32 texelIdx = (lookup >> (2 * (py * 4 + px))) & 0x3;
                    u32 x = bx + px;
                    u32 y = by + py;
                    if (x < w && y < h) {
                        dst[y * w + x] = colors[texelIdx];
                    }
                }
            }
        }
    }
}

// Phase 34: Palette cache for CI4/CI8 textures
static const u32 PALETTE_CACHE_SIZE = 32;
struct PaletteCacheEntry {
    void* wiiData;   // Wii palette data pointer (key)
    u32*  rgbaData; // Decoded RGBA palette
    u16   count;     // Number of entries
    bool  valid;
};
static PaletteCacheEntry s_paletteCache[PALETTE_CACHE_SIZE];
static u32 s_paletteCacheCount = 0;

// Register a palette for CI4/CI8 textures (called from TPL/BRRES loader)
static u32 registerPalette(void* wiiPaletteData, u16 count, u8 fmt) {
    if (!wiiPaletteData) return 0;
    for (u32 i = 0; i < s_paletteCacheCount; i++) {
        if (s_paletteCache[i].valid && s_paletteCache[i].wiiData == wiiPaletteData) {
            return i;
        }
    }
    u32* rgba = static_cast<u32*>(std::malloc(count * sizeof(u32)));
    if (!rgba) return 0;
    const u8* src = static_cast<const u8*>(wiiPaletteData);
    for (u16 i = 0; i < count; i++) {
        u16 val = static_cast<u16>(src[i * 2]) | (static_cast<u16>(src[i * 2 + 1]) << 8);
        if (fmt == 0) { // GX_TL_RGB565
            u32 r = ((val >> 11) & 0x1F) * 255 / 31;
            u32 g = ((val >> 5) & 0x3F) * 255 / 63;
            u32 b = (val & 0x1F) * 255 / 31;
            rgba[i] = 0xFF000000 | (b << 16) | (g << 8) | r;
        } else { // GX_TL_RGB5A3 (default)
            if (val & 0x8000) { // RGB555
                u32 r = ((val >> 10) & 0x1F) * 255 / 31;
                u32 g = ((val >> 5) & 0x1F) * 255 / 31;
                u32 b = (val & 0x1F) * 255 / 31;
                rgba[i] = 0xFF000000 | (b << 16) | (g << 8) | r;
            } else { // A3RGB4
                u32 a = (val >> 12) & 0x7;
                a = a * 255 / 7;
                u32 r = ((val >> 8) & 0xF) * 255 / 15;
                u32 g = ((val >> 4) & 0xF) * 255 / 15;
                u32 b = (val & 0xF) * 255 / 15;
                rgba[i] = (a << 24) | (b << 16) | (g << 8) | r;
            }
        }
    }
    u32 idx = s_paletteCacheCount % PALETTE_CACHE_SIZE;
    if (s_paletteCache[idx].valid && s_paletteCache[idx].rgbaData) {
        std::free(s_paletteCache[idx].rgbaData);
    }
    s_paletteCache[idx].wiiData = wiiPaletteData;
    s_paletteCache[idx].rgbaData = rgba;
    s_paletteCache[idx].count = count;
    s_paletteCache[idx].valid = true;
    if (s_paletteCacheCount < PALETTE_CACHE_SIZE) s_paletteCacheCount++;
    return idx;
}

// Look up palette data for a given pointer
static u32* findPalette(void* wiiPaletteData, u16* outCount) {
    for (u32 i = 0; i < s_paletteCacheCount; i++) {
        if (s_paletteCache[i].valid && s_paletteCache[i].wiiData == wiiPaletteData) {
            if (outCount) *outCount = s_paletteCache[i].count;
            return s_paletteCache[i].rgbaData;
        }
    }
    if (outCount) *outCount = 0;
    return nullptr;
}

// Extern "C" palette registration — called from BRRES/TPL loaders
extern "C" void GXRenderer_registerPalette(void* paletteData, u16 count, u8 fmt) {
    registerPalette(paletteData, count, fmt);
}

// CI4: 4-bit color index (palette-based)
// Phase 34: Proper palette lookup when palette data is available.
// Falls back to I4 (grayscale) if no palette registered.
static void decodeCI4(const u8* src, u32* dst, u16 w, u16 h, void* paletteData) {
    u32* pal = findPalette(paletteData, nullptr);
    for (u32 y = 0; y < h; y++) {
        for (u32 x = 0; x < w; x++) {
            u32 byteIdx = (y * w + x) / 8;
            u32 bitIdx = 7 - ((y * w + x) % 8); // MSB first within byte
            u8 index = (src[byteIdx] >> bitIdx) & 0xF;
            if (pal) {
                dst[y * w + x] = pal[index];
            } else {
                u8 val = index * 17; // 0-15 → 0-255
                dst[y * w + x] = 0xFF000000 | (val << 16) | (val << 8) | val;
            }
        }
    }
}

// CI8: 8-bit color index
// Phase 34: Proper palette lookup when palette data is available.
// Falls back to I8 (grayscale) if no palette registered.
static void decodeCI8(const u8* src, u32* dst, u16 w, u16 h, void* paletteData) {
    u32* pal = findPalette(paletteData, nullptr);
    for (u32 i = 0; i < (u32)(w * h); i++) {
        if (pal) {
            dst[i] = pal[src[i]];
        } else {
            u8 val = src[i];
            dst[i] = 0xFF000000 | (val << 16) | (val << 8) | val;
        }
    }
}

// ---------------------------------------------------------------------------
// Decoded texture → GL texture upload
// ---------------------------------------------------------------------------
u32 decodeAndUploadTexture(void* wiiData, u16 width, u16 height, u8 format) {
    if (!GL3::gl.glGenTextures || !GL3::gl.glTexImage2D) return 0;

    u32 texObj;
    GL3::gl.glGenTextures(1, &texObj);

    u32 pixelCount = static_cast<u32>(width) * static_cast<u32>(height);
    u32* rgbaData = static_cast<u32*>(std::malloc(pixelCount * sizeof(u32)));
    if (!rgbaData) {
        printf("[GXRenderer] Failed to allocate texture decode buffer (%u pixels)\n", pixelCount);
        return 0;
    }

    const u8* src = static_cast<const u8*>(wiiData);

    switch (format) {
        case 0x00: decodeI4(src, rgbaData, width, height); break;       // GX_TF_I4
        case 0x01: decodeI8(src, rgbaData, width, height); break;       // GX_TF_I8
        case 0x02: decodeIA4(src, rgbaData, width, height); break;      // GX_TF_IA4
        case 0x03: decodeIA8(src, rgbaData, width, height); break;      // GX_TF_IA8
        case 0x04: decodeRGB565(src, rgbaData, width, height); break;   // GX_TF_RGB565
        case 0x05: decodeRGB5A3(src, rgbaData, width, height); break;   // GX_TF_RGB5A3
        case 0x06: decodeRGBA8(src, rgbaData, width, height); break;     // GX_TF_RGBA8
        case 0x08: decodeCI4(src, rgbaData, width, height, nullptr); break;       // GX_TF_CI4
        case 0x09: decodeCI8(src, rgbaData, width, height, nullptr); break;       // GX_TF_CI8
        case 0x0E: decodeCMPR(src, rgbaData, width, height); break;     // GX_TF_CMPR
        default:
            printf("[GXRenderer] Unknown texture format 0x%02X — using I8 fallback\n", format);
            decodeI8(src, rgbaData, width, height);
            break;
    }

    GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, texObj);
    GL3::gl.glTexImage2D(GL3::GL_TEXTURE_2D, 0, GL3::GL_RGBA8,
                          width, height, 0, GL3::GL_RGBA,
                          GL3::GL_UNSIGNED_BYTE, rgbaData);
    GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_MIN_FILTER, GL3::GL_LINEAR);
    GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_MAG_FILTER, GL3::GL_LINEAR);
    GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_S, GL3::GL_CLAMP_TO_EDGE);
    GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_T, GL3::GL_CLAMP_TO_EDGE);
    GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, 0);

    std::free(rgbaData);
    return texObj;
}

// ---------------------------------------------------------------------------
// Texture cache lookup / insert
// ---------------------------------------------------------------------------
static u32 findCachedTexture(void* wiiData) {
    for (u32 i = 0; i < s_state.texCacheCount; i++) {
        if (s_state.texCache[i].valid && s_state.texCache[i].wiiData == wiiData) {
            return s_state.texCache[i].glTexObj;
        }
    }
    return 0;
}

static u32 cacheTexture(void* wiiData, u16 width, u16 height, u8 format) {
    // Check cache first
    u32 cached = findCachedTexture(wiiData);
    if (cached) return cached;

    // Decode and upload
    u32 glTex = decodeAndUploadTexture(wiiData, width, height, format);
    if (!glTex) return 0;

    // Add to cache (evict oldest if full)
    if (s_state.texCacheCount >= TEX_CACHE_SIZE) {
        // Simple eviction: overwrite first entry
        u32 idx = s_state.texCacheCount % TEX_CACHE_SIZE;
        if (s_state.texCache[idx].valid && GL3::gl.glDeleteTextures) {
            GL3::gl.glDeleteTextures(1, &s_state.texCache[idx].glTexObj);
        }
        s_state.texCache[idx].wiiData = wiiData;
        s_state.texCache[idx].glTexObj = glTex;
        s_state.texCache[idx].width = width;
        s_state.texCache[idx].height = height;
        s_state.texCache[idx].format = format;
        s_state.texCache[idx].valid = true;
    } else {
        u32 idx = s_state.texCacheCount;
        s_state.texCache[idx].wiiData = wiiData;
        s_state.texCache[idx].glTexObj = glTex;
        s_state.texCache[idx].width = width;
        s_state.texCache[idx].height = height;
        s_state.texCache[idx].format = format;
        s_state.texCache[idx].valid = true;
        s_state.texCacheCount++;
    }

    return glTex;
}

// ---------------------------------------------------------------------------
// GXTexObj real storage
// ---------------------------------------------------------------------------
struct RealGXTexObj {
    void* data;
    u16 width;
    u16 height;
    u8  format;
    u8  wrapS;
    u8  wrapT;
    u8  mipmap;
    u8  minFilter;
    u8  magFilter;
    f32 minLOD;
    f32 maxLOD;
    f32 lodBias;
    void* paletteData;   // Phase 34: Palette pointer for CI4/CI8 textures
    u16  paletteCount;   // Number of palette entries (16 for CI4, 256 for CI8)
};

// ---------------------------------------------------------------------------
// Init / Shutdown
// ---------------------------------------------------------------------------

void init() {
    if (s_state.initialized) return;

    std::memset(&s_state, 0, sizeof(s_state));

    // Allocate vertex buffer
    s_vertBuf = static_cast<DecodedVertex*>(std::malloc(MAX_VERTICES * sizeof(DecodedVertex)));
    if (!s_vertBuf) {
        printf("[GXRenderer] FATAL: Failed to allocate vertex buffer (%u KB)\n",
               MAX_VERTICES * sizeof(DecodedVertex) / 1024);
        return;
    }
    s_state.vertBuf = s_vertBuf;

    // Default state
    s_state.projType = 0; // GX_PERSPECTIVE
    s_state.currentMtx = 0;
    s_state.cullMode = 2; // GX_CULL_BACK
    s_state.zEnable = true;
    s_state.zFunc = 3;    // GX_LEQUAL
    s_state.zWrite = true;
    s_state.blendMode = 1; // GX_BM_BLEND
    s_state.blendSrcFactor = 2; // GX_BL_SRCALPHA
    s_state.blendDstFactor = 3; // GX_BL_INVSRCALPHA
    s_state.colorUpdate = true;
    s_state.alphaUpdate = true;
    s_state.numChans = 1;
    s_state.channels[0].enable = false;
    s_state.channels[0].ambSrc = 1; // GX_SRC_VTX
    s_state.channels[0].matSrc = 1; // GX_SRC_VTX
    s_state.numTevStages = 1;
    s_state.numTexGens = 1;
    s_state.numTexMaps = 0;

    // Identity projection
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            s_state.projMatrix[i][j] = (i == j) ? 1.0f : 0.0f;
        }
    }
    // Identity position matrices
    for (int m = 0; m < MAX_POS_MTX; m++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                s_state.posMatrix[m][i][j] = (i == j) ? 1.0f : 0.0f;
            }
        }
    }

    // Default TEV register colors (white)
    for (int i = 0; i < MAX_TEV_COLORS; i++) s_state.tevColors[i] = 0xFFFFFFFF;
    for (int i = 0; i < MAX_KCOLORS; i++) s_state.kColors[i] = 0xFFFFFFFF;

    // Default TEV stage 0: standard modulate (tex * vtx_color)
    s_state.tevStages[0].texCoord = 0;
    s_state.tevStages[0].texMap = 0;
    s_state.tevStages[0].colorChannel = 0;
    s_state.tevStages[0].colorIn[0] = 8;  // GX_CC_TEXC
    s_state.tevStages[0].colorIn[1] = 4;  // GX_CC_RASC
    s_state.tevStages[0].colorIn[2] = 0;  // GX_CC_ZERO
    s_state.tevStages[0].colorIn[3] = 0;  // GX_CC_ZERO
    s_state.tevStages[0].colorOp = 0;      // GX_TEV_ADD
    s_state.tevStages[0].colorScale = 0;
    s_state.tevStages[0].colorClamp = 1;
    s_state.tevStages[0].colorOutReg = 3;  // GX_TEVPREV
    s_state.tevStages[0].alphaIn[0] = 9;  // GX_CA_TEXA
    s_state.tevStages[0].alphaIn[1] = 5;  // GX_CA_RASA
    s_state.tevStages[0].alphaIn[2] = 0;  // GX_CA_ZERO
    s_state.tevStages[0].alphaIn[3] = 0;  // GX_CA_ZERO
    s_state.tevStages[0].alphaOp = 0;
    s_state.tevStages[0].alphaClamp = 1;
    s_state.tevStages[0].alphaOutReg = 3;

    // Build GL objects
    if (GL3::gl.glGenVertexArrays && GL3::gl.glGenBuffers) {
        GL3::gl.glGenVertexArrays(1, &s_state.defaultVAO);
        GL3::gl.glGenBuffers(1, &s_state.dynVBO);
    }

    // Build default shader
    s_state.glReady = buildDefaultProgram();
    if (!s_state.glReady) {
        printf("[GXRenderer] WARNING: Default shader compilation failed — rendering disabled\n");
    }

    s_state.initialized = true;
    printf("[GXRenderer] Initialized (GL 3.3 Core, %u vertex buffer, texture cache %u)\n",
           MAX_VERTICES, TEX_CACHE_SIZE);
}

void shutdown() {
    if (!s_state.initialized) return;

    // Delete GL objects
    if (GL3::gl.glDeleteVertexArrays && s_state.defaultVAO)
        GL3::gl.glDeleteVertexArrays(1, &s_state.defaultVAO);
    if (GL3::gl.glDeleteBuffers && s_state.dynVBO)
        GL3::gl.glDeleteBuffers(1, &s_state.dynVBO);
    if (GL3::gl.glDeleteProgram && s_defaultProgram)
        GL3::gl.glDeleteProgram(s_defaultProgram);

    // Delete cached textures
    for (u32 i = 0; i < s_state.texCacheCount; i++) {
        if (s_state.texCache[i].valid && GL3::gl.glDeleteTextures) {
            GL3::gl.glDeleteTextures(1, &s_state.texCache[i].glTexObj);
        }
    }

    // Free vertex buffer
    if (s_vertBuf) {
        std::free(s_vertBuf);
        s_vertBuf = nullptr;
        s_state.vertBuf = nullptr;
    }

    s_defaultProgram = 0;
    s_state.initialized = false;
    printf("[GXRenderer] Shutdown complete\n");
}

RendererState& getState() {
    return s_state;
}

// ---------------------------------------------------------------------------
// Vertex batch: GXBegin / GXEnd / vertex submission
// ---------------------------------------------------------------------------

void beginPrimitive(u8 primType, u32 vtxFmt, u32 nVerts) {
    if (!s_state.initialized) return;
    s_state.inBegin = true;
    s_state.currentPrim = primType;
    s_state.currentVtxFmt = vtxFmt;
    s_state.expectedVerts = nVerts;
    s_state.vertCount = 0;
    // Reset vertex buffer
    std::memset(s_vertBuf, 0, sizeof(DecodedVertex) * nVerts);
}

void endPrimitive() {
    if (!s_state.initialized || !s_state.inBegin) return;
    s_state.inBegin = false;

    if (s_state.vertCount == 0 || !s_state.glReady) return;

    // --- Apply GL state ---
    auto& gl = GL3::gl;

    // Depth test
    if (s_state.zEnable) {
        gl.glEnable(GL3::GL_DEPTH_TEST);
        gl.glDepthFunc(gxCompareToGL(s_state.zFunc));
    } else {
        gl.glDisable(GL3::GL_DEPTH_TEST);
    }
    // Depth mask (write) — Phase 34: real depth mask support
    if (gl.glDepthMask) {
        gl.glDepthMask(s_state.zWrite ? GL3::GL_TRUE : GL3::GL_FALSE);
    }
    // Coplanar polygon offset — Phase 34: applied during endPrimitive
    if (gl.glPolygonOffset) {
        if (s_state.coplanar) {
            gl.glEnable(GL3::GL_POLYGON_OFFSET_FILL);
            gl.glPolygonOffset(-1.0f, -1.0f);
        } else {
            gl.glDisable(GL3::GL_POLYGON_OFFSET_FILL);
        }
    }

    // Culling
    if (s_state.cullMode == 0) {
        gl.glDisable(GL3::GL_CULL_FACE);
    } else {
        gl.glEnable(GL3::GL_CULL_FACE);
        gl.glCullFace(GL3::GL_BACK); // Simplified: always back-face cull
    }

    // Blending
    if (s_state.blendMode == 0) {
        // GX_BM_NONE
        gl.glDisable(GL3::GL_BLEND);
    } else if (s_state.blendMode == 1) {
        // GX_BM_BLEND
        gl.glEnable(GL3::GL_BLEND);
        gl.glBlendFunc(gxBLENDToGL(s_state.blendSrcFactor),
                       gxBLENDToGL(s_state.blendDstFactor));
    }

    // Use default shader
    gl.glUseProgram(s_defaultProgram);

    // Compute MVP: projection * posMatrix[current]
    f32 mvp[4][4];
    const f32* proj = &s_state.projMatrix[0][0];
    const f32* pos = &s_state.posMatrix[s_state.currentMtx][0][0];
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 4; r++) {
            mvp[c][r] = proj[0*4+r]*pos[c*4+0] + proj[1*4+r]*pos[c*4+1]
                       + proj[2*4+r]*pos[c*4+2] + proj[3*4+r]*pos[c*4+3];
        }
    }

    if (s_defaultMvpLoc >= 0)
        gl.glUniformMatrix4fv(s_defaultMvpLoc, 1, GL3::GL_FALSE, &mvp[0][0]);

    // Bind texture if any texmap is active
    bool hasTexture = false;
    if (s_state.activeTexMap[0] != 0) {
        hasTexture = true;
        gl.glActiveTexture(GL3::GL_TEXTURE0);
        gl.glBindTexture(GL3::GL_TEXTURE_2D, s_state.activeTexMap[0]);
    }
    if (s_defaultUseTexLoc >= 0)
        gl.glUniform1i(s_defaultUseTexLoc, hasTexture ? 1 : 0);
    if (s_defaultTexLoc >= 0)
        gl.glUniform1i(s_defaultTexLoc, 0); // Always texture unit 0

    // --- Build interleaved vertex data ---
    // Layout: pos(3f) + color(4f) + texcoord(2f) = 9 floats per vertex
    const u32 FLOATS_PER_VERT = 9;
    u32 floatCount = s_state.vertCount * FLOATS_PER_VERT;
    f32* glData = static_cast<f32*>(std::malloc(floatCount * sizeof(f32)));
    if (!glData) {
        printf("[GXRenderer] Failed to allocate GL vertex data\n");
        return;
    }

    for (u32 i = 0; i < s_state.vertCount; i++) {
        const DecodedVertex& v = s_vertBuf[i];
        u32 base = i * FLOATS_PER_VERT;

        // Position
        glData[base + 0] = v.pos[0];
        glData[base + 1] = v.pos[1];
        glData[base + 2] = v.pos[2];

        // Color (Wii order AABBGGRR → GL RGBA as floats)
        f32 cr, cg, cb, ca;
        unpackColor(v.color0, cr, cg, cb, ca);
        glData[base + 3] = cr;
        glData[base + 4] = cg;
        glData[base + 5] = cb;
        glData[base + 6] = ca;

        // Texcoord 0
        if (v.hasTex[0]) {
            glData[base + 7] = v.tex[0][0];
            glData[base + 8] = v.tex[0][1];
        } else {
            glData[base + 7] = 0.0f;
            glData[base + 8] = 0.0f;
        }
    }

    // Upload to VBO and draw
    gl.glBindVertexArray(s_state.defaultVAO);
    gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, s_state.dynVBO);
    gl.glBufferData(GL3::GL_ARRAY_BUFFER,
                     floatCount * sizeof(f32), glData, GL3::GL_DYNAMIC_DRAW);

    // Vertex attributes: pos(3f) + color(4f) + texcoord(2f)
    gl.glVertexAttribPointer(0, 3, GL3::GL_FLOAT, GL3::GL_FALSE,
                             FLOATS_PER_VERT * sizeof(f32),
                             reinterpret_cast<const void*>(0));
    gl.glEnableVertexAttribArray(0);

    gl.glVertexAttribPointer(1, 4, GL3::GL_FLOAT, GL3::GL_FALSE,
                             FLOATS_PER_VERT * sizeof(f32),
                             reinterpret_cast<const void*>(3 * sizeof(f32)));
    gl.glEnableVertexAttribArray(1);

    gl.glVertexAttribPointer(2, 2, GL3::GL_FLOAT, GL3::GL_FALSE,
                             FLOATS_PER_VERT * sizeof(f32),
                             reinterpret_cast<const void*>(7 * sizeof(f32)));
    gl.glEnableVertexAttribArray(2);

    // Convert GX_QUADS to GL_TRIANGLES (4 vertices → 6 vertices)
    u32 glPrim = gxPrimToGL(s_state.currentPrim);
    u32 drawCount = s_state.vertCount;

    if (s_state.currentPrim == 0x80) {
        // GX_QUADS → convert to GL_TRIANGLES (6 indices per quad)
        // Rebuild index buffer for quads
        u32 quadCount = s_state.vertCount / 4;
        u32* indices = static_cast<u32*>(std::malloc(quadCount * 6 * sizeof(u32)));
        if (indices) {
            for (u32 q = 0; q < quadCount; q++) {
                u32 base = q * 4;
                indices[q * 6 + 0] = base + 0;
                indices[q * 6 + 1] = base + 1;
                indices[q * 6 + 2] = base + 2;
                indices[q * 6 + 3] = base + 0;
                indices[q * 6 + 4] = base + 2;
                indices[q * 6 + 5] = base + 3;
            }
            // Create temporary IBO
            u32 ibo;
            gl.glGenBuffers(1, &ibo);
            gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, ibo);
            gl.glBufferData(GL3::GL_ELEMENT_ARRAY_BUFFER,
                             quadCount * 6 * sizeof(u32), indices, GL3::GL_DYNAMIC_DRAW);
            gl.glDrawElements(GL3::GL_TRIANGLES, quadCount * 6,
                              GL3::GL_UNSIGNED_INT, nullptr);
            gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, 0);
            gl.glDeleteBuffers(1, &ibo);
            std::free(indices);
        }
    } else if (s_state.currentPrim == 0xA0) {
        // GX_TRIANGLE_FAN → convert to GL_TRIANGLES
        u32 triCount = s_state.vertCount - 2;
        u32* indices = static_cast<u32*>(std::malloc(triCount * 3 * sizeof(u32)));
        if (indices) {
            for (u32 t = 0; t < triCount; t++) {
                indices[t * 3 + 0] = 0;
                indices[t * 3 + 1] = t + 1;
                indices[t * 3 + 2] = t + 2;
            }
            u32 ibo;
            gl.glGenBuffers(1, &ibo);
            gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, ibo);
            gl.glBufferData(GL3::GL_ELEMENT_ARRAY_BUFFER,
                             triCount * 3 * sizeof(u32), indices, GL3::GL_DYNAMIC_DRAW);
            gl.glDrawElements(GL3::GL_TRIANGLES, triCount * 3,
                              GL3::GL_UNSIGNED_INT, nullptr);
            gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, 0);
            gl.glDeleteBuffers(1, &ibo);
            std::free(indices);
        }
    } else {
        // GL_TRIANGLES or GL_LINES — direct draw
        gl.glDrawArrays(glPrim, 0, drawCount);
    }

    // Cleanup
    gl.glBindVertexArray(0);
    gl.glUseProgram(0);
    gl.glBindTexture(GL3::GL_TEXTURE_2D, 0);

    std::free(glData);

    // Stats
    s_state.frameDrawCalls++;
    s_state.frameVertices += s_state.vertCount;
}

// ---------------------------------------------------------------------------
// Vertex attribute submission
// ---------------------------------------------------------------------------

void submitPosition(f32 x, f32 y, f32 z) {
    if (!s_state.inBegin || s_state.vertCount >= s_state.expectedVerts) return;
    DecodedVertex& v = s_vertBuf[s_state.vertCount];
    v.pos[0] = x; v.pos[1] = y; v.pos[2] = z;
    v.hasPos = true;
}

void submitPosition2(f32 x, f32 y) {
    submitPosition(x, y, 0.0f);
}

void submitNormal(f32 nx, f32 ny, f32 nz) {
    if (!s_state.inBegin || s_state.vertCount >= s_state.expectedVerts) return;
    DecodedVertex& v = s_vertBuf[s_state.vertCount];
    v.nrm[0] = nx; v.nrm[1] = ny; v.nrm[2] = nz;
    v.hasNrm = true;
}

void submitColor(u32 rgba) {
    if (!s_state.inBegin || s_state.vertCount >= s_state.expectedVerts) return;
    s_vertBuf[s_state.vertCount].color0 = rgba;
    s_vertBuf[s_state.vertCount].hasClr0 = true;
}

void submitColor4u8(u8 r, u8 g, u8 b, u8 a) {
    submitColor(static_cast<u32>(r) | (static_cast<u32>(g) << 8) |
                (static_cast<u32>(b) << 16) | (static_cast<u32>(a) << 24));
}

void submitTexCoord(u8 texIdx, f32 s, f32 t) {
    if (!s_state.inBegin || s_state.vertCount >= s_state.expectedVerts) return;
    if (texIdx >= 8) return;
    DecodedVertex& v = s_vertBuf[s_state.vertCount];
    v.tex[texIdx][0] = s;
    v.tex[texIdx][1] = t;
    v.hasTex[texIdx] = true;
}

void submitTexCoord2u16(u8 texIdx, u16 s, u16 t) {
    submitTexCoord(texIdx, s / 32768.0f, t / 32768.0f);
}

// ---------------------------------------------------------------------------
// Vertex descriptor
// ---------------------------------------------------------------------------

void clearVtxDesc() {
    for (int i = 0; i < ATTR_COUNT; i++) {
        s_state.vtxDesc[i].type = 255; // GX_NONE
    }
}

void setVtxDesc(u8 attr, u8 type) {
    if (attr < ATTR_COUNT) {
        s_state.vtxDesc[attr].type = type;
    }
}

void setVtxAttrFmt(u8 vtxfmt, u8 attr, u8 type, u8 compType, u8 compCnt) {
    if (vtxfmt < 8 && attr < ATTR_COUNT) {
        s_state.vtxFmt[vtxfmt][attr].compType = compType;
        s_state.vtxFmt[vtxfmt][attr].compCnt = compCnt;
        s_state.vtxFmt[vtxfmt][attr].dataType = type;
    }
}

void invalidateVtxCache() {
    // No-op on PC (no hardware vertex cache)
}

// ---------------------------------------------------------------------------
// Matrices
// ---------------------------------------------------------------------------

void setProjection(const f32* mtx, u8 type) {
    std::memcpy(s_state.projMatrix, mtx, sizeof(f32) * 16);
    s_state.projType = type;
}

void loadPosMtxImm(const f32* mtx, u8 id) {
    if (id >= MAX_POS_MTX) return;
    // Wii uses 3x4 matrices (12 floats). Pad to 4x4 with [0,0,0,1].
    for (int col = 0; col < 3; col++) {
        for (int row = 0; row < 4; row++) {
            s_state.posMatrix[id][col][row] = mtx[col * 4 + row];
        }
    }
    s_state.posMatrix[id][3][0] = 0.0f;
    s_state.posMatrix[id][3][1] = 0.0f;
    s_state.posMatrix[id][3][2] = 0.0f;
    s_state.posMatrix[id][3][3] = 1.0f;
}

void setCurrentMtx(u8 id) {
    s_state.currentMtx = id;
}

// ---------------------------------------------------------------------------
// Viewport / Scissor
// ---------------------------------------------------------------------------

void setViewport(f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ) {
    s_state.vpX = x; s_state.vpY = y;
    s_state.vpW = w; s_state.vpH = h;
    s_state.vpNear = nearZ; s_state.vpFar = farZ;

    if (s_state.glReady && GL3::gl.glViewport) {
        // Wii viewport origin is top-left, GL is bottom-left.
        // Convert: GL_y = window_height - (Wii_y + Wii_height)
        GL3::gl.glViewport(
            static_cast<GLint>(x),
            static_cast<GLint>(720.0f - (y + h)), // Assume 720p window height
            static_cast<GLsizei>(w),
            static_cast<GLsizei>(h));
    }
}

void setScissor(u32 x, u32 y, u32 w, u32 h) {
    s_state.scX = x; s_state.scY = y;
    s_state.scW = w; s_state.scH = h;
    // NOTE: glScissor not loaded in gl3_core.h — skip for now
}

// ---------------------------------------------------------------------------
// Blend
// ---------------------------------------------------------------------------

void setBlendMode(u8 mode, u8 srcFactor, u8 dstFactor, u8 logicOp) {
    s_state.blendMode = mode;
    s_state.blendSrcFactor = srcFactor;
    s_state.blendDstFactor = dstFactor;
    s_state.logicOp = logicOp;
}

void setColorUpdate(u8 enable) { s_state.colorUpdate = (enable != 0); }
void setAlphaUpdate(u8 enable) { s_state.alphaUpdate = (enable != 0); }

// ---------------------------------------------------------------------------
// Depth
// ---------------------------------------------------------------------------

void setZMode(u8 enable, u8 func, u8 writeEnable) {
    s_state.zEnable = (enable != 0);
    s_state.zFunc = func;
    s_state.zWrite = (writeEnable != 0);
}

void setZCompLoc(u8 before) { s_state.zCompLoc = before; }
void setCoPlanar(u8 enable) {
    // GX coplanar mode — adjusts polygon offset to prevent z-fighting
    // on coplanar surfaces (used for decals, road markings, shadows).
    s_state.coplanar = enable;
    if (GL3::gl.glPolygonOffset) {
        if (enable) {
            GL3::gl.glEnable(GL3::GL_POLYGON_OFFSET_FILL);
            GL3::gl.glPolygonOffset(-1.0f, -1.0f);
        } else {
            GL3::gl.glDisable(GL3::GL_POLYGON_OFFSET_FILL);
        }
    }
}
void setClipMode(u8 mode) {
    // GX clip mode: 0 = none, 1 = all, 2 = except (skip).
    // In the original MKWii, clip planes are used for water surface clipping,
    // shadow planes, and portal culling. On PC with GL 3.3, user clip planes
    // are limited (max 8 with ARB_clip_control), so we store the mode
    // for future shader-based clipping.
    s_state.clipMode = mode;
    // For now, GL clip planes are not widely supported in 3.3 Core.
    // Water clipping will be handled by the shader system instead.
}

// ---------------------------------------------------------------------------
// Cull
// ---------------------------------------------------------------------------

void setCullMode(u8 mode) { s_state.cullMode = mode; }

// ---------------------------------------------------------------------------
// Alpha compare
// ---------------------------------------------------------------------------

void setAlphaCompare(u8 comp0, u8 op, u8 ref0, u8 comp1, u8 a1) {
    s_state.alphaCmp0 = comp0;
    s_state.alphaOp = op;
    s_state.alphaRef0 = ref0;
    s_state.alphaCmp1 = comp1;
    s_state.alphaRef1 = a1;
}

// ---------------------------------------------------------------------------
// TEV
// ---------------------------------------------------------------------------

void setNumTevStages(u8 n) {
    s_state.numTevStages = (n < MAX_TEV_STAGES) ? n : MAX_TEV_STAGES;
}

void setTevOrder(u8 stage, u8 texcoord, u8 texmap, u8 color) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].texCoord = texcoord;
        s_state.tevStages[stage].texMap = texmap;
        s_state.tevStages[stage].colorChannel = color;
    }
}

void setTevColorIn(u8 stage, u8 a, u8 b, u8 c, u8 d) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].colorIn[0] = a;
        s_state.tevStages[stage].colorIn[1] = b;
        s_state.tevStages[stage].colorIn[2] = c;
        s_state.tevStages[stage].colorIn[3] = d;
    }
}

void setTevAlphaIn(u8 stage, u8 a, u8 b, u8 c, u8 d) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].alphaIn[0] = a;
        s_state.tevStages[stage].alphaIn[1] = b;
        s_state.tevStages[stage].alphaIn[2] = c;
        s_state.tevStages[stage].alphaIn[3] = d;
    }
}

void setTevColorOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 outReg) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].colorOp = op;
        s_state.tevStages[stage].colorBias = bias;
        s_state.tevStages[stage].colorScale = scale;
        s_state.tevStages[stage].colorClamp = clamp;
        s_state.tevStages[stage].colorOutReg = outReg;
    }
}

void setTevAlphaOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 outReg) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].alphaOp = op;
        s_state.tevStages[stage].alphaBias = bias;
        s_state.tevStages[stage].alphaScale = scale;
        s_state.tevStages[stage].alphaClamp = clamp;
        s_state.tevStages[stage].alphaOutReg = outReg;
    }
}

void setTevColor(u8 reg, u32 color) {
    if (reg < MAX_TEV_COLORS) s_state.tevColors[reg] = color;
}

void setTevKColor(u8 sel, u32 color) {
    if (sel < MAX_KCOLORS) s_state.kColors[sel] = color;
}

void setTevKColorSel(u8 stage, u8 sel) {
    if (stage < MAX_TEV_STAGES) s_state.tevStages[stage].kColorSel = sel;
}

void setTevKAlphaSel(u8 stage, u8 sel) {
    if (stage < MAX_TEV_STAGES) s_state.tevStages[stage].kAlphaSel = sel;
}

void setTevSwapModeTable(u8 table, u8 r, u8 g, u8 b, u8 a) {
    if (table < 4) {
        s_state.swapTable[table][0] = r;
        s_state.swapTable[table][1] = g;
        s_state.swapTable[table][2] = b;
        s_state.swapTable[table][3] = a;
    }
}

void setTevSwapMode(u8 stage, u8 rasSel, u8 texSel) {
    if (stage < MAX_TEV_STAGES) {
        s_state.tevStages[stage].rasSwapMode = rasSel;
        s_state.tevStages[stage].texSwapMode = texSel;
    }
}

void setTevDirect(u8 tevReg) {
    // GXSetTevDirect bypasses the TEV combiner for a register,
    // writing color directly to the TEV register without any blending.
    // tevReg: 0 = TEVREG0, 1 = TEVREG1, 2 = TEVREG2, 3 = TEVPREV
    // In the original Wii hardware, this sets a mode bit that causes the
    // next color write to go directly to the specified register.
    // We track this in the TEV state for the shader compiler.
    if (tevReg < MAX_TEV_COLORS) {
        s_state.tevDirectReg = tevReg;
        s_state.tevDirectActive = true;
    }
}

void setTevOp(u8 stage, u8 mode) {
    if (mode == 0) {
        // GX_MODULATE — standard tex * color
        setTevColorIn(stage, 8, 4, 0, 0);  // TEXC, RASC, ZERO, ZERO
        setTevAlphaIn(stage, 9, 5, 0, 0);  // TEXA, RASA, ZERO, ZERO
        setTevColorOp(stage, 0, 0, 0, 1, 3); // ADD, no bias, no scale, clamp, PREV
        setTevAlphaOp(stage, 0, 0, 0, 1, 3);
    } else if (mode == 3) {
        // GX_REPLACE — use texture color directly
        setTevColorIn(stage, 8, 0, 0, 0);  // TEXC, ZERO, ZERO, ZERO
        setTevAlphaIn(stage, 9, 0, 0, 0);  // TEXA, ZERO, ZERO, ZERO
        setTevColorOp(stage, 0, 0, 0, 1, 3);
        setTevAlphaOp(stage, 0, 0, 0, 1, 3);
    }
    // Other modes can be added as needed
}

// ---------------------------------------------------------------------------
// Color channels
// ---------------------------------------------------------------------------

void setNumChans(u8 n) { s_state.numChans = n; }

void setChanCtrl(u8 channel, u8 enable, u8 ambSrc, u8 matSrc,
                 u8 lightMask, u8 diffFn, u8 attnFn,
                 u8 attnA, u8 attnB, u8 attnC) {
    if (channel < 2) {
        s_state.channels[channel].enable = (enable != 0);
        s_state.channels[channel].ambSrc = ambSrc;
        s_state.channels[channel].matSrc = matSrc;
        s_state.channels[channel].lightMask = lightMask;
        s_state.channels[channel].diffFn = diffFn;
        s_state.channels[channel].attnFn = attnFn;
        (void)attnA; (void)attnB; (void)attnC;
    }
}

void setChanMatColor(u8 channel, u32 color) {
    if (channel < 2) s_state.channels[channel].matColor = color;
}

// ---------------------------------------------------------------------------
// Texture
// ---------------------------------------------------------------------------

void setNumTexGens(u8 n) { s_state.numTexGens = n; }

void initTexObj(void* obj, void* data, u16 w, u16 h,
                u8 format, u8 wrapS, u8 wrapT, u8 mipmap) {
    if (!obj) return;
    // Store texture parameters in the GXTexObj's 0x20-byte opaque storage
    RealGXTexObj* real = reinterpret_cast<RealGXTexObj*>(obj);
    std::memset(real, 0, sizeof(RealGXTexObj));
    real->data = data;
    real->width = w;
    real->height = h;
    real->format = format;
    real->wrapS = wrapS;
    real->wrapT = wrapT;
    real->mipmap = mipmap;
    real->minFilter = 1; // GL_LINEAR default
    real->magFilter = 1;
}

void initTexObjLOD(void* obj, u8 minFilt, u8 magFilt,
                   f32 minLOD, f32 maxLOD, f32 bias,
                   u8 biasClamp, u8 edgeLODEnable, u8 aniso) {
    if (!obj) return;
    RealGXTexObj* real = reinterpret_cast<RealGXTexObj*>(obj);
    real->minFilter = minFilt;
    real->magFilter = magFilt;
    real->minLOD = minLOD;
    real->maxLOD = maxLOD;
    real->lodBias = bias;
    (void)biasClamp; (void)edgeLODEnable; (void)aniso;
}

void loadTexObj(void* obj, u8 texMapID) {
    if (!obj || texMapID >= MAX_TEXMAPS) return;
    RealGXTexObj* real = reinterpret_cast<RealGXTexObj*>(obj);

    // Cache the decoded GL texture
    u32 glTex = cacheTexture(real->data, real->width, real->height, real->format);
    s_state.activeTexMap[texMapID] = glTex;
    s_state.boundTexData[texMapID] = real->data;

    if (glTex && GL3::gl.glBindTexture) {
        GL3::gl.glActiveTexture(GL3::GL_TEXTURE0 + texMapID);
        GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, glTex);
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_MIN_FILTER,
                                gxFilterToGL(real->minFilter));
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_MAG_FILTER,
                                gxFilterToGL(real->magFilter));
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_S,
                                gxWrapToGL(real->wrapS));
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_T,
                                gxWrapToGL(real->wrapT));
        GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, 0);
    }
}

void invalidateTexAll() {
    // Clear texture cache
    for (u32 i = 0; i < s_state.texCacheCount; i++) {
        if (s_state.texCache[i].valid && GL3::gl.glDeleteTextures) {
            GL3::gl.glDeleteTextures(1, &s_state.texCache[i].glTexObj);
            s_state.texCache[i].valid = false;
        }
    }
    s_state.texCacheCount = 0;
    for (u32 i = 0; i < MAX_TEXMAPS; i++) {
        s_state.activeTexMap[i] = 0;
        s_state.boundTexData[i] = nullptr;
    }
}

void setTexWrapMode(u8 texMapID, u8 wrapS, u8 wrapT) {
    if (texMapID >= MAX_TEXMAPS) return;
    // Apply to currently bound texture
    if (s_state.activeTexMap[texMapID] && GL3::gl.glBindTexture) {
        GL3::gl.glActiveTexture(GL3::GL_TEXTURE0 + texMapID);
        GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, s_state.activeTexMap[texMapID]);
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_S,
                                gxWrapToGL(wrapS));
        GL3::gl.glTexParameteri(GL3::GL_TEXTURE_2D, GL3::GL_TEXTURE_WRAP_T,
                                gxWrapToGL(wrapT));
        GL3::gl.glBindTexture(GL3::GL_TEXTURE_2D, 0);
    }
}

// ---------------------------------------------------------------------------
// Lighting
// ---------------------------------------------------------------------------

void setNumLights(u8 n) { s_state.numLights = n; }

void initLightColor(void* light, u32* color) {
    if (!light || !color) return;
    // GXLightObj is 0x40 bytes opaque — store color in first bytes
    std::memcpy(light, color, sizeof(u32));
}

void initLightPos(void* light, f32 x, f32 y, f32 z) {
    if (!light) return;
    // Store position at offset 4 in the 0x40-byte object
    f32* p = static_cast<f32*>(light);
    p[1] = x; p[2] = y; p[3] = z;
}

void initLightDir(void* light, f32 nx, f32 ny, f32 nz) {
    if (!light) return;
    f32* p = static_cast<f32*>(light);
    p[1] = nx; p[2] = ny; p[3] = nz;
}

void initSpecularDir(void* light, f32 nx, f32 ny, f32 nz) {
    if (!light) return;
    f32* p = static_cast<f32*>(light);
    p[4] = nx; p[5] = ny; p[6] = nz;
}

void initLightSpot(void* light, f32 cutoff, u8 fn) {
    if (!light) return;
    // Store spot params at offset 13-14 in the 0x40-byte GXLightObj
    f32* p = static_cast<f32*>(light);
    p[13] = cutoff;
    p[14] = static_cast<f32>(fn);
}

void initLightAttnA(void* light, f32 a0, f32 a1, f32 a2) {
    if (!light) return;
    f32* p = static_cast<f32*>(light);
    p[7] = a0; p[8] = a1; p[9] = a2;
}

void initLightDistAttn(void* light, f32 refDist, f32 refBright, u8 fn) {
    if (!light) return;
    f32* p = static_cast<f32*>(light);
    p[15] = refDist;
    p[16] = refBright;
    p[17] = static_cast<f32>(fn);
}

void initLightAttnK(void* light, f32 k0, f32 k1, f32 k2) {
    if (!light) return;
    f32* p = static_cast<f32*>(light);
    p[10] = k0; p[11] = k1; p[12] = k2;
}

void initLightAttn(void* light, f32 a0, f32 a1, f32 a2,
                   f32 k0, f32 k1, f32 k2) {
    initLightAttnA(light, a0, a1, a2);
    initLightAttnK(light, k0, k1, k2);
}

void loadLightObjImm(void* light, u8 lightID) {
    if (!light || lightID >= MAX_LIGHTS) return;
    // Store light data for shader uniform submission
    u32* p = static_cast<u32*>(light);
    f32* pf = static_cast<f32*>(light);
    s_state.lights[lightID].color = p[0];
    s_state.lights[lightID].position[0] = pf[1];
    s_state.lights[lightID].position[1] = pf[2];
    s_state.lights[lightID].position[2] = pf[3];
    s_state.lights[lightID].dir[0] = pf[4];
    s_state.lights[lightID].dir[1] = pf[5];
    s_state.lights[lightID].dir[2] = pf[6];
    s_state.lights[lightID].enabled = true;
}

// ---------------------------------------------------------------------------
// Misc
// ---------------------------------------------------------------------------

void flush() {
    // Flush any pending GL commands
    if (GL3::gl.glFlush) GL3::gl.glFlush();
}

void drawDone() {
    // Wait for GPU to finish (sync point)
    // No direct GL equivalent for GXDrawDone without fences
    flush();
}

// ---------------------------------------------------------------------------
// Fog — translate GX fog to OpenGL fog
// ---------------------------------------------------------------------------

void setFog(u8 type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, u32 color) {
    s_state.fogType = type;
    s_state.fogStartZ = startZ;
    s_state.fogEndZ = endZ;
    s_state.fogNearZ = nearZ;
    s_state.fogFarZ = farZ;
    s_state.fogColor = color;

    if (type == 0) {
        // GX_FOG_NONE
        s_state.fogEnable = false;
        if (GL3::gl.glDisable) GL3::gl.glDisable(GL3::GL_FOG);
        return;
    }

    s_state.fogEnable = true;
    if (!GL3::gl.glEnable || !GL3::gl.glFogi || !GL3::gl.glFogf || !GL3::gl.glFogfv) return;

    GL3::gl.glEnable(GL3::GL_FOG);

    // Convert GX fog type to GL fog mode
    // GX_FOG_PERSP_LIN=2 → GL_LINEAR, GX_FOG_PERSP_EXP=4 → GL_EXP, GX_FOG_PERSP_EXP2=5 → GL_EXP2
    switch (type) {
        case 2:  case 10: // GX_FOG_PERSP_LIN / GX_FOG_ORTHO_LIN
            GL3::gl.glFogi(GL3::GL_FOG_MODE, GL3::GL_LINEAR);
            GL3::gl.glFogf(GL3::GL_FOG_START, startZ);
            GL3::gl.glFogf(GL3::GL_FOG_END, endZ);
            break;
        case 4:  case 12: // GX_FOG_PERSP_EXP / GX_FOG_ORTHO_EXP
            GL3::gl.glFogi(GL3::GL_FOG_MODE, GL3::GL_EXP);
            if (endZ != startZ) {
                f32 density = -1.0f / (endZ - startZ);
                GL3::gl.glFogf(GL3::GL_FOG_DENSITY, density);
            }
            break;
        case 5:  case 7:  case 13: case 15: // EXP2 variants
            GL3::gl.glFogi(GL3::GL_FOG_MODE, GL3::GL_EXP2);
            if (endZ != startZ) {
                f32 density = -1.0f / (endZ - startZ);
                GL3::gl.glFogf(GL3::GL_FOG_DENSITY, density * density);
            }
            break;
        case 6: case 14: // REVEXP
            // Not directly supported by legacy GL fog — approximate with linear
            GL3::gl.glFogi(GL3::GL_FOG_MODE, GL3::GL_LINEAR);
            GL3::gl.glFogf(GL3::GL_FOG_START, startZ);
            GL3::gl.glFogf(GL3::GL_FOG_END, endZ);
            break;
        default:
            GL3::gl.glFogi(GL3::GL_FOG_MODE, GL3::GL_LINEAR);
            GL3::gl.glFogf(GL3::GL_FOG_START, startZ);
            GL3::gl.glFogf(GL3::GL_FOG_END, endZ);
            break;
    }

    // Set fog color (AABBGGRR → RGBA floats)
    f32 fc[4];
    unpackColor(color, fc[0], fc[1], fc[2], fc[3]);
    GL3::gl.glFogfv(GL3::GL_FOG_COLOR, fc);
}

void setFogRangeAdj(u8 enable, u16 center, u16* table) {
    // GX fog range adjustment — projects depth fog based on screen Y.
    // On PC this is less critical since we use standard GL fog.
    // Store params for future per-pixel fog shader implementation.
    (void)enable; (void)center; (void)table;
}

void initFogAdjTable(u16* table, u16 width, const f32 proj[4][4]) {
    // Initialize fog adjustment table for screen-space fog projection.
    // MKWii uses this for scanline-based fog intensity adjustment.
    // For now, store identity mapping (no adjustment).
    if (table && width > 0) {
        for (u16 i = 0; i < width; i++) {
            table[i] = i;
        }
    }
    (void)proj;
}

// ---------------------------------------------------------------------------
// TexGen — store texture coordinate generation parameters
// ---------------------------------------------------------------------------

void setTexCoordGen(u8 texCoordId, u8 type, u8 source, u8 matrix, u8 normalize, u8 postMatrix) {
    if (texCoordId < MAX_TEXGENS) {
        s_state.texGens[texCoordId].type = type;
        s_state.texGens[texCoordId].source = source;
        s_state.texGens[texCoordId].matrix = matrix;
        s_state.texGens[texCoordId].normalize = (normalize != 0);
        s_state.texGens[texCoordId].postMatrix = postMatrix;
    }
}

// ---------------------------------------------------------------------------
// Display list replay — parse custom bytecode and replay GX commands
// ---------------------------------------------------------------------------
//
// The decompiled GXDisplayList.cpp uses a custom format:
//   GXDL_EmitTriangleStrip writes: [primType:u8] [fmt:u8] [vertCount:u16BE] [vertices...]
//   GXDL_EmitQuads writes: [primType:u8] [fmt:u8] [vertCount:u16BE] [vertices...]
//   Each vertex: pos(3×f32BE) + normal(3×f32BE) + optional color(u32BE)
//
// Additionally, WGPIPE writes during recording produce raw command bytes.
// We parse both formats.

static inline u32 readBE32(const u8* p) {
    return (static_cast<u32>(p[0]) << 24) | (static_cast<u32>(p[1]) << 16) |
           (static_cast<u32>(p[2]) << 8)  |  static_cast<u32>(p[3]);
}

static inline u16 readBE16(const u8* p) {
    return (static_cast<u16>(p[0]) << 8) | static_cast<u16>(p[1]);
}

static inline f32 readBEFloat(const u8* p) {
    u32 v = readBE32(p);
    f32 f;
    std::memcpy(&f, &v, sizeof(f32));
    return f;
}

void replayDisplayList(const void* list, u32 nbytes) {
    if (!list || nbytes < 4 || !s_state.initialized) return;

    const u8* data = static_cast<const u8*>(list);
    const u8* end = data + nbytes;
    const u8* ptr = data;

    while (ptr + 4 <= end) {
        u8 primType = ptr[0];
        u8 vtxFmt = ptr[1];
        u16 vertCount = readBE16(ptr + 2);
        ptr += 4;

        if (vertCount == 0 || vertCount > MAX_VERTICES) continue;

        // Determine vertex format from prim type and vtxFmt
        // Format 0: pos(3f) + normal(3f) + optional color(u32)
        // Format 1: pos(3f) + color(u32) + optional texcoord(2f)
        // We try to detect from remaining bytes

        u32 bytesPerVert;
        bool hasNormal = false;
        bool hasColor = false;
        bool hasTexcoord = false;

        if (vtxFmt == 0) {
            // Standard format: pos(3f=12) + normal(3f=12) + optional color(4)
            // = 24 or 28 bytes per vertex
            u32 remaining = static_cast<u32>(end - ptr);
            if (remaining >= vertCount * 28) {
                bytesPerVert = 28; hasNormal = true; hasColor = true;
            } else {
                bytesPerVert = 24; hasNormal = true; hasColor = false;
            }
        } else {
            // Assume: pos(3f=12) + color(4) = 16, or pos(3f=12) + texcoord(2f=8) = 20
            u32 remaining = static_cast<u32>(end - ptr);
            if (remaining >= vertCount * 20 && vertCount > 2) {
                bytesPerVert = 20; hasTexcoord = true;
            } else if (remaining >= vertCount * 16) {
                bytesPerVert = 16; hasColor = true;
            } else {
                bytesPerVert = 12; // minimal: pos only
            }
        }

        // Check if we have enough data
        if (ptr + vertCount * bytesPerVert > end) {
            // Not enough data for this primitive — skip
            break;
        }

        // Start the primitive
        beginPrimitive(primType, vtxFmt, vertCount);

        for (u16 v = 0; v < vertCount; v++) {
            const u8* vp = ptr + v * bytesPerVert;

            // Position (always present, 3×f32 big-endian)
            f32 px = readBEFloat(vp);
            f32 py = readBEFloat(vp + 4);
            f32 pz = readBEFloat(vp + 8);
            submitPosition(px, py, pz);

            u32 offset = 12;

            if (hasNormal) {
                f32 nx = readBEFloat(vp + offset);
                f32 ny = readBEFloat(vp + offset + 4);
                f32 nz = readBEFloat(vp + offset + 8);
                submitNormal(nx, ny, nz);
                offset += 12;
            }

            if (hasColor) {
                u32 color = readBE32(vp + offset);
                submitColor(color);
                offset += 4;
            }

            if (hasTexcoord) {
                f32 s = readBEFloat(vp + offset);
                f32 t = readBEFloat(vp + offset + 4);
                submitTexCoord(0, s, t);
                offset += 8;
            }
        }

        // End the primitive (flushes to GL)
        endPrimitive();

        ptr += vertCount * bytesPerVert;
    }
}

// ---------------------------------------------------------------------------
// TEV shader building — generate GLSL from TEV stage configuration
// ---------------------------------------------------------------------------
// Maps GX TEV color/alpha sources to GLSL expressions.
// This enables per-stage TEV combinations matching the original hardware.
// ---------------------------------------------------------------------------

// Simple hash of TEV configuration for cache invalidation
static u32 hashTEVConfig() {
    u32 h = 0x12345678;
    h ^= s_state.numTevStages * 0x9E3779B9;
    for (u32 i = 0; i < s_state.numTevStages; i++) {
        const TEVStage& st = s_state.tevStages[i];
        h ^= (st.colorIn[0] | (st.colorIn[1]<<4) | (st.colorIn[2]<<8) | (st.colorIn[3]<<12)) * (i+1);
        h ^= (st.alphaIn[0] | (st.alphaIn[1]<<4) | (st.alphaIn[2]<<8) | (st.alphaIn[3]<<12)) * (i+2);
        h ^= (st.colorOp | (st.alphaOp<<4) | (st.colorOutReg<<8) | (st.alphaOutReg<<12)) * (i+3);
        h ^= st.kColorSel | (st.kAlphaSel << 8);
    }
    return h;
}

// TEV color/alpha source -> GLSL expression string
static const char* tevColorSourceGLSL(u8 src, char* buf, int bufSz) {
    switch (src) {
        case 0: return "vec4(0.0)";                    // GX_CC_ZERO
        case 1: return "vec4(1.0)";                    // GX_CC_ONE
        case 4: return "v_rasColor";                    // GX_CC_RASC
        case 5: return "v_rasAlpha_as_color";            // GX_CC_GASC
        case 6: return "tev_prev";                       // GX_CC_CPREV
        case 7: return "vec4(vec3(tev_prev.a), 1.0)";   // GX_CC_APREV
        case 8: return "tex_color0";                     // GX_CC_TEXC
        case 9: return "vec4(vec3(tex_color0.a), 1.0)"; // GX_CC_TEXA
        case 12: return "tev_kcolor";                    // GX_CC_TEXC_K
        case 14: return "vec4(1.0)";                     // GX_CC_ONE_K
        case 15: return "vec4(0.5)";                     // GX_CC_HALF_K
        case 16: return "tev_kcolor";                    // GX_CC_KONST
        case 20: return "tev_reg0";                      // GX_CC_A0
        case 21: return "tev_reg1";                      // GX_CC_A1
        case 22: return "tev_reg2";                      // GX_CC_A2
        default:
            snprintf(buf, bufSz, "vec4(0.0) /* src_%d */", src);
            return buf;
    }
}

static const char* tevAlphaSourceGLSL(u8 src, char* buf, int bufSz) {
    switch (src) {
        case 0: return "0.0";            // GX_CA_ZERO
        case 1: return "1.0";            // GX_CA_ONE
        case 4: return "v_rasColor.a";   // GX_CA_RASA
        case 5: return "v_rasColor.a";   // GX_CA_GASA
        case 6: return "tev_prev.a";     // GX_CA_APREV
        case 9: return "tex_color0.a";   // GX_CA_TEXA
        case 16: return "tev_kcolor.a";  // GX_CA_KONST
        case 20: return "tev_reg0.a";    // GX_CA_A0
        case 21: return "tev_reg1.a";    // GX_CA_A1
        case 22: return "tev_reg2.a";    // GX_CA_A2
        default:
            snprintf(buf, bufSz, "0.0 /* asrc_%d */", src);
            return buf;
    }
}

u32 buildTEVProgram() {
    // Hash TEV config; if unchanged, return cached program
    u32 h = hashTEVConfig();
    if (s_state.tevProgCache.program != 0 && s_state.tevProgCache.tevHash == h) {
        return s_state.tevProgCache.program;
    }

    // For now, if only stage 0 is active and it's the common modulate config,
    // use the fast default program
    if (s_state.numTevStages <= 1) {
        return s_defaultProgram;
    }

    // Future enhancement: full TEV->GLSL compilation for multi-stage TEV.
    // For Phase 33, we return the default shader which handles the most
    // common single-stage TEV configurations used in MKWii.
    // Multi-stage TEV (rim lighting, specular, etc.) will be added in
    // a subsequent phase.
    return s_defaultProgram;
}

// ---------------------------------------------------------------------------
// Frame stats reset (call once per frame from Graphics::beginFrame)
// ---------------------------------------------------------------------------
extern "C" void gxRenderer_resetFrameStats() {
    s_state.frameDrawCalls = 0;
    s_state.frameVertices = 0;
}

extern "C" u32 gxRenderer_getFrameDrawCalls() {
    return s_state.frameDrawCalls;
}

extern "C" u32 gxRenderer_getFrameVertices() {
    return s_state.frameVertices;
}

} // namespace GXRenderer

// ============================================================================
// Extern "C" GX function implementations — resolved by linker when GENESIS
// code calls GX functions declared in gx.hpp
// ============================================================================

extern "C" {

GXFifoObj* GXInit(void* buf, u32 size) {
    (void)buf; (void)size;
    GXRenderer::init();
    return reinterpret_cast<GXFifoObj*>(buf);
}

void GXFlush(void) { GXRenderer::flush(); }
void GXDrawDone(void) { GXRenderer::drawDone(); }
void GXSetDrawSync(u16 token) { (void)token; }
void GXSetDrawSyncCallback(GXDrawSyncCallback cb) { (void)cb; }
void* GXGetCurrentGXThread(void) { return nullptr; }

// --- Vertex specification ---
void GXBegin(int prim, int fmt, int nVerts) {
    GXRenderer::beginPrimitive(static_cast<u8>(prim), static_cast<u32>(fmt), static_cast<u32>(nVerts));
}
void GXEnd_impl(void) { GXRenderer::endPrimitive(); }
void GXPosition3f32(f32 x, f32 y, f32 z) { GXRenderer::submitPosition(x, y, z); }
void GXPosition2f32(f32 x, f32 y) { GXRenderer::submitPosition2(x, y); }
void GXColor1u32(u32 c) { GXRenderer::submitColor(c); }
void GXColor4u8(u8 r, u8 g, u8 b, u8 a) { GXRenderer::submitColor4u8(r, g, b, a); }
void GXTexCoord2f32(f32 s, f32 t) { GXRenderer::submitTexCoord(0, s, t); }
void GXTexCoord2u16(u16 s, u16 t) { GXRenderer::submitTexCoord2u16(0, s, t); }
void GXNormal3f32(f32 nx, f32 ny, f32 nz) { GXRenderer::submitNormal(nx, ny, nz); }
void GXNormal3s16(s16 nx, s16 ny, s16 nz) {
    GXRenderer::submitNormal(nx / 32767.0f, ny / 32767.0f, nz / 32767.0f);
}

// --- Vertex descriptor ---
void GXClearVtxDesc(void) { GXRenderer::clearVtxDesc(); }
void GXSetVtxDesc(int attr, int type) { GXRenderer::setVtxDesc(static_cast<u8>(attr), static_cast<u8>(type)); }
void GXSetVtxAttrFmt(int vtxfmt, int attr, int type, int compType, int compCnt) {
    GXRenderer::setVtxAttrFmt(static_cast<u8>(vtxfmt), static_cast<u8>(attr),
                               static_cast<u8>(type), static_cast<u8>(compType), static_cast<u8>(compCnt));
}
void GXInvalidateVtxCache(void) { GXRenderer::invalidateVtxCache(); }

// --- Texture generation ---
void GXSetNumTexGens(int nTexGens) { GXRenderer::setNumTexGens(static_cast<u8>(nTexGens)); }
void GXSetTexCoordGen(int texCoordId, int type, int source, int matrix, int normalize, int postMatrix) {
    GXRenderer::setTexCoordGen(static_cast<u8>(texCoordId), static_cast<u8>(type),
                               static_cast<u8>(source), static_cast<u8>(matrix),
                               static_cast<u8>(normalize), static_cast<u8>(postMatrix));
}

// --- Color channels ---
void GXSetNumChans(int nChans) { GXRenderer::setNumChans(static_cast<u8>(nChans)); }
void GXSetChanCtrl(int channel, int enable, int ambSrc, int matSrc,
                   int lightMask, int diffFn, int attnFn, int attnA, int attnB, int attnC) {
    GXRenderer::setChanCtrl(static_cast<u8>(channel), static_cast<u8>(enable),
                            static_cast<u8>(ambSrc), static_cast<u8>(matSrc),
                            static_cast<u8>(lightMask), static_cast<u8>(diffFn),
                            static_cast<u8>(attnFn),
                            static_cast<u8>(attnA), static_cast<u8>(attnB), static_cast<u8>(attnC));
}
void GXSetChanMatColor(int channel, GXColor color) {
    GXRenderer::setChanMatColor(static_cast<u8>(channel), color);
}

// --- Indirect texture stages ---
void GXSetNumIndStages(int nStages) { (void)nStages; }

// --- TEV ---
void GXSetNumTevStages(int nStages) { GXRenderer::setNumTevStages(static_cast<u8>(nStages)); }
void GXSetTevOp(int stage, int mode) { GXRenderer::setTevOp(static_cast<u8>(stage), static_cast<u8>(mode)); }
void GXSetTevOrder(int stage, int texcoord, int texmap, int color) {
    GXRenderer::setTevOrder(static_cast<u8>(stage), static_cast<u8>(texcoord),
                            static_cast<u8>(texmap), static_cast<u8>(color));
}
void GXSetTevColorIn(int stage, int a, int b, int c, int d) {
    GXRenderer::setTevColorIn(static_cast<u8>(stage), static_cast<u8>(a),
                              static_cast<u8>(b), static_cast<u8>(c), static_cast<u8>(d));
}
void GXSetTevAlphaIn(int stage, int a, int b, int c, int d) {
    GXRenderer::setTevAlphaIn(static_cast<u8>(stage), static_cast<u8>(a),
                              static_cast<u8>(b), static_cast<u8>(c), static_cast<u8>(d));
}
void GXSetTevColorOp(int stage, int op, int bias, int scale, int clamp, int outReg) {
    GXRenderer::setTevColorOp(static_cast<u8>(stage), static_cast<u8>(op),
                              static_cast<u8>(bias), static_cast<u8>(scale),
                              static_cast<u8>(clamp), static_cast<u8>(outReg));
}
void GXSetTevAlphaOp(int stage, int op, int bias, int scale, int clamp, int outReg) {
    GXRenderer::setTevAlphaOp(static_cast<u8>(stage), static_cast<u8>(op),
                              static_cast<u8>(bias), static_cast<u8>(scale),
                              static_cast<u8>(clamp), static_cast<u8>(outReg));
}
void GXSetTevColor(int reg, GXColor color) { GXRenderer::setTevColor(static_cast<u8>(reg), color); }
void GXSetTevKColor(int sel, GXColor color) { GXRenderer::setTevKColor(static_cast<u8>(sel), color); }
void GXSetTevKColorSel(int stage, int sel) {
    GXRenderer::setTevKColorSel(static_cast<u8>(stage), static_cast<u8>(sel));
}
void GXSetTevKAlphaSel(int stage, int sel) {
    GXRenderer::setTevKAlphaSel(static_cast<u8>(stage), static_cast<u8>(sel));
}
void GXSetTevSwapModeTable(int table, int r, int g, int b, int a) {
    GXRenderer::setTevSwapModeTable(static_cast<u8>(table), static_cast<u8>(r),
                                    static_cast<u8>(g), static_cast<u8>(b), static_cast<u8>(a));
}
void GXSetTevSwapMode(int stage, int rasSel, int texSel) {
    GXRenderer::setTevSwapMode(static_cast<u8>(stage), static_cast<u8>(rasSel), static_cast<u8>(texSel));
}
void GXSetTevDirect(int tevReg) { GXRenderer::setTevDirect(static_cast<u8>(tevReg)); }

// --- Blend ---
void GXSetBlendMode(int mode, int srcFactor, int dstFactor, int logicOp) {
    GXRenderer::setBlendMode(static_cast<u8>(mode), static_cast<u8>(srcFactor),
                             static_cast<u8>(dstFactor), static_cast<u8>(logicOp));
}
void GXSetColorUpdate(int enable) { GXRenderer::setColorUpdate(static_cast<u8>(enable)); }
void GXSetAlphaUpdate(int enable) { GXRenderer::setAlphaUpdate(static_cast<u8>(enable)); }

// --- Depth ---
void GXSetZMode(int enable, int func, int writeEnable) {
    GXRenderer::setZMode(static_cast<u8>(enable), static_cast<u8>(func), static_cast<u8>(writeEnable));
}

// --- Alpha compare ---
void GXSetAlphaCompare(int comp0, int op, int ref0, int comp1, int a1) {
    GXRenderer::setAlphaCompare(static_cast<u8>(comp0), static_cast<u8>(op),
                                static_cast<u8>(ref0), static_cast<u8>(comp1), static_cast<u8>(a1));
}

// --- Rasterization ---
void GXSetCullMode(int mode) { GXRenderer::setCullMode(static_cast<u8>(mode)); }
void GXSetLineWidth(u8 width, int offset) { (void)width; (void)offset; }

// --- Projection / viewport ---
void GXSetProjection(const f32* mtx, int type) {
    GXRenderer::setProjection(mtx, static_cast<u8>(type));
}
void GXLoadPosMtxImm(const f32* mtx, int id) {
    GXRenderer::loadPosMtxImm(mtx, static_cast<u8>(id));
}
void GXSetCurrentMtx(int id) { GXRenderer::setCurrentMtx(static_cast<u8>(id)); }
void GXSetViewport(f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ) {
    GXRenderer::setViewport(x, y, w, h, nearZ, farZ);
}
void GXSetScissor(u32 x, u32 y, u32 w, u32 h) {
    GXRenderer::setScissor(x, y, w, h);
}

// --- Display copy ---
void GXCopyDisp(void* xfb, int update) { (void)xfb; (void)update; }
void GXSetDispCopySrc(u32 left, u32 top, u16 width, u16 height) {
    (void)left; (void)top; (void)width; (void)height;
}
void GXSetDispCopyDst(u16 width, u16 height) { (void)width; (void)height; }
void GXSetDispCopyYScale(f32 yScale) { (void)yScale; }
f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight) {
    (void)efbHeight;
    return static_cast<f32>(xfbHeight) / static_cast<f32>(xfbHeight);
}
u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale) {
    (void)yScale;
    return efbHeight;
}

// --- FIFO management ---
void GXGetGPFifo(GXFifoObj* fifo) { (void)fifo; }
void GXGetFifoPtrs(GXFifoObj* fifo, void** readPtr, void** writePtr) {
    (void)fifo;
    if (readPtr) *readPtr = nullptr;
    if (writePtr) *writePtr = nullptr;
}
void GXGetGPStatus(u8* overhi, u8* underlow, u8* readIdle, u8* cmdIdle, u8* breakPt) {
    if (overhi) *overhi = 0;
    if (underlow) *underlow = 0;
    if (readIdle) *readIdle = 1;
    if (cmdIdle) *cmdIdle = 1;
    if (breakPt) *breakPt = 0;
}
void GXEnableBreakPt(void* ptr) { (void)ptr; }
void GXDisableBreakPt(void) {}

// --- Texture objects ---
void GXInitTexObj(GXTexObj* obj, void* data, u16 width, u16 height,
                  int format, int wrapS, int wrapT, int mipmap) {
    GXRenderer::initTexObj(obj, data, width, height,
                           static_cast<u8>(format), static_cast<u8>(wrapS),
                           static_cast<u8>(wrapT), static_cast<u8>(mipmap));
}
void GXInitTexObjLOD(GXTexObj* obj, int minFilt, int magFilt,
                      f32 minLOD, f32 maxLOD, f32 bias, int biasClamp,
                      int edgeLODEnable, int aniso) {
    GXRenderer::initTexObjLOD(obj, static_cast<u8>(minFilt), static_cast<u8>(magFilt),
                              minLOD, maxLOD, bias, static_cast<u8>(biasClamp),
                              static_cast<u8>(edgeLODEnable), static_cast<u8>(aniso));
}
void GXLoadTexObj(GXTexObj* obj, int texMapID) {
    GXRenderer::loadTexObj(obj, static_cast<u8>(texMapID));
}
void GXInvalidateTexAll(void) { GXRenderer::invalidateTexAll(); }
void GXSetTexWrapMode(int texMapID, int wrapS, int wrapT) {
    GXRenderer::setTexWrapMode(static_cast<u8>(texMapID), static_cast<u8>(wrapS), static_cast<u8>(wrapT));
}

// --- Lighting ---
void GXInitLightColor(GXLightObj* light, GXColor* color) {
    GXRenderer::initLightColor(light, color);
}
void GXInitLightPos(GXLightObj* light, f32 x, f32 y, f32 z) {
    GXRenderer::initLightPos(light, x, y, z);
}
void GXInitLightDir(GXLightObj* light, f32 nx, f32 ny, f32 nz) {
    GXRenderer::initLightDir(light, nx, ny, nz);
}
void GXInitSpecularDir(GXLightObj* light, f32 nx, f32 ny, f32 nz) {
    GXRenderer::initSpecularDir(light, nx, ny, nz);
}
void GXInitLightSpot(GXLightObj* light, f32 cutoff, GXSpotFn fn) {
    GXRenderer::initLightSpot(light, cutoff, static_cast<u8>(fn));
}
void GXInitLightAttnA(GXLightObj* light, f32 a0, f32 a1, f32 a2) {
    GXRenderer::initLightAttnA(light, a0, a1, a2);
}
void GXInitLightDistAttn(GXLightObj* light, f32 refDist, f32 refBrightness, GXDistAttnFn fn) {
    GXRenderer::initLightDistAttn(light, refDist, refBrightness, static_cast<u8>(fn));
}
void GXInitLightAttnK(GXLightObj* light, f32 k0, f32 k1, f32 k2) {
    GXRenderer::initLightAttnK(light, k0, k1, k2);
}
void GXInitLightAttn(GXLightObj* light, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2) {
    GXRenderer::initLightAttn(light, a0, a1, a2, k0, k1, k2);
}
void GXLoadLightObjImm(GXLightObj* light, int lightID) {
    GXRenderer::loadLightObjImm(light, static_cast<u8>(lightID));
}
void GXSetNumLights(int nLights) { GXRenderer::setNumLights(static_cast<u8>(nLights)); }

// --- Fog ---
void GXSetFog(int type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color) {
    GXRenderer::setFog(static_cast<u8>(type), startZ, endZ, nearZ, farZ, color);
}
void GXSetFogRangeAdj(u8 enable, u16 center, u16* table) {
    GXRenderer::setFogRangeAdj(enable, center, table);
}
void GXInitFogAdjTable(u16* table, u16 width, const f32 proj[4][4]) {
    GXRenderer::initFogAdjTable(table, width, proj);
}

// --- Additional GX functions ---
void GXSetZCompLoc(u8 before) { GXRenderer::setZCompLoc(before); }
void GXSetCoPlanar(u8 enable) { GXRenderer::setCoPlanar(enable); }
void GXSetClipMode(u8 mode) { GXRenderer::setClipMode(mode); }

// --- Display list ---
void GXCallDisplayList(const void* list, u32 nbytes) {
    GXRenderer::replayDisplayList(list, nbytes);
}

// --- Misc GX pipe commands ---
void GXCmd1u8(u8 v) { WGPIPE.c = v; }
void GXCmd1u16(u16 v) { WGPIPE.s = v; }
void GXCmd1u32(u32 v) { WGPIPE.i = v; }

} // extern "C"
