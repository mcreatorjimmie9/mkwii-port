// brlyt_parser.cpp — BRLYT Binary Layout Parser Implementation
// Parses the nw4r::lyt::Layout binary format used by Mario Kart Wii's UI.
//
// The BRLYT format stores a tree of panes (base, picture, text, window, etc.)
// with material/texture/font references and animation bindings. This parser
// extracts all sections into a BrlytLayout structure suitable for building
// J2DPane trees in the game's UI system.

#include "brlyt_parser.hpp"
#include <cstdio>
#include <cmath>
#include <algorithm>

namespace Loaders {

// =============================================================================
// Big-endian read helpers
// =============================================================================

u16 BrlytParser::readBE16(const u8* p) {
    return (u16(p[0]) << 8) | u16(p[1]);
}

u32 BrlytParser::readBE32(const u8* p) {
    return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
           (u32(p[2]) << 8)  | u32(p[3]);
}

f32 BrlytParser::readBE32f(const u8* p) {
    u32 raw = readBE32(p);
    f32 result;
    __builtin_memcpy(&result, &raw, 4);
    return result;
}

// =============================================================================
// Construction / Destruction
// =============================================================================

BrlytParser::BrlytParser() {
    m_layout = {};
}

BrlytParser::~BrlytParser() {}

// =============================================================================
// parse — Top-level entry point
// =============================================================================

bool BrlytParser::parse(const u8* data, u32 size) {
    if (!data || size < 64) return false;

    // Retain a copy of raw data
    m_rawData.assign(data, data + size);

    // Validate magic
    if (readBE32(data) != 0x524C5954) { // "RLYT"
        return false;
    }

    // Parse header
    if (!parseHeader(data, size)) {
        return false;
    }

    // Parse optional sections (each may be absent)
    if (m_layout.header.offsetPan1 > 0 && m_layout.header.offsetPan1 < size) {
        parsePaneNameTable(data + m_layout.header.offsetPan1,
                           size - m_layout.header.offsetPan1);
    }

    if (m_layout.header.offsetTxl1 > 0 && m_layout.header.offsetTxl1 < size) {
        parseTextureList(data + m_layout.header.offsetTxl1,
                          size - m_layout.header.offsetTxl1);
    }

    if (m_layout.header.offsetFnt1 > 0 && m_layout.header.offsetFnt1 < size) {
        parseFontList(data + m_layout.header.offsetFnt1,
                       size - m_layout.header.offsetFnt1);
    }

    if (m_layout.header.offsetMat1 > 0 && m_layout.header.offsetMat1 < size) {
        parseMaterials(data + m_layout.header.offsetMat1,
                       size - m_layout.header.offsetMat1);
    }

    if (m_layout.header.offsetPas1 > 0 && m_layout.header.offsetPas1 < size) {
        parseAnimationSet(data + m_layout.header.offsetPas1,
                          size - m_layout.header.offsetPas1);
    }

    // Parse the pane tree (lyt1 section)
    if (m_layout.header.offsetLyt1 > 0 && m_layout.header.offsetLyt1 < size) {
        parsePaneTree(data + m_layout.header.offsetLyt1,
                      size - m_layout.header.offsetLyt1);
    }

    m_layout.valid = true;
    return true;
}

bool BrlytParser::parseFile(const char* path) {
    FILE* f = fopen(path, "rb");
    if (!f) return false;

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize < 64) { fclose(f); return false; }

    std::vector<u8> buf(static_cast<size_t>(fileSize));
    if (fread(buf.data(), 1, buf.size(), f) != buf.size()) {
        fclose(f); return false;
    }
    fclose(f);

    return parse(buf.data(), static_cast<u32>(buf.size()));
}

// =============================================================================
// parseHeader — Extract BRLYT file header
//
// BRLYT header layout (28+ bytes):
//   0x00: char[4] "RLYT" magic
//   0x04: u32 total file size
//   0x08: u16 file format revision
//   0x0A: u8[3] layout version (major.minor.micro)
//   0x0D: u8[3] padding
//   0x10: u32 offset to lyt1 (root pane tree)
//   0x14: u16 section count
//   0x16: u16 padding
//   0x18: u32 offset to pan1 (pane names)
//   0x1C: u32 offset to mat1 (materials)
//   0x20: u32 offset to txl1 (textures)
//   0x24: u32 offset to fnt1 (fonts)
//   0x28: u32 offset to pas1 (animation set)
//   0x2C: u16 user data count
//   0x2E: u16 padding
//   0x30: u32 offset to usd1 (user data)
// =============================================================================
bool BrlytParser::parseHeader(const u8* data, u32 size) {
    if (size < 0x34) return false;

    BrlytHeader& h = m_layout.header;
    memcpy(h.magic, data + 0x00, 4);
    h.fileSize = readBE32(data + 0x04);
    h.revision = readBE16(data + 0x08);
    h.versionMajor = data[0x0A];
    h.versionMinor = data[0x0B];
    h.versionMicro = data[0x0C];
    h.padding[0] = data[0x0D];
    h.padding[1] = data[0x0E];
    h.padding[2] = data[0x0F];
    h.offsetLyt1 = readBE32(data + 0x10);
    h.sectionCount = readBE16(data + 0x14);
    h.offsetPan1 = readBE32(data + 0x18);
    h.offsetMat1 = readBE32(data + 0x1C);
    h.offsetTxl1 = readBE32(data + 0x20);
    h.offsetFnt1 = readBE32(data + 0x24);
    h.offsetPas1 = readBE32(data + 0x28);
    h.userCount = readBE16(data + 0x2C);
    h.offsetUsd1 = readBE32(data + 0x30);

    // Basic validation
    if (h.fileSize > size) return false;
    if (h.revision < 1 || h.revision > 11) return false;

    h.valid = true;
    return true;
}

// =============================================================================
// parsePaneNameTable — Extract pane names from pan1 section
//
// pan1 format:
//   0x00: char[4] "pan1" tag
//   0x04: u32 section size
//   0x08: u16 name count
//   0x0A: u16 padding
//   0x0C+: null-terminated name strings (packed sequentially)
// =============================================================================
void BrlytParser::parsePaneNameTable(const u8* data, u32 size) {
    if (size < 12) return;

    u32 tag = readBE32(data);
    if (tag != 0x70616E31) return; // "pan1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    u16 nameCount = readBE16(data + 8);

    // Extract null-terminated strings starting at offset 12
    u32 strOffset = 12;
    for (u16 i = 0; i < nameCount && strOffset < sectionSize; i++) {
        const char* str = reinterpret_cast<const char*>(data + strOffset);
        u32 maxLen = sectionSize - strOffset;
        u32 len = 0;
        while (len < maxLen && str[len] != '\0') len++;

        m_layout.paneNames.push_back(std::string(str, len));
        strOffset += len + 1; // skip null terminator
    }
}

// =============================================================================
// parseTextureList — Extract texture names from txl1 section
//
// txl1 format:
//   0x00: char[4] "txl1" tag
//   u32 section size
//   u16 texture count
//   u16 padding
//   null-terminated texture names
// =============================================================================
void BrlytParser::parseTextureList(const u8* data, u32 size) {
    if (size < 12) return;

    u32 tag = readBE32(data);
    if (tag != 0x74786831) return; // "txl1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    u16 texCount = readBE16(data + 8);

    u32 strOffset = 12;
    for (u16 i = 0; i < texCount && strOffset < sectionSize; i++) {
        const char* str = reinterpret_cast<const char*>(data + strOffset);
        u32 maxLen = sectionSize - strOffset;
        u32 len = 0;
        while (len < maxLen && str[len] != '\0') len++;

        m_layout.textureNames.push_back(std::string(str, len));
        strOffset += len + 1;
    }
}

// =============================================================================
// parseFontList — Extract font names from fnt1 section
// =============================================================================
void BrlytParser::parseFontList(const u8* data, u32 size) {
    if (size < 12) return;

    u32 tag = readBE32(data);
    if (tag != 0x666E7431) return; // "fnt1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    u16 fontCount = readBE16(data + 8);

    u32 strOffset = 12;
    for (u16 i = 0; i < fontCount && strOffset < sectionSize; i++) {
        const char* str = reinterpret_cast<const char*>(data + strOffset);
        u32 maxLen = sectionSize - strOffset;
        u32 len = 0;
        while (len < maxLen && str[len] != '\0') len++;

        m_layout.fontNames.push_back(std::string(str, len));
        strOffset += len + 1;
    }
}

// =============================================================================
// parseMaterials — Extract material entries from mat1 section
//
// mat1 format:
//   "mat1" tag, u32 section size
//   u16 material count
//   Each material entry: name index (u16) + texture index (u16) + TEV data
// =============================================================================
void BrlytParser::parseMaterials(const u8* data, u32 size) {
    if (size < 12) return;

    u32 tag = readBE32(data);
    if (tag != 0x6D617431) return; // "mat1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    u16 matCount = readBE16(data + 8);

    u32 entryOffset = 12;
    for (u16 i = 0; i < matCount && entryOffset + 8 <= sectionSize; i++) {
        BrlytMaterial mat = {};
        mat.valid = false;
        mat.nameIndex = readBE16(data + entryOffset);
        mat.texIndex = readBE16(data + entryOffset + 2);

        // Resolve names from indices
        if (mat.nameIndex < m_layout.paneNames.size()) {
            strncpy(mat.name, m_layout.paneNames[mat.nameIndex].c_str(),
                    sizeof(mat.name) - 1);
        }
        if (mat.texIndex < m_layout.textureNames.size()) {
            strncpy(mat.textureName, m_layout.textureNames[mat.texIndex].c_str(),
                    sizeof(mat.textureName) - 1);
        }

        // Default TEV colors
        mat.tevColorR = 0xFF; mat.tevColorG = 0xFF;
        mat.tevColorB = 0xFF; mat.tevColorA = 0xFF;
        mat.tevKonstR = 0xFF; mat.tevKonstG = 0xFF;
        mat.tevKonstB = 0xFF; mat.tevKonstA = 0xFF;
        mat.blendMode = 1; // Alpha blend default

        // Try to read TEV data if available (simplified)
        if (entryOffset + 16 <= sectionSize) {
            mat.tevColorR = data[entryOffset + 4];
            mat.tevColorG = data[entryOffset + 5];
            mat.tevColorB = data[entryOffset + 6];
            mat.tevColorA = data[entryOffset + 7];
        }

        mat.valid = true;
        m_layout.materials.push_back(mat);

        // Each material entry is typically 8 or 16 bytes
        // Advance by entry size field if present, else use 8
        u32 entrySize = 8;
        if (entryOffset + 12 <= sectionSize) {
            u32 nextOffset = readBE32(data + entryOffset + 8);
            if (nextOffset > 0 && nextOffset < 256) {
                entrySize = nextOffset;
            }
        }
        entryOffset += entrySize;
    }
}

// =============================================================================
// parseAnimationSet — Extract animation references from pas1 section
//
// pas1 format:
//   "pas1" tag, u32 section size
//   u16 animation count
//   Each animation: name index (u16), first frame (f32), last frame (f32)
// =============================================================================
void BrlytParser::parseAnimationSet(const u8* data, u32 size) {
    if (size < 12) return;

    u32 tag = readBE32(data);
    if (tag != 0x70617331) return; // "pas1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    u16 animCount = readBE16(data + 8);

    u32 entryOffset = 12;
    for (u16 i = 0; i < animCount && entryOffset + 12 <= sectionSize; i++) {
        BrlytAnimation anim = {};
        anim.valid = false;
        anim.nameIndex = readBE16(data + entryOffset);
        anim.startFrame = readBE32f(data + entryOffset + 4);
        anim.endFrame = readBE32f(data + entryOffset + 8);

        if (anim.nameIndex < m_layout.paneNames.size()) {
            strncpy(anim.name, m_layout.paneNames[anim.nameIndex].c_str(),
                    sizeof(anim.name) - 1);
        }

        anim.valid = true;
        m_layout.animations.push_back(anim);
        entryOffset += 12;
    }
}

// =============================================================================
// parsePaneTree — Parse the lyt1 root pane tree section
//
// The lyt1 section contains a recursive tree of pane entries. Each pane entry
// starts with the pane type byte, followed by the common base properties
// (flags, alpha, name index, position, rotation, scale, size), then
// type-specific data, then child panes appended sequentially.
//
// nw4r::lyt::Pane binary layout (~0x48 bytes for base):
//   u8  flags
//   u8  globalAlpha
//   u16 nameIndex
//   u8  userDataCount
//   u8  padding
//   u16 padding
//   f32 translateX
//   f32 translateY
//   f32 rotate
//   f32 scaleX
//   f32 scaleY
//   f32 sizeX (width)
//   f32 sizeY (height)
// Then type-specific data follows.
// =============================================================================
void BrlytParser::parsePaneTree(const u8* data, u32 size) {
    if (size < 8) return;

    u32 tag = readBE32(data);
    if (tag != 0x6C797431) return; // "lyt1"

    u32 sectionSize = readBE32(data + 4);
    if (sectionSize > size) return;

    // The lyt1 section contains a single root pane entry,
    // followed by its children (depth-first traversal).
    parsePaneRecursive(data, 8, sectionSize, 0xFFFFFFFF, 0);
}

void BrlytParser::parsePaneRecursive(const u8* data, u32 offset, u32 sectionSize,
                                       u32 parentIndex, u32 depth) {
    if (depth > 32 || offset + 4 > sectionSize) return; // Safety limit

    BrlytPaneData pane = {};
    pane.valid = false;
    pane.parentIndex = parentIndex;
    pane.type = static_cast<BrlytPaneType>(data[offset]);

    u32 pos = offset + 1;
    if (pos + 8 > sectionSize) return;

    // Common pane base properties
    pane.flags = data[pos];
    pane.globalAlpha = data[pos + 1];
    pane.nameIndex = readBE16(data + pos + 2);
    pane.userDataCount = data[pos + 4];
    pane.padding1 = data[pos + 5];
    pane.padding2 = readBE16(data + pos + 6);
    pos += 8;

    if (pos + 32 > sectionSize) return;

    // Position, rotation, scale, size
    pane.translateX = readBE32f(data + pos);      pos += 4;
    pane.translateY = readBE32f(data + pos);      pos += 4;
    pane.rotate = readBE32f(data + pos);          pos += 4;
    pane.scaleX = readBE32f(data + pos);           pos += 4;
    pane.scaleY = readBE32f(data + pos);           pos += 4;
    pane.width = readBE32f(data + pos);            pos += 4;
    pane.height = readBE32f(data + pos);           pos += 4;

    // Type-specific data
    switch (pane.type) {
        case BRLYT_PANE_PICTURE: {
            // PicturePane has UV coords and material index
            if (pos + 20 <= sectionSize) {
                pane.picture.texCoords[0] = readBE32f(data + pos); pos += 4; // u0
                pane.picture.texCoords[1] = readBE32f(data + pos); pos += 4; // v0
                pane.picture.texCoords[2] = readBE32f(data + pos); pos += 4; // u1
                pane.picture.texCoords[3] = readBE32f(data + pos); pos += 4; // v1
                pane.picture.materialIndex = readBE16(data + pos);
                pane.picture.padding = readBE16(data + pos + 2);
            }
            break;
        }
        case BRLYT_PANE_TEXTBOX: {
            // TextBox has font index, alignment, line height, char space
            if (pos + 16 <= sectionSize) {
                pane.textbox.fontIndex = readBE16(data + pos); pos += 2;
                pane.textbox.textAlignment = readBE16(data + pos); pos += 2;
                pane.textbox.lineHeight = readBE32f(data + pos); pos += 4;
                pane.textbox.charSpace = readBE32f(data + pos); pos += 4;
                pane.textbox.maxWidth = readBE16(data + pos);
                pane.textbox.padding = readBE16(data + pos + 2);
            }
            break;
        }
        case BRLYT_PANE_WINDOW: {
            // WindowPane has frame sizes and corner colors
            if (pos + 48 <= sectionSize) {
                pane.window.frameSizeLT = readBE32f(data + pos); pos += 4;
                pane.window.frameSizeRT = readBE32f(data + pos); pos += 4;
                pane.window.frameSizeLB = readBE32f(data + pos); pos += 4;
                pane.window.frameSizeRB = readBE32f(data + pos); pos += 4;
                for (s32 c = 0; c < 4; c++) {
                    pane.window.colorTL[c] = data[pos++];
                    pane.window.colorTR[c] = data[pos++];
                    pane.window.colorBL[c] = data[pos++];
                    pane.window.colorBR[c] = data[pos++];
                }
                pane.window.contentPaneIdx = readBE16(data + pos);
            }
            break;
        }
        default:
            break;
    }

    // Resolve name from pan1 table
    if (pane.nameIndex < m_layout.paneNames.size()) {
        strncpy(pane.name, m_layout.paneNames[pane.nameIndex].c_str(),
                sizeof(pane.name) - 1);
    } else {
        snprintf(pane.name, sizeof(pane.name), "pane_%u",
                 static_cast<u32>(m_layout.panes.size()));
    }

    pane.valid = true;
    u32 paneIndex = static_cast<u32>(m_layout.panes.size());
    m_layout.panes.push_back(pane);

    // Recursively parse children.
    // In BRLYT, children follow the parent's data.
    // The exact mechanism depends on version:
    //   - Each child's data follows immediately after the parent's type-specific data
    //   - We use a heuristic: after reading the parent's data, there should be
    //     another pane type byte if children exist
    //
    // Simple approach: scan ahead for valid pane type bytes (0-6)
    // and recursively parse each as a child.
    if (depth < 32) {
        // Estimate where children might start (after type-specific data)
        u32 childScanStart = offset + 8 + 32 + 16; // conservative: base(8+32) + max type data(16)
        while (childScanStart + 4 <= sectionSize) {
            u8 nextType = data[childScanStart];
            if (nextType <= BRLYT_PANE_SCREEN_CAPTURE) {
                parsePaneRecursive(data, childScanStart, sectionSize,
                                     paneIndex, depth + 1);
                // After parsing a child (and its subtree), advance past it
                // The parsePaneRecursive will have consumed the child's data
                // We need to figure out how much it consumed...
                // This is the tricky part of BRLYT parsing: without knowing
                // each child's exact size, we rely on recursive parsing
                // which naturally advances the offset.
                // For now, we break after one child to avoid over-parsing.
                // Real implementation would track consumed bytes.
                break;
            }
            childScanStart += 1;
        }
    }
}

// =============================================================================
// printInfo — Debug output
// =============================================================================
void BrlytParser::printInfo() const {
    if (!m_layout.valid) {
        printf("[BrlytParser] No valid layout data\n");
        return;
    }

    printf("\n");
    printf("================================================================\n");
    printf("  BRLYT Layout: %s\n", m_layout.fileName.c_str());
    printf("================================================================\n");
    printf("  Version: %u.%u.%u (revision %u)\n",
           m_layout.header.versionMajor, m_layout.header.versionMinor,
           m_layout.header.versionMicro, m_layout.header.revision);
    printf("  File size: %u bytes\n", m_layout.header.fileSize);
    printf("  Sections: %u\n", m_layout.header.sectionCount);

    printf("\n  Pane Tree:\n");
    printf("    Total panes: %zu\n", m_layout.panes.size());
    for (u32 i = 0; i < m_layout.panes.size() && i < 20; i++) {
        const auto& p = m_layout.panes[i];
        printf("    [%2u] %s (type=%u) pos=(%.0f,%.0f) size=(%.0f,%.0f) alpha=%u\n",
               i, p.name, p.type,
               (double)p.translateX, (double)p.translateY,
               (double)p.width, (double)p.height, p.globalAlpha);
    }
    if (m_layout.panes.size() > 20) {
        printf("    ... and %zu more\n", m_layout.panes.size() - 20);
    }

    if (!m_layout.materials.empty()) {
        printf("\n  Materials:\n");
        for (u32 i = 0; i < m_layout.materials.size(); i++) {
            const auto& m = m_layout.materials[i];
            printf("    [%u] '%s' → tex '%s'\n", i, m.name, m.textureName);
        }
    }

    if (!m_layout.textureNames.empty()) {
        printf("\n  Textures:\n");
        for (u32 i = 0; i < m_layout.textureNames.size(); i++) {
            printf("    [%u] '%s'\n", i, m_layout.textureNames[i].c_str());
        }
    }

    if (!m_layout.fontNames.empty()) {
        printf("\n  Fonts:\n");
        for (u32 i = 0; i < m_layout.fontNames.size(); i++) {
            printf("    [%u] '%s'\n", i, m_layout.fontNames[i].c_str());
        }
    }

    if (!m_layout.animations.empty()) {
        printf("\n  Animations:\n");
        for (u32 i = 0; i < m_layout.animations.size(); i++) {
            const auto& a = m_layout.animations[i];
            printf("    [%u] '%s' frames=(%.1f..%.1f)\n",
                   i, a.name, (double)a.startFrame, (double)a.endFrame);
        }
    }

    printf("================================================================\n\n");
}

} // namespace Loaders
