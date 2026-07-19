#pragma once
// gx.hpp — Wii GX (Graphics eXtensions) shims
// The GX hardware is the Wii's GPU interface. It operates through a command
// FIFO written via memory-mapped I/O at 0xCC000000–0xCC00FFFF.
// On PC, all GX commands are no-ops. A real renderer will replace these.
//
// This header provides type definitions, enums, and inline stubs for every
// GX function referenced in the decompiled codebase.

#include "../rk_types.h"
#include <cstring>

// ============================================================================
// GX types
// ============================================================================

// GXColor — 32-bit RGBA color packed as 0x00RRGGBB.
typedef u32 GXColor;

// GXTexObj — texture object (opaque, ~32 bytes).
typedef struct { char _[0x20]; } GXTexObj;

// GXLightObj — light object (opaque, ~64 bytes).
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
// On PC: volatile writes to a dummy buffer.
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
    GX_VTXFMT0 = 0,
    GX_VTXFMT1 = 1,
    GX_VTXFMT2 = 2,
    GX_VTXFMT3 = 3,
    GX_VTXFMT4 = 4,
    GX_VTXFMT5 = 5,
    GX_VTXFMT6 = 6,
    GX_VTXFMT7 = 7,
};

// GX vertex attribute IDs
enum {
    GX_VA_POS = 0,
    GX_VA_NRM = 1,
    GX_VA_CLR0 = 2,
    GX_VA_CLR1 = 3,
    GX_VA_TEX0 = 4,
    GX_VA_TEX1 = 5,
    GX_VA_TEX2 = 6,
    GX_VA_TEX3 = 7,
    GX_VA_TEX4 = 8,
    GX_VA_TEX5 = 9,
    GX_VA_TEX6 = 10,
    GX_VA_TEX7 = 11,
};

// GX attribute types (for GXSetVtxDesc)
enum {
    GX_DIRECT = 0,
    GX_INDEX8 = 1,
    GX_INDEX16 = 2,
    GX_NONE = 255,
};

// GX position types
enum {
    GX_POS_XYZ  = 0,
    GX_POS_XY   = 1,
    GX_POS_XYZW = 2,
};

// GX color types
enum {
    GX_CLR_RGBA = 0,
    GX_CLR_RGB  = 1,
};

// GX texture coordinate types
enum {
    GX_TEX_ST    = 0,
    GX_TEX_S     = 1,
    GX_TEX_UV    = 2,
};

// GX normal types
enum {
    GX_NRM_XYZ  = 0,
    GX_NRM_NBT  = 1,
    GX_NRM_NBT3 = 2,
};

// GX data types for attributes
enum {
    GX_U8  = 0,
    GX_S8  = 1,
    GX_U16 = 2,
    GX_S16 = 3,
    GX_F32 = 4,
    GX_RGBA8 = 5,
    GX_RGB8 = 6,
};

// GX color channel IDs
enum {
    GX_COLOR0A0 = 0,
    GX_COLOR1A1 = 1,
};

// GX TEV stage IDs
enum {
    GX_TEVSTAGE0 = 0,
    GX_TEVSTAGE1 = 1,
    GX_TEVSTAGE2 = 2,
    GX_TEVSTAGE3 = 3,
    GX_TEVSTAGE4 = 4,
    GX_TEVSTAGE5 = 5,
    GX_TEVSTAGE6 = 6,
    GX_TEVSTAGE7 = 7,
    GX_TEVSTAGE8 = 8,
    GX_TEVSTAGE9 = 9,
    GX_TEVSTAGE10 = 10,
    GX_TEVSTAGE11 = 11,
    GX_TEVSTAGE12 = 12,
    GX_TEVSTAGE13 = 13,
    GX_TEVSTAGE14 = 14,
    GX_TEVSTAGE15 = 15,
};

// GX TEV register IDs
enum {
    GX_TEVREG0 = 0,
    GX_TEVREG1 = 1,
    GX_TEVREG2 = 2,
    GX_TEVPREV = 3,
};

// GX TEV K-color register sel
enum {
    GX_TEVKCSEL_0 = 0,
    GX_TEVKCSEL_1 = 1,
    GX_TEVKCSEL_2 = 2,
    GX_TEVKCSEL_3 = 3,
    GX_TEVKCSEL_4 = 4,
    GX_TEVKCSEL_5 = 5,
    GX_TEVKCSEL_6 = 6,
    GX_TEVKCSEL_7 = 7,
    GX_TEVKASEL_0 = 0,
    GX_TEVKASEL_1 = 1,
    GX_TEVKASEL_2 = 2,
    GX_TEVKASEL_3 = 3,
};

// GX TEV color/alpha sources
enum {
    GX_CC_ZERO     = 0,
    GX_CC_ONE      = 1,
    GX_CC_RASC     = 4,
    GX_CC_GASC     = 5,
    GX_CC_CPREV    = 6,
    GX_CC_APREV    = 7,
    GX_CC_TEXC     = 8,
    GX_CC_TEXA     = 9,
    GX_CC_TEXC_K   = 12,
    GX_CC_ONE_K    = 14,
    GX_CC_HALF_K   = 15,
    GX_CC_KONST    = 16,
    GX_CC_A0       = 20,
    GX_CC_A1       = 21,
    GX_CC_A2       = 22,
};

enum {
    GX_CA_ZERO     = 0,
    GX_CA_ONE      = 1,
    GX_CA_RASA     = 4,
    GX_CA_GASA     = 5,
    GX_CA_APREV    = 6,
    GX_CA_TEXA     = 9,
    GX_CA_KONST    = 16,
    GX_CA_A0       = 20,
    GX_CA_A1       = 21,
    GX_CA_A2       = 22,
};

// GX TEV operations
enum {
    GX_TEV_ADD     = 0,
    GX_TEV_SUB     = 1,
    GX_TEV_COMP_R8_GT = 8,
    GX_TEV_COMP_R8_EQ = 9,
    GX_TEV_COMP_GR16_GT = 10,
    GX_TEV_COMP_GR16_EQ = 11,
    GX_TEV_COMP_B24_GT = 12,
    GX_TEV_COMP_B24_EQ = 13,
    GX_TEV_MUL    = 4,
    GX_TEV_ADDHALF = 5,
    GX_TEV_SIGNED_ADD = 6,
};

// GX TEV modes (for GXSetTevOp)
enum {
    GX_MODULATE    = 0,
    GX_DECAL       = 1,
    GX_BLEND       = 2,
    GX_REPLACE     = 3,
    GX_PASSCLR     = 4,
};

// GX blend modes
enum {
    GX_BM_NONE    = 0,
    GX_BM_BLEND   = 1,
    GX_BM_LOGIC   = 2,
    GX_BM_SUBTRACT = 3,
};

// GX blend factors
enum {
    GX_BL_ZERO         = 0,
    GX_BL_ONE          = 1,
    GX_BL_SRCALPHA     = 2,
    GX_BL_INVSRCALPHA  = 3,
    GX_BL_DSTALPHA     = 4,
    GX_BL_INVDSTALPHA  = 5,
    GX_BL_SRCCLR       = 6,
    GX_BL_INVSRCCLR    = 7,
};

// GX logic ops
enum {
    GX_LO_CLEAR    = 0,
    GX_LO_AND      = 1,
    GX_LO_REV_AND  = 2,
    GX_LO_COPY     = 3,
    GX_LO_INV_AND  = 4,
    GX_LO_NOOP     = 5,
    GX_LO_XOR      = 6,
    GX_LO_OR       = 7,
    GX_LO_NOR      = 8,
    GX_LO_EQUIV    = 9,
    GX_LO_INV      = 10,
    GX_LO_REV_OR   = 11,
    GX_LO_INV_COPY = 12,
    GX_LO_INV_OR   = 13,
    GX_LO_NAND     = 14,
    GX_LO_SET      = 15,
};

// GX compare functions
enum {
    GX_NEVER    = 0,
    GX_LESS     = 1,
    GX_EQUAL    = 2,
    GX_LEQUAL   = 3,
    GX_GREATER  = 4,
    GX_NEQUAL   = 5,
    GX_GEQUAL   = 6,
    GX_ALWAYS   = 7,
};

// GX cull modes
enum {
    GX_CULL_NONE  = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_ALL   = 3,
};

// GX projection types
enum {
    GX_PERSPECTIVE  = 0,
    GX_ORTHOGRAPHIC = 1,
};

// GX source register selections
enum {
    GX_SRC_REG  = 0,
    GX_SRC_VTX  = 1,
};

// GX diffuse functions
enum {
    GX_DF_NONE    = 0,
    GX_DF_CLAMP   = 1,
    GX_DF_SIGMA   = 2,
};

// GX texcoord / texmap null constants
enum {
    GX_TEXCOORD_NULL = 0xFF,
    GX_TEXMAP_NULL   = 0xFF,
};

// GX enable/disable
enum {
    GX_DISABLE = 0,
    GX_ENABLE  = 1,
    GX_TRUE    = 1,
    GX_FALSE   = 0,
};

// GX TEV swap modes
enum {
    GX_TEV_SWAP0 = 0,
    GX_TEV_SWAP1 = 1,
    GX_TEV_SWAP2 = 2,
    GX_TEV_SWAP3 = 3,
    GX_TEV_SWAP4 = 4,
    GX_TEV_SWAP5 = 5,
    GX_TEV_SWAP6 = 6,
    GX_TEV_SWAP7 = 7,
};

// GX fog types
enum {
    GX_FOG_NONE        = 0,
    GX_FOG_PERSP_LIN   = 2,
    GX_FOG_PERSP_EXP   = 4,
    GX_FOG_PERSP_EXP2  = 5,
    GX_FOG_PERSP_REVEXP  = 6,
    GX_FOG_PERSP_REVEXP2 = 7,
    GX_FOG_ORTHO_LIN   = 10,
    GX_FOG_ORTHO_EXP   = 12,
    GX_FOG_ORTHO_EXP2  = 13,
    GX_FOG_ORTHO_REVEXP  = 14,
    GX_FOG_ORTHO_REVEXP2 = 15,
    // Aliases
    GX_FOG_LIN     = GX_FOG_PERSP_LIN,
    GX_FOG_EXP     = GX_FOG_PERSP_EXP,
    GX_FOG_EXP2    = GX_FOG_PERSP_EXP2,
    GX_FOG_REVEXP  = GX_FOG_PERSP_REVEXP,
    GX_FOG_REVEXP2 = GX_FOG_PERSP_REVEXP2,
};

// GX spot function
typedef int GXSpotFn;
enum {
    GX_SP_OFF    = 0,
    GX_SP_FLAT   = 1,
    GX_SP_COS    = 2,
    GX_SP_COS2   = 3,
    GX_SP_SHARP  = 4,
    GX_SP_RING1  = 5,
    GX_SP_RING2  = 6,
};

// GX distance attenuation function
typedef int GXDistAttnFn;
enum {
    GX_DA_OFF    = 0,
    GX_DA_GENTLE = 1,
    GX_DA_MEDIUM = 2,
    GX_DA_STEEP  = 3,
};

// GX tex filter modes
enum {
    GX_TF_NEAREST  = 0,
    GX_TF_LINEAR   = 1,
    GX_TF_NEAR_MIP_NEAR = 2,
    GX_TF_LIN_MIP_NEAR  = 3,
    GX_TF_NEAR_MIP_LIN  = 4,
    GX_TF_LIN_MIP_LIN   = 5,
};

// GX tex wrap modes
enum {
    GX_WT_REPEAT  = 0,
    GX_WT_CLAMP   = 1,
    GX_WT_MIRROR  = 2,
};

// GX tex format
enum {
    GX_TF_I4    = 0x00,
    GX_TF_I8    = 0x01,
    GX_TF_IA4   = 0x02,
    GX_TF_IA8   = 0x03,
    GX_TF_RGB565  = 0x04,
    GX_TF_RGB5A3  = 0x05,
    GX_TF_RGBA8   = 0x06,
    GX_TF_CI4     = 0x08,
    GX_TF_CI8     = 0x09,
    GX_TF_CI14X2  = 0x0A,
    GX_TF_CMPR    = 0x0E,
};

// ============================================================================
// GX function stubs — all no-ops on PC
// ============================================================================

extern "C" {

// --- Init / Flush / Draw done ---

// GXInit — initializes the GX subsystem with a command FIFO buffer.
inline GXFifoObj* GXInit(void* buf, u32 size) {
    (void)buf; (void)size;
    return reinterpret_cast<GXFifoObj*>(buf);
}

// GXFlush — flushes pending commands to the hardware.
inline void GXFlush(void) {}

// GXDrawDone — waits for all previously issued commands to complete.
inline void GXDrawDone(void) {}

// GXSetDrawSync — inserts a token that can be polled via GXGetDrawSync.
inline void GXSetDrawSync(u16 token) { (void)token; }

// GXSetDrawSyncCallback — sets a callback invoked when a draw sync token completes.
typedef void (*GXDrawSyncCallback)(u16 token);
inline void GXSetDrawSyncCallback(GXDrawSyncCallback cb) { (void)cb; }

// GXGetCurrentGXThread — returns a handle to the current GX thread.
inline void* GXGetCurrentGXThread(void) { return nullptr; }

// --- Vertex specification ---

// GXBegin — begins a primitive. All vertex data follows until GXEnd().
inline void GXBegin(int prim, int fmt, int nVerts) {
    (void)prim; (void)fmt; (void)nVerts;
}

// GXEnd — ends the current primitive.
// In the SDK this is a macro: #define GXEnd() (void)0
#ifndef GXEnd
#define GXEnd() ((void)0)
#endif

// GXPosition3f32 — submit a 3D position for the current vertex.
inline void GXPosition3f32(f32 x, f32 y, f32 z) {
    WGPIPE.f = x; WGPIPE.f = y; WGPIPE.f = z;
}

// GXPosition2f32 — submit a 2D position.
inline void GXPosition2f32(f32 x, f32 y) {
    WGPIPE.f = x; WGPIPE.f = y;
}

// GXColor1u32 — submit a packed RGBA color.
inline void GXColor1u32(u32 c) { WGPIPE.i = c; }

// GXTexCoord2f32 — submit 2D texture coordinates (float).
inline void GXTexCoord2f32(f32 s, f32 t) {
    WGPIPE.f = s; WGPIPE.f = t;
}

// GXTexCoord2u16 — submit 2D texture coordinates (u16 normalized).
inline void GXTexCoord2u16(u16 s, u16 t) {
    WGPIPE.s = s; WGPIPE.s = t;
}

// --- Vertex descriptor / attribute format ---

// GXClearVtxDesc — resets all vertex attribute descriptors to GX_NONE.
inline void GXClearVtxDesc(void) {}

// GXSetVtxDesc — sets the descriptor for one vertex attribute.
inline void GXSetVtxDesc(int attr, int type) { (void)attr; (void)type; }

// GXSetVtxAttrFmt — configures the data format for a vertex attribute in a vtx fmt.
inline void GXSetVtxAttrFmt(int vtxfmt, int attr, int type, int compType, int compCnt) {
    (void)vtxfmt; (void)attr; (void)type; (void)compType; (void)compCnt;
}

// GXInvalidateVtxCache — invalidates the hardware vertex cache.
inline void GXInvalidateVtxCache(void) {}

// --- Texture generation ---

// GXSetNumTexGens — sets the number of texture coordinate generators.
inline void GXSetNumTexGens(int nTexGens) { (void)nTexGens; }

// --- Color channels ---

// GXSetNumChans — sets the number of color channels (0, 1, or 2).
inline void GXSetNumChans(int nChans) { (void)nChans; }

// GXSetChanCtrl — configures a color/alpha channel's lighting and material settings.
inline void GXSetChanCtrl(int channel, int enable, int ambSrc, int matSrc,
                          int lightMask, int diffFn, int attnFn, int attnA, int attnB, int attnC) {
    (void)channel; (void)enable; (void)ambSrc; (void)matSrc;
    (void)lightMask; (void)diffFn; (void)attnFn;
    (void)attnA; (void)attnB; (void)attnC;
}

// GXSetChanMatColor — sets the material color/alpha for a channel.
inline void GXSetChanMatColor(int channel, GXColor color) {
    (void)channel; (void)color;
}

// --- Indirect texture stages ---

// GXSetNumIndStages — sets the number of indirect texture stages.
inline void GXSetNumIndStages(int nStages) { (void)nStages; }

// --- TEV (Texture Environment) ---

// GXSetNumTevStages — sets the number of TEV stages.
inline void GXSetNumTevStages(int nStages) { (void)nStages; }

// GXSetTevOp — sets a TEV stage to a common mode (modulate, decal, etc.).
inline void GXSetTevOp(int stage, int mode) { (void)stage; (void)mode; }

// GXSetTevOrder — configures the texcoord/texmap/color inputs for a TEV stage.
inline void GXSetTevOrder(int stage, int texcoord, int texmap, int color) {
    (void)stage; (void)texcoord; (void)texmap; (void)color;
}

// GXSetTevColorIn — sets the 4 color inputs (a, b, c, d) for a TEV stage.
inline void GXSetTevColorIn(int stage, int a, int b, int c, int d) {
    (void)stage; (void)a; (void)b; (void)c; (void)d;
}

// GXSetTevAlphaIn — sets the 4 alpha inputs for a TEV stage.
inline void GXSetTevAlphaIn(int stage, int a, int b, int c, int d) {
    (void)stage; (void)a; (void)b; (void)c; (void)d;
}

// GXSetTevColorOp — sets the color combine operation and output bias for a TEV stage.
inline void GXSetTevColorOp(int stage, int op, int bias, int scale, int clamp, int outReg) {
    (void)stage; (void)op; (void)bias; (void)scale; (void)clamp; (void)outReg;
}

// GXSetTevAlphaOp — sets the alpha combine operation for a TEV stage.
inline void GXSetTevAlphaOp(int stage, int op, int bias, int scale, int clamp, int outReg) {
    (void)stage; (void)op; (void)bias; (void)scale; (void)clamp; (void)outReg;
}

// GXSetTevColor — sets the constant color register (GX_TEVREG0..2).
inline void GXSetTevColor(int reg, GXColor color) {
    (void)reg; (void)color;
}

// GXSetTevKColor — sets the TEV K-color register (GX_TEVKCSEL_0..7).
inline void GXSetTevKColor(int sel, GXColor color) {
    (void)sel; (void)color;
}

// GXSetTevKColorSel — selects which K-color register feeds a TEV stage's color input.
inline void GXSetTevKColorSel(int stage, int sel) {
    (void)stage; (void)sel;
}

// GXSetTevKAlphaSel — selects which K-color register feeds a TEV stage's alpha input.
inline void GXSetTevKAlphaSel(int stage, int sel) {
    (void)stage; (void)sel;
}

// GXSetTevSwapModeTable — configures the RGBA channel mapping for a swap mode.
inline void GXSetTevSwapModeTable(int table, int r, int g, int b, int a) {
    (void)table; (void)r; (void)g; (void)b; (void)a;
}

// GXSetTevSwapMode — sets the swap modes for TEV color and alpha.
inline void GXSetTevSwapMode(int stage, int rasSel, int texSel) {
    (void)stage; (void)rasSel; (void)texSel;
}

// GXSetTevDirect — enables/disables indirect TEV stage bypass.
inline void GXSetTevDirect(int tevReg) { (void)tevReg; }

// --- Blend mode ---

// GXSetBlendMode — configures the frame buffer blend operation.
inline void GXSetBlendMode(int mode, int srcFactor, int dstFactor, int logicOp) {
    (void)mode; (void)srcFactor; (void)dstFactor; (void)logicOp;
}

// GXSetColorUpdate — enables/disables R,G,B writes to the EFB.
inline void GXSetColorUpdate(int enable) { (void)enable; }

// GXSetAlphaUpdate — enables/disables alpha writes to the EFB.
inline void GXSetAlphaUpdate(int enable) { (void)enable; }

// --- Depth ---

// GXSetZMode — configures depth testing.
inline void GXSetZMode(int enable, int func, int writeEnable) {
    (void)enable; (void)func; (void)writeEnable;
}

// --- Rasterization ---

// GXSetCullMode — configures face culling.
inline void GXSetCullMode(int mode) { (void)mode; }

// GXSetLineWidth — sets the line width in pixels (6.0 default).
inline void GXSetLineWidth(u8 width, int offset) { (void)width; (void)offset; }

// --- Projection / viewport / scissor ---

// GXSetProjection — uploads a projection matrix (perspective or orthographic).
inline void GXSetProjection(const f32* mtx, int type) {
    (void)mtx; (void)type;
}

// GXLoadPosMtxImm — loads a 3x4 position matrix to a matrix slot.
inline void GXLoadPosMtxImm(const f32* mtx, int id) {
    (void)mtx; (void)id;
}

// GXSetCurrentMtx — selects which matrix slot is used for vertex transforms.
inline void GXSetCurrentMtx(int id) { (void)id; }

// GXSetViewport — sets the viewport rectangle.
inline void GXSetViewport(f32 x, f32 y, f32 w, f32 h, f32 nearZ, f32 farZ) {
    (void)x; (void)y; (void)w; (void)h; (void)nearZ; (void)farZ;
}

// GXSetScissor — sets the scissor rectangle.
inline void GXSetScissor(u32 x, u32 y, u32 w, u32 h) {
    (void)x; (void)y; (void)w; (void)h;
}

// --- Display copy (EFB → XFB) ---

// GXCopyDisp — copies the EFB to an XFB buffer.
inline void GXCopyDisp(void* xfb, int update) {
    (void)xfb; (void)update;
}

// GXSetDispCopySrc — sets the source rectangle for display copy.
inline void GXSetDispCopySrc(u32 left, u32 top, u16 width, u16 height) {
    (void)left; (void)top; (void)width; (void)height;
}

// GXSetDispCopyDst — sets the destination dimensions for display copy.
inline void GXSetDispCopyDst(u16 width, u16 height) {
    (void)width; (void)height;
}

// GXSetDispCopyYScale — sets the vertical scale for interlaced display copy.
inline void GXSetDispCopyYScale(f32 yScale) { (void)yScale; }

// GXGetYScaleFactor — computes the Y scale factor for display copy.
inline f32 GXGetYScaleFactor(u16 efbHeight, u16 xfbHeight) {
    (void)efbHeight;
    return static_cast<f32>(xfbHeight) / static_cast<f32>(xfbHeight); // 1.0
}

// GXGetNumXfbLines — computes the number of XFB lines for a given EFB height.
inline u16 GXGetNumXfbLines(u16 efbHeight, f32 yScale) {
    (void)yScale;
    return efbHeight; // simplified
}

// --- FIFO management ---

// GXGetGPFifo — retrieves the current GP FIFO status pointers.
inline void GXGetGPFifo(GXFifoObj* fifo) { (void)fifo; }

// GXGetFifoPtrs — gets the read and write pointers of a FIFO.
inline void GXGetFifoPtrs(GXFifoObj* fifo, void** readPtr, void** writePtr) {
    (void)fifo;
    if (readPtr) *readPtr = nullptr;
    if (writePtr) *writePtr = nullptr;
}

// GXGetGPStatus — retrieves GP status flags (overhi, underlow, readIdle, cmdIdle, breakPt).
inline void GXGetGPStatus(u8* overhi, u8* underlow, u8* readIdle,
                          u8* cmdIdle, u8* breakPt) {
    if (overhi)   *overhi = 0;
    if (underlow) *underlow = 0;
    if (readIdle) *readIdle = 1;
    if (cmdIdle)  *cmdIdle = 1;
    if (breakPt)  *breakPt = 0;
}

// GXEnableBreakPt / GXDisableBreakPt — set/clear a breakpoint on the FIFO.
inline void GXEnableBreakPt(void* ptr) { (void)ptr; }
inline void GXDisableBreakPt(void) {}

// --- Texture objects ---

// GXInitTexObj — initializes a texture object.
inline void GXInitTexObj(GXTexObj* obj, void* data, u16 width, u16 height,
                         int format, int wrapS, int wrapT, int mipmap) {
    (void)obj; (void)data; (void)width; (void)height;
    (void)format; (void)wrapS; (void)wrapT; (void)mipmap;
}

// GXInitTexObjLOD — sets the LOD (mipmap) parameters for a texture object.
inline void GXInitTexObjLOD(GXTexObj* obj, int minFilt, int magFilt,
                            f32 minLOD, f32 maxLOD, f32 bias, int biasClamp,
                            int edgeLODEnable, int aniso) {
    (void)obj; (void)minFilt; (void)magFilt;
    (void)minLOD; (void)maxLOD; (void)bias; (void)biasClamp;
    (void)edgeLODEnable; (void)aniso;
}

// GXLoadTexObj — binds a texture object to a texture map slot.
inline void GXLoadTexObj(GXTexObj* obj, int texMapID) {
    (void)obj; (void)texMapID;
}

// GXInvalidateTexAll — invalidates all texture cache entries.
inline void GXInvalidateTexAll(void) {}

// GXSetTexWrapMode — sets the wrap mode for a texture map slot.
inline void GXSetTexWrapMode(int texMapID, int wrapS, int wrapT) {
    (void)texMapID; (void)wrapS; (void)wrapT;
}

// --- Lighting ---

// GXInitLightColor — initializes the color component of a light object.
inline void GXInitLightColor(GXLightObj* light, GXColor* color) {
    (void)light; (void)color;
}

// GXInitLightPos — initializes a positional light.
inline void GXInitLightPos(GXLightObj* light, f32 x, f32 y, f32 z) {
    (void)light; (void)x; (void)y; (void)z;
}

// GXInitLightDir — initializes a directional light.
inline void GXInitLightDir(GXLightObj* light, f32 nx, f32 ny, f32 nz) {
    (void)light; (void)nx; (void)ny; (void)nz;
}

// GXInitSpecularDir — initializes the half-angle vector for specular highlights.
inline void GXInitSpecularDir(GXLightObj* light, f32 nx, f32 ny, f32 nz) {
    (void)light; (void)nx; (void)ny; (void)nz;
}

// GXInitLightSpot — initializes spotlight parameters.
inline void GXInitLightSpot(GXLightObj* light, f32 cutoff, GXSpotFn fn) {
    (void)light; (void)cutoff; (void)fn;
}

// GXInitLightAttnA — sets the attenuation function A parameters.
inline void GXInitLightAttnA(GXLightObj* light, f32 a0, f32 a1, f32 a2) {
    (void)light; (void)a0; (void)a1; (void)a2;
}

// GXInitLightDistAttn — sets the distance attenuation.
inline void GXInitLightDistAttn(GXLightObj* light, f32 refDist, f32 refBrightness,
                                GXDistAttnFn fn) {
    (void)light; (void)refDist; (void)refBrightness; (void)fn;
}

// GXInitLightAttnK — sets the attenuation function K parameters.
inline void GXInitLightAttnK(GXLightObj* light, f32 k0, f32 k1, f32 k2) {
    (void)light; (void)k0; (void)k1; (void)k2;
}

// GXInitLightAttn — sets all 6 attenuation parameters at once.
inline void GXInitLightAttn(GXLightObj* light, f32 a0, f32 a1, f32 a2,
                            f32 k0, f32 k1, f32 k2) {
    (void)light; (void)a0; (void)a1; (void)a2; (void)k0; (void)k1; (void)k2;
}

// GXLoadLightObjImm — uploads a light object to a hardware light slot.
inline void GXLoadLightObjImm(GXLightObj* light, int lightID) {
    (void)light; (void)lightID;
}

// GXSetNumLights — sets the number of active lights.
inline void GXSetNumLights(int nLights) { (void)nLights; }

// --- Fog ---

// GXSetFog — configures the fog equation.
inline void GXSetFog(int type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color) {
    (void)type; (void)startZ; (void)endZ; (void)nearZ; (void)farZ; (void)color;
}

// GXSetFogRangeAdj — sets the fog range adjustment table (for z-fog correction).
inline void GXSetFogRangeAdj(u8 enable, u16 center, u16* table) {
    (void)enable; (void)center; (void)table;
}

// GXInitFogAdjTable — computes the fog range adjustment table for a projection.
inline void GXInitFogAdjTable(u16* table, u16 width, const f32 proj[4][4]) {
    (void)table; (void)width; (void)proj;
}

// --- Misc GX pipe commands ---

// GXCmd1u8 / GXCmd1u16 / GXCmd1u32 — write raw bytes to the command FIFO.
inline void GXCmd1u8(u8 v)  { WGPIPE.c = v; }
inline void GXCmd1u16(u16 v) { WGPIPE.s = v; }
inline void GXCmd1u32(u32 v) { WGPIPE.i = v; }

} // extern "C"
// --- Additional GX functions (Phase 9 additions) ---

// GXSetAlphaCompare — configure alpha test comparison
inline void GXSetAlphaCompare(int comp0, int op, int ref0, int comp1, int a1) {
    (void)comp0; (void)op; (void)ref0; (void)comp1; (void)a1;
}

// GXSetZCompLoc — set whether Z comparison happens before or after texturing
inline void GXSetZCompLoc(u8 before) {
    (void)before;
}

// GXSetCoPlanar — enable/disable coplanar polygon offset
inline void GXSetCoPlanar(u8 enable) {
    (void)enable;
}

// GXSetClipMode — set clip plane enable/disable
inline void GXSetClipMode(u8 mode) {
    (void)mode;
}


