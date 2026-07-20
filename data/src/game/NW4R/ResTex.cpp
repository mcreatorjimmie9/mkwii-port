#include "ResTex.hpp"
#include "G3dResFile.hpp"
#include <common.h>
#include <cstring>
#include <cmath>

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

// ============================================================================
// Extended ResTex — Load / Unload / Bind / Helpers
// ============================================================================

// TEX0 standalone texture header layout (32 bytes)
struct TEX0Header {
    char tag[4];       // 0x00: "TEX0"
    u32 size;          // 0x04: total block size including header
    u16 format;        // 0x08: GX texture format
    u16 _0A;           // 0x0A: unknown / pad
    u16 width;         // 0x0C: texture width
    u16 height;        // 0x0E: texture height
    u32 rowStride;     // 0x10: row stride in bytes
    u32 _14;           // 0x14: unknown
    u32 _18;           // 0x18: unknown
    u32 _1C;           // 0x1C: unknown
    // Followed by: u32 numMipmaps, then u32 dataOffsets[], then image data
};

// Palette format constants
#define GX_TLUT_RGB565  0
#define GX_TLUT_RGB5A3  1

void ResTex_InitDefaults(ResTex* tex) {
    if (!tex) return;
    std::memset(tex, 0, sizeof(ResTexData));
    tex->name = NULL;
    tex->width = 0;
    tex->height = 0;
    tex->format = 0;
    tex->mipCount = 1;
    tex->wrapS = RESTEX_WRAP_CLAMP;
    tex->wrapT = RESTEX_WRAP_CLAMP;
    tex->minFilter = 1; // GX_TF_LINEAR
    tex->magFilter = 1;
    tex->lodBias = 0;
    tex->dataOffset = 0;
}

BOOL ResTex_Load(ResTex* tex, const void* data, u32 size) {
    if (!tex || !data || size < sizeof(TEX0Header)) return FALSE;

    const TEX0Header* hdr = static_cast<const TEX0Header*>(data);

    // Validate magic — accept both "TEX0" and "REFT"
    if (std::memcmp(hdr->tag, "TEX0", 4) != 0 &&
        std::memcmp(hdr->tag, "REFT", 4) != 0) {
        return FALSE;
    }

    // Populate the ResTexData from the TEX0 header
    tex->width  = hdr->width;
    tex->height = hdr->height;
    tex->format = static_cast<u8>(hdr->format & 0xFF);
    tex->name   = NULL; // Name is typically set from BRRES string table

    // Default wrap/filter settings
    tex->wrapS     = RESTEX_WRAP_REPEAT;
    tex->wrapT     = RESTEX_WRAP_REPEAT;
    tex->minFilter = 1;
    tex->magFilter = 1;
    tex->lodBias   = 0;

    // Extract mipmap count from the data after the header
    // In TEX0: u32 numMipmaps at offset 0x20, followed by offset array
    if (size >= 0x24) {
        const u8* base = static_cast<const u8*>(data);
        u32 numMips = *reinterpret_cast<const u32*>(base + 0x20);
        tex->mipCount = static_cast<u8>(numMips > 0 ? numMips : 1);
    } else {
        tex->mipCount = 1;
    }

    // Set dataOffset to point past the TEX0 header (base mip starts at 0x20 + 4 + numMips*4)
    u32 offsetArraySize = tex->mipCount * sizeof(u32);
    tex->dataOffset = 0x20 + 4 + offsetArraySize;

    // For paletted formats, palette data may follow the image data
    // The exact layout depends on whether this is from a BRRES or standalone TEX0

    return TRUE;
}

void ResTex_Unload(ResTex* tex) {
    if (!tex) return;
    // ResTexData is a non-owning reference; just reset to defaults
    ResTex_InitDefaults(tex);
}

void ResTex_Bind(const ResTex* tex, u8 texUnit) {
    if (!tex || !tex->name) return;
    if (tex->width == 0 || tex->height == 0) return;

    // On Wii, this would:
    // 1. Build a GXTexObj via ResTex_BuildTexObj
    // 2. Call GXLoadTexObj(&texObj, static_cast<GXTexMapID>(texUnit))
    //
    // On PC, the renderer would upload the texture data to GPU memory
    // and bind it to the given texture unit/slot.
    //
    // For now this is a no-op stub.
    (void)texUnit;
}

u8 ResTex_GetMipmapCount(const ResTex* tex) {
    if (!tex) return 0;
    return tex->mipCount;
}

BOOL ResTex_HasPalette(const ResTex* tex) {
    if (!tex) return FALSE;
    // CI4 (0x08), CI8 (0x09), and CI14X2 (0x0A) use palettes
    u8 fmt = tex->format;
    return (fmt == 0x08 || fmt == 0x09 || fmt == 0x0A) ? TRUE : FALSE;
}

u8 ResTex_GetPaletteFormat(const ResTex* tex) {
    if (!tex) return GX_TLUT_RGB5A3;
    // By convention in NW4R, palette format is stored in high bit of the
    // format field or derived from the texture name convention.
    // Default to RGB5A3 (which is the most common in MKWii).
    // The actual palette format is part of the BRRES TEX block metadata.
    return GX_TLUT_RGB5A3;
}

u32 ResTex_GetTotalSize(const ResTex* tex) {
    if (!tex || tex->width == 0 || tex->height == 0) return 0;

    u32 bpp = ResTex_FormatToBytesPerPixel(tex->format);
    u32 totalSize = 0;
    u32 w = tex->width;
    u32 h = tex->height;

    for (u8 i = 0; i < tex->mipCount; i++) {
        // CMPR format: 8 bytes per 4x4 block = bpp 0.5
        u32 rowBytes;
        if (tex->format == RESTEX_FMT_CMPR) {
            // CMPR: each 4x4 block is 8 bytes
            u32 blocksX = (w + 3) / 4;
            u32 blocksY = (h + 3) / 4;
            rowBytes = blocksX * blocksY * 8;
        } else {
            rowBytes = (w * bpp + 3) & ~3u; // row-aligned to 4 bytes
            rowBytes *= h;
        }
        totalSize += rowBytes;

        // Next mip level is half dimensions (minimum 1x1)
        w = (w > 1) ? (w >> 1) : 1;
        h = (h > 1) ? (h >> 1) : 1;
    }

    // Add palette size if paletted
    if (ResTex_HasPalette(tex)) {
        u32 paletteEntries = 0;
        if (tex->format == 0x08) paletteEntries = 16;       // CI4: 16 entries
        else if (tex->format == 0x09) paletteEntries = 256;  // CI8: 256 entries
        else if (tex->format == 0x0A) paletteEntries = 4096; // CI14X2: 4096 entries
        // Each palette entry is 2 bytes (u16)
        totalSize += paletteEntries * 2;
    }

    return totalSize;
}

u32 ResTex_FormatToBytesPerPixel(u8 gxFormat) {
    switch (gxFormat) {
        case RESTEX_FMT_I4:     return 0;   // 4 bits per pixel (nibble)
        case RESTEX_FMT_I8:     return 1;
        case RESTEX_FMT_IA4:    return 1;
        case RESTEX_FMT_IA8:    return 2;
        case RESTEX_FMT_RGB565: return 2;
        case RESTEX_FMT_RGB5A3: return 2;
        case RESTEX_FMT_RGBA8:  return 4;
        case RESTEX_FMT_CMPR:   return 0;   // Special: 0.5 bytes/pixel (handled separately)
        case 0x08: return 0;    // CI4: indexed, palette lookup
        case 0x09: return 0;    // CI8: indexed, palette lookup
        case 0x0A: return 0;    // CI14X2: indexed, palette lookup
        default:   return 0;
    }
}

void ResTex_DecodePaletteData(const u8* src, u8* dst, u32 count, u32 format) {
    if (!src || !dst || count == 0) return;

    for (u32 i = 0; i < count; i++) {
        // Each palette entry is a u16 in big-endian (Wii byte order)
        u16 entry = static_cast<u16>((src[i * 2] << 8) | src[i * 2 + 1]);

        if (format == GX_TLUT_RGB565) {
            // RGB565: RRRRR GGGGGG BBBBB
            u8 r = static_cast<u8>((entry >> 11) & 0x1F);
            u8 g = static_cast<u8>((entry >> 5) & 0x3F);
            u8 b = static_cast<u8>(entry & 0x1F);
            // Expand to 8-bit per channel
            dst[i * 4 + 0] = static_cast<u8>((r << 3) | (r >> 2));
            dst[i * 4 + 1] = static_cast<u8>((g << 2) | (g >> 4));
            dst[i * 4 + 2] = static_cast<u8>((b << 3) | (b >> 2));
            dst[i * 4 + 3] = 0xFF;
        } else {
            // GX_TLUT_RGB5A3: 1-bit alpha, 4-bit per color channel
            // If bit 15 is 0: RGB5A3 (3-bit alpha + 5-bit per channel)
            // If bit 15 is 1: RGB555 (1-bit alpha = 0xFF)
            if (entry & 0x8000) {
                // RGB555 with full alpha
                u8 r5 = static_cast<u8>((entry >> 10) & 0x1F);
                u8 g5 = static_cast<u8>((entry >> 5) & 0x1F);
                u8 b5 = static_cast<u8>(entry & 0x1F);
                dst[i * 4 + 0] = static_cast<u8>((r5 << 3) | (r5 >> 2));
                dst[i * 4 + 1] = static_cast<u8>((g5 << 3) | (g5 >> 2));
                dst[i * 4 + 2] = static_cast<u8>((b5 << 3) | (b5 >> 2));
                dst[i * 4 + 3] = 0xFF;
            } else {
                // RGB5A3: 3-bit alpha, 5-bit per color channel
                u8 a3 = static_cast<u8>((entry >> 12) & 0x07);
                u8 r5 = static_cast<u8>((entry >> 7) & 0x1F);
                u8 g5 = static_cast<u8>((entry >> 2) & 0x1F);
                u8 b5 = static_cast<u8>((entry & 0x03) << 3) |
                        static_cast<u8>((entry >> 13) & 0x07);
                dst[i * 4 + 0] = static_cast<u8>((r5 << 3) | (r5 >> 2));
                dst[i * 4 + 1] = static_cast<u8>((g5 << 3) | (g5 >> 2));
                dst[i * 4 + 2] = static_cast<u8>((b5 << 3) | (b5 >> 2));
                dst[i * 4 + 3] = static_cast<u8>((a3 << 5) | (a3 << 2) | (a3 >> 1));
            }
        }
    }
}