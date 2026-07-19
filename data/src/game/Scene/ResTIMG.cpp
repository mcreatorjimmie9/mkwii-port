// ResTIMG.cpp - Texture image resource implementation

#include "ResTIMG.hpp"
#include <string.h>

namespace EGG {

ResTIMG::ResTIMG()
    : m_imageData(nullptr)
    , m_imageDataSize(0)
    , m_width(0)
    , m_height(0)
    , m_format(TEX_FMT_RGBA8)
    , m_mipCount(1) {}

ResTIMG::~ResTIMG() {
    m_imageData = nullptr;
}

bool ResTIMG::load(const void* data, u32 size) {
    if (!data || size < 0x20) return false;

    const u8* ptr = static_cast<const u8*>(data);

    // Parse TIMG header
    // Standard TIMG layout (little-endian):
    // Offset 0x00: u32 signature / format
    // Offset 0x04: u16 width
    // Offset 0x06: u16 height
    // Offset 0x08: u8  mip count
    // Offset 0x09: u8  format
    // Offset 0x0A: padding
    // Offset 0x0C: u32 image data offset (from start of blob)
    // Offset 0x10: u32 image data size

    m_format = static_cast<TextureFormat>(ptr[0x09]);
    m_width = ptr[0x04] | (ptr[0x05] << 8);
    m_height = ptr[0x06] | (ptr[0x07] << 8);
    m_mipCount = ptr[0x08];

    u32 dataOffset = ptr[0x0C] | (ptr[0x0D] << 8) |
                     (ptr[0x0E] << 16) | (ptr[0x0F] << 24);
    m_imageDataSize = ptr[0x10] | (ptr[0x11] << 8) |
                      (ptr[0x12] << 16) | (ptr[0x13] << 24);

    if (dataOffset + m_imageDataSize > size) return false;

    m_imageData = ptr + dataOffset;
    return true;
}

u32 ResTIMG::getMipOffset(u8 mipLevel) const {
    if (mipLevel >= m_mipCount) return 0;

    // Compute cumulative offset for each mip level
    u32 offset = 0;
    u16 w = m_width;
    u16 h = m_height;

    for (u8 i = 0; i < mipLevel; i++) {
        u32 levelSize = computeDataSize(m_format, w, h);
        offset += levelSize;
        w = (w > 1) ? (w >> 1) : 1;
        h = (h > 1) ? (h >> 1) : 1;
    }

    return offset;
}

u32 ResTIMG::computeDataSize(TextureFormat fmt, u16 width, u16 height) {
    u32 pixels = (u32)width * (u32)height;
    switch (fmt) {
        case TEX_FMT_I4:    return pixels / 2;
        case TEX_FMT_I8:    return pixels;
        case TEX_FMT_IA4:   return pixels;
        case TEX_FMT_IA8:   return pixels * 2;
        case TEX_FMT_RGB565: return pixels * 2;
        case TEX_FMT_RGB5A3: return pixels * 2;
        case TEX_FMT_RGBA8:  return pixels * 4;
        case TEX_FMT_CMPR:  return (pixels / 16) * 8; // DXT1: 8 bytes per 4x4 block
        default: return pixels * 4;
    }
}

} // namespace EGG