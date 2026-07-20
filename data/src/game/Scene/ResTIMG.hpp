#pragma once
// ResTIMG.hpp - Texture image resource
// Reconstructed from Scene module texture resource patterns
//
// ResTIMG represents a TIMG (Texture Image) resource — the binary
// format used by Nintendo's Rarc archives for storing texture data.
// In EGG, this corresponds to the ResTIMG class in the resource system.

#include "rk_common.h"

namespace EGG {

// =============================================================================
// TextureFormat — GX-compatible texture formats
// =============================================================================
enum TextureFormat {
    TEX_FMT_I4 = 0x0,
    TEX_FMT_I8 = 0x1,
    TEX_FMT_IA4 = 0x2,
    TEX_FMT_IA8 = 0x3,
    TEX_FMT_RGB565 = 0x4,
    TEX_FMT_RGB5A3 = 0x5,
    TEX_FMT_RGBA8 = 0x6,
    TEX_FMT_CMPR = 0xE,  // S3TC DXT1
};

// =============================================================================
// ResTIMG — Texture image resource
//
// Wraps a raw TIMG binary blob. Provides accessors for format,
// dimensions, mip count, and the raw pixel data pointer.
// The name follows the EGG framework convention (ResTIMG).
// =============================================================================
class ResTIMG {
public:
    ResTIMG();
    ~ResTIMG();

    // Load from a raw TIMG binary buffer
    bool load(const void* data, u32 size);

    // Accessors
    u16 getWidth() const { return m_width; }
    u16 getHeight() const { return m_height; }
    TextureFormat getFormat() const { return m_format; }
    u8 getMipCount() const { return m_mipCount; }
    const void* getImageData() const { return m_imageData; }
    u32 getImageDataSize() const { return m_imageDataSize; }

    // Offset to the first mipmap level data
    u32 getMipOffset(u8 mipLevel) const;

    // Check if valid
    bool isValid() const { return m_imageData != nullptr; }

    // Decode pixel data to RGBA8888 output buffer
    bool decode(void* dstBuffer, u32 dstSize) const;

    // Get palette data pointer (paletted formats only, else nullptr)
    const void* getPalette() const;

    // Decode and return new RGBA8888 buffer (caller frees)
    void* convertToRGBA32() const;

    // Compute expected data size for a format/dimension
    static u32 computeDataSize(TextureFormat fmt, u16 width, u16 height);

private:
    const void* m_imageData;
    u32 m_imageDataSize;
    u16 m_width;
    u16 m_height;
    TextureFormat m_format;
    u8 m_mipCount;
};

// Free function: bind a TIMG texture to a GX texture object
void ResTIMG_bindToGX(const EGG::ResTIMG* timg, void* gxTexObj,
                       u32 wrapS, u32 wrapT, u32 minFilter, u32 magFilter);

} // namespace EGG