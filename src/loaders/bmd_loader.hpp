/**
 * @file bmd_loader.hpp
 * @brief BMD/BRRES 3D Model Loader for Mario Kart Wii
 *
 * Phase 36: Course model rendering
 *
 * Parses BRRES containers (the Wii's primary 3D asset format) and extracts
 * MDL0 model data (vertices, faces, normals, colors, UV coordinates, materials).
 * The loaded mesh data is suitable for direct OpenGL VBO upload.
 *
 * BRRES file layout:
 *   - 0x10-byte header: "bres" magic, BOM, size, root offset, section count
 *   - Root index group: binary tree organizing sub-entries into folders
 *   - Sub-files: MDL0 (models), TEX0 (textures), CHR0 (bone anim), etc.
 *
 * MDL0 sub-format (the actual 3D model):
 *   - Header: "MDL0" magic, size, format version, entry counts
 *   - Entries: VTXL (vertices), NRML (normals), CLR0 (vertex colors),
 *     TEX0-TEX7 (UV coords), MAT3 (materials), SHP1/SHP2 (face groups/draw calls),
 *     JNT1 (bones/joints), EVP1 (envelopes/skin weights)
 *
 * Reference: https://wiki.tockdom.com/wiki/BMD
 *            https://wiki.vg-resource.com/BRRES
 *
 * No external dependencies — pure C++17, big-endian aware.
 */

#pragma once

#include <vector>
#include <string>
#include <cstdint>
#include <cstring>

#include "rk_types.h"

namespace Loaders {

// =============================================================================
// Parsed mesh data — ready for VBO upload
// =============================================================================

/// A single vertex with all attributes interleaved (or separate arrays).
struct BmdVertex {
    f32 pos[3];      // Position (x, y, z)
    f32 nrm[3];      // Normal (nx, ny, nz)
    u8  color[4];    // Vertex color RGBA
    f32 tex[2];      // Texture coordinate (s, t)
};

/// A draw call / face group — each material defines a set of triangles.
struct BmdDrawCall {
    std::string materialName;  // Material name (for texture lookup)
    u32 startIndex;            // First vertex index in the merged vertex buffer
    u32 indexCount;            // Number of indices to draw
    u32 primitiveType;         // GL_TRIANGLES, GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN
    std::vector<u16> indices;   // Index buffer for this draw call
};

/// A texture extracted from the BRRES TEX0 section.
struct BmdTexture {
    std::string name;     // Texture name
    u16 width;
    u16 height;
    u8  format;           // Wii tex format code (CMPR, RGB565, RGBA32, etc.)
    u32 glTexObj;         // GL texture object (0 if not uploaded)
    std::vector<u8> pixelData;  // Decoded RGBA8 pixel data
};

/// A complete parsed BMD model — all data needed for rendering.
struct BmdModel {
    std::string name;                        // Model name
    std::vector<BmdVertex> vertices;         // All vertices (merged from all shapes)
    std::vector<BmdDrawCall> drawCalls;      // Draw calls (one per material/shape)
    std::vector<BmdTexture> textures;         // Extracted textures
    std::vector<f32> boundingBox;            // [minX, minY, minZ, maxX, maxY, maxZ]

    bool isValid() const { return !vertices.empty() && !drawCalls.empty(); }
};

// =============================================================================
// BmdLoader — BRRES/MDL0 parser
// =============================================================================

/**
 * @class BmdLoader
 * @brief Parses BRRES container files and extracts MDL0 model data.
 *
 * Usage:
 *   Loaders::BmdLoader loader;
 *   if (loader.loadFromMemory(data)) {
 *       const BmdModel& model = loader.getModel(0);
 *       // Upload vertices/indices to VBOs and draw
 *   }
 */
class BmdLoader {
public:
    BmdLoader();
    ~BmdLoader();

    // ------------------------------------------------------------------
    //  Loading
    // ------------------------------------------------------------------

    /**
     * @brief Load a BRRES/BMD file from a memory buffer.
     *
     * Automatically detects whether it's a standalone MDL0 or a BRRES container.
     * Extracts all MDL0 models and their referenced TEX0 textures.
     *
     * @param data  Raw file bytes.
     * @return true on success.
     */
    bool loadFromMemory(const std::vector<u8>& data);

    /**
     * @brief Load a BRRES/BMD file from disk.
     * @param path  Filesystem path.
     * @return true on success.
     */
    bool loadFromFile(const char* path);

    // ------------------------------------------------------------------
    //  Data Access
    // ------------------------------------------------------------------

    /// Get the number of loaded models.
    u32 getModelCount() const { return static_cast<u32>(m_models.size()); }

    /// Get a model by index.
    const BmdModel& getModel(u32 index) const;

    /// Get a model by name.
    const BmdModel* findModel(const std::string& name) const;

    /// Get all loaded models.
    const std::vector<BmdModel>& getModels() const { return m_models; }

    /// Get all extracted textures across all models.
    const std::vector<BmdTexture>& getTextures() const { return m_textures; }

    /// Find a texture by name.
    const BmdTexture* findTexture(const std::string& name) const;

    /// Get the total vertex count across all models.
    u32 getTotalVertexCount() const;

    /// Get the total triangle count across all models.
    u32 getTotalTriangleCount() const;

private:
    // ------------------------------------------------------------------
    //  Internal: BRRES container parsing
    // ------------------------------------------------------------------

    /// Parse BRRES container header and extract sub-sections.
    bool parseBRRES(const std::vector<u8>& data);

    /// Parse BRRES index group (binary tree of entries).
    bool parseIndexGroup(const u8* data, u32 offset, u32 size,
                         u32& outFolderCount, u32& outFileCount);

    /// Extract all MDL0 and TEX0 sub-sections from parsed BRRES.
    bool extractBRESSubFiles(const std::vector<u8>& brresData);

    /// Find a sub-section by its 4CC magic within the BRRES data.
    const u8* findBRRESSection(const std::vector<u8>& data,
                              const char* magic, u32& outSize);

    // ------------------------------------------------------------------
    //  Internal: MDL0 model parsing
    // ------------------------------------------------------------------

    /// Parse a single MDL0 model section.
    bool parseMDL0(const u8* data, u32 size);

    /// Parse MDL0 header and locate sub-entry offsets.
    bool parseMDL0Header(const u8* data, u32 size,
                         u32& outRevision, u32& outEntryCount);

    /// Parse MDL0 definition blocks (header → entry offset table).
    bool parseMDL0Definitions(const u8* data, u32 size,
                               std::vector<u32>& outOffsets,
                               std::vector<u8>& outTypes);

    /// Parse VTXL (vertex position) entry.
    bool parseVTXL(const u8* data, u32 size);

    /// Parse NRML (vertex normal) entry.
    bool parseNRML(const u8* data, u32 size);

    /// Parse CLR0 (vertex color) entry.
    bool parseCLR0(const u8* data, u32 size);

    /// Parse TEX coordinate entry.
    bool parseTEXEntry(const u8* data, u32 size, u8 texCoordIdx);

    /// Parse SHP1/SHP2 (shape/draw call) entry.
    bool parseSHP(const u8* data, u32 size);

    /// Parse MAT3 (material) entry.
    bool parseMAT3(const u8* data, u32 size);

    // ------------------------------------------------------------------
    //  Internal: TEX0 texture parsing
    // ------------------------------------------------------------------

    /// Parse a TEX0 texture section from BRRES.
    bool parseTEX0(const u8* data, u32 size);

    /// Decode Wii texture format to RGBA8 pixel data.
    bool decodeTextureData(const u8* src, u8 format, u16 width, u16 height,
                           u32 numImages, std::vector<u8>& outRGBA);

    // ------------------------------------------------------------------
    //  Internal: Big-endian read helpers
    // ------------------------------------------------------------------

    u16 readBE16(const u8* p) const;
    u32 readBE32(const u8* p) const;
    f32 readBE32Float(const u8* p) const;

    /// Read a null-terminated string from BRRES string pool.
    std::string readBRESString(const u8* pool, u32 offset) const;

    // ------------------------------------------------------------------
    //  Internal: MDL0 parsing state
    // ------------------------------------------------------------------

    /// Current model being constructed during MDL0 parse.
    BmdModel* m_currentModel;

    /// Temporary storage for MDL0 vertex attribute arrays.
    struct VertexArray {
        u8 format;           // GX comp type (GX_F32=1, GX_S16=2, GX_U8=4, etc.)
        u8 compCount;       // Number of components (2, 3, or 4)
        u8 stride;          // Byte stride between vertices
        u32 dataOffset;     // Offset to raw data within the entry
        u32 dataSize;       // Size of raw data
        u32 count;          // Number of vertices in this array
    };

    VertexArray m_posArray;     // VTXL vertex positions
    VertexArray m_nrmArray;     // NRML vertex normals
    VertexArray m_clrArray;     // CLR0 vertex colors
    VertexArray m_texArrays[8];  // TEX0-TEX7 UV coordinates
    u8 m_texArrayCount;         // Number of valid tex arrays

    /// Material names indexed by draw call material ID.
    std::vector<std::string> m_materialNames;

    // ------------------------------------------------------------------
    //  Data members
    // ------------------------------------------------------------------

    std::vector<BmdModel>   m_models;    // All parsed models
    std::vector<BmdTexture> m_textures; // All extracted textures

    /// Raw sub-section data from BRRES (MDL0 sections).
    std::vector<std::pair<std::vector<u8>, std::string>> m_mdl0Sections;

    /// Raw sub-section data from BRRES (TEX0 sections).
    std::vector<std::pair<std::vector<u8>, std::string>> m_tex0Sections;
};

} // namespace Loaders
