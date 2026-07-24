// =============================================================================
// bmd_loader.cpp — BMD/BRRES 3D Model Loader Implementation
// =============================================================================
//
// Parses BRRES containers (Nintendo's 3D asset format for Wii) and extracts
// MDL0 model data. The MDL0 sub-format contains vertex arrays, face groups,
// normals, colors, UV coordinates, materials, and bone data.
//
// This implementation focuses on the subsets of BRRES/MDL0 used by Mario Kart Wii:
//   - VTXL: Vertex positions (XYZ, often compressed as S16)
//   - NRML: Vertex normals (often compressed as S16 or S10)
//   - CLR0: Vertex colors (RGBA, RGB565, RGB5A3)
//   - TEX0-TEX7: Texture coordinates (S16 or F32)
//   - SHP1/SHP2: Shape groups (indexed draw calls per material)
//   - MAT3: Material definitions (texture references, TEV config)
//   - TEX0: Textures from BRRES (CMPR, RGB565, RGBA32, etc.)
//
// Big-endian throughout (Wii is big-endian architecture).
//
// Phase 36: Course model rendering — makes tracks visually recognizable.
// =============================================================================

#include "loaders/bmd_loader.hpp"
#include <cstdio>
#include <cmath>
#include <algorithm>

namespace Loaders {

// =============================================================================
// Constants
// =============================================================================

static constexpr const char* BRRES_MAGIC = "bres";
static constexpr const char* MDL0_MAGIC  = "MDL0";
static constexpr const char* TEX0_MAGIC  = "TEX0";
static constexpr const char* ROOT_MAGIC  = "root";

// MDL0 sub-entry type tags
static constexpr u8 MDL0_ENTRY_VTXL = 0x01;  // Vertex positions
static constexpr u8 MDL0_ENTRY_NRML = 0x02;  // Normals
static constexpr u8 MDL0_ENTRY_CLR0 = 0x03;  // Vertex colors
static constexpr u8 MDL0_ENTRY_TEX0 = 0x04;  // Texture coord set 0
static constexpr u8 MDL0_ENTRY_TEX1 = 0x05;  // Texture coord set 1
static constexpr u8 MDL0_ENTRY_TEX2 = 0x06;  // Texture coord set 2
static constexpr u8 MDL0_ENTRY_TEX3 = 0x07;  // Texture coord set 3
static constexpr u8 MDL0_ENTRY_TEX4 = 0x08;  // Texture coord set 4
static constexpr u8 MDL0_ENTRY_TEX5 = 0x09;  // Texture coord set 5
static constexpr u8 MDL0_ENTRY_TEX6 = 0x0A;  // Texture coord set 6
static constexpr u8 MDL0_ENTRY_TEX7 = 0x0B;  // Texture coord set 7
static constexpr u8 MDL0_ENTRY_SH1  = 0x0C;  // Shape (SHP1) draw calls
static constexpr u8 MDL0_ENTRY_SH2  = 0x0D;  // Shape (SHP2) alternative
static constexpr u8 MDL0_ENTRY_MAT3 = 0x10;  // Material
static constexpr u8 MDL0_ENTRY_MTX  = 0x14;  // Bone/joint transform

// GX data type codes (for vertex attribute formats)
static constexpr u8 GX_F32 = 1;
static constexpr u8 GX_S16 = 2;
static constexpr u8 GX_U8  = 4;
static constexpr u8 GX_U16 = 5;

// =============================================================================
// Construction / Destruction
// =============================================================================

BmdLoader::BmdLoader()
    : m_currentModel(nullptr)
    , m_texArrayCount(0)
{
    memset(&m_posArray, 0, sizeof(m_posArray));
    memset(&m_nrmArray, 0, sizeof(m_nrmArray));
    memset(&m_clrArray, 0, sizeof(m_clrArray));
    memset(m_texArrays, 0, sizeof(m_texArrays));
}

BmdLoader::~BmdLoader() = default;

// =============================================================================
// Public Loading Interface
// =============================================================================

bool BmdLoader::loadFromMemory(const std::vector<u8>& data) {
    m_models.clear();
    m_textures.clear();
    m_mdl0Sections.clear();
    m_tex0Sections.clear();
    m_materialNames.clear();
    m_texArrayCount = 0;

    if (data.size() < 16) {
        printf("[BmdLoader] Data too small (%u bytes)\n",
               static_cast<u32>(data.size()));
        return false;
    }

    // Detect file type: BRRES container or standalone MDL0
    if (memcmp(data.data(), BRRES_MAGIC, 4) == 0) {
        return parseBRRES(data);
    } else if (memcmp(data.data(), MDL0_MAGIC, 4) == 0) {
        // Standalone MDL0 (less common, but supported)
        BmdModel model;
        m_currentModel = &model;
        memset(&m_posArray, 0, sizeof(m_posArray));
        memset(&m_nrmArray, 0, sizeof(m_nrmArray));
        memset(&m_clrArray, 0, sizeof(m_clrArray));
        memset(m_texArrays, 0, sizeof(m_texArrays));
        m_texArrayCount = 0;

        if (parseMDL0(data.data(), static_cast<u32>(data.size()))) {
            m_models.push_back(std::move(model));
            return true;
        }
        return false;
    } else {
        printf("[BmdLoader] Unknown magic: %.4s\n",
               reinterpret_cast<const char*>(data.data()));
        return false;
    }
}

bool BmdLoader::loadFromFile(const char* path) {
    if (!path) return false;

    FILE* f = fopen(path, "rb");
    if (!f) {
        printf("[BmdLoader] Cannot open file: %s\n", path);
        return false;
    }

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize <= 0) {
        fclose(f);
        return false;
    }

    std::vector<u8> data(static_cast<size_t>(fileSize));
    size_t read = fread(data.data(), 1, data.size(), f);
    fclose(f);

    if (read != data.size()) {
        printf("[BmdLoader] Short read: expected %ld, got %zu\n", fileSize, read);
        return false;
    }

    return loadFromMemory(data);
}

// =============================================================================
// Data Access
// =============================================================================

const BmdModel& BmdLoader::getModel(u32 index) const {
    static BmdModel s_empty;
    if (index < m_models.size()) return m_models[index];
    return s_empty;
}

const BmdModel* BmdLoader::findModel(const std::string& name) const {
    for (const auto& m : m_models) {
        if (m.name == name) return &m;
    }
    return nullptr;
}

const BmdTexture* BmdLoader::findTexture(const std::string& name) const {
    for (const auto& t : m_textures) {
        if (t.name == name) return &t;
    }
    return nullptr;
}

u32 BmdLoader::getTotalVertexCount() const {
    u32 total = 0;
    for (const auto& m : m_models) total += static_cast<u32>(m.vertices.size());
    return total;
}

u32 BmdLoader::getTotalTriangleCount() const {
    u32 total = 0;
    for (const auto& m : m_models) {
        for (const auto& dc : m.drawCalls) {
            // Approximate triangle count from index count
            total += dc.indexCount / 3;
        }
    }
    return total;
}

// =============================================================================
// Big-Endian Read Helpers
// =============================================================================

u16 BmdLoader::readBE16(const u8* p) const {
    return (static_cast<u16>(p[0]) << 8) | static_cast<u16>(p[1]);
}

u32 BmdLoader::readBE32(const u8* p) const {
    return (static_cast<u32>(p[0]) << 24) | (static_cast<u32>(p[1]) << 16) |
           (static_cast<u32>(p[2]) << 8)  |  static_cast<u32>(p[3]);
}

f32 BmdLoader::readBE32Float(const u8* p) const {
    f32 val;
    u32 ival = readBE32(p);
    memcpy(&val, &ival, sizeof(f32));
    return val;
}

std::string BmdLoader::readBRESString(const u8* pool, u32 offset) const {
    if (!pool) return "";
    // Current BRES format: 4-byte length prefix followed by string data
    const u8* p = pool + offset;
    // Check if it's length-prefixed (first 2 bytes = length, high bit clear)
    u16 lenField = readBE16(p);
    if ((lenField & 0x8000) == 0) {
        // Length-prefixed string
        u16 len = lenField;
        return std::string(reinterpret_cast<const char*>(p + 2), len);
    } else {
        // Old format: null-terminated string at this offset
        return std::string(reinterpret_cast<const char*>(p));
    }
}

// =============================================================================
// BRRES Container Parsing
// =============================================================================

bool BmdLoader::parseBRRES(const std::vector<u8>& data) {
    printf("[BmdLoader] Parsing BRRES container (%u bytes)\n",
           static_cast<u32>(data.size()));

    // Validate header
    if (memcmp(data.data(), BRRES_MAGIC, 4) != 0) {
        printf("[BmdLoader] Not a BRRES file\n");
        return false;
    }

    u16 bom = readBE16(data.data() + 4);
    if (bom != 0xFEFF) {
        printf("[BmdLoader] Unexpected BOM: 0x%04X (expected 0xFEFF)\n", bom);
        // Continue anyway — some tools produce different BOM
    }

    u32 fileSize = readBE32(data.data() + 8);
    u16 rootOffset = readBE16(data.data() + 0x0C);
    u16 sectionCount = readBE16(data.data() + 0x0E);

    printf("[BmdLoader] BRRES: size=%u, rootOff=%u, sections=%u\n",
           fileSize, rootOffset, sectionCount);

    if (fileSize > data.size()) {
        printf("[BmdLoader] WARNING: File size in header exceeds data size\n");
    }

    // Validate root section
    if (rootOffset + 8 > data.size()) {
        printf("[BmdLoader] Root section offset out of bounds\n");
        return false;
    }

    if (memcmp(data.data() + rootOffset, ROOT_MAGIC, 4) != 0) {
        printf("[BmdLoader] Root section magic mismatch: %.4s\n",
               data.data() + rootOffset);
        return false;
    }

    u32 rootSize = readBE32(data.data() + rootOffset + 4);
    printf("[BmdLoader] Root section: %u bytes\n", rootSize);

    // Collect all MDL0 and TEX0 sub-sections
    // Scan through the BRRES data looking for section headers
    // BRRES sections are aligned and can be found by scanning for 4CC tags
    extractBRESSubFiles(data);

    // Parse TEX0 textures first (so models can reference them)
    for (const auto& texSec : m_tex0Sections) {
        parseTEX0(texSec.first.data(), static_cast<u32>(texSec.first.size()));
    }

    // Parse MDL0 models
    for (const auto& mdlSec : m_mdl0Sections) {
        BmdModel model;
        model.name = mdlSec.second;  // Use section name as model name

        m_currentModel = &model;
        memset(&m_posArray, 0, sizeof(m_posArray));
        memset(&m_nrmArray, 0, sizeof(m_nrmArray));
        memset(&m_clrArray, 0, sizeof(m_clrArray));
        memset(m_texArrays, 0, sizeof(m_texArrays));
        m_texArrayCount = 0;
        m_materialNames.clear();

        if (parseMDL0(mdlSec.first.data(), static_cast<u32>(mdlSec.first.size()))) {
            printf("[BmdLoader] Model '%s': %u vertices, %zu draw calls\n",
                   model.name.c_str(),
                   static_cast<u32>(model.vertices.size()),
                   model.drawCalls.size());
            m_models.push_back(std::move(model));
        } else {
            printf("[BmdLoader] Failed to parse MDL0 '%s'\n", mdlSec.second.c_str());
        }
    }

    m_currentModel = nullptr;

    printf("[BmdLoader] Parsed %zu models, %zu textures\n",
           m_models.size(), m_textures.size());

    return !m_models.empty();
}

const u8* BmdLoader::findBRRESSection(const std::vector<u8>& data,
                                       const char* magic, u32& outSize) {
    if (data.size() < 0x20) return nullptr;

    // BRRES sections typically start after the root index group.
    // Scan from offset 0x20 looking for the magic.
    // Each section has: 4B magic + 4B size + ... data ...
    for (u32 i = 0x10; i + 8 <= data.size(); ) {
        if (memcmp(data.data() + i, magic, 4) == 0) {
            outSize = readBE32(data.data() + i + 4);
            if (i + outSize <= data.size()) {
                return data.data() + i;
            }
        }

        // If this looks like a section header (known magic), skip by its size
        u32 potentialSize = readBE32(data.data() + i + 4);
        if (potentialSize > 8 && potentialSize < data.size() && i + potentialSize <= data.size()) {
            i += potentialSize;
            // Align to 4 bytes
            i = (i + 3) & ~3u;
        } else {
            i += 4;
        }
    }

    return nullptr;
}

bool BmdLoader::extractBRESSubFiles(const std::vector<u8>& brresData) {
    m_mdl0Sections.clear();
    m_tex0Sections.clear();

    // Scan for MDL0 sections
    u32 sz = 0;
    const u8* ptr = findBRRESSection(brresData, MDL0_MAGIC, sz);
    int mdlIdx = 0;
    while (ptr) {
        std::vector<u8> sectionData(ptr, ptr + sz);
        char nameBuf[32];
        snprintf(nameBuf, sizeof(nameBuf), "Model_%d", mdlIdx++);
        m_mdl0Sections.emplace_back(std::move(sectionData), std::string(nameBuf));

        // Search for more MDL0 sections after this one
        u32 nextOffset = static_cast<u32>(ptr - brresData.data()) + sz;
        const std::vector<u8> remaining(brresData.begin() + nextOffset, brresData.end());
        ptr = (remaining.size() >= 8) ? findBRRESSection(remaining, MDL0_MAGIC, sz) : nullptr;
        // Adjust ptr back to full data space
        if (ptr) {
            ptr = brresData.data() + nextOffset + static_cast<u32>(ptr - remaining.data());
            sz = readBE32(ptr + 4);
        }
    }

    // Scan for TEX0 sections
    ptr = findBRRESSection(brresData, TEX0_MAGIC, sz);
    int texIdx = 0;
    while (ptr) {
        std::vector<u8> sectionData(ptr, ptr + sz);
        char nameBuf[32];
        snprintf(nameBuf, sizeof(nameBuf), "Texture_%d", texIdx++);
        m_tex0Sections.emplace_back(std::move(sectionData), std::string(nameBuf));

        u32 nextOffset = static_cast<u32>(ptr - brresData.data()) + sz;
        const std::vector<u8> remaining(brresData.begin() + nextOffset, brresData.end());
        ptr = (remaining.size() >= 8) ? findBRRESSection(remaining, TEX0_MAGIC, sz) : nullptr;
        if (ptr) {
            ptr = brresData.data() + nextOffset + static_cast<u32>(ptr - remaining.data());
            sz = readBE32(ptr + 4);
        }
    }

    printf("[BmdLoader] Found %zu MDL0 and %zu TEX0 sections\n",
           m_mdl0Sections.size(), m_tex0Sections.size());

    return !m_mdl0Sections.empty();
}

// =============================================================================
// MDL0 Model Parsing
// =============================================================================

bool BmdLoader::parseMDL0(const u8* data, u32 size) {
    if (size < 0x1C) {
        printf("[BmdLoader] MDL0 too small (%u bytes)\n", size);
        return false;
    }

    if (memcmp(data, MDL0_MAGIC, 4) != 0) {
        printf("[BmdLoader] MDL0 magic mismatch\n");
        return false;
    }

    u32 mdlSize = readBE32(data + 4);
    printf("[BmdLoader] MDL0: size=%u\n", mdlSize);

    // MDL0 header layout:
    //   0x00: 4B magic "MDL0"
    //   0x04: 4B section size
    //   0x08: 4B format revision
    //   0x0C: 4B entry count (number of sub-entries)
    //   0x10: 4B offset to entry offset table
    //   0x14: 4B offset to string table
    //   0x18: 4B offset to ID table

    u32 revision   = readBE32(data + 8);
    u32 entryCount = readBE32(data + 0x0C);
    u32 entryOff   = readBE32(data + 0x10);
    u32 strOff     = readBE32(data + 0x14);

    printf("[BmdLoader] MDL0: rev=%u, entries=%u, entryOff=0x%X, strOff=0x%X\n",
           revision, entryCount, entryOff, strOff);

    if (entryOff + 12 * entryCount > size) {
        printf("[BmdLoader] MDL0 entry table out of bounds\n");
        return false;
    }

    // Parse entry offset table (12 bytes per entry):
    //   4B: offset to definition block
    //   4B: length of definition block
    //   4B: index or ID (lower 4 bits = type tag)
    const u8* entryTable = data + entryOff;
    std::vector<u32> offsets;
    std::vector<u8> types;

    for (u32 i = 0; i < entryCount; i++) {
        const u8* e = entryTable + i * 12;
        u32 off = readBE32(e);
        u32 len = readBE32(e + 4);
        u8  tag = static_cast<u8>(readBE32(e + 8) & 0xFF);

        offsets.push_back(off);
        types.push_back(tag);

        // Print entry info for debugging
        const char* tagNames[] = {
            "???", "VTXL", "NRML", "CLR0",
            "TEX0", "TEX1", "TEX2", "TEX3",
            "TEX4", "TEX5", "TEX6", "TEX7",
            "SHP1", "SHP2", "???", "???",
            "MAT3", "???", "???", "???",
            "???", "???", "???", "???",
            "MTX"
        };
        const char* tagName = (tag <= 0x14) ? tagNames[tag] : "???";
        printf("[BmdLoader]   Entry %2u: type=%s(0x%02X) off=0x%04X len=%u\n",
               i, tagName, tag, off, len);
    }

    // Parse each entry in order (some entries depend on prior ones)
    bool hasVertexData = false;
    bool hasShapeData = false;

    for (u32 i = 0; i < entryCount; i++) {
        u32 off = offsets[i];
        u8  tag = types[i];

        if (off + 8 > size) continue;

        // Each definition block:
        //   4B: entry size
        //   4B: ?? (padding/flags)
        //   ... entry-specific data
        u32 entrySize = readBE32(data + off);
        const u8* entryData = data + off + 8;  // Skip size+flags
        u32 entryDataSize = entrySize - 8;

        switch (tag) {
        case MDL0_ENTRY_VTXL:
            hasVertexData = parseVTXL(entryData, entryDataSize);
            break;

        case MDL0_ENTRY_NRML:
            parseNRML(entryData, entryDataSize);
            break;

        case MDL0_ENTRY_CLR0:
            parseCLR0(entryData, entryDataSize);
            break;

        case MDL0_ENTRY_TEX0: case MDL0_ENTRY_TEX1:
        case MDL0_ENTRY_TEX2: case MDL0_ENTRY_TEX3:
        case MDL0_ENTRY_TEX4: case MDL0_ENTRY_TEX5:
        case MDL0_ENTRY_TEX6: case MDL0_ENTRY_TEX7:
            if (m_texArrayCount < 8) {
                parseTEXEntry(entryData, entryDataSize,
                              m_texArrayCount);
                m_texArrayCount++;
            }
            break;

        case MDL0_ENTRY_SH1: case MDL0_ENTRY_SH2:
            hasShapeData = parseSHP(entryData, entryDataSize);
            break;

        case MDL0_ENTRY_MAT3:
            parseMAT3(entryData, entryDataSize);
            break;

        default:
            printf("[BmdLoader]   Skipping entry type 0x%02X\n", tag);
            break;
        }
    }

    // If we have vertices but no shapes, create a single draw call for all vertices
    if (hasVertexData && !hasShapeData && m_currentModel) {
        BmdDrawCall dc;
        dc.materialName = "default";
        dc.startIndex = 0;
        dc.indexCount = static_cast<u32>(m_currentModel->vertices.size());
        dc.primitiveType = 0;  // GL_TRIANGLES
        m_currentModel->drawCalls.push_back(dc);
    }

    // Compute bounding box
    if (m_currentModel && !m_currentModel->vertices.empty()) {
        auto& bb = m_currentModel->boundingBox;
        bb.resize(6);

        const auto& v0 = m_currentModel->vertices[0];
        bb[0] = bb[3] = v0.pos[0];
        bb[1] = bb[4] = v0.pos[1];
        bb[2] = bb[5] = v0.pos[2];

        for (const auto& v : m_currentModel->vertices) {
            if (v.pos[0] < bb[0]) bb[0] = v.pos[0];
            if (v.pos[1] < bb[1]) bb[1] = v.pos[1];
            if (v.pos[2] < bb[2]) bb[2] = v.pos[2];
            if (v.pos[0] > bb[3]) bb[3] = v.pos[0];
            if (v.pos[1] > bb[4]) bb[4] = v.pos[1];
            if (v.pos[2] > bb[5]) bb[5] = v.pos[2];
        }

        printf("[BmdLoader] Bounding box: [%.1f,%.1f,%.1f] - [%.1f,%.1f,%.1f]\n",
               bb[0], bb[1], bb[2], bb[3], bb[4], bb[5]);
    }

    return hasVertexData;
}

// =============================================================================
// VTXL — Vertex Position Array
// =============================================================================

bool BmdLoader::parseVTXL(const u8* data, u32 size) {
    if (size < 16) return false;

    // VTXL layout:
    //   4B: array count (number of sub-arrays)
    //   For each sub-array:
    //     4B: format (comp count | comp type | divisor)
    //     4B: data offset within VTXL section
    //     4B: stride

    u32 arrayCount = readBE32(data);
    printf("[BmdLoader] VTXL: %u sub-arrays\n", arrayCount);

    if (arrayCount < 1) return false;

    // Parse first sub-array (MKWii typically uses 1 position array)
    const u8* fmtPtr = data + 4;
    u32 format = readBE32(fmtPtr);
    u32 dataOff = readBE32(fmtPtr + 4);
    u32 stride = readBE32(fmtPtr + 8);

    // Decode format field:
    //   Bits 0-1: comp type (0=GX_F32, 1=GX_S16, 2=GX_U8)
    //   Bits 2-3: comp count (0=POS_XY, 1=POS_XYZ, 2=POS_XYZW, 3=POS_XYT)
    u8 compType  = static_cast<u8>(format & 0x03);
    u8 compCount = static_cast<u8>((format >> 2) & 0x03) + 2;  // 2..5 components

    m_posArray.format = compType;
    m_posArray.compCount = compCount;
    m_posArray.stride = stride;
    m_posArray.dataOffset = dataOff;
    m_posArray.dataSize = size - dataOff;
    m_posArray.count = (stride > 0) ? m_posArray.dataSize / stride : 0;

    printf("[BmdLoader] VTXL: fmt=0x%08X, type=%u, comp=%u, stride=%u, "
           "dataOff=%u, count=%u\n",
           format, compType, compCount, stride, dataOff, m_posArray.count);

    if (m_posArray.count == 0 || m_posArray.count > 1000000) {
        printf("[BmdLoader] VTXL: unreasonable vertex count, skipping\n");
        return false;
    }

    // Decode vertex positions
    if (!m_currentModel) return false;

    m_currentModel->vertices.reserve(m_posArray.count);
    const u8* vertData = data + dataOff;

    for (u32 i = 0; i < m_posArray.count; i++) {
        const u8* p = vertData + i * stride;
        BmdVertex vtx;
        memset(&vtx, 0, sizeof(vtx));

        switch (compType) {
        case GX_F32:  // Float32
            vtx.pos[0] = readBE32Float(p);
            vtx.pos[1] = readBE32Float(p + 4);
            if (compCount >= 3) vtx.pos[2] = readBE32Float(p + 8);
            break;

        case GX_S16:  // Signed 16-bit (common in MKWii)
            vtx.pos[0] = static_cast<f32>(static_cast<s16>(readBE16(p)));
            vtx.pos[1] = static_cast<f32>(static_cast<s16>(readBE16(p + 2)));
            if (compCount >= 3)
                vtx.pos[2] = static_cast<f32>(static_cast<s16>(readBE16(p + 4)));
            break;

        case GX_U8:  // Unsigned 8-bit
            vtx.pos[0] = static_cast<f32>(p[0]);
            vtx.pos[1] = static_cast<f32>(p[1]);
            if (compCount >= 3) vtx.pos[2] = static_cast<f32>(p[2]);
            break;

        default:
            vtx.pos[0] = vtx.pos[1] = vtx.pos[2] = 0.0f;
            break;
        }

        m_currentModel->vertices.push_back(vtx);
    }

    printf("[BmdLoader] VTXL: decoded %u vertices\n", m_posArray.count);
    return true;
}

// =============================================================================
// NRML — Vertex Normal Array
// =============================================================================

bool BmdLoader::parseNRML(const u8* data, u32 size) {
    if (size < 16 || !m_currentModel) return false;

    u32 arrayCount = readBE32(data);
    if (arrayCount < 1) return false;

    const u8* fmtPtr = data + 4;
    u32 format = readBE32(fmtPtr);
    u32 dataOff = readBE32(fmtPtr + 4);
    u32 stride = readBE32(fmtPtr + 8);

    u8 compType  = static_cast<u8>(format & 0x03);
    u8 compCount = static_cast<u8>((format >> 2) & 0x03) + 2;

    m_nrmArray.format = compType;
    m_nrmArray.compCount = compCount;
    m_nrmArray.stride = stride;
    m_nrmArray.dataOffset = dataOff;
    m_nrmArray.dataSize = size - dataOff;
    m_nrmArray.count = (stride > 0) ? m_nrmArray.dataSize / stride : 0;

    if (m_nrmArray.count == 0 || m_nrmArray.count > 1000000) return false;

    printf("[BmdLoader] NRML: %u normals, type=%u, stride=%u\n",
           m_nrmArray.count, compType, stride);

    const u8* nrmData = data + dataOff;
    u32 count = std::min(m_nrmArray.count,
                         static_cast<u32>(m_currentModel->vertices.size()));

    for (u32 i = 0; i < count; i++) {
        const u8* p = nrmData + i * stride;

        switch (compType) {
        case GX_F32:
            m_currentModel->vertices[i].nrm[0] = readBE32Float(p);
            m_currentModel->vertices[i].nrm[1] = readBE32Float(p + 4);
            if (compCount >= 3)
                m_currentModel->vertices[i].nrm[2] = readBE32Float(p + 8);
            break;

        case GX_S16: {
            // S16 normals: decode as signed int and normalize by dividing by 32767
            f32 nx = static_cast<f32>(static_cast<s16>(readBE16(p))) / 32767.0f;
            f32 ny = static_cast<f32>(static_cast<s16>(readBE16(p + 2))) / 32767.0f;
            f32 nz = 0.0f;
            if (compCount >= 3)
                nz = static_cast<f32>(static_cast<s16>(readBE16(p + 4))) / 32767.0f;
            m_currentModel->vertices[i].nrm[0] = nx;
            m_currentModel->vertices[i].nrm[1] = ny;
            m_currentModel->vertices[i].nrm[2] = nz;
            break;
        }

        case GX_U8:
            // U8 normals: decode as unsigned byte and normalize by 255
            m_currentModel->vertices[i].nrm[0] = p[0] / 255.0f;
            m_currentModel->vertices[i].nrm[1] = p[1] / 255.0f;
            m_currentModel->vertices[i].nrm[2] = (compCount >= 3) ? p[2] / 255.0f : 0.0f;
            break;

        default:
            break;
        }
    }

    return true;
}

// =============================================================================
// CLR0 — Vertex Color Array
// =============================================================================

bool BmdLoader::parseCLR0(const u8* data, u32 size) {
    if (size < 16 || !m_currentModel) return false;

    u32 arrayCount = readBE32(data);
    if (arrayCount < 1) return false;

    const u8* fmtPtr = data + 4;
    u32 format = readBE32(fmtPtr);
    u32 dataOff = readBE32(fmtPtr + 4);
    u32 stride = readBE32(fmtPtr + 8);

    u8 compType  = static_cast<u8>(format & 0x03);
    u8 compCount = static_cast<u8>((format >> 2) & 0x03) + 2;

    m_clrArray.format = compType;
    m_clrArray.compCount = compCount;
    m_clrArray.stride = stride;
    m_clrArray.count = (stride > 0) ? (size - dataOff) / stride : 0;

    if (m_clrArray.count == 0 || m_clrArray.count > 1000000) return false;

    printf("[BmdLoader] CLR0: %u colors, type=%u, comp=%u, stride=%u\n",
           m_clrArray.count, compType, compCount, stride);

    const u8* clrData = data + dataOff;
    u32 count = std::min(m_clrArray.count,
                         static_cast<u32>(m_currentModel->vertices.size()));

    for (u32 i = 0; i < count; i++) {
        const u8* p = clrData + i * stride;

        switch (compType) {
        case GX_U8:  // RGBA8
            m_currentModel->vertices[i].color[0] = p[0];  // R
            m_currentModel->vertices[i].color[1] = p[1];  // G
            m_currentModel->vertices[i].color[2] = p[2];  // B
            m_currentModel->vertices[i].color[3] = (compCount >= 4) ? p[3] : 255;  // A
            break;

        case GX_S16: {
            // RGB565 or RGB5A3 encoded as 16-bit values
            u16 raw = readBE16(p);
            if (compCount >= 4 && stride >= 4) {
                // Two 16-bit values: color + alpha
                u16 raw2 = readBE16(p + 2);
                // RGB565
                m_currentModel->vertices[i].color[0] =
                    static_cast<u8>(((raw >> 11) & 0x1F) * 255 / 31);
                m_currentModel->vertices[i].color[1] =
                    static_cast<u8>(((raw >> 5) & 0x3F) * 255 / 63);
                m_currentModel->vertices[i].color[2] =
                    static_cast<u8>((raw & 0x1F) * 255 / 31);
                m_currentModel->vertices[i].color[3] = 255;
            } else {
                // Single RGB565
                m_currentModel->vertices[i].color[0] =
                    static_cast<u8>(((raw >> 11) & 0x1F) * 255 / 31);
                m_currentModel->vertices[i].color[1] =
                    static_cast<u8>(((raw >> 5) & 0x3F) * 255 / 63);
                m_currentModel->vertices[i].color[2] =
                    static_cast<u8>((raw & 0x1F) * 255 / 31);
                m_currentModel->vertices[i].color[3] = 255;
            }
            break;
        }

        default:
            m_currentModel->vertices[i].color[0] = 255;
            m_currentModel->vertices[i].color[1] = 255;
            m_currentModel->vertices[i].color[2] = 255;
            m_currentModel->vertices[i].color[3] = 255;
            break;
        }
    }

    return true;
}

// =============================================================================
// TEX — Texture Coordinate Entry
// =============================================================================

bool BmdLoader::parseTEXEntry(const u8* data, u32 size, u8 texCoordIdx) {
    if (size < 16 || !m_currentModel) return false;
    if (texCoordIdx >= 8) return false;

    u32 arrayCount = readBE32(data);
    if (arrayCount < 1) return false;

    const u8* fmtPtr = data + 4;
    u32 format = readBE32(fmtPtr);
    u32 dataOff = readBE32(fmtPtr + 4);
    u32 stride = readBE32(fmtPtr + 8);

    u8 compType  = static_cast<u8>(format & 0x03);
    u8 compCount = static_cast<u8>((format >> 2) & 0x03) + 2;

    m_texArrays[texCoordIdx].format = compType;
    m_texArrays[texCoordIdx].compCount = compCount;
    m_texArrays[texCoordIdx].stride = stride;
    m_texArrays[texCoordIdx].dataOffset = dataOff;
    m_texArrays[texCoordIdx].dataSize = size - dataOff;
    m_texArrays[texCoordIdx].count = (stride > 0) ? (size - dataOff) / stride : 0;

    if (m_texArrays[texCoordIdx].count == 0 ||
        m_texArrays[texCoordIdx].count > 1000000) return false;

    printf("[BmdLoader] TEX%u: %u coords, type=%u, stride=%u\n",
           texCoordIdx, m_texArrays[texCoordIdx].count, compType, stride);

    const u8* texData = data + dataOff;
    u32 count = std::min(m_texArrays[texCoordIdx].count,
                         static_cast<u32>(m_currentModel->vertices.size()));

    for (u32 i = 0; i < count; i++) {
        const u8* p = texData + i * stride;

        switch (compType) {
        case GX_F32:
            m_currentModel->vertices[i].tex[0] = readBE32Float(p);
            m_currentModel->vertices[i].tex[1] = readBE32Float(p + 4);
            break;

        case GX_S16:
            m_currentModel->vertices[i].tex[0] =
                static_cast<f32>(static_cast<s16>(readBE16(p)));
            m_currentModel->vertices[i].tex[1] =
                static_cast<f32>(static_cast<s16>(readBE16(p + 2)));
            break;

        case GX_U8:
            m_currentModel->vertices[i].tex[0] = p[0] / 255.0f;
            m_currentModel->vertices[i].tex[1] = p[1] / 255.0f;
            break;

        default:
            break;
        }
    }

    return true;
}

// =============================================================================
// SHP1/SHP2 — Shape (Draw Call) Entry
// =============================================================================

bool BmdLoader::parseSHP(const u8* data, u32 size) {
    if (size < 16 || !m_currentModel) return false;

    // SHP layout:
    //   4B: packet count
    //   For each packet:
    //     Variable-length data containing primitive type, vertex indices,
    //     and vertex attribute matrix references.

    u32 packetCount = readBE32(data);
    printf("[BmdLoader] SHP: %u packets\n", packetCount);

    // Each packet starts with:
    //   1B: primitive type (0=QUADS, 1=TRIANGLES, 2=TRIANGLE_STRIP, 3=TRIANGLE_FAN)
    //   1B: vertex descriptor (which attributes have matrix indices)
    //   Variable: matrix indices for enabled attributes
    //   Variable: vertex indices (U16 index into VTXL array)

    const u8* ptr = data + 4;
    u32 remaining = size - 4;

    // Primitive type mapping to GL
    static const u32 GL_PRIM_MAP[] = {
        0x0007,  // GL_QUADS (0)
        0x0004,  // GL_TRIANGLES (1)
        0x0005,  // GL_TRIANGLE_STRIP (2)
        0x0006,  // GL_TRIANGLE_FAN (3)
    };

    for (u32 pkt = 0; pkt < packetCount && remaining >= 4; pkt++) {
        if (remaining < 4) break;

        // Each shape packet has:
        //   4B: total packet size (includes this field)
        u32 pktSize = readBE32(ptr);
        if (pktSize < 4 || pktSize > remaining) {
            printf("[BmdLoader] SHP packet %u: bad size %u (rem=%u)\n",
                   pkt, pktSize, remaining);
            break;
        }

        // After size:
        //   1B: primitive type
        //   1B: vertex descriptor (bitmask of which attrs have matrix data)
        u8 primType = ptr[4];
        u8 vtxDesc  = ptr[5];

        u32 glPrim = (primType < 4) ? GL_PRIM_MAP[primType] : 0x0004;

        // Count matrix indices from descriptor bits
        u32 matIdxCount = 0;
        for (u8 bit = 0; bit < 12; bit++) {
            if (vtxDesc & (1 << bit)) matIdxCount++;
        }

        const u8* idxStart = ptr + 6 + matIdxCount * 2;  // Skip matrix U16 entries
        u32 idxBytes = pktSize - 4 - 2 - matIdxCount * 2;
        u32 idxCount = idxBytes / 2;  // Each index is U16

        if (idxCount == 0 || idxCount > 100000) {
            remaining -= pktSize;
            ptr += pktSize;
            continue;
        }

        BmdDrawCall dc;
        dc.startIndex = 0;
        dc.indexCount = idxCount;
        dc.primitiveType = glPrim;

        // Assign material name if available
        if (pkt < m_materialNames.size()) {
            dc.materialName = m_materialNames[pkt];
        } else {
            char buf[16];
            snprintf(buf, sizeof(buf), "material_%u", pkt);
            dc.materialName = buf;
        }

        // Read indices
        dc.indices.reserve(idxCount);
        for (u32 i = 0; i < idxCount; i++) {
            dc.indices.push_back(readBE16(idxStart + i * 2));
        }

        m_currentModel->drawCalls.push_back(std::move(dc));

        remaining -= pktSize;
        ptr += pktSize;
    }

    printf("[BmdLoader] SHP: parsed %zu draw calls\n",
           m_currentModel->drawCalls.size());
    return !m_currentModel->drawCalls.empty();
}

// =============================================================================
// MAT3 — Material Entry
// =============================================================================

bool BmdLoader::parseMAT3(const u8* data, u32 size) {
    if (size < 16) return false;

    // MAT3 layout (simplified):
    //   4B: material count
    //   For each material:
    //     Various material properties (texture references, TEV config, etc.)

    u32 matCount = readBE32(data);
    printf("[BmdLoader] MAT3: %u materials\n", matCount);

    // Store material names indexed by draw call order
    // The material names are used to look up textures
    m_materialNames.resize(matCount);

    const u8* ptr = data + 4;
    u32 remaining = size - 4;

    for (u32 m = 0; m < matCount && remaining >= 4; m++) {
        u32 matSize = readBE32(ptr);
        if (matSize < 4 || matSize > remaining) break;

        // Try to extract material name
        // Materials reference texture names. The name is typically stored
        // as a string within the material definition.
        // For now, we assign generic names and let the SHP parser map them.
        char buf[16];
        snprintf(buf, sizeof(buf), "mat_%u", m);
        m_materialNames[m] = buf;

        remaining -= matSize;
        ptr += matSize;
    }

    return true;
}

// =============================================================================
// TEX0 — Texture Parsing
// =============================================================================

bool BmdLoader::parseTEX0(const u8* data, u32 size) {
    if (size < 0x20) return false;

    if (memcmp(data, TEX0_MAGIC, 4) != 0) return false;

    u32 texSize = readBE32(data + 4);

    // TEX0 layout:
    //   0x00: 4B magic "TEX0"
    //   0x04: 4B section size
    //   0x08: 4B number of images (1 for non-animated textures)
    //   0x0C: 4B format (Wii texture format code)
    //   0x10: 2B width
    //   0x12: 2B height
    //   0x14: 4B image offset (from start of TEX0 data)
    //   0x18: 4B string table offset (for name)
    //   ... texture data at imageOffset

    u32 numImages = readBE32(data + 8);
    u32 format    = readBE32(data + 0x0C);
    u16 width     = readBE16(data + 0x10);
    u16 height    = readBE16(data + 0x12);
    u32 imgOffset = readBE32(data + 0x14);
    u32 strOffset = readBE32(data + 0x18);

    printf("[BmdLoader] TEX0: %ux%u, format=0x%02X, images=%u, imgOff=0x%X\n",
           width, height, format, numImages, imgOffset);

    // Extract texture name
    std::string texName;
    if (strOffset > 0 && strOffset < size) {
        const u8* strPool = data + strOffset;
        // Try reading as length-prefixed string
        u16 lenField = readBE16(strPool);
        if ((lenField & 0x8000) == 0 && lenField > 0 && lenField < 256) {
            texName = std::string(reinterpret_cast<const char*>(strPool + 2), lenField);
        } else {
            texName = std::string(reinterpret_cast<const char*>(strPool));
        }
    }

    if (texName.empty()) {
        char buf[32];
        snprintf(buf, sizeof(buf), "tex_%u", static_cast<u32>(m_textures.size()));
        texName = buf;
    }

    // Decode texture pixel data
    BmdTexture tex;
    tex.name = texName;
    tex.width = width;
    tex.height = height;
    tex.format = static_cast<u8>(format);
    tex.glTexObj = 0;

    if (imgOffset > 0 && imgOffset < size) {
        const u8* pixelData = data + imgOffset;
        u32 pixelBytes = size - imgOffset;

        if (decodeTextureData(pixelData, static_cast<u8>(format),
                              width, height, numImages, tex.pixelData)) {
            printf("[BmdLoader] TEX0 '%s': decoded %u bytes of RGBA data\n",
                   texName.c_str(),
                   static_cast<u32>(tex.pixelData.size()));
        } else {
            printf("[BmdLoader] TEX0 '%s': decode failed for format 0x%02X\n",
                   texName.c_str(), format);
        }
    }

    m_textures.push_back(std::move(tex));
    return true;
}

// =============================================================================
// Texture Data Decoding
// =============================================================================

bool BmdLoader::decodeTextureData(const u8* src, u8 format, u16 width, u16 height,
                                   u32 numImages, std::vector<u8>& outRGBA) {
    u32 pixels = static_cast<u32>(width) * static_cast<u32>(height);
    outRGBA.resize(pixels * 4 * numImages);  // RGBA8

    // Decode based on Wii texture format
    switch (format) {
    case 0x04: {  // RGB565
        u32 bpp = 2;
        u32 rowBytes = width * bpp;
        u32 blockAlign = (rowBytes + 31) & ~31u;  // 32-byte row alignment

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u16 pixel = readBE16(src + y * blockAlign + x * bpp);
                u32 idx = (y * width + x) * 4;
                outRGBA[idx + 0] = static_cast<u8>(((pixel >> 11) & 0x1F) * 255 / 31);  // R
                outRGBA[idx + 1] = static_cast<u8>(((pixel >> 5) & 0x3F) * 255 / 63);   // G
                outRGBA[idx + 2] = static_cast<u8>((pixel & 0x1F) * 255 / 31);          // B
                outRGBA[idx + 3] = 255;  // A
            }
        }
        return true;
    }

    case 0x05: {  // RGB5A3
        u32 bpp = 2;
        u32 rowBytes = width * bpp;
        u32 blockAlign = (rowBytes + 31) & ~31u;

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u16 pixel = readBE16(src + y * blockAlign + x * bpp);
                u32 idx = (y * width + x) * 4;

                if (pixel & 0x8000) {
                    // RGB5 (bit 15 = 1): 5 bits R, 5 bits G, 5 bits B, 1 bit alpha (opaque)
                    outRGBA[idx + 0] = static_cast<u8>(((pixel >> 10) & 0x1F) * 255 / 31);
                    outRGBA[idx + 1] = static_cast<u8>(((pixel >> 5) & 0x1F) * 255 / 31);
                    outRGBA[idx + 2] = static_cast<u8>((pixel & 0x1F) * 255 / 31);
                    outRGBA[idx + 3] = 255;
                } else {
                    // RGB4A3 (bit 15 = 0): 4 bits R, 4 bits G, 4 bits B, 3 bits alpha
                    outRGBA[idx + 0] = static_cast<u8>(((pixel >> 8) & 0x0F) * 255 / 15);
                    outRGBA[idx + 1] = static_cast<u8>(((pixel >> 4) & 0x0F) * 255 / 15);
                    outRGBA[idx + 2] = static_cast<u8>((pixel & 0x0F) * 255 / 15);
                    outRGBA[idx + 3] = static_cast<u8>(((pixel >> 12) & 0x07) * 255 / 7);
                }
            }
        }
        return true;
    }

    case 0x06: {  // RGBA32
        u32 bpp = 4;
        u32 rowBytes = width * bpp;
        u32 blockAlign = (rowBytes + 31) & ~31u;

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u32 off = y * blockAlign + x * bpp;
                u32 idx = (y * width + x) * 4;
                outRGBA[idx + 0] = src[off + 0];     // R
                outRGBA[idx + 1] = src[off + 1];     // G
                outRGBA[idx + 2] = src[off + 2];     // B
                outRGBA[idx + 3] = src[off + 3];     // A
            }
        }
        return true;
    }

    case 0x00: {  // I4 (4-bit intensity)
        u32 rowBytes = (width + 7) / 8;  // 4 bits per pixel, 32-byte align
        u32 blockAlign = (rowBytes + 31) & ~31u;

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u32 byteIdx = x / 2;
                u32 shift = (x % 2 == 0) ? 4 : 0;
                u8 val = (src[y * blockAlign + byteIdx] >> shift) & 0x0F;
                u8 intensity = val * 17;  // 0-15 → 0-255
                u32 idx = (y * width + x) * 4;
                outRGBA[idx + 0] = intensity;
                outRGBA[idx + 1] = intensity;
                outRGBA[idx + 2] = intensity;
                outRGBA[idx + 3] = 255;
            }
        }
        return true;
    }

    case 0x01: {  // I8 (8-bit intensity)
        u32 rowBytes = width;
        u32 blockAlign = (rowBytes + 31) & ~31u;

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u8 val = src[y * blockAlign + x];
                u32 idx = (y * width + x) * 4;
                outRGBA[idx + 0] = val;
                outRGBA[idx + 1] = val;
                outRGBA[idx + 2] = val;
                outRGBA[idx + 3] = 255;
            }
        }
        return true;
    }

    case 0x02: {  // IA4 (4-bit intensity + 4-bit alpha)
        u32 rowBytes = width;
        u32 blockAlign = (rowBytes + 31) & ~31u;

        for (u32 y = 0; y < height; y++) {
            for (u32 x = 0; x < width; x++) {
                u8 pixel = src[y * blockAlign + x];
                u8 intensity = (pixel >> 4) * 17;
                u8 alpha = (pixel & 0x0F) * 17;
                u32 idx = (y * width + x) * 4;
                outRGBA[idx + 0] = intensity;
                outRGBA[idx + 1] = intensity;
                outRGBA[idx + 2] = intensity;
                outRGBA[idx + 3] = alpha;
            }
        }
        return true;
    }

    case 0x0B: {  // CMPR (S3TC DXT1 compressed, 4x4 blocks)
        // DXT1: each 8-byte block encodes a 4x4 pixel area
        u32 blocksX = (width + 3) / 4;
        u32 blocksY = (height + 3) / 4;

        for (u32 by = 0; by < blocksY; by++) {
            for (u32 bx = 0; bx < blocksX; bx++) {
                u32 blockIdx = by * blocksX + bx;
                const u8* block = src + blockIdx * 8;

                u16 c0 = readBE16(block);     // Color 0
                u16 c1 = readBE16(block + 2); // Color 1

                // Decode RGB565 colors
                f32 r0 = ((c0 >> 11) & 0x1F) / 31.0f;
                f32 g0 = ((c0 >> 5) & 0x3F) / 63.0f;
                f32 b0 = (c0 & 0x1F) / 31.0f;
                f32 r1 = ((c1 >> 11) & 0x1F) / 31.0f;
                f32 g1 = ((c1 >> 5) & 0x3F) / 63.0f;
                f32 b1 = (c1 & 0x1F) / 31.0f;

                // 4 bytes of 2-bit indices (4 pixels per byte... wait, 8 pixels)
                // Actually: 4 bytes → 32 bits → 16 2-bit codes... no.
                // DXT1: 4 bytes after colors encode 16 pixels (2 bits each) in 4x4 block
                // Each row of 4 pixels is one byte (2 bits per pixel)
                for (u32 py = 0; py < 4 && by * 4 + py < height; py++) {
                    u8 row = block[4 + py];  // One byte per row
                    for (u32 px = 0; px < 4 && bx * 4 + px < width; px++) {
                        u8 code = (row >> (6 - px * 2)) & 0x03;
                        f32 r, g, b, a;

                        if (c0 > c1) {
                            // 4-color mode
                            switch (code) {
                            case 0: r=r0; g=g0; b=b0; a=1.0f; break;
                            case 1: r=r1; g=g1; b=b1; a=1.0f; break;
                            case 2: r=(r0+r1)/2; g=(g0+g1)/2; b=(b0+b1)/2; a=1.0f; break;
                            case 3: r=(r0+r1)/4; g=(g0+g1)/4; b=(b0+b1)/4; a=1.0f; break;
                            default: r=g=b=a=0; break;
                            }
                        } else {
                            // 3-color mode + transparent
                            switch (code) {
                            case 0: r=r0; g=g0; b=b0; a=1.0f; break;
                            case 1: r=r1; g=g1; b=b1; a=1.0f; break;
                            case 2: r=(r0+r1)/2; g=(g0+g1)/2; b=(b0+b1)/2; a=1.0f; break;
                            case 3: r=g=b=a=0.0f; break;  // Transparent
                            default: r=g=b=a=0; break;
                            }
                        }

                        u32 pixelX = bx * 4 + px;
                        u32 pixelY = by * 4 + py;
                        u32 idx = (pixelY * width + pixelX) * 4;
                        outRGBA[idx + 0] = static_cast<u8>(r * 255);
                        outRGBA[idx + 1] = static_cast<u8>(g * 255);
                        outRGBA[idx + 2] = static_cast<u8>(b * 255);
                        outRGBA[idx + 3] = static_cast<u8>(a * 255);
                    }
                }
            }
        }
        return true;
    }

    default:
        printf("[BmdLoader] Unsupported texture format: 0x%02X\n", format);
        // Fill with magenta to make missing textures visible
        memset(outRGBA.data(), 0xFF, outRGBA.size());
        for (u32 i = 0; i < pixels; i++) {
            outRGBA[i * 4 + 0] = 0xFF; // R
            outRGBA[i * 4 + 1] = 0x00; // G
            outRGBA[i * 4 + 2] = 0xFF; // B
            outRGBA[i * 4 + 3] = 0xFF; // A
        }
        return false;
    }
}

} // namespace Loaders
