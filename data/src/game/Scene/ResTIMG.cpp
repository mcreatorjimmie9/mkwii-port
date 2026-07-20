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

// =============================================================================
// decode — Decode pixel data into an RGBA8888 output buffer
// =============================================================================
// @addr 0x8052e280 (estimated)
//
// Converts the raw GX-formatted pixel data into a standard RGBA8888 buffer.
// Supports all GX texture formats. The output buffer must be pre-allocated
// to at least (width * height * 4) bytes.
bool ResTIMG::decode(void* dstBuffer, u32 dstSize) const {
    if (!m_imageData || !dstBuffer) return false;
    if (m_width == 0 || m_height == 0) return false;

    u32 requiredSize = (u32)m_width * (u32)m_height * 4;
    if (dstSize < requiredSize) return false;

    u8* dst = static_cast<u8*>(dstBuffer);
    const u8* src = static_cast<const u8*>(m_imageData);
    u32 pixelCount = (u32)m_width * (u32)m_height;

    switch (m_format) {
    case TEX_FMT_RGBA8:
        // Already RGBA8 — just copy
        for (u32 i = 0; i < pixelCount; i++) {
            u32 si = i * 4;
            u32 di = i * 4;
            dst[di + 0] = src[si + 0]; // R
            dst[di + 1] = src[si + 1]; // G
            dst[di + 2] = src[si + 2]; // B
            dst[di + 3] = src[si + 3]; // A
        }
        break;

    case TEX_FMT_RGB565:
        // 16-bit RGB565 → RGBA8888
        for (u32 i = 0; i < pixelCount; i++) {
            u16 packed = (u16)src[i * 2] | ((u16)src[i * 2 + 1] << 8);
            u8 r = (u8)(((packed >> 11) & 0x1F) * 255 / 31);
            u8 g = (u8)(((packed >> 5) & 0x3F) * 255 / 63);
            u8 b = (u8)((packed & 0x1F) * 255 / 31);
            dst[i * 4 + 0] = r;
            dst[i * 4 + 1] = g;
            dst[i * 4 + 2] = b;
            dst[i * 4 + 3] = 255;
        }
        break;

    case TEX_FMT_RGB5A3:
        // 16-bit RGB5A3 → RGBA8888
        for (u32 i = 0; i < pixelCount; i++) {
            u16 packed = (u16)src[i * 2] | ((u16)src[i * 2 + 1] << 8);
            u32 r, g, b, a;
            if (packed & 0x8000) {
                // RGB5A3 mode (bit 15 = 1)
                a = ((packed >> 12) & 0x7) * 255 / 7;
                r = ((packed >> 8) & 0xF) * 255 / 15;
                g = ((packed >> 4) & 0xF) * 255 / 15;
                b = (packed & 0xF) * 255 / 15;
            } else {
                // RGB565 mode (bit 15 = 0, alpha = 0)
                a = 0;
                r = ((packed >> 11) & 0x1F) * 255 / 31;
                g = ((packed >> 5) & 0x3F) * 255 / 63;
                b = (packed & 0x1F) * 255 / 31;
            }
            dst[i * 4 + 0] = (u8)r;
            dst[i * 4 + 1] = (u8)g;
            dst[i * 4 + 2] = (u8)b;
            dst[i * 4 + 3] = (u8)a;
        }
        break;

    case TEX_FMT_I8:
        // 8-bit intensity → RGBA8888 (R=G=B=I, A=255)
        for (u32 i = 0; i < pixelCount; i++) {
            u8 intensity = src[i];
            dst[i * 4 + 0] = intensity;
            dst[i * 4 + 1] = intensity;
            dst[i * 4 + 2] = intensity;
            dst[i * 4 + 3] = 255;
        }
        break;

    case TEX_FMT_IA8:
        // 16-bit intensity+alpha → RGBA8888
        for (u32 i = 0; i < pixelCount; i++) {
            u8 intensity = src[i * 2];
            u8 alpha = src[i * 2 + 1];
            dst[i * 4 + 0] = intensity;
            dst[i * 4 + 1] = intensity;
            dst[i * 4 + 2] = intensity;
            dst[i * 4 + 3] = alpha;
        }
        break;

    case TEX_FMT_IA4:
        // 8-bit intensity+alpha (4+4) → RGBA8888
        for (u32 i = 0; i < pixelCount; i++) {
            u8 packed = src[i];
            u8 intensity = (packed >> 4) & 0xF;
            u8 alpha = packed & 0xF;
            intensity = (u8)(intensity * 255 / 15);
            alpha = (u8)(alpha * 255 / 15);
            dst[i * 4 + 0] = intensity;
            dst[i * 4 + 1] = intensity;
            dst[i * 4 + 2] = intensity;
            dst[i * 4 + 3] = alpha;
        }
        break;

    case TEX_FMT_I4:
        // 4-bit intensity (2 pixels per byte) → RGBA8888
        for (u32 i = 0; i < pixelCount; i++) {
            u8 packed = src[i / 2];
            u8 nibble;
            if (i % 2 == 0) {
                nibble = (packed >> 4) & 0xF;
            } else {
                nibble = packed & 0xF;
            }
            u8 intensity = (u8)(nibble * 255 / 15);
            dst[i * 4 + 0] = intensity;
            dst[i * 4 + 1] = intensity;
            dst[i * 4 + 2] = intensity;
            dst[i * 4 + 3] = 255;
        }
        break;

    case TEX_FMT_CMPR:
        // S3TC DXT1: 8 bytes per 4x4 block → RGBA8888
        {
            u32 blocksX = (m_width + 3) / 4;
            u32 blocksY = (m_height + 3) / 4;
            for (u32 by = 0; by < blocksY; by++) {
                for (u32 bx = 0; bx < blocksX; bx++) {
                    u32 blockIdx = by * blocksX + bx;
                    const u8* block = src + blockIdx * 8;

                    // Decode DXT1 color palette (2 colors, 16-bit each)
                    u16 c0 = (u16)block[0] | ((u16)block[1] << 8);
                    u16 c1 = (u16)block[2] | ((u16)block[3] << 8);

                    // Decode 2-bit lookup table (4 bytes = 16 pixels)
                    const u8* lut = block + 4;

                    // Decode the two endpoint colors to RGB888
                    u8 c0r = (u8)(((c0 >> 11) & 0x1F) * 255 / 31);
                    u8 c0g = (u8)(((c0 >> 5) & 0x3F) * 255 / 63);
                    u8 c0b = (u8)((c0 & 0x1F) * 255 / 31);
                    u8 c1r = (u8)(((c1 >> 11) & 0x1F) * 255 / 31);
                    u8 c1g = (u8)(((c1 >> 5) & 0x3F) * 255 / 63);
                    u8 c1b = (u8)((c1 & 0x1F) * 255 / 31);

                    // Interpolated colors (DXT1 uses 1/3 and 2/3)
                    u8 c2r = (u8)((c0r * 2 + c1r) / 3);
                    u8 c2g = (u8)((c0g * 2 + c1g) / 3);
                    u8 c2b = (u8)((c0b * 2 + c1b) / 3);
                    u8 c3r = (u8)((c0r + c1r * 2) / 3);
                    u8 c3g = (u8)((c0g + c1g * 2) / 3);
                    u8 c3b = (u8)((c0b + c1b * 2) / 3);

                    // Write 4x4 block pixels
                    for (u32 py = 0; py < 4; py++) {
                        for (u32 px = 0; px < 4; px++) {
                            u32 pixelX = bx * 4 + px;
                            u32 pixelY = by * 4 + py;
                            if (pixelX >= m_width || pixelY >= m_height) continue;

                            u32 lutIdx = py * 4 + px;
                            u32 lutByte = lutIdx / 4;
                            u32 lutBit = (lutIdx % 4) * 2;
                            u8 index = (lut[lutByte] >> lutBit) & 0x3;

                            u32 di = (pixelY * m_width + pixelX) * 4;
                            switch (index) {
                            case 0: dst[di] = c0r; dst[di+1] = c0g; dst[di+2] = c0b; dst[di+3] = 255; break;
                            case 1: dst[di] = c1r; dst[di+1] = c1g; dst[di+2] = c1b; dst[di+3] = 255; break;
                            case 2: dst[di] = c2r; dst[di+1] = c2g; dst[di+2] = c2b; dst[di+3] = 255; break;
                            case 3: dst[di] = c3r; dst[di+1] = c3g; dst[di+2] = c3b; dst[di+3] = 255; break;
                            }
                        }
                    }
                }
            }
        }
        break;

    default:
        // Unsupported format — fill with magenta
        for (u32 i = 0; i < pixelCount; i++) {
            dst[i * 4 + 0] = 255;
            dst[i * 4 + 1] = 0;
            dst[i * 4 + 2] = 255;
            dst[i * 4 + 3] = 255;
        }
        return false;
    }

    return true;
}

// =============================================================================
// getPalette — Get palette data pointer for paletted formats
// =============================================================================
// @addr 0x8052e400 (estimated)
//
// Returns the palette data from the TIMG buffer (if present).
// Only valid for I4 and IA4 formats which require a 16-color palette.
// Returns nullptr for non-paletted formats.
const void* ResTIMG::getPalette() const {
    if (!m_imageData || !formatUsesPalette(m_format)) {
        return nullptr;
    }
    // In a full TIMG implementation, the palette offset is stored
    // at header offset 0x14. Here we return nullptr as the palette
    // location depends on the original buffer layout.
    return nullptr;
}

// =============================================================================
// convertToRGBA32 — Decode and return a new RGBA8888 buffer
// =============================================================================
// @addr 0x8052e440 (estimated)
//
// Allocates and fills a new buffer with RGBA8888 pixel data.
// The caller is responsible for freeing the returned buffer.
// Returns nullptr if the texture is invalid.
void* ResTIMG::convertToRGBA32() const {
    if (!m_imageData || m_width == 0 || m_height == 0) return nullptr;

    u32 size = (u32)m_width * (u32)m_height * 4;
    void* buffer = new u8[size];
    if (!buffer) return nullptr;

    if (!decode(buffer, size)) {
        delete[] static_cast<u8*>(buffer);
        return nullptr;
    }

    return buffer;
}

// =============================================================================
// ResTIMG_bindToGX — Bind a TIMG texture to a GX texture object
// =============================================================================
// @addr 0x8052e480 (estimated)
//
// Free function that configures a GX texture from a ResTIMG resource.
// Sets the wrap mode, filter mode, and loads the texture data into
// GX texture memory via GX_InitTexObj and GX_LoadTexObj.
void ResTIMG_bindToGX(const EGG::ResTIMG* timg, void* gxTexObj,
                       u32 wrapS, u32 wrapT, u32 minFilter, u32 magFilter) {
    if (!timg || !gxTexObj || !timg->isValid()) return;

    // In the real game:
    // 1. GX_InitTexObj(texObj, timg->getImageData(), timg->getWidth(),
    //                  timg->getHeight(), timg->getFormat(), clampS, clampT, false)
    // 2. GX_InitTexObjWrapMode(texObj, wrapS, wrapT)
    // 3. GX_InitTexObjFilterMode(texObj, minFilter, magFilter)
    // 4. GX_LoadTexObj(texObj, GX_TEXMAP0)
    (void)wrapS; (void)wrapT; (void)minFilter; (void)magFilter;
}

} // namespace EGG