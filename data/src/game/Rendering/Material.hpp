#pragma once
// ============================================================================
// Material — Material Property Management and Texture Binding
// ============================================================================
// Manages material properties for rendering: TEV (Texture Environment)
// configuration, texture bindings, blend modes, and material colors.
//
// Mario Kart Wii uses J3D material data embedded in BRRES archives.
// Each material specifies:
//   - Up to 16 TEV stages for color/alpha combining
//   - Up to 8 texture map slots with associated texcoord generators
//   - Material color and ambient color per channel
//   - Blend mode, depth test, and cull settings
//   - Indirect texture stages for advanced effects
//
// Address range: 0x80530000 - 0x8053FFFF
// ============================================================================

#include <types.h>
#include <gx.hpp>

// Maximum number of TEV stages per material
static const u8 MAX_TEV_STAGES = 16;
// Maximum number of texture maps per material
static const u8 MAX_TEXMAPS = 8;

// ============================================================================
// TEVStageConfig — Configuration for a single TEV stage
// ============================================================================
// Encodes the color/alpha combine equation for one TEV stage.
// The TEV computes: color = (a - b) * c + d  (or variations)
//
// Size: 0x20 bytes
// ============================================================================
struct TEVStageConfig {
    u8  colorInA;           // 0x00: color input A (GX_CC_*)
    u8  colorInB;           // 0x01: color input B
    u8  colorInC;           // 0x02: color input C
    u8  colorInD;           // 0x03: color input D
    u8  colorOp;            // 0x04: color combine op (GX_TEV_*)
    u8  colorBias;          // 0x05: bias (0=none, 1=half, 2=+0.5)
    u8  colorScale;         // 0x06: scale (1, 2, or 4)
    u8  colorClamp;         // 0x07: clamp output
    u8  colorOutReg;        // 0x08: output register (GX_TEVREG*)
    u8  alphaInA;           // 0x09: alpha input A (GX_CA_*)
    u8  alphaInB;           // 0x0A: alpha input B
    u8  alphaInC;           // 0x0B: alpha input C
    u8  alphaInD;           // 0x0C: alpha input D
    u8  alphaOp;            // 0x0D: alpha combine op
    u8  alphaBias;          // 0x0E: bias
    u8  alphaScale;         // 0x0F: scale
    u8  alphaClamp;         // 0x10: clamp output
    u8  alphaOutReg;        // 0x11: output register
    u8  texCoordId;         // 0x12: texcoord gen index
    u8  texMapId;           // 0x13: texture map index
    u8  channelId;          // 0x14: color channel index
    u8  kColorSel;          // 0x15: K-color selection
    u8  kAlphaSel;          // 0x16: K-alpha selection
    u8  _17;                // 0x17: padding
    u32 rasSwapMode;        // 0x18: raster swap mode
    u32 texSwapMode;        // 0x1C: texture swap mode
};

// ============================================================================
// TexCoordGen — Texture coordinate generator configuration
// ============================================================================
// Describes how texture coordinates are generated for a given texcoord slot.
// Can use model-space coordinates, projection-mapped, or environment-mapped.
//
// Size: 0x10 bytes
// ============================================================================
struct TexCoordGen {
    u8  type;               // 0x00: source type (0=POS, 1=NRM, 4=TEX0..7)
    u8  source;             // 0x01: source parameter
    u8  matrix;             // 0x02: texture matrix index (0-9)
    u8  _03;                // 0x03: padding
    f32 _04;                // 0x04: unknown parameter
    f32 _08;                // 0x08: unknown parameter
    u32 _0C;                // 0x0C: flags / extra data
};

// ============================================================================
// MaterialData — Complete material state
// ============================================================================
// Holds all rendering state needed to draw geometry with a specific material.
// This is typically loaded from a BRRES material section and applied
// before drawing the associated mesh.
//
// Size: 0x1A0 bytes
// ============================================================================
struct MaterialData {
    // TEV configuration (16 stages * 0x20 = 0x200, but packed to 0x100)
    u8  numTevStages;       // 0x00: active TEV stage count
    u8  numTexGens;         // 0x01: active texcoord generators
    u8  numChans;           // 0x02: color channels (0, 1, or 2)
    u8  numIndStages;       // 0x03: indirect texture stages
    TEVStageConfig tev[8];  // 0x04: TEV stage configs (first 8 stages)

    // Texture bindings
    GXTexObj* texObjs[MAX_TEXMAPS];  // 0x104: texture objects (8 * 4 = 0x20)

    // Texcoord generators
    TexCoordGen texGens[MAX_TEXMAPS]; // 0x124: texcoord gen configs (8 * 0x10 = 0x80)

    // Material colors (per channel: color0 and color1)
    GXColor matColor0;        // 0x1A4: material color channel 0
    GXColor matColor1;        // 0x1A8: material color channel 1
    GXColor ambColor0;        // 0x1AC: ambient color channel 0
    GXColor ambColor1;        // 0x1B0: ambient color channel 1

    // Render state
    u8  cullMode;           // 0x1B4: GX_CULL_*
    u8  blendMode;          // 0x1B5: GX_BM_*
    u8  blendSrcFactor;     // 0x1B6: GX_BL_*
    u8  blendDstFactor;     // 0x1B7: GX_BL_*
    u8  zModeEnable;        // 0x1B8: depth test enable
    u8  zModeFunc;          // 0x1B9: depth compare func
    u8  zModeWrite;         // 0x1BA: depth write enable
    u8  colorUpdate;        // 0x1BB: color write enable
    u8  alphaUpdate;        // 0x1BC: alpha write enable
    u8  alphaCmpRef;        // 0x1BD: alpha compare reference
    u8  _1BE;               // 0x1BE: padding
    u8  _1BF;               // 0x1BF: padding

    // TEV register colors
    GXColor tevColors[4];   // 0x1C0: TEVREG0-2 + PREV constant colors

    // TEV K-colors
    GXColor kColors[8];     // 0x1D0: K-color register values

    // Light mask
    u8  lightMask0;         // 0x1F0: light mask for channel 0
    u8  lightMask1;         // 0x1F1: light mask for channel 1
    u8  diffuseFn;          // 0x1F2: diffuse function (GX_DF_*)
    u8  _1F3;               // 0x1F3: padding
};

// ============================================================================
// MaterialBinder — Runtime state for applying materials
// ============================================================================
// Tracks the currently bound material to avoid redundant GX state changes.
// The "dirty" flags indicate which state groups need re-upload.
//
// Size: 0x24 bytes
// ============================================================================
struct MaterialBinder {
    const MaterialData* current;  // 0x00: currently bound material
    u32  dirtyFlags;        // 0x04: bitmask of dirty state groups
    u32  frameCount;        // 0x08: current frame for tracking
    u32  bindCount;         // 0x0C: number of binds this frame
    u32  skipCount;         // 0x10: number of redundant binds skipped
    u32  _14;               // 0x14: unknown
    u32  _18;               // 0x18: unknown
    u32  _1C;               // 0x1C: unknown
    u32  _20;               // 0x20: unknown
};

// ============================================================================
// Function declarations — Material System
// ============================================================================

// 0x80530000 — Initialize a MaterialData to default values
// @addr 0x80530000
void Material_Init(MaterialData* mat);

// 0x80530080 — Apply a material's TEV configuration to GX hardware
// @addr 0x80530080
void Material_ApplyTEV(const MaterialData* mat);

// 0x80530200 — Apply a material's texture bindings to GX hardware
// @addr 0x80530200
void Material_ApplyTextures(const MaterialData* mat);

// 0x80530300 — Apply a material's color/ambient to GX channels
// @addr 0x80530300
void Material_ApplyColors(const MaterialData* mat);

// 0x80530400 — Apply a material's render state (blend, depth, cull)
// @addr 0x80530400
void Material_ApplyRenderState(const MaterialData* mat);

// 0x80530500 — Apply all material state (TEV + textures + colors + state)
// @addr 0x80530500
void Material_Bind(const MaterialData* mat);

// 0x80530580 — Bind a material, skipping if it's already bound
// @addr 0x80530580
void Material_BindCached(MaterialBinder* binder, const MaterialData* mat);

// 0x80530640 — Set a single TEV stage's configuration
// @addr 0x80530640
void Material_SetTevStage(MaterialData* mat, u8 stage, const TEVStageConfig* config);

// 0x80530700 — Set a texture map slot's texture object
// @addr 0x80530700
void Material_SetTexture(MaterialData* mat, u8 slot, GXTexObj* texObj);

// 0x80530780 — Set the material color for a channel
// @addr 0x80530780
void Material_SetMatColor(MaterialData* mat, u8 channel, GXColor color);

// 0x80530800 — Initialize the material binder
// @addr 0x80530800
void MaterialBinder_Init(MaterialBinder* binder);

// 0x80530840 — Reset dirty flags for a new frame
// @addr 0x80530840
void MaterialBinder_BeginFrame(MaterialBinder* binder);

// 0x80530880 — Unbind the current material (restore defaults)
// @addr 0x80530880
void MaterialBinder_Unbind(MaterialBinder* binder);