#include "ResTex.hpp"
#include "G3dResFile.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// ResTex / ResMat / ResBone / ResShape Implementation
// ============================================================================
// Typed accessor wrappers for BRRES resource blocks.
// These provide safe, typed read-only access to binary resource data.
// ============================================================================

// ============================================================================
// ResTex — Texture Resource Accessors
// ============================================================================

// @addr 0x80604100
const char* ResTex_GetName(const ResTex* tex) {
    if (!tex) return NULL;
    return tex->name;
}

// @addr 0x80604120
u16 ResTex_GetWidth(const ResTex* tex) {
    if (!tex) return 0;
    return tex->width;
}

// @addr 0x80604140
u16 ResTex_GetHeight(const ResTex* tex) {
    if (!tex) return 0;
    return tex->height;
}

// @addr 0x80604160
u8 ResTex_GetFormat(const ResTex* tex) {
    if (!tex) return 0;
    return tex->format;
}

// @addr 0x80604180
// Build a GXTexObj from the texture resource data.
// In real NW4R, this calls GXInitTexObj with the resource's format,
// dimensions, wrap modes, and filter settings.
void ResTex_BuildTexObj(const ResTex* tex, GXTexObj* out) {
    if (!tex || !out) return;

    // In real NW4R:
    // GXInitTexObj(out,
    //     tex->imageData,
    //     tex->width, tex->height,
    //     static_cast<GXTexFmt>(tex->format),
    //     static_cast<GXTexWrapMode>(tex->wrapS),
    //     static_cast<GXTexWrapMode>(tex->wrapT),
    //     GX_FALSE,
    //     static_cast<GXTexFilter>(tex->minFilter),
    //     static_cast<GXTexFilter>(tex->magFilter));
    //
    // On PC, memset to zero (GXTexObj is opaque).
    std::memset(out, 0, sizeof(GXTexObj));
}

// @addr 0x80604220
// Get raw image data pointer.
// In the BRRES file, image data follows the TEX entry header.
const void* ResTex_GetImageData(const ResTex* tex) {
    if (!tex || !tex->name) return NULL;

    // In real NW4R, the image data is at:
    //   (base of TEX block) + tex->dataOffset
    // But we don't store the base pointer in the stub.
    return NULL;
}

// ============================================================================
// ResMat — Material Resource Accessors
// ============================================================================

// @addr 0x80604280
const char* ResMat_GetName(const ResMat* mat) {
    if (!mat) return NULL;
    return mat->name;
}

// @addr 0x806042A0
// Get the texture index for a given texture map slot (0-7).
// Returns -1 if the slot has no texture assigned.
s32 ResMat_GetTexMapIdx(const ResMat* mat, u8 slot) {
    if (!mat || slot >= 8) return -1;

    u32 ref = mat->texMapRefs[slot];
    if (ref == 0xFFFFFFFF) return -1; // no texture

    return static_cast<s32>(ref);
}

// @addr 0x806042D0
u8 ResMat_GetTevStageCount(const ResMat* mat) {
    if (!mat) return 0;
    return mat->tevStageCount;
}

// @addr 0x806042F0
u8 ResMat_GetTexMapCount(const ResMat* mat) {
    if (!mat) return 0;
    return mat->texMapCount;
}

// @addr 0x80604310
u32 ResMat_GetFlags(const ResMat* mat) {
    if (!mat) return 0;
    return mat->_2C;
}

// @addr 0x80604330
// Apply the material's full state to the GX hardware.
// This configures TEV stages, texture bindings, texcoord gens,
// blend mode, depth test, and material colors.
void ResMat_Apply(const ResMat* mat, G3dResFileData* resFile) {
    if (!mat) return;

    // In real NW4R, this performs a full material bind:
    // 1. Set up TEV stages (GXSetTevOrder, GXSetTevColorIn, etc.)
    // 2. Bind textures (GXLoadTexObj for each texmap slot)
    // 3. Set texcoord generators (GXSetTexCoordGen2)
    // 4. Set render state (GXSetBlendMode, GXSetZMode, etc.)
    // 5. Set material/ambient colors (GXSetChanMatColor, GXSetChanAmbColor)
    //
    // On PC, this is a no-op.

    (void)resFile;
}

// ============================================================================
// ResBone — Bone/Skeleton Resource Accessors
// ============================================================================

// @addr 0x806043A0
const char* ResBone_GetName(const ResBone* bone) {
    if (!bone) return NULL;
    return bone->name;
}

// @addr 0x806043C0
u16 ResBone_GetParentIndex(const ResBone* bone) {
    if (!bone) return 0xFFFF;
    return bone->parentIdx;
}

// @addr 0x806043E0
const f32* ResBone_GetBindPose(const ResBone* bone) {
    if (!bone) return NULL;
    return bone->bindPose[0];
}

// ============================================================================
// ResShape — Shape/Mesh Resource Accessors
// ============================================================================

// @addr 0x80604420
const char* ResShape_GetName(const ResShape* shape) {
    if (!shape) return NULL;
    return shape->name;
}

// @addr 0x80604440
u16 ResShape_GetMaterialIndex(const ResShape* shape) {
    if (!shape) return 0;
    return shape->materialIdx;
}

// @addr 0x80604460
u16 ResShape_GetVertexCount(const ResShape* shape) {
    if (!shape) return 0;
    return shape->vertexCount;
}