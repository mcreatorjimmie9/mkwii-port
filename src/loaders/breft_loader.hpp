#pragma once
// breft_loader.hpp — BREFT (Binary Revolution Effect Texture) Loader
// Parses the nw4r::ef::TextureProject format used by Mario Kart Wii's
// particle system. BREFT files contain TPL texture data referenced by BREFF.

#include "rk_types.h"
#include <vector>
#include <string>
#include <cstring>

namespace Loaders {

// GX texture format types (matching Nintendo GX enum)
enum TplTextureFormat {
    GX_TF_I4     = 0,
    GX_TF_I8     = 1,
    GX_TF_IA4    = 2,
    GX_TF_RGB565 = 3,
    GX_TF_RGB5A3 = 4,
    GX_TF_RGBA8  = 5,
    GX_TF_CI4    = 6,
    GX_TF_CI8    = 7,
    GX_TF_CI14   = 8,
    GX_TF_CMPR   = 9,
};

// Decoded texture (RGBA8888, ready for OpenGL)
struct BreftTexture {
    char name[32];            // Texture name
    u16 width;
    u16 height;
    TplTextureFormat format;  // Original GX format
    std::vector<u8> rgbaData; // Decoded RGBA8888 pixel data (width * height * 4)
    u32 texId;               // OpenGL texture ID (set by renderer, 0 = not uploaded)
    bool valid;
};

// Top-level BREFT parsed data (matches nw4r::ef::TextureProject)
struct BreftData {
    u32 magic;           // "REFT"
    u32 version;
    std::vector<BreftTexture> textures;
    bool valid;
};

// BREFT Loader
class BreftLoader {
public:
    BreftLoader();
    ~BreftLoader();

    // Parse BREFT from raw bytes (big-endian)
    bool loadFromMemory(const std::vector<u8>& data);

    // Parse BREFT from a file on disk
    bool loadFromFile(const char* path);

    // Get parsed data
    const BreftData& getData() const { return m_data; }

    // Get raw data pointer
    const u8* getRawData() const { return m_rawData.empty() ? nullptr : m_rawData.data(); }
    u32 getRawSize() const { return static_cast<u32>(m_rawData.size()); }

    // Find texture by name
    const BreftTexture* findTexture(const char* name) const;

    // Get texture by index
    const BreftTexture* getTexture(u32 index) const;

    // Get total texture count
    u32 getTextureCount() const { return static_cast<u32>(m_data.textures.size()); }

    // Check if data was loaded
    bool isLoaded() const { return m_data.valid; }

private:
    bool parseHeader(const u8* data, u32 size);
    void parseTextures(const u8* data, u32 size);
    void decodeTplTexture(const u8* tplData, u32 tplSize, u32 index);
    void decodeI4(const u8* src, u8* dst, u32 width, u32 height);
    void decodeI8(const u8* src, u8* dst, u32 width, u32 height);
    void decodeIA4(const u8* src, u8* dst, u32 width, u32 height);
    void decodeRGB565(const u8* src, u8* dst, u32 width, u32 height);
    void decodeRGB5A3(const u8* src, u8* dst, u32 width, u32 height);
    void decodeRGBA8(const u8* src, u8* dst, u32 width, u32 height);
    void decodeCMPR(const u8* src, u8* dst, u32 width, u32 height);

    static u16 readBE16(const u8* p);
    static u32 readBE32(const u8* p);
    static f32 readBE32f(const u8* p);

    BreftData m_data;
    std::vector<u8> m_rawData;
};

} // namespace Loaders