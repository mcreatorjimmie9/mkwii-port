#include "Material.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cstring>

// ============================================================================
// Default material state
// ============================================================================

// 0x80530900 — Global default material (used for reset/unbind)
static MaterialData sDefaultMaterial;  // @addr 0x80530900

// 0x80530AA0 — Global material binder
static MaterialBinder sMaterialBinder;  // @addr 0x80530AA0

// ============================================================================
// Material_Init()
// 0x80530000 (128 bytes)
// ============================================================================
// Initialize a MaterialData structure to safe default values.
// Sets up a single TEV stage with modulate mode, no textures,
// white material color, and standard depth testing.
//
// @param mat  MaterialData to initialize
// ============================================================================
void Material_Init(MaterialData* mat) {
    std::memset(mat, 0, sizeof(MaterialData));

    // Default: 1 TEV stage, 1 texgen, 1 color channel, 0 indirect
    mat->numTevStages = 1;
    mat->numTexGens = 1;
    mat->numChans = 1;
    mat->numIndStages = 0;

    // Stage 0: modulate (texture * vertex color)
    TEVStageConfig* stage0 = &mat->tev[0];
    stage0->colorInA = GX_CC_TEXC;
    stage0->colorInB = GX_CC_RASC;
    stage0->colorInC = GX_CC_ZERO;
    stage0->colorInD = GX_CC_ONE;
    stage0->colorOp = GX_TEV_ADD;
    stage0->colorBias = 0;
    stage0->colorScale = 1;   // scale 1x
    stage0->colorClamp = 1;   // clamp on
    stage0->colorOutReg = GX_TEVPREV;
    stage0->alphaInA = GX_CC_TEXA;
    stage0->alphaInB = GX_CA_RASA;
    stage0->alphaInC = GX_CC_ZERO;
    stage0->alphaInD = GX_CC_ONE;
    stage0->alphaOp = GX_TEV_ADD;
    stage0->alphaBias = 0;
    stage0->alphaScale = 1;
    stage0->alphaClamp = 1;
    stage0->alphaOutReg = GX_TEVPREV;
    stage0->texCoordId = GX_TEXCOORD_NULL;
    stage0->texMapId = GX_TEXMAP_NULL;
    stage0->channelId = GX_COLOR0A0;
    stage0->kColorSel = GX_TEVKCSEL_0;
    stage0->kAlphaSel = GX_TEVKASEL_0;
    stage0->rasSwapMode = 0;
    stage0->texSwapMode = 0;

    // White material and ambient colors (0x00FFFFFF = RGBA where R=G=B=A=255)
    mat->matColor0 = 0xFFFFFFFF;
    mat->matColor1 = 0xFFFFFFFF;
    mat->ambColor0 = 0xFFFFFFFF;
    mat->ambColor1 = 0xFFFFFFFF;

    // Default render state
    mat->cullMode = GX_CULL_BACK;
    mat->blendMode = GX_BM_BLEND;
    mat->blendSrcFactor = GX_BL_SRCALPHA;
    mat->blendDstFactor = GX_BL_INVSRCALPHA;
    mat->zModeEnable = GX_ENABLE;
    mat->zModeFunc = GX_LEQUAL;
    mat->zModeWrite = GX_ENABLE;
    mat->colorUpdate = GX_ENABLE;
    mat->alphaUpdate = GX_ENABLE;
    mat->alphaCmpRef = 0;

    // Default light mask: lights 0-7 active for channel 0
    mat->lightMask0 = 0xFF;
    mat->lightMask1 = 0x00;
    mat->diffuseFn = GX_DF_CLAMP;

    // Clear texture objects
    for (u8 i = 0; i < MAX_TEXMAPS; i++) {
        mat->texObjs[i] = nullptr;
    }

    // Default texcoord gen: identity matrix
    for (u8 i = 0; i < MAX_TEXMAPS; i++) {
        mat->texGens[i].type = 0;
        mat->texGens[i].source = 0;
        mat->texGens[i].matrix = GX_VA_TEX0 + i;
        mat->texGens[i]._03 = 0;
        mat->texGens[i]._04 = 0.0f;
        mat->texGens[i]._08 = 0.0f;
        mat->texGens[i]._0C = 0;
    }

    // Default TEV register colors (white)
    for (u32 i = 0; i < 4; i++) {
        mat->tevColors[i] = 0xFFFFFFFF;
    }
    // Default K-colors (white)
    for (u32 i = 0; i < 8; i++) {
        mat->kColors[i] = 0xFFFFFFFF;
    }
}

// ============================================================================
// Material_ApplyTEV()
// 0x80530080 (384 bytes)
// ============================================================================
// Upload the material's TEV configuration to GX hardware.
// Sets the number of stages, then configures each active stage's
// color/alpha inputs, operations, and output registers.
//
// @param mat  Material data to apply
// ============================================================================
void Material_ApplyTEV(const MaterialData* mat) {
    u8 numStages = mat->numTevStages;
    if (numStages > MAX_TEV_STAGES) {
        numStages = MAX_TEV_STAGES;
    }

    GXSetNumTevStages(numStages);

    for (u8 i = 0; i < numStages; i++) {
        const TEVStageConfig* stage = &mat->tev[i];

        // Set TEV order (texcoord, texmap, color channel)
        GXSetTevOrder(i, stage->texCoordId, stage->texMapId, stage->channelId);

        // Set color combine
        GXSetTevColorIn(i, stage->colorInA, stage->colorInB,
                             stage->colorInC, stage->colorInD);
        GXSetTevColorOp(i, stage->colorOp, stage->colorBias,
                             stage->colorScale, stage->colorClamp,
                             stage->colorOutReg);

        // Set alpha combine
        GXSetTevAlphaIn(i, stage->alphaInA, stage->alphaInB,
                             stage->alphaInC, stage->alphaInD);
        GXSetTevAlphaOp(i, stage->alphaOp, stage->alphaBias,
                             stage->alphaScale, stage->alphaClamp,
                             stage->alphaOutReg);

        // K-color selection
        GXSetTevKColorSel(i, stage->kColorSel);
        GXSetTevKAlphaSel(i, stage->kAlphaSel);

        // Swap modes
        GXSetTevSwapMode(i, stage->rasSwapMode, stage->texSwapMode);
    }

    // Upload TEV register colors
    for (u32 i = 0; i < 3; i++) {
        GXSetTevColor(i, mat->tevColors[i]);
    }

    // Upload K-colors
    for (u32 i = 0; i < 8; i++) {
        GXSetTevKColor(i, mat->kColors[i]);
    }
}

// ============================================================================
// Material_ApplyTextures()
// 0x80530200 (256 bytes)
// ============================================================================
// Bind all texture objects in the material to their respective texmap slots.
// Also configures the texcoord generators.
//
// @param mat  Material data to apply
// ============================================================================
void Material_ApplyTextures(const MaterialData* mat) {
    // Set number of texcoord generators
    GXSetNumTexGens(mat->numTexGens);

    // Bind each texture
    for (u8 i = 0; i < MAX_TEXMAPS; i++) {
        if (mat->texObjs[i] != nullptr) {
            GXLoadTexObj(mat->texObjs[i], i);
        }
    }

    // Configure texcoord generators
    for (u8 i = 0; i < mat->numTexGens; i++) {
        const TexCoordGen* gen = &mat->texGens[i];
        /* WII_GX: GXSetTexCoordGen(i, gen->type, gen->source, gen->matrix, ...)
           On PC shims, we call through the stub. */
        GXSetNumTexGens(gen->matrix);
    }
}

// ============================================================================
// Material_ApplyColors()
// 0x80530300 (192 bytes)
// ============================================================================
// Apply material and ambient colors to the GX color channels.
// Configures lighting enable/disable, light mask, and diffuse function.
//
// @param mat  Material data to apply
// ============================================================================
void Material_ApplyColors(const MaterialData* mat) {
    GXSetNumChans(mat->numChans);

    // Channel 0 configuration
    if (mat->numChans >= 1) {
        GXSetChanCtrl(GX_COLOR0A0,
            GX_ENABLE,                       // lighting enable
            GX_SRC_REG,                      // ambient source
            GX_SRC_REG,                      // material source
            mat->lightMask0,                 // light mask
            mat->diffuseFn,                  // diffuse function
            GX_DA_OFF,                       // attenuation function
            0, 0, 0);                        // attenuation params

        GXSetChanMatColor(GX_COLOR0A0, mat->matColor0);
    }

    // Channel 1 configuration
    if (mat->numChans >= 2) {
        GXSetChanCtrl(GX_COLOR1A1,
            GX_ENABLE,
            GX_SRC_REG,
            GX_SRC_REG,
            mat->lightMask1,
            mat->diffuseFn,
            GX_DA_OFF,
            0, 0, 0);

        GXSetChanMatColor(GX_COLOR1A1, mat->matColor1);
    }
}

// ============================================================================
// Material_ApplyRenderState()
// 0x80530400 (192 bytes)
// ============================================================================
// Apply blend mode, depth testing, culling, and color/alpha write state.
//
// @param mat  Material data to apply
// ============================================================================
void Material_ApplyRenderState(const MaterialData* mat) {
    // Blend mode
    GXSetBlendMode(mat->blendMode, mat->blendSrcFactor, mat->blendDstFactor,
                   GX_LO_COPY);

    // Depth test
    GXSetZMode(mat->zModeEnable, mat->zModeFunc, mat->zModeWrite);

    // Z comparison location (after texturing)
    GXSetZCompLoc(0);

    // Color/alpha writes
    GXSetColorUpdate(mat->colorUpdate);
    GXSetAlphaUpdate(mat->alphaUpdate);

    // Culling
    GXSetCullMode(mat->cullMode);

    // Alpha compare (always pass, reference = 0)
    GXSetAlphaCompare(GX_ALWAYS, 0, 0, GX_ALWAYS, 0);
}

// ============================================================================
// Material_Bind()
// 0x80530500 (128 bytes)
// ============================================================================
// Apply all material state to GX hardware in the correct order.
// Order matters: textures → colors → TEV → render state.
//
// @param mat  Material data to bind
// ============================================================================
void Material_Bind(const MaterialData* mat) {
    if (mat == nullptr) {
        return;
    }

    Material_ApplyTextures(mat);
    Material_ApplyColors(mat);
    Material_ApplyTEV(mat);
    Material_ApplyRenderState(mat);
}

// ============================================================================
// Material_BindCached()
// 0x80530580 (192 bytes)
// ============================================================================
// Bind a material, but skip if it's already the currently bound material.
// Uses a pointer comparison for fast rejection of redundant binds.
// Increments bindCount and skipCount for profiling.
//
// @param binder  Material binder state
// @param mat     Material to bind
// ============================================================================
void Material_BindCached(MaterialBinder* binder, const MaterialData* mat) {
    if (binder == nullptr) {
        Material_Bind(mat);
        return;
    }

    binder->bindCount++;

    // Fast path: same material pointer, skip all state
    if (binder->current == mat) {
        binder->skipCount++;
        return;
    }

    // Apply the material
    Material_Bind(mat);
    binder->current = mat;
    binder->dirtyFlags = 0;
}

// ============================================================================
// Material_SetTevStage()
// 0x80530640 (64 bytes)
// ============================================================================
// Configure a single TEV stage in the material data.
// Does NOT upload to hardware; call Material_Bind() to apply.
//
// @param mat    Material to modify
// @param stage  TEV stage index (0-15)
// @param config Stage configuration to copy
// ============================================================================
void Material_SetTevStage(MaterialData* mat, u8 stage, const TEVStageConfig* config) {
    if (mat == nullptr || config == nullptr || stage >= MAX_TEV_STAGES) {
        return;
    }
    std::memcpy(&mat->tev[stage], config, sizeof(TEVStageConfig));
    if (stage >= mat->numTevStages) {
        mat->numTevStages = stage + 1;
    }
}

// ============================================================================
// Material_SetTexture()
// 0x80530700 (48 bytes)
// ============================================================================
// Set a texture object in the given texmap slot.
//
// @param mat     Material to modify
// @param slot    Texmap slot (0-7)
// @param texObj  Texture object to bind (or nullptr to clear)
// ============================================================================
void Material_SetTexture(MaterialData* mat, u8 slot, GXTexObj* texObj) {
    if (mat == nullptr || slot >= MAX_TEXMAPS) {
        return;
    }
    mat->texObjs[slot] = texObj;
}

// ============================================================================
// Material_SetMatColor()
// 0x80530780 (48 bytes)
// ============================================================================
// Set the material color for a specific color channel.
//
// @param mat      Material to modify
// @param channel  Color channel (0 or 1)
// @param color    RGBA color value (0x00RRGGBB)
// ============================================================================
void Material_SetMatColor(MaterialData* mat, u8 channel, GXColor color) {
    if (mat == nullptr) {
        return;
    }
    if (channel == 0) {
        mat->matColor0 = color;
    } else if (channel == 1) {
        mat->matColor1 = color;
    }
}

// ============================================================================
// MaterialBinder_Init()
// 0x80530800 (64 bytes)
// ============================================================================
// Initialize the material binder state.
//
// @param binder  Binder to initialize
// ============================================================================
void MaterialBinder_Init(MaterialBinder* binder) {
    binder->current = nullptr;
    binder->dirtyFlags = 0xFFFFFFFF;  // all dirty on first frame
    binder->frameCount = 0;
    binder->bindCount = 0;
    binder->skipCount = 0;
    binder->_14 = 0;
    binder->_18 = 0;
    binder->_1C = 0;
    binder->_20 = 0;

    // Initialize the default material
    Material_Init(&sDefaultMaterial);
}

// ============================================================================
// MaterialBinder_BeginFrame()
// 0x80530840 (48 bytes)
// ============================================================================
// Reset per-frame counters. Called at the start of each render frame.
// Forces a full material rebind on the first draw call.
//
// @param binder  Binder to reset
// ============================================================================
void MaterialBinder_BeginFrame(MaterialBinder* binder) {
    if (binder == nullptr) {
        return;
    }
    binder->frameCount++;
    binder->bindCount = 0;
    binder->skipCount = 0;
    // Force rebind by nullifying current
    binder->current = nullptr;
    binder->dirtyFlags = 0xFFFFFFFF;
}

// ============================================================================
// MaterialBinder_Unbind()
// 0x80530880 (64 bytes)
// ============================================================================
// Unbind the current material and restore default render state.
// Called after all rendering is complete to leave GX in a clean state.
//
// @param binder  Binder to unbind
// ============================================================================
void MaterialBinder_Unbind(MaterialBinder* binder) {
    if (binder == nullptr) {
        return;
    }
    // Bind default material to restore clean state
    Material_Bind(&sDefaultMaterial);
    binder->current = nullptr;
    binder->dirtyFlags = 0;
}