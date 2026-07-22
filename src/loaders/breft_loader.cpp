// breft_loader.cpp — BREFT Binary Parser Implementation
// Parses the nw4r::ef::TextureProject format containing TPL texture data
// for the Mario Kart Wii particle system.

#include "breft_loader.hpp"
#include <cstdio>
#include <algorithm>

namespace Loaders {

u16 BreftLoader::readBE16(const u8* p) {
    return (u16(p[0]) << 8) | u16(p[1]);
}

u32 BreftLoader::readBE32(const u8* p) {
    return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
           (u32(p[2]) << 8)  | u32(p[3]);
}

f32 BreftLoader::readBE32f(const u8* p) {
    u32 raw = readBE32(p);
    f32 result;
    __builtin_memcpy(&result, &raw, 4);
    return result;
}

BreftLoader::BreftLoader() { m_data = {}; }
BreftLoader::~BreftLoader() {}

bool BreftLoader::loadFromMemory(const std::vector<u8>& data) {
    if (data.size() < 16) return false;

    m_rawData = data;

    // Validate magic
    if (readBE32(data.data()) != 0x52454654) { // "REFT"
        return false;
    }

    if (!parseHeader(data.data(), static_cast<u32>(data.size()))) {
        return false;
    }

    parseTextures(data.data(), static_cast<u32>(data.size()));

    m_data.valid = true;
    return true;
}

bool BreftLoader::loadFromFile(const char* path) {
    FILE* f = fopen(path, "rb");
    if (!f) return false;

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize < 16) { fclose(f); return false; }

    std::vector<u8> buf(static_cast<size_t>(fileSize));
    if (fread(buf.data(), 1, buf.size(), f) != buf.size()) {
        fclose(f);
        return false;
    }
    fclose(f);

    return loadFromMemory(buf);
}

bool BreftLoader::parseHeader(const u8* data, u32 size) {
    m_data.magic = readBE32(data + 0x00);
    // u32 sectionSize = readBE32(data + 0x04);
    u16 bom = readBE16(data + 0x08);
    m_data.version = readBE16(data + 0x0A);
    // u32 dataOffset = readBE32(data + 0x0C);

    if (bom != 0xFEFF && bom != 0xFFFE) {
        return false;
    }

    return true;
}

void BreftLoader::parseTextures(const u8* data, u32 size) {
    // BREFT contains one or more TPL texture blocks
    // Walk sub-chunks looking for TPL data
    u32 offset = 0x10; // after BREFF/BREFT header

    while (offset + 8 <= size) {
        u32 tag = readBE32(data + offset);
        u32 chunkSize = readBE32(data + offset + 4);

        if (chunkSize == 0 || offset + chunkSize > size) break;

        // Look for TPL sub-chunks (magic 0x00AF3000 at the start of data)
        if (chunkSize >= 12) {
            u32 subMagic = readBE32(data + offset + 8);
            if (subMagic == 0x00AF3000) {
                // This is a TPL block embedded in the BREFT
                decodeTplTexture(data + offset + 8, chunkSize - 8,
                    static_cast<u32>(m_data.textures.size()));
            }
        }

        offset += chunkSize;
    }
}

void BreftLoader::decodeTplTexture(const u8* tplData, u32 tplSize, u32 index) {
    if (tplSize < 12) return;

    u32 magic = readBE32(tplData + 0x00);
    if (magic != 0x00AF3000) return;

    u32 numTextures = readBE32(tplData + 0x04);
    u32 headerSize = readBE32(tplData + 0x08);

    for (u32 t = 0; t < numTextures; t++) {
        // Texture header at headerSize + t * 16
        u32 texHeaderOff = headerSize + t * 16;
        if (texHeaderOff + 16 > tplSize) break;

        BreftTexture tex = {};
        tex.valid = false;
        tex.texId = 0;
        snprintf(tex.name, sizeof(tex.name), "tex_%u", index * 100 + t);

        u32 extHeaderOff = readBE32(tplData + texHeaderOff + 0x00);
        u16 palHeaderOff = readBE16(tplData + texHeaderOff + 0x04);
        tex.format = static_cast<TplTextureFormat>(readBE16(tplData + texHeaderOff + 0x06));
        tex.width = readBE16(tplData + texHeaderOff + 0x08);
        tex.height = readBE16(tplData + texHeaderOff + 0x0A);

        // Extended header contains the image data offset
        if (extHeaderOff + 24 <= tplSize) {
            u16 imageOffset = readBE16(tplData + extHeaderOff + 0x08);

            // Validate dimensions
            if (tex.width == 0 || tex.height == 0 ||
                tex.width > 1024 || tex.height > 1024) continue;

            u32 pixelCount = tex.width * tex.height;
            tex.rgbaData.resize(pixelCount * 4, 0xFF); // Default white, full alpha

            // Image data starts at imageOffset within the TPL block
            if (imageOffset + 4 <= tplSize) {
                const u8* imageData = tplData + imageOffset;

                switch (tex.format) {
                    case GX_TF_I4:     decodeI4(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_I8:     decodeI8(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_IA4:    decodeIA4(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_RGB565: decodeRGB565(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_RGB5A3: decodeRGB5A3(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_RGBA8:  decodeRGBA8(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    case GX_TF_CMPR:   decodeCMPR(imageData, tex.rgbaData.data(), tex.width, tex.height); break;
                    default: break; // CI formats need palette — skip for now
                }

                tex.valid = true;
            }
        }

        if (tex.valid) {
            m_data.textures.push_back(tex);
        }
    }
}

// ============================================================================
// GX Texture Format Decoders (byte swapping and expanding to RGBA8888)
// ============================================================================

void BreftLoader::decodeI4(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i += 8) {
        u8 byte = src[i / 8];
        for (u32 j = 0; j < 8 && (i + j) < pixels; j++) {
            u8 val = (byte >> (4 - j * 4)) & 0xF;
            val |= val << 4; // Expand 4-bit to 8-bit
            u32 idx = (i + j) * 4;
            dst[idx + 0] = val;
            dst[idx + 1] = val;
            dst[idx + 2] = val;
            dst[idx + 3] = 0xFF;
        }
    }
}

void BreftLoader::decodeI8(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i++) {
        u8 val = src[i];
        u32 idx = i * 4;
        dst[idx + 0] = val;
        dst[idx + 1] = val;
        dst[idx + 2] = val;
        dst[idx + 3] = 0xFF;
    }
}

void BreftLoader::decodeIA4(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i++) {
        u8 byte = src[i];
        u8 intensity = (byte >> 4) | (byte >> 4); // High nibble → 8-bit
        u8 alpha = (byte & 0xF) | (byte & 0xF);     // Low nibble → 8-bit
        u32 idx = i * 4;
        dst[idx + 0] = intensity;
        dst[idx + 1] = intensity;
        dst[idx + 2] = intensity;
        dst[idx + 3] = alpha;
    }
}

void BreftLoader::decodeRGB565(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i++) {
        u8 lo = src[i * 2 + 1]; // Little-endian in TPL
        u8 hi = src[i * 2 + 0];
        u16 pixel = (u16(hi) << 8) | u16(lo);
        u8 r = (pixel >> 11) & 0x1F;
        u8 g = (pixel >> 5) & 0x3F;
        u8 b = pixel & 0x1F;
        r = (r << 3) | (r >> 2);  // 5→8 bit
        g = (g << 2) | (g >> 4);  // 6→8 bit
        b = (b << 3) | (b >> 2);  // 5→8 bit
        u32 idx = i * 4;
        dst[idx + 0] = r;
        dst[idx + 1] = g;
        dst[idx + 2] = b;
        dst[idx + 3] = 0xFF;
    }
}

void BreftLoader::decodeRGB5A3(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i++) {
        u8 lo = src[i * 2 + 1];
        u8 hi = src[i * 2 + 0];
        u16 pixel = (u16(hi) << 8) | u16(lo);
        u32 idx = i * 4;
        if (pixel & 0x8000) {
            // RGB555
            u8 r = (pixel >> 10) & 0x1F;
            u8 g = (pixel >> 5) & 0x1F;
            u8 b = pixel & 0x1F;
            r = (r << 3) | (r >> 2);
            g = (g << 3) | (g >> 2);
            b = (b << 3) | (b >> 2);
            dst[idx + 0] = r;
            dst[idx + 1] = g;
            dst[idx + 2] = b;
            dst[idx + 3] = 0xFF;
        } else {
            // RGB4A3
            u8 a = (pixel >> 12) & 0x7;
            a = (a << 5) | (a << 2) | a;
            u8 r = (pixel >> 8) & 0xF;
            u8 g = (pixel >> 4) & 0xF;
            u8 b = pixel & 0xF;
            r = (r << 4) | r;
            g = (g << 4) | g;
            b = (b << 4) | b;
            dst[idx + 0] = r;
            dst[idx + 1] = g;
            dst[idx + 2] = b;
            dst[idx + 3] = a;
        }
    }
}

void BreftLoader::decodeRGBA8(const u8* src, u8* dst, u32 width, u32 height) {
    u32 pixels = width * height;
    for (u32 i = 0; i < pixels; i++) {
        // RGBA8 in TPL: two 32-byte blocks of 4x4 tiles, RRRR... GGGG... BBBB... AAAA...
        // Simplified: just copy as-is (byte-swapped on Wii → already native on PC)
        u32 idx = i * 4;
        dst[idx + 0] = src[i * 4 + 0]; // R
        dst[idx + 1] = src[i * 4 + 1]; // G
        dst[idx + 2] = src[i * 4 + 2]; // B
        dst[idx + 3] = src[i * 4 + 3]; // A
    }
}

void BreftLoader::decodeCMPR(const u8* src, u8* dst, u32 width, u32 height) {
    // S3TC/DXT1-like compression used by GX
    // Each 8x8 tile is stored as 4 sub-blocks of 4x4 (8 bytes each)
    u32 numBlocksX = (width + 3) / 4;
    u32 numBlocksY = (height + 3) / 4;
    // CMPR uses 4x4 blocks in 2x2 groups (8x8 macroblock)
    u32 macroX = (numBlocksX + 1) / 2;
    u32 macroY = (numBlocksY + 1) / 2;

    for (u32 my = 0; my < macroY; my++) {
        for (u32 mx = 0; mx < macroX; mx++) {
            // 4 sub-blocks within an 8x8 macroblock
            static const s32 dx[4] = {0, 1, 0, 1};
            static const s32 dy[4] = {0, 0, 1, 1};

            for (u32 b = 0; b < 4; b++) {
                s32 bx = (s32)(mx * 2 + dx[b]) * 4;
                s32 by = (s32)(my * 2 + dy[b]) * 4;
                u32 blockIdx = my * macroX * 4 + mx * 4 + b;
                const u8* block = src + blockIdx * 8;

                if (block + 8 > src + (width * height)) break;

                // Read two RGB565 endpoint colors
                u16 c0 = (u16(block[0]) << 8) | u16(block[1]);
                u16 c1 = (u16(block[2]) << 8) | u16(block[3]);

                u8 r0 = ((c0 >> 11) & 0x1F) << 3;
                u8 g0 = ((c0 >> 5) & 0x3F) << 2;
                u8 b0 = (c0 & 0x1F) << 3;
                u8 r1 = ((c1 >> 11) & 0x1F) << 3;
                u8 g1 = ((c1 >> 5) & 0x3F) << 2;
                u8 b1 = (c1 & 0x1F) << 3;

                u32 indices = (u32(block[4]) << 24) | (u32(block[5]) << 16) |
                              (u32(block[6]) << 8)  | u32(block[7]);

                for (u32 py = 0; py < 4; py++) {
                    for (u32 px = 0; px < 4; px++) {
                        u32 pixIdx = py * 4 + px;
                        u32 code = (indices >> (pixIdx * 2)) & 3;

                        u8 r, g, bl, a;
                        if (code == 0)      { r = r0; g = g0; bl = b0; a = 0xFF; }
                        else if (code == 1) { r = r1; g = g1; bl = b1; a = 0xFF; }
                        else if (code == 2) { r = (r0+r1)/2; g = (g0+g1)/2; bl = (b0+b1)/2; a = 0xFF; }
                        else                { r = (r0+r1)/2; g = (g0+g1)/2; bl = (b0+b1)/2; a = 0x00; }

                        s32 fx = bx + px;
                        s32 fy = by + py;
                        if (fx < (s32)width && fy < (s32)height) {
                            u32 dstIdx = (fy * width + fx) * 4;
                            dst[dstIdx + 0] = r;
                            dst[dstIdx + 1] = g;
                            dst[dstIdx + 2] = bl;
                            dst[dstIdx + 3] = a;
                        }
                    }
                }
            }
        }
    }
}

const BreftTexture* BreftLoader::findTexture(const char* name) const {
    if (!name) return nullptr;
    for (const auto& tex : m_data.textures) {
        if (tex.valid && strcmp(tex.name, name) == 0) {
            return &tex;
        }
    }
    return nullptr;
}

const BreftTexture* BreftLoader::getTexture(u32 index) const {
    if (index >= m_data.textures.size()) return nullptr;
    return m_data.textures[index].valid ? &m_data.textures[index] : nullptr;
}

} // namespace Loaders