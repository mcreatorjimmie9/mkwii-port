// ResTIMG.cpp - Texture image resource implementation
// Reconstructed from Scene module texture resource patterns
//
// Handles parsing and access for the TIMG (Texture Image) binary format
// used in Nintendo's Rarc archives. The TIMG format stores GX-compatible
// texture data with mipmaps, palettes, and various pixel formats.

#include "ResTIMG.hpp"
#include <string.h>

namespace EGG {

// =============================================================================
// TIMG binary layout (little-endian)
// =============================================================================
// Offset  Size  Description
// ------  ----  -----------
// 0x00    4     Signature / format flags (often has "TIMG" magic or GX fmt)
// 0x04    2     Image width (pixels)
// 0x06    2     Image height (pixels)
// 0x08    1     Mipmap count (0 = no mipmaps, 1 = base only, N = N levels)
// 0x09    1     GX texture format enum
// 0x0A    1     Tile format / wrap S (unused in most TIMG)
// 0x0B    1     Tile format / wrap T (unused in most TIMG)
// 0x0C    4     Image data offset from start of this header
// 0x10    4     Image data size in bytes
// 0x14    4     Palette data offset (0 if no palette)
// 0x18    4     Palette data size in bytes
// 0x1C    4     Extended header size / alignment padding
// =============================================================================

static const u32 TIMG_MIN_HEADER_SIZE = 0x20;
static const u32 TIMG_MAGIC = 0x474D4954; // "TIMG" in little-endian

// =============================================================================
// Anonymous namespace helpers
// =============================================================================
namespace {

// Return the number of bits per pixel for a given GX texture format.
// Used internally for size calculations and validation.
u8 getBitsPerPixel(EGG::TextureFormat fmt) {
    switch (fmt) {
    case EGG::TEX_FMT_I4:     return 4;
    case EGG::TEX_FMT_I8:     return 8;
    case EGG::TEX_FMT_IA4:    return 8;
    case EGG::TEX_FMT_IA8:    return 16;
    case EGG::TEX_FMT_RGB565: return 16;
    case EGG::TEX_FMT_RGB5A3: return 16;
    case EGG::TEX_FMT_RGBA8:  return 32;
    case EGG::TEX_FMT_CMPR:   return 4; // 4 bits/pixel average (DXT1)
    default:                  return 32;
    }
}

// Check whether a GX texture format requires an external palette.
bool formatUsesPalette(EGG::TextureFormat fmt) {
    return fmt == EGG::TEX_FMT_I4 || fmt == EGG::TEX_FMT_IA4;
}

// Decode palette entries from source buffer into an RGBA8 destination.
// Each source entry is 16 bits (RGB565 or RGB5A3 depending on format).
// The dst buffer receives expanded RGBA8888 values (4 bytes per entry).
void decodePalette(const u8* src, u8* dst, u32 entries) {
    if (!src || !dst || entries == 0)
        return;

    for (u32 i = 0; i < entries; i++) {
        u16 packed = (u16)src[i * 2] | ((u16)src[i * 2 + 1] << 8);

        // Decode as RGB5A3 (bit 15 = 0: RGB565, bit 15 = 1: RGB5A3)
        u32 r, g, b, a;
        if (packed & 0x8000) {
            // RGB5A3 mode
            a = ((packed >> 12) & 0x7) * 255 / 7;
            r = ((packed >> 8) & 0xF) * 255 / 15;
            g = ((packed >> 4) & 0xF) * 255 / 15;
            b = (packed & 0xF) * 255 / 15;
        } else {
            // RGB565 mode (alpha = 255)
            a = 255;
            r = ((packed >> 11) & 0x1F) * 255 / 31;
            g = ((packed >> 5) & 0x3F) * 255 / 63;
            b = (packed & 0x1F) * 255 / 31;
        }

        u32 idx = i * 4;
        dst[idx + 0] = (u8)r;
        dst[idx + 1] = (u8)g;
        dst[idx + 2] = (u8)b;
        dst[idx + 3] = (u8)a;
    }
}

// Get the palette entry count for a format (0 if non-paletted).
u32 getPaletteEntryCount(EGG::TextureFormat fmt) {
    switch (fmt) {
    case EGG::TEX_FMT_I4:   return 16;
    case EGG::TEX_FMT_IA4:  return 16;
    default:                return 0;
    }
}

// Validate that texture dimensions are GX-legal (power-of-two).
bool isValidDimension(u16 dim) {
    if (dim == 0) return false;
    // Power of two check: only one bit set
    return (dim & (dim - 1)) == 0;
}

} // anonymous namespace

// =============================================================================
// Constructor / Destructor
// =============================================================================

ResTIMG::ResTIMG()
    : m_imageData(nullptr)
    , m_imageDataSize(0)
    , m_width(0)
    , m_height(0)
    , m_format(TEX_FMT_RGBA8)
    , m_mipCount(1) {
    // All fields explicitly initialized above — no dynamic allocation
    // at construction time. Data is only referenced via pointer into
    // the externally-owned TIMG buffer (non-owning).
}

ResTIMG::~ResTIMG() {
    // ResTIMG does not own its pixel data — it merely points into the
    // provided buffer. Nullify the pointer to prevent dangling refs.
    m_imageData = nullptr;
    m_imageDataSize = 0;
    m_width = 0;
    m_height = 0;
    m_format = TEX_FMT_RGBA8;
    m_mipCount = 0;
}

// =============================================================================
// load — Parse a TIMG binary buffer
// =============================================================================
// @addr 0x8052e080 (estimated)
//
// Validates the TIMG header, extracts format/dimensions/mipmap info,
// and sets the image data pointer into the provided buffer.
// This object does NOT copy the data — it retains a pointer.
// The caller must ensure the buffer outlives this ResTIMG.

bool ResTIMG::load(const void* data, u32 size) {
    // Reset state on any new load attempt
    m_imageData = nullptr;
    m_imageDataSize = 0;
    m_width = 0;
    m_height = 0;
    m_format = TEX_FMT_RGBA8;
    m_mipCount = 0;

    if (!data || size < TIMG_MIN_HEADER_SIZE) {
        return false;
    }

    const u8* ptr = static_cast<const u8*>(data);

    // --- Parse TIMG header fields ---

    // Signature at offset 0x00 (4 bytes)
    u32 signature = ptr[0x00] | (ptr[0x01] << 8) |
                    (ptr[0x02] << 16) | (ptr[0x03] << 24);

    // Width at offset 0x04 (2 bytes, little-endian)
    m_width = (u16)(ptr[0x04] | (ptr[0x05] << 8));

    // Height at offset 0x06 (2 bytes, little-endian)
    m_height = (u16)(ptr[0x06] | (ptr[0x07] << 8));

    // Mipmap count at offset 0x08
    m_mipCount = ptr[0x08];

    // GX texture format at offset 0x09
    m_format = static_cast<TextureFormat>(ptr[0x09]);

    // Image data offset at offset 0x0C (4 bytes, from start of buffer)
    u32 dataOffset = ptr[0x0C] | (ptr[0x0D] << 8) |
                     (ptr[0x0E] << 16) | (ptr[0x0F] << 24);

    // Image data size at offset 0x10 (4 bytes)
    m_imageDataSize = ptr[0x10] | (ptr[0x11] << 8) |
                      (ptr[0x12] << 16) | (ptr[0x13] << 24);

    // --- Validate parsed values ---

    // Check dimensions are power-of-two (GX requirement)
    if (!isValidDimension(m_width) || !isValidDimension(m_height)) {
        return false;
    }

    // Check format is in valid range
    if (m_format > TEX_FMT_CMPR) {
        return false;
    }

    // Check data offset is sane (must be at least past the header)
    if (dataOffset < TIMG_MIN_HEADER_SIZE || dataOffset >= size) {
        return false;
    }

    // Check image data fits within the buffer
    if (dataOffset + m_imageDataSize > size) {
        return false;
    }

    // Validate image data size against expected size for this format
    u32 expectedSize = computeDataSize(m_format, m_width, m_height);

    // If mipmaps are present, account for all mip levels
    if (m_mipCount > 1) {
        u16 mipW = m_width;
        u16 mipH = m_height;
        for (u8 i = 1; i < m_mipCount; i++) {
            mipW = (mipW > 1) ? (mipW >> 1) : 1;
            mipH = (mipH > 1) ? (mipH >> 1) : 1;
            expectedSize += computeDataSize(m_format, mipW, mipH);
        }
    }

    // Allow some slack for alignment padding
    if (m_imageDataSize < expectedSize) {
        return false;
    }

    // --- Set image data pointer ---
    m_imageData = ptr + dataOffset;

    (void)signature; // Signature is informational; some TIMG variants omit it
    return true;
}

// =============================================================================
// getMipOffset — Compute byte offset to a specific mipmap level
// =============================================================================
// @addr 0x8052e1c0 (estimated)
//
// Mipmaps are stored sequentially after the base level image data.
// Each level is half the dimensions of the previous (clamped to 1x1).

u32 ResTIMG::getMipOffset(u8 mipLevel) const {
    if (mipLevel == 0) return 0;
    if (mipLevel >= m_mipCount || !m_imageData) return 0;

    // Walk through each mip level and accumulate sizes
    u32 offset = 0;
    u16 w = m_width;
    u16 h = m_height;

    for (u8 i = 0; i < mipLevel; i++) {
        u32 levelSize = computeDataSize(m_format, w, h);
        offset += levelSize;

        // GX mandates power-of-two dimensions; halve each axis
        w = (w > 1) ? (w >> 1) : 1;
        h = (h > 1) ? (h >> 1) : 1;
    }

    return offset;
}

// =============================================================================
// computeDataSize — Static helper: calculate byte size for one mip level
// =============================================================================
// @addr 0x8052e220 (estimated)
//
// For CMPR (DXT1) format, each 4x4 pixel block is 8 bytes.
// All other formats are straightforward bits-per-pixel calculations.

u32 ResTIMG::computeDataSize(TextureFormat fmt, u16 width, u16 height) {
    u32 pixels = (u32)width * (u32)height;

    switch (fmt) {
    case TEX_FMT_I4:
        // 4 bits per pixel — 2 pixels per byte
        return (pixels + 1) / 2;

    case TEX_FMT_I8:
        // 8 bits per pixel — 1 byte per pixel
        return pixels;

    case TEX_FMT_IA4:
        // 8 bits per pixel (4 intensity + 4 alpha)
        return pixels;

    case TEX_FMT_IA8:
        // 16 bits per pixel (8 intensity + 8 alpha)
        return pixels * 2;

    case TEX_FMT_RGB565:
        // 16 bits per pixel
        return pixels * 2;

    case TEX_FMT_RGB5A3:
        // 16 bits per pixel (1-bit alpha select + 15-bit color)
        return pixels * 2;

    case TEX_FMT_RGBA8:
        // 32 bits per pixel
        return pixels * 4;

    case TEX_FMT_CMPR:
        // S3TC DXT1: 8 bytes per 4x4 block (0.5 bytes per pixel)
        // Number of blocks: ceil(w/4) * ceil(h/4)
        return ((width + 3) / 4) * ((height + 3) / 4) * 8;

    default:
        // Unknown format — default to RGBA8 size as safest fallback
        return pixels * 4;
    }
}

} // namespace EGG