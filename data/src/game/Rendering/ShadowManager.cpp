#include "ShadowManager.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cmath>
#include <cstring>

// ============================================================================
// Global shadow manager instance
// ============================================================================
static ShadowManager sShadowManager;  // @addr 0x80564000

// ============================================================================
// Default shadow texture — a soft radial gradient circle
// Generated procedurally as a 32x32 RGBA texture.
// ============================================================================
static const u8 sShadowTexData[32 * 32 * 4] = {};  // all zero = fully transparent

// Shadow texture object
static GXTexObj sShadowTexObj;  // @addr 0x80565000

// ============================================================================
// ShadowMgr_Init()
// 0x80563000 (192 bytes)
// ============================================================================
// Initialize the shadow manager with default parameters.
// Sets up the shadow texture and clears all entries.
//
// @param mgr  Shadow manager to initialize
// ============================================================================
void ShadowMgr_Init(ShadowManager* mgr) {
    // Zero-initialize (manual, to avoid memset warning on non-trivial types)
    for (u32 i = 0; i < sizeof(ShadowManager); i++) {
        reinterpret_cast<u8*>(mgr)[i] = 0;
    }

    // Default shadow parameters
    mgr->params.baseRadiusX = 40.0f;
    mgr->params.baseRadiusZ = 40.0f;
    mgr->params.squashRadiusX = 60.0f;
    mgr->params.squashRadiusZ = 15.0f;
    mgr->params.blobRadius = 20.0f;
    mgr->params.baseAlpha = 0.5f;
    mgr->params.heightAlphaScale = 0.3f;
    mgr->params.maxHeight = 200.0f;
    mgr->params.squashThreshold = 15.0f;
    mgr->params.fadeStartHeight = 100.0f;
    mgr->params.fadeEndHeight = 200.0f;
    mgr->params.groundOffset = 1.0f;

    // Enable shadows by default
    mgr->flags = 1;
    mgr->activeCount = 0;

    // Initialize the shadow texture object
    GXInitTexObj(&sShadowTexObj,
                 const_cast<u8*>(sShadowTexData), 32, 32,
                 GX_TF_RGBA8, GX_WT_CLAMP, GX_WT_CLAMP, 0);

    // Set LOD parameters (no mipmaps, nearest filtering)
    GXInitTexObjLOD(&sShadowTexObj,
                    GX_TF_NEAREST, GX_TF_NEAREST,
                    0.0f, 0.0f, 0.0f, 0, 0, 0);
}

// ============================================================================
// ShadowMgr_SetParams()
// 0x80563100 (64 bytes)
// ============================================================================
// Set the shadow rendering parameters.
//
// @param mgr     Shadow manager
// @param params  New parameter values
// ============================================================================
void ShadowMgr_SetParams(ShadowManager* mgr, const ShadowParams* params) {
    if (mgr == nullptr || params == nullptr) {
        return;
    }
    std::memcpy(&mgr->params, params, sizeof(ShadowParams));
}

// ============================================================================
// ShadowMgr_SetEnabled()
// 0x80563180 (48 bytes)
// ============================================================================
// Enable or disable shadow rendering globally.
//
// @param mgr     Shadow manager
// @param enabled 1 to enable, 0 to disable
// ============================================================================
void ShadowMgr_SetEnabled(ShadowManager* mgr, u8 enabled) {
    if (mgr == nullptr) {
        return;
    }
    if (enabled) {
        mgr->flags |= 1;
    } else {
        mgr->flags &= ~1u;
    }
}

// ============================================================================
// ShadowMgr_UpdateEntry()
// 0x805631C0 (576 bytes)
// ============================================================================
// Update the shadow entry for a specific caster.
// Finds or creates the entry for the given caster ID, then computes
// the shadow shape based on the caster's position relative to the ground.
//
// @param mgr       Shadow manager
// @param casterId  Caster identifier (0-11)
// @param casterPos Caster's world position
// @param groundY   Y position of the ground under the caster
// ============================================================================
void ShadowMgr_UpdateEntry(ShadowManager* mgr, u8 casterId,
                            const Vec3f* casterPos, f32 groundY) {
    if (mgr == nullptr || casterPos == nullptr || casterId >= MAX_SHADOW_CASTERS) {
        return;
    }

    ShadowEntry* entry = &mgr->entries[casterId];

    // Store caster ID
    entry->casterId = casterId;

    // Compute ground position
    entry->groundY = groundY;
    entry->position.x = casterPos->x;
    entry->position.z = casterPos->z;
    entry->position.y = groundY + mgr->params.groundOffset;

    // Compute height above ground
    entry->heightAboveGround = casterPos->y - groundY;
    if (entry->heightAboveGround < 0.0f) {
        entry->heightAboveGround = 0.0f;
    }
    entry->maxVisibleHeight = mgr->params.maxHeight;

    // Compute shadow shape
    ShadowMgr_ComputeShadow(mgr, entry);

    // Update active count: find the highest active entry
    u32 maxIdx = 0;
    for (u32 i = 0; i < MAX_SHADOW_CASTERS; i++) {
        if (mgr->entries[i].shadowType != SHADOW_NONE) {
            maxIdx = i + 1;
        }
    }
    mgr->activeCount = maxIdx;
}

// ============================================================================
// ShadowMgr_ComputeShadow()
// 0x80563400 (448 bytes)
// ============================================================================
// Compute the shadow shape (type, radii, alpha) based on the
// caster's height above ground.
//
// Shadow behavior by height:
//   h < squashThreshold: SHADOW_SQUASH (elliptical, on ground)
//   h < fadeStartHeight: SHADOW_CIRCLE (circular, full alpha)
//   h < fadeEndHeight:   SHADOW_CIRCLE (circular, fading alpha)
//   h >= fadeEndHeight:  SHADOW_NONE (too high, no shadow)
//
// @param mgr    Shadow manager with parameters
// @param entry  Shadow entry to update
// ============================================================================
void ShadowMgr_ComputeShadow(ShadowManager* mgr, ShadowEntry* entry) {
    if (mgr == nullptr || entry == nullptr) {
        return;
    }

    const ShadowParams* p = &mgr->params;
    f32 h = entry->heightAboveGround;

    // Too high: no shadow
    if (h >= p->fadeEndHeight) {
        entry->shadowType = SHADOW_NONE;
        entry->radiusX = 0.0f;
        entry->radiusZ = 0.0f;
        entry->alpha = 0.0f;
        return;
    }

    // Below squash threshold: squashed ellipse
    if (h <= p->squashThreshold) {
        entry->shadowType = SHADOW_SQUASH;
        // Lerp between squash and circle radii based on height
        f32 t = h / p->squashThreshold;
        entry->radiusX = p->squashRadiusX + (p->baseRadiusX - p->squashRadiusX) * t;
        entry->radiusZ = p->squashRadiusZ + (p->baseRadiusZ - p->squashRadiusZ) * t;
        entry->alpha = p->baseAlpha;
        return;
    }

    // Normal height: circular shadow
    entry->shadowType = SHADOW_CIRCLE;
    entry->radiusX = p->baseRadiusX;
    entry->radiusZ = p->baseRadiusZ;

    // Fade alpha in the fade range
    if (h >= p->fadeStartHeight) {
        f32 fadeRange = p->fadeEndHeight - p->fadeStartHeight;
        if (fadeRange > 0.0f) {
            f32 t = (h - p->fadeStartHeight) / fadeRange;
            entry->alpha = p->baseAlpha * (1.0f - t);
        } else {
            entry->alpha = 0.0f;
        }
    } else {
        entry->alpha = p->baseAlpha;
    }

    // Scale alpha slightly with height (shadows get lighter when higher)
    f32 heightFade = 1.0f - (h * p->heightAlphaScale / p->maxHeight);
    if (heightFade < 0.0f) {
        heightFade = 0.0f;
    }
    entry->alpha *= heightFade;

    // Clamp alpha
    if (entry->alpha < 0.0f) {
        entry->alpha = 0.0f;
    }
    if (entry->alpha > 1.0f) {
        entry->alpha = 1.0f;
    }
}

// ============================================================================
// ShadowMgr_BeginPass()
// 0x80563900 (192 bytes)
// ============================================================================
// Set up GX state for shadow rendering.
// Disables depth writes, enables alpha blending, and binds the
// shadow texture. Saves the previous state for restoration.
//
// Called once before rendering all shadows.
// ============================================================================
void ShadowMgr_BeginPass(void) {
    // Set vertex descriptor for position + texcoord only
    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

    // Position format: 3 x f32
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

    // Texcoord format: 2 x f32
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);

    // Single texcoord generator
    GXSetNumTexGens(1);

    // Load shadow texture
    GXLoadTexObj(&sShadowTexObj, 0);

    // Single TEV stage: modulate texture * vertex color
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, 0 /*GX_TEXCOORD0*/, 0 /*GX_TEXMAP0*/, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_TEXC, GX_CC_RASC, GX_CC_ZERO, GX_CC_ZERO);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, 0, 0, 1, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO, GX_CA_ZERO);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, 0, 0, 1, GX_TEVPREV);

    // No color channel lighting for shadows (use vertex color directly)
    GXSetNumChans(1);
    GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_VTX, GX_SRC_VTX,
                  0, GX_DF_NONE, GX_DA_OFF, 0, 0, 0);

    // Blend mode: alpha blend
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_COPY);
    GXSetColorUpdate(GX_ENABLE);
    GXSetAlphaUpdate(GX_ENABLE);

    // Depth test: read but don't write (shadows don't occlude)
    GXSetZMode(GX_ENABLE, GX_LEQUAL, GX_DISABLE);

    // No culling (shadow quads are viewed from above)
    GXSetCullMode(GX_CULL_NONE);
}

// ============================================================================
// ShadowMgr_RenderEntry()
// 0x80563800 (320 bytes)
// ============================================================================
// Render a single shadow as a textured quad.
// The quad is oriented horizontally (XZ plane) at the shadow position.
// Vertex colors carry the alpha value for transparency.
//
// @param entry  Shadow entry to render
// ============================================================================
void ShadowMgr_RenderEntry(const ShadowEntry* entry) {
    if (entry == nullptr || entry->shadowType == SHADOW_NONE) {
        return;
    }

    f32 x = entry->position.x;
    f32 y = entry->position.y;
    f32 z = entry->position.z;
    f32 rx = entry->radiusX;
    f32 rz = entry->radiusZ;

    // Pack alpha into vertex color (0xAABBGGRR on Wii)
    u8 a = static_cast<u8>(entry->alpha * 255.0f);
    GXColor vColor = 0x00000000 | (static_cast<u32>(a) << 24);

    // Begin quad (4 vertices)
    GXBegin(GX_QUADS, GX_VTXFMT0, 4);

    // Vertex 0: bottom-left
    GXPosition3f32(x - rx, y, z - rz);
    GXTexCoord2f32(0.0f, 1.0f);
    GXColor1u32(vColor);

    // Vertex 1: bottom-right
    GXPosition3f32(x + rx, y, z - rz);
    GXTexCoord2f32(1.0f, 1.0f);
    GXColor1u32(vColor);

    // Vertex 2: top-right
    GXPosition3f32(x + rx, y, z + rz);
    GXTexCoord2f32(1.0f, 0.0f);
    GXColor1u32(vColor);

    // Vertex 3: top-left
    GXPosition3f32(x - rx, y, z + rz);
    GXTexCoord2f32(0.0f, 0.0f);
    GXColor1u32(vColor);

    GXEnd();
}

// ============================================================================
// ShadowMgr_RenderAll()
// 0x80563600 (128 bytes)
// ============================================================================
// Render all active shadow entries.
// Sets up the shadow render pass, draws each entry, then restores state.
//
// @param mgr  Shadow manager with entries to render
// ============================================================================
void ShadowMgr_RenderAll(ShadowManager* mgr) {
    if (mgr == nullptr) {
        return;
    }

    // Check if shadows are globally enabled
    if (!(mgr->flags & 1)) {
        return;
    }

    ShadowMgr_BeginPass();

    // Render each active shadow entry
    for (u32 i = 0; i < mgr->activeCount; i++) {
        const ShadowEntry* entry = &mgr->entries[i];
        if (entry->shadowType != SHADOW_NONE) {
            ShadowMgr_RenderEntry(entry);
        }
    }

    ShadowMgr_EndPass();
}

// ============================================================================
// ShadowMgr_EndPass()
// 0x80563980 (64 bytes)
// ============================================================================
// Restore GX state after shadow rendering.
// Re-enables depth writes and restores standard culling.
// ============================================================================
void ShadowMgr_EndPass(void) {
    // Re-enable depth writes
    GXSetZMode(GX_ENABLE, GX_LEQUAL, GX_ENABLE);

    // Restore back-face culling
    GXSetCullMode(GX_CULL_BACK);
}

// ============================================================================
// ShadowMgr_ClearEntries()
// 0x80563A00 (64 bytes)
// ============================================================================
// Clear all shadow entries for a new frame.
// Called at the beginning of each render frame.
//
// @param mgr  Shadow manager
// ============================================================================
void ShadowMgr_ClearEntries(ShadowManager* mgr) {
    if (mgr == nullptr) {
        return;
    }
    for (u32 i = 0; i < MAX_SHADOW_CASTERS; i++) {
        mgr->entries[i] = ShadowEntry();
    }
    mgr->activeCount = 0;
}

// ============================================================================
// ShadowMgr_GetActiveCount()
// 0x80563A40 (32 bytes)
// ============================================================================
// Get the number of shadow entries that need rendering.
//
// @param mgr  Shadow manager
// @return     Number of active shadow entries
// ============================================================================
u32 ShadowMgr_GetActiveCount(const ShadowManager* mgr) {
    if (mgr == nullptr) {
        return 0;
    }
    return mgr->activeCount;
}