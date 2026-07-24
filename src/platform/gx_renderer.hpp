#pragma once
// gx_renderer.hpp — Phase 32: GX-to-OpenGL 3.3 Core Renderer
//
// Intercepts Wii GX commands and translates them to OpenGL 3.3 Core calls.
// The original MKWii renders through GX immediate mode and display lists;
// this renderer captures the same state machine and emits GL draw calls.
//
// Architecture:
//   gx.hpp (stub)  →  calls GXRenderer methods  →  GL 3.3 Core
//   Vertex data accumulates in a CPU-side buffer during GXBegin/GXEnd,
//   then is uploaded to a VBO and drawn with glDrawArrays.
//
// Key systems:
//   - Vertex format descriptor (GX_VA_POS/NRM/CLR0/TEX0 etc.)
//   - TEV shader compilation (Wii TEV stages → GLSL fragment shader)
//   - Texture cache (Wii tex formats decoded to GL_RGBA8, cached in GL tex objects)
//   - Matrix stack (projection + 10 position matrices, matching GX hardware)
//   - Blend / depth / cull / alpha state tracking

#include "../rk_types.h"
#include "gl3_core.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace GXRenderer {

// ---------------------------------------------------------------------------
// Limits (matching Wii GX hardware)
// ---------------------------------------------------------------------------
static constexpr u32 MAX_VERTICES     = 65536;  // Per GXBegin/GXEnd batch
static constexpr u32 MAX_TEXMAPS      = 8;      // GX_TEXMAP0..7
static constexpr u32 MAX_TEXGENS      = 8;      // GX_TEXGEN0..7
static constexpr u32 MAX_TEV_STAGES   = 16;     // GX_TEVSTAGE0..15
static constexpr u32 MAX_LIGHTS       = 8;      // GX_LIGHT0..7
static constexpr u32 MAX_POS_MTX     = 10;     // GX_PNMTX0..9
static constexpr u32 MAX_KCOLORS      = 8;      // TEV K-color registers
static constexpr u32 MAX_TEV_COLORS   = 4;      // TEV register colors
static constexpr u32 TEX_CACHE_SIZE   = 256;    // Cached GL textures

// ---------------------------------------------------------------------------
// Vertex attribute IDs (matching GX_VA_* enum)
// ---------------------------------------------------------------------------
enum GXAttrID {
    ATTR_POS   = 0,
    ATTR_NRM   = 1,
    ATTR_CLR0  = 2,
    ATTR_CLR1  = 3,
    ATTR_TEX0  = 4,
    ATTR_TEX1  = 5,
    ATTR_TEX2  = 6,
    ATTR_TEX3  = 7,
    ATTR_TEX4  = 8,
    ATTR_TEX5  = 9,
    ATTR_TEX6  = 10,
    ATTR_TEX7  = 11,
    ATTR_COUNT = 12,
};

// ---------------------------------------------------------------------------
// Vertex descriptor entry — describes one vertex attribute's format
// ---------------------------------------------------------------------------
struct VtxDescEntry {
    u8 type;       // GX_DIRECT, GX_INDEX8, GX_INDEX16, GX_NONE
};

struct VtxFmtEntry {
    u8 compType;   // GX_POS_XYZ, GX_CLR_RGBA, GX_TEX_ST, etc.
    u8 compCnt;    // Component count (2, 3, 4)
    u8 dataType;   // GX_U8, GX_S16, GX_F32, etc.
    u8 stride;     // Byte offset within vertex
};

// ---------------------------------------------------------------------------
// Decoded vertex — stored in the accumulation buffer
// ---------------------------------------------------------------------------
struct DecodedVertex {
    f32 pos[3];
    f32 nrm[3];
    u32 color0;    // RGBA packed as 0xAABBGGRR (Wii order)
    u32 color1;
    f32 tex[8][2]; // Up to 8 texcoord sets
    bool hasPos;
    bool hasNrm;
    bool hasClr0;
    bool hasClr1;
    bool hasTex[8];
};

// ---------------------------------------------------------------------------
// TEV stage configuration
// ---------------------------------------------------------------------------
struct TEVStage {
    u8 texCoord;
    u8 texMap;
    u8 colorChannel;
    u8 colorIn[4];     // a, b, c, d
    u8 alphaIn[4];     // a, b, c, d
    u8 colorOp;
    u8 colorBias;
    u8 colorScale;
    u8 colorClamp;
    u8 colorOutReg;
    u8 alphaOp;
    u8 alphaBias;
    u8 alphaScale;
    u8 alphaClamp;
    u8 alphaOutReg;
    u8 kColorSel;
    u8 kAlphaSel;
    u8 rasSwapMode;
    u8 texSwapMode;
};

// ---------------------------------------------------------------------------
// Texture cache entry
// ---------------------------------------------------------------------------
struct TexCacheEntry {
    void* wiiData;      // Original Wii texture data pointer
    u32 glTexObj;       // GL texture object ID
    u16 width;
    u16 height;
    u8  format;         // Wii tex format
    bool valid;
};

// ---------------------------------------------------------------------------
// Main renderer state
// ---------------------------------------------------------------------------
struct RendererState {
    // --- Initialization ---
    bool initialized;
    bool glReady;

    // --- Current primitive batch ---
    bool inBegin;
    u8  currentPrim;      // GL_TRIANGLES, GL_TRIANGLE_STRIP, etc.
    u32 currentVtxFmt;    // GX_VTXFMT0..7
    u32 expectedVerts;    // nVerts from GXBegin
    u32 vertCount;        // Vertices submitted so far
    DecodedVertex* vertBuf;

    // --- Vertex format descriptors ---
    VtxDescEntry vtxDesc[ATTR_COUNT];   // Current vertex descriptor
    VtxFmtEntry vtxFmt[8][ATTR_COUNT];  // 8 vertex formats

    // --- Matrices ---
    f32 projMatrix[4][4];       // Projection matrix
    u8  projType;                // GX_PERSPECTIVE or GX_ORTHOGRAPHIC
    f32 posMatrix[MAX_POS_MTX][4][4]; // 3x4 position matrices (stored as 4x4 with last row = 0,0,0,1)
    u8  currentMtx;             // Currently selected position matrix index

    // --- Viewport / Scissor ---
    f32 vpX, vpY, vpW, vpH, vpNear, vpFar;
    u32 scX, scY, scW, scH;

    // --- Blend ---
    u8 blendMode;
    u8 blendSrcFactor;
    u8 blendDstFactor;
    u8 logicOp;
    bool colorUpdate;
    bool alphaUpdate;

    // --- Depth ---
    bool zEnable;
    u8  zFunc;
    bool zWrite;
    u8  zCompLoc;

    // --- Cull ---
    u8 cullMode;

    // --- Alpha compare ---
    u8 alphaCmp0;
    u8 alphaOp;
    u8 alphaRef0;
    u8 alphaCmp1;
    u8 alphaRef1;

    // --- Coplanar / Clip ---
    u8 coplanar;
    u8 clipMode;

    // --- TEV ---
    u8  numTevStages;
    TEVStage tevStages[MAX_TEV_STAGES];
    u32 tevColors[MAX_TEV_COLORS]; // GX_TEVREG0..2 + PREV
    u32 kColors[MAX_KCOLORS];
    bool tevDirectActive;  // Phase 34: GXSetTevDirect active
    u8  tevDirectReg;      // Phase 34: Target register for direct write

    // --- Color channels ---
    u8  numChans;
    struct {
        bool enable;
        u8 ambSrc;
        u8 matSrc;
        u8 lightMask;
        u8 diffFn;
        u8 attnFn;
        u32 matColor;
    } channels[2];

    // --- Texture state ---
    u8  numTexGens;
    u8  numTexMaps;

    // --- Texture cache ---
    TexCacheEntry texCache[TEX_CACHE_SIZE];
    u32 texCacheCount;
    u32 activeTexMap[MAX_TEXMAPS]; // GL texture bound to each texmap slot
    void* boundTexData[MAX_TEXMAPS]; // Wii data pointer bound to each slot

    // --- Lighting ---
    u8  numLights;
    struct {
        u32 color;
        f32 position[3];
        f32 dir[3];
        bool enabled;
    } lights[MAX_LIGHTS];

    // --- Fog ---
    u8  fogType;             // GX_FOG_* type (0 = none)
    f32 fogStartZ;
    f32 fogEndZ;
    f32 fogNearZ;
    f32 fogFarZ;
    u32 fogColor;            // Packed RGBA
    bool fogEnable;

    // --- TexGen ---
    struct {
        u8 type;       // 0=MAT4X3, 2=MAT4X3, 5=STRQ, 6=NORMAL, 7=NORMAL, 8=POSITION, 9=POSITION
        u8 source;     // 0=TEXCOORD0..7, 1=TEXCOORD0, 4=NRM, 5=NRM, 8=POS
        u8 matrix;     // Matrix index (0-9)
        bool normalize;
        u8 postMatrix;
    } texGens[MAX_TEXGENS];

    // --- TEV swap table (4 tables x 4 channels)
    u8 swapTable[4][4]; // [table][channel] = swap mode (0-7)

    // --- GL objects ---
    u32 defaultVAO;
    u32 dynVBO;
    u32 currentProgram;

    // --- TEV program cache ---
    struct {
        u32 program;
        u32 tevHash;    // Hash of TEV config to detect changes
        s32 mvpLoc;
        s32 texLocs[MAX_TEXMAPS];
        s32 kColorLocs[MAX_KCOLORS];
        s32 tevColorLocs[MAX_TEV_COLORS];
        s32 useTexLocs[MAX_TEXMAPS];
    } tevProgCache;

    // --- Stats ---
    u32 frameDrawCalls;
    u32 frameVertices;
};

// ---------------------------------------------------------------------------
// Public API — called from gx.hpp stubs
// ---------------------------------------------------------------------------

/// Initialize the GX renderer (call after GL context is created)
void init();

/// Shutdown the GX renderer (call before GL context is destroyed)
void shutdown();

/// Get the global renderer state
RendererState& getState();

// --- Vertex batch ---

/// Called when GXBegin is issued
void beginPrimitive(u8 primType, u32 vtxFmt, u32 nVerts);

/// Called when GXEnd is issued — flushes accumulated vertices
void endPrimitive();

/// Submit vertex position
void submitPosition(f32 x, f32 y, f32 z);
void submitPosition2(f32 x, f32 y);

/// Submit vertex normal
void submitNormal(f32 nx, f32 ny, f32 nz);

/// Submit vertex color
void submitColor(u32 rgba);
void submitColor4u8(u8 r, u8 g, u8 b, u8 a);

/// Submit texture coordinates
void submitTexCoord(u8 texIdx, f32 s, f32 t);
void submitTexCoord2u16(u8 texIdx, u16 s, u16 t);

// --- Vertex descriptor ---

void clearVtxDesc();
void setVtxDesc(u8 attr, u8 type);
void setVtxAttrFmt(u8 vtxfmt, u8 attr, u8 type, u8 compType, u8 compCnt);
void invalidateVtxCache();

// --- Matrices ---

void setProjection(const f32* mtx, u8 type);
void loadPosMtxImm(const f32* mtx, u8 id);
void setCurrentMtx(u8 id);

// --- Viewport / Scissor ---

void setViewport(f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ);
void setScissor(u32 x, u32 y, u32 w, u32 h);

// --- Blend ---

void setBlendMode(u8 mode, u8 srcFactor, u8 dstFactor, u8 logicOp);
void setColorUpdate(u8 enable);
void setAlphaUpdate(u8 enable);

// --- Depth ---

void setZMode(u8 enable, u8 func, u8 writeEnable);
void setZCompLoc(u8 before);
void setCoPlanar(u8 enable);
void setClipMode(u8 mode);

// --- Cull ---

void setCullMode(u8 mode);

// --- Alpha compare ---

void setAlphaCompare(u8 comp0, u8 op, u8 ref0, u8 comp1, u8 a1);

// --- TEV ---

void setNumTevStages(u8 n);
void setTevOrder(u8 stage, u8 texcoord, u8 texmap, u8 color);
void setTevColorIn(u8 stage, u8 a, u8 b, u8 c, u8 d);
void setTevAlphaIn(u8 stage, u8 a, u8 b, u8 c, u8 d);
void setTevColorOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 outReg);
void setTevAlphaOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 outReg);
void setTevColor(u8 reg, u32 color);
void setTevKColor(u8 sel, u32 color);
void setTevKColorSel(u8 stage, u8 sel);
void setTevKAlphaSel(u8 stage, u8 sel);
void setTevSwapModeTable(u8 table, u8 r, u8 g, u8 b, u8 a);
void setTevSwapMode(u8 stage, u8 rasSel, u8 texSel);
void setTevDirect(u8 tevReg);
void setTevOp(u8 stage, u8 mode);

// --- Color channels ---

void setNumChans(u8 n);
void setChanCtrl(u8 channel, u8 enable, u8 ambSrc, u8 matSrc,
                 u8 lightMask, u8 diffFn, u8 attnFn,
                 u8 attnA, u8 attnB, u8 attnC);
void setChanMatColor(u8 channel, u32 color);

// --- Texture ---

void setNumTexGens(u8 n);
void initTexObj(void* obj, void* data, u16 w, u16 h,
                u8 format, u8 wrapS, u8 wrapT, u8 mipmap);
void initTexObjLOD(void* obj, u8 minFilt, u8 magFilt,
                   f32 minLOD, f32 maxLOD, f32 bias,
                   u8 biasClamp, u8 edgeLODEnable, u8 aniso);
void loadTexObj(void* obj, u8 texMapID);
void invalidateTexAll();
void setTexWrapMode(u8 texMapID, u8 wrapS, u8 wrapT);

// --- Lighting ---

void setNumLights(u8 n);
void initLightColor(void* light, u32* color);
void initLightPos(void* light, f32 x, f32 y, f32 z);
void initLightDir(void* light, f32 nx, f32 ny, f32 nz);
void initSpecularDir(void* light, f32 nx, f32 ny, f32 nz);
void initLightSpot(void* light, f32 cutoff, u8 fn);
void initLightAttnA(void* light, f32 a0, f32 a1, f32 a2);
void initLightDistAttn(void* light, f32 refDist, f32 refBright, u8 fn);
void initLightAttnK(void* light, f32 k0, f32 k1, f32 k2);
void initLightAttn(void* light, f32 a0, f32 a1, f32 a2,
                   f32 k0, f32 k1, f32 k2);
void loadLightObjImm(void* light, u8 lightID);

// --- Misc ---

void flush();
void drawDone();

// --- Internal: TEV shader management ---

/// Build a GLSL fragment shader from the current TEV configuration.
/// Returns a cached program handle.
u32 buildTEVProgram();

/// Decode Wii texture format to RGBA8 and upload to a GL texture.
/// Returns the GL texture ID.
u32 decodeAndUploadTexture(void* wiiData, u16 width, u16 height, u8 format);

// --- Fog ---

void setFog(u8 type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, u32 color);
void setFogRangeAdj(u8 enable, u16 center, u16* table);
void initFogAdjTable(u16* table, u16 width, const f32 proj[4][4]);

// --- TexGen ---

void setTexCoordGen(u8 texCoordId, u8 type, u8 source, u8 matrix, u8 normalize, u8 postMatrix);

// --- Display list replay ---

void replayDisplayList(const void* list, u32 nbytes);

} // namespace GXRenderer
