#pragma once
// gx.hpp — Phase 32: Wii GX (Graphics eXtensions) bridge to GL 3.3 Core
//
// The GX hardware is the Wii's GPU interface. It operates through a command
// FIFO written via memory-mapped I/O at 0xCC000000–0xCC00FFFF.
// On PC, each GX call is forwarded to gx_renderer.cpp which translates
// it to the equivalent OpenGL 3.3 Core command.
//
// Architecture:
//   GENESIS library (compiled code) → calls GX functions (this header)
//   → extern "C" declarations → resolved at link time by gx_renderer.cpp
//
// This header provides type definitions, enums, and extern "C" function
// declarations for every GX function referenced in the decompiled codebase.
// All functions are non-inline externs resolved by the platform layer.

#include "../rk_types.h"
#include <cstring>

// ============================================================================
// GX types
// ============================================================================

// GXColor — 32-bit RGBA color packed as 0xAABBGGRR (Wii native order).
typedef u32 GXColor;

// GXTexObj — texture object (opaque, 0x20 = 32 bytes).
// The renderer stores RealGXTexObj fields in this space.
typedef struct { char _[0x20]; } GXTexObj;

// GXLightObj — light object (opaque, 0x40 = 64 bytes).
// The renderer stores light parameters in this space.
typedef struct { char _[0x40]; } GXLightObj;

// GXFifoObj — FIFO object for GX command buffering.
typedef struct { char _[0x80]; } GXFifoObj;

// GXRenderModeObj — describes the video output mode (NTSC, PAL, etc.).
// This struct layout matches the Wii SDK and is used by eggVideo.cpp.
typedef struct GXRenderModeObj {
    int tv_mode;       // 0x00: VITVMode
    u16 fb_width;      // 0x04: framebuffer width
    u16 efb_height;    // 0x06: EFB (render target) height
    u16 xfb_height;    // 0x08: XFB (display) height
    u16 vi_x;          // 0x0A: X origin on TV
    u16 vi_y;          // 0x0C: Y origin on TV
    u16 vi_width;      // 0x0E: display width
    u16 vi_height;     // 0x10: display height
    int vi_xfb;        // 0x14: field display mode
    u8 field;          // 0x18: field select
    u8 aa;             // 0x19: anti-aliasing mode
    u8 sample[12][2];  // 0x1A: AA sample positions
    u8 vert_filter[7]; // 0x32: vertical filter coefficients
} GXRenderModeObj;

// WGPIPE — hardware write port for GX commands (memory-mapped I/O).
// On PC: no longer needed since GX calls go directly to the renderer.
// Kept as a stub for any code that references WGPIPE directly.
namespace shim_gx_detail {
    union WGPipeReg {
        u8  c;
        u16 s;
        u32 i;
        f32 f;
    };
    static inline WGPipeReg& getPipe() {
        static WGPipeReg sPipe = {};
        return sPipe;
    }
} // namespace shim_gx_detail
#define WGPIPE (shim_gx_detail::getPipe())

// ============================================================================
// GX enums — used as parameters throughout the codebase
// ============================================================================

// GX primitive types (for GXBegin)
enum {
    GX_QUADS     = 0x80,
    GX_TRIANGLES = 0x90,
    GX_TRIANGLE_STRIP = 0x98,
    GX_TRIANGLE_FAN   = 0xA0,
    GX_LINES     = 0xA8,
    GX_LINE_STRIP = 0xB0,
    GX_POINTS    = 0xB8,
};

// GX vertex format indices
enum {
    GX_VTXFMT0 = 0, GX_VTXFMT1 = 1, GX_VTXFMT2 = 2, GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4, GX_VTXFMT5 = 5, GX_VTXFMT6 = 6, GX_VTXFMT7 = 7,
};

// GX vertex attribute IDs
enum {
    GX_VA_POS = 0, GX_VA_NRM = 1, GX_VA_CLR0 = 2, GX_VA_CLR1 = 3,
    GX_VA_TEX0 = 4, GX_VA_TEX1 = 5, GX_VA_TEX2 = 6, GX_VA_TEX3 = 7,
    GX_VA_TEX4 = 8, GX_VA_TEX5 = 9, GX_VA_TEX6 = 10, GX_VA_TEX7 = 11,
};

// GX attribute types (for GXSetVtxDesc)
enum { GX_DIRECT = 0, GX_INDEX8 = 1, GX_INDEX16 = 2, GX_NONE = 255 };

// GX position types
enum { GX_POS_XYZ = 0, GX_POS_XY = 1, GX_POS_XYZW = 2 };

// GX color types
enum { GX_CLR_RGBA = 0, GX_CLR_RGB = 1 };

// GX texture coordinate types
enum { GX_TEX_ST = 0, GX_TEX_S = 1, GX_TEX_UV = 2 };

// GX normal types
enum { GX_NRM_XYZ = 0, GX_NRM_NBT = 1, GX_NRM_NBT3 = 2 };

// GX data types for attributes
enum {
    GX_U8 = 0, GX_S8 = 1, GX_U16 = 2, GX_S16 = 3, GX_F32 = 4,
    GX_RGBA8 = 5, GX_RGB8 = 6,
};

// GX color channel IDs
enum { GX_COLOR0A0 = 0, GX_COLOR1A1 = 1 };

// GX TEV stage IDs
enum {
    GX_TEVSTAGE0 = 0, GX_TEVSTAGE1 = 1, GX_TEVSTAGE2 = 2, GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4, GX_TEVSTAGE5 = 5, GX_TEVSTAGE6 = 6, GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8, GX_TEVSTAGE9 = 9, GX_TEVSTAGE10 = 10, GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12, GX_TEVSTAGE13 = 13, GX_TEVSTAGE14 = 14, GX_TEVSTAGE15 = 15,
};

// GX TEV register IDs
enum { GX_TEVREG0 = 0, GX_TEVREG1 = 1, GX_TEVREG2 = 2, GX_TEVPREV = 3 };

// GX TEV K-color register sel
enum {
    GX_TEVKCSEL_0 = 0, GX_TEVKCSEL_1 = 1, GX_TEVKCSEL_2 = 2, GX_TEVKCSEL_3 = 3,
    GX_TEVKCSEL_4 = 4, GX_TEVKCSEL_5 = 5, GX_TEVKCSEL_6 = 6, GX_TEVKCSEL_7 = 7,
    GX_TEVKASEL_0 = 0, GX_TEVKASEL_1 = 1, GX_TEVKASEL_2 = 2, GX_TEVKASEL_3 = 3,
};

// GX TEV color/alpha sources
enum {
    GX_CC_ZERO = 0, GX_CC_ONE = 1, GX_CC_RASC = 4, GX_CC_GASC = 5,
    GX_CC_CPREV = 6, GX_CC_APREV = 7, GX_CC_TEXC = 8, GX_CC_TEXA = 9,
    GX_CC_TEXC_K = 12, GX_CC_ONE_K = 14, GX_CC_HALF_K = 15, GX_CC_KONST = 16,
    GX_CC_A0 = 20, GX_CC_A1 = 21, GX_CC_A2 = 22,
};

enum {
    GX_CA_ZERO = 0, GX_CA_ONE = 1, GX_CA_RASA = 4, GX_CA_GASA = 5,
    GX_CA_APREV = 6, GX_CA_TEXA = 9, GX_CA_KONST = 16,
    GX_CA_A0 = 20, GX_CA_A1 = 21, GX_CA_A2 = 22,
};

// GX TEV operations
enum {
    GX_TEV_ADD = 0, GX_TEV_SUB = 1, GX_TEV_COMP_R8_GT = 8, GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10, GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_B24_GT = 12, GX_TEV_COMP_B24_EQ = 13,
    GX_TEV_MUL = 4, GX_TEV_ADDHALF = 5, GX_TEV_SIGNED_ADD = 6,
};

// GX TEV modes (for GXSetTevOp)
enum {
    GX_MODULATE = 0, GX_DECAL = 1, GX_BLEND = 2, GX_REPLACE = 3, GX_PASSCLR = 4,
};

// GX blend modes
enum { GX_BM_NONE = 0, GX_BM_BLEND = 1, GX_BM_LOGIC = 2, GX_BM_SUBTRACT = 3 };

// GX blend factors
enum {
    GX_BL_ZERO = 0, GX_BL_ONE = 1, GX_BL_SRCALPHA = 2, GX_BL_INVSRCALPHA = 3,
    GX_BL_DSTALPHA = 4, GX_BL_INVDSTALPHA = 5, GX_BL_SRCCLR = 6, GX_BL_INVSRCCLR = 7,
};

// GX logic ops
enum {
    GX_LO_CLEAR = 0, GX_LO_AND = 1, GX_LO_REV_AND = 2, GX_LO_COPY = 3,
    GX_LO_INV_AND = 4, GX_LO_NOOP = 5, GX_LO_XOR = 6, GX_LO_OR = 7,
    GX_LO_NOR = 8, GX_LO_EQUIV = 9, GX_LO_INV = 10, GX_LO_REV_OR = 11,
    GX_LO_INV_COPY = 12, GX_LO_INV_OR = 13, GX_LO_NAND = 14, GX_LO_SET = 15,
};

// GX compare functions
enum {
    GX_NEVER = 0, GX_LESS = 1, GX_EQUAL = 2, GX_LEQUAL = 3,
    GX_GREATER = 4, GX_NEQUAL = 5, GX_GEQUAL = 6, GX_ALWAYS = 7,
};

// GX cull modes
enum { GX_CULL_NONE = 0, GX_CULL_FRONT = 1, GX_CULL_BACK = 2, GX_CULL_ALL = 3 };

// GX projection types
enum { GX_PERSPECTIVE = 0, GX_ORTHOGRAPHIC = 1 };

// GX source register selections
enum { GX_SRC_REG = 0, GX_SRC_VTX = 1 };

// GX diffuse functions
enum { GX_DF_NONE = 0, GX_DF_CLAMP = 1, GX_DF_SIGMA = 2 };

// GX texcoord / texmap null constants
enum { GX_TEXCOORD_NULL = 0xFF, GX_TEXMAP_NULL = 0xFF };

// GX enable/disable
enum { GX_DISABLE = 0, GX_ENABLE = 1, GX_TRUE = 1, GX_FALSE = 0 };

// GX TEV swap modes
enum {
    GX_TEV_SWAP0 = 0, GX_TEV_SWAP1 = 1, GX_TEV_SWAP2 = 2, GX_TEV_SWAP3 = 3,
    GX_TEV_SWAP4 = 4, GX_TEV_SWAP5 = 5, GX_TEV_SWAP6 = 6, GX_TEV_SWAP7 = 7,
};

// GX fog types
enum {
    GX_FOG_NONE = 0, GX_FOG_PERSP_LIN = 2, GX_FOG_PERSP_EXP = 4,
    GX_FOG_PERSP_EXP2 = 5, GX_FOG_PERSP_REVEXP = 6, GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN = 10, GX_FOG_ORTHO_EXP = 12, GX_FOG_ORTHO_EXP2 = 13,
    GX_FOG_ORTHO_REVEXP = 14, GX_FOG_ORTHO_REVEXP2 = 15,
    GX_FOG_LIN = GX_FOG_PERSP_LIN, GX_FOG_EXP = GX_FOG_PERSP_EXP,
    GX_FOG_EXP2 = GX_FOG_PERSP_EXP2, GX_FOG_REVEXP = GX_FOG_PERSP_REVEXP,
    GX_FOG_REVEXP2 = GX_FOG_PERSP_REVEXP2,
};

// GX spot function
typedef int GXSpotFn;
enum {
    GX_SP_OFF = 0, GX_SP_FLAT = 1, GX_SP_COS = 2, GX_SP_COS2 = 3,
    GX_SP_SHARP = 4, GX_SP_RING1 = 5, GX_SP_RING2 = 6,
};

// GX distance attenuation function
typedef int GXDistAttnFn;
enum { GX_DA_OFF = 0, GX_DA_GENTLE = 1, GX_DA_MEDIUM = 2, GX_DA_STEEP = 3 };

// GX tex filter modes
enum {
    GX_TF_NEAREST = 0, GX_TF_LINEAR = 1, GX_TF_NEAR_MIP_NEAR = 2,
    GX_TF_LIN_MIP_NEAR = 3, GX_TF_NEAR_MIP_LIN = 4, GX_TF_LIN_MIP_LIN = 5,
};

// GX tex wrap modes
enum { GX_WT_REPEAT = 0, GX_WT_CLAMP = 1, GX_WT_MIRROR = 2 };

// GX tex format
enum {
    GX_TF_I4 = 0x00, GX_TF_I8 = 0x01, GX_TF_IA4 = 0x02, GX_TF_IA8 = 0x03,
    GX_TF_RGB565 = 0x04, GX_TF_RGB5A3 = 0x05, GX_TF_RGBA8 = 0x06,
    GX_TF_CI4 = 0x08, GX_TF_CI8 = 0x09, GX_TF_CI14X2 = 0x0A, GX_TF_CMPR = 0x0E,
};

// ============================================================================
// GX function declarations — resolved by gx_renderer.cpp at link time
// ============================================================================
// Phase 32: All GX functions are now extern "C" non-inline declarations.
// They are implemented in src/platform/gx_renderer.cpp which translates
// each GX call to the equivalent OpenGL 3.3 Core command.
//
// The GENESIS library (mkwii-genesis.a) calls these functions; they are
// resolved when linking the final mkwii-port executable.
// ============================================================================

extern "C" {

// --- Init / Flush / Draw done ---

GXFifoObj* GXInit(void* buf, u32 size);
void GXFlush(void);
void GXDrawDone(void);
void GXSetDrawSync(u16 token);
typedef void (*GXDrawSyncCallback)(u16 token);
void GXSetDrawSyncCallback(GXDrawSyncCallback cb);
void* GXGetCurrentGXThread(void);

// --- Vertex specification ---

void GXBegin(int prim, int fmt, int nVerts);

// GXEnd — ends the current primitive.
// Implemented as an extern "C" function (not a macro) for Phase 32.
void GXEnd_impl(void);

// GXPosition3f32 — submit a 3D position for the current vertex.
void GXPosition3f32(f32 x, f32 y, f32 z);

// GXPosition2f32 — submit a 2D position.
void GXPosition2f32(f32 x, f32 y);

// GXColor1u32 — submit a packed RGBA color.
void GXColor1u32(u32 c);

// GXColor4u8 — submit separate RGBA channels.
void GXColor4u8(u8 r, u8 g, u8 b, u8 a);

// GXTexCoord2f32 — submit 2D texture coordinates (float).
void GXTexCoord2f32(f32 s, f32 t);

// GXTexCoord2u16 — submit 2D texture coordinates (u16 normalized).
void GXTexCoord2u16(u16 s, u16 t);

// GXNormal3f32 — submit a normal vector.
void GXNormal3f32(f32 nx, f32 ny, f32 nz);

// GXNormal3s16 — submit a normal vector (s16 fixed-point).
void GXNormal3s16(s16 nx, s16 ny, s16 nz);

// --- Vertex descriptor / attribute format ---

void GXClearVtxDesc(void);
void GXSetVtxDesc(int attr, int type);
void GXSetVtxAttrFmt(int vtxfmt, int attr, int type, int compType, int compCnt);
void GXInvalidateVtxCache(void);

// --- Texture generation ---

void GXSetNumTexGens(int nTexGens);
void GXSetTexCoordGen(int texCoordId, int type, int source, int matrix, int normalize, int postMatrix);

// --- Color channels ---

void GXSetNumChans(int nChans);
void GXSetChanCtrl(int channel, int enable, int ambSrc, int matSrc,
                   int lightMask, int diffFn, int attnFn, int attnA, int attnB, int attnC);
void GXSetChanMatColor(int channel, GXColor color);

// --- Indirect texture stages ---

void GXSetNumIndStages(int nStages);

// --- TEV (Texture Environment) ---

void GXSetNumTevStages(int nStages);
void GXSetTevOp(int stage, int mode);
void GXSetTevOrder(int stage, int texcoord, int texmap, int color);
void GXSetTevColorIn(int stage, int a, int b, int c, int d);
void GXSetTevAlphaIn(int stage, int a, int b, int c, int d);
void GXSetTevColorOp(int stage, int op, int bias, int scale, int clamp, int outReg);
void GXSetTevAlphaOp(int stage, int op, int bias, int scale, int clamp, int outReg);
void GXSetTevColor(int reg, GXColor color);
void GXSetTevKColor(int sel, GXColor color);
void GXSetTevKColorSel(int stage, int sel);
void GXSetTevKAlphaSel(int stage, int sel);
void GXSetTevSwapModeTable(int table, int r, int g, int b, int a);
void GXSetTevSwapMode(int stage, int rasSel, int texSel);
void GXSetTevDirect(int tevReg);

// --- Blend mode ---

void GXSetBlendMode(int mode, int srcFactor, int dstFactor, int logicOp);
void GXSetColorUpdate(int enable);
void GXSetAlphaUpdate(int enable);

// --- Depth ---

void GXSetZMode(int enable, int func, int writeEnable);
void GXSetZCompLoc(u8 before);
void GXSetCoPlanar(u8 enable);
void GXSetClipMode(u8 mode);

// --- Rasterization ---

void GXSetCullMode(int mode);
void GXSetLineWidth(u8 width, int offset);

// --- Projection / viewport / scissor ---

void GXSetProjection(const f32* mtx, int type);
void GXLoadPosMtxImm(const f32* mtx, int id);
void GXSetCurrentMtx(int id);
void GXSetViewport(f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ);
void GXSetScissor(u32 x, u32 y, u32 w, u32 h);

// --- Display copy (EFB → XFB) ---

void GXCopyDisp(void* xfb, int update);
void GXSetDispCopySrc(u32 left, u32 top, u16 width, u16 height);
void GXSetDispCopyDst(u16 width, u16 height);
void GXSetDispCopyYScale(f32 yScale);
f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight);
u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale);

// --- FIFO management ---

void GXGetGPFifo(GXFifoObj* fifo);
void GXGetFifoPtrs(GXFifoObj* fifo, void** readPtr, void** writePtr);
void GXGetGPStatus(u8* overhi, u8* underlow, u8* readIdle,
                   u8* cmdIdle, u8* breakPt);
void GXEnableBreakPt(void* ptr);
void GXDisableBreakPt(void);

// --- Texture objects ---

void GXInitTexObj(GXTexObj* obj, void* data, u16 width, u16 height,
                  int format, int wrapS, int wrapT, int mipmap);
void GXInitTexObjLOD(GXTexObj* obj, int minFilt, int magFilt,
                      f32 minLOD, f32 maxLOD, f32 bias, int biasClamp,
                      int edgeLODEnable, int aniso);
void GXLoadTexObj(GXTexObj* obj, int texMapID);
void GXInvalidateTexAll(void);
void GXSetTexWrapMode(int texMapID, int wrapS, int wrapT);

// --- Lighting ---

void GXInitLightColor(GXLightObj* light, GXColor* color);
void GXInitLightPos(GXLightObj* light, f32 x, f32 y, f32 z);
void GXInitLightDir(GXLightObj* light, f32 nx, f32 ny, f32 nz);
void GXInitSpecularDir(GXLightObj* light, f32 nx, f32 ny, f32 nz);
void GXInitLightSpot(GXLightObj* light, f32 cutoff, GXSpotFn fn);
void GXInitLightAttnA(GXLightObj* light, f32 a0, f32 a1, f32 a2);
void GXInitLightDistAttn(GXLightObj* light, f32 refDist, f32 refBrightness,
                          GXDistAttnFn fn);
void GXInitLightAttnK(GXLightObj* light, f32 k0, f32 k1, f32 k2);
void GXInitLightAttn(GXLightObj* light, f32 a0, f32 a1, f32 a2,
                      f32 k0, f32 k1, f32 k2);
void GXLoadLightObjImm(GXLightObj* light, int lightID);
void GXSetNumLights(int nLights);

// --- Fog ---

void GXSetFog(int type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color);
void GXSetFogRangeAdj(u8 enable, u16 center, u16* table);
void GXInitFogAdjTable(u16* table, u16 width, const f32 proj[4][4]);

// --- Alpha compare ---

void GXSetAlphaCompare(int comp0, int op, int ref0, int comp1, int a1);

// --- Display list ---

void GXCallDisplayList(const void* list, u32 nbytes);

// --- Misc GX pipe commands ---

void GXCmd1u8(u8 v);
void GXCmd1u16(u16 v);
void GXCmd1u32(u32 v);

} // extern "C"

// ============================================================================
// GXEnd macro override — call the extern "C" implementation
// ============================================================================
// In the original Wii SDK, GXEnd() is a macro: #define GXEnd() (void)0
// Phase 32: redefine it to call the real renderer's endPrimitive().
// ============================================================================
#ifdef GXEnd
#undef GXEnd
#endif
#define GXEnd() GXEnd_impl()

// ============================================================================
// Additional GX functions (Phase 9 additions)
// ============================================================================

extern "C" {
void GXSetAlphaCompare(int comp0, int op, int ref0, int comp1, int a1);
void GXSetZCompLoc(u8 before);
void GXSetCoPlanar(u8 enable);
void GXSetClipMode(u8 mode);
}

// Suppress unused-parameter warnings for WGPIPE (only used in display list code)
// In Phase 32, display list code still writes to WGPIPE; those writes are
// captured and ignored since display lists are replayed through GXCallDisplayList
// which will be implemented in a future phase.
