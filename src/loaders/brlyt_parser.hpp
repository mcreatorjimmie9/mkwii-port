#pragma once
// brlyt_parser.hpp — BRLYT Binary Layout Parser
// Parses the nw4r::lyt::Layout binary format used by Mario Kart Wii's UI system.
//
// BRLYT is Nintendo's 2D layout format containing a tree of panes (Pane, Picture,
// TextBox, Window, etc.), materials, textures, fonts, and animation bindings.
// This parser extracts pane hierarchy data and builds J2DPane objects.
//
// Format structure (matching nw4r::lyt::Layout):
//   Header: "RLYT" magic, size, version, section offsets
//   lyt1 section: Root pane tree (recursive pane entries)
//   pan1 section: Pane name table (null-terminated strings)
//   mat1 section: Material table (names + TEV properties)
//   txl1 section: Texture list (names)
//   fnt1 section: Font list (names)
//   pas1 section: Animation set references
//   usd1 section: User data entries

#include "rk_types.h"
#include <vector>
#include <string>
#include <cstring>

namespace Loaders {

// =============================================================================
// BRLYT Pane Types (matching nw4r::lyt::PaneType)
// =============================================================================
enum BrlytPaneType {
    BRLYT_PANE_BASE = 0,
    BRLYT_PANE_PICTURE = 1,
    BRLYT_PANE_TEXTBOX = 2,
    BRLYT_PANE_WINDOW = 3,
    BRLYT_PANE_BOUNDING = 4,
    BRLYT_PANE_PARTS = 5,
    BRLYT_PANE_SCREEN_CAPTURE = 6,
};

// =============================================================================
// BrlytHeader — Parsed BRLYT file header
// =============================================================================
struct BrlytHeader {
    char magic[4];          // "RLYT"
    u32 fileSize;
    u16 revision;           // File format version
    u8 versionMajor;
    u8 versionMinor;
    u8 versionMicro;
    u8 padding[3];

    // Section offsets (from file start)
    u32 offsetLyt1;          // Root pane tree section
    u32 offsetPan1;          // Pane name table
    u32 offsetMat1;          // Materials section
    u32 offsetTxl1;          // Textures section
    u32 offsetFnt1;          // Fonts section
    u32 offsetPas1;          // Animation set
    u16 userCount;
    u32 offsetUsd1;          // User data

    u16 sectionCount;

    bool valid;
};

// =============================================================================
// BrlytPaneData — Parsed pane entry from the lyt1 section
// Contains the common pane base properties plus type-specific extras.
// In the BRLYT binary, pane entries are nested: a parent's data is followed
// by its children's data (depth-first traversal order).
// =============================================================================
struct BrlytPaneData {
    BrlytPaneType type;

    // Common pane base (nw4r::lyt::Pane, ~0x48 bytes in binary)
    u8 flags;               // Visibility, influence alpha, etc.
    u8 globalAlpha;          // Global alpha (0-255)
    u16 nameIndex;           // Index into pan1 name table
    u8 userDataCount;
    u8 padding1;
    u16 padding2;
    f32 translateX;          // Local X position
    f32 translateY;          // Local Y position
    f32 rotate;             // Rotation angle (degrees)
    f32 scaleX;             // X scale factor
    f32 scaleY;             // Y scale factor
    f32 width;              // Pane width
    f32 height;             // Pane height

    // Type-specific extras
    union {
        // PicturePane extras (type == BRLYT_PANE_PICTURE)
        struct {
            f32 texCoords[4];    // UV: left, top, right, bottom
            u16 materialIndex;   // Index into mat1 table
            u16 padding;
        } picture;

        // TextBox extras (type == BRLYT_PANE_TEXTBOX)
        struct {
            u16 fontIndex;       // Index into fnt1 table
            u16 textAlignment;   // 0=left, 1=center, 2=right
            f32 lineHeight;      // Line height multiplier
            f32 charSpace;       // Character spacing
            u16 maxWidth;
            u16 padding;
        } textbox;

        // WindowPane extras (type == BRLYT_PANE_WINDOW)
        struct {
            f32 frameSizeLT;     // Left-top frame size
            f32 frameSizeRT;     // Right-top frame size
            f32 frameSizeLB;     // Left-bottom frame size
            f32 frameSizeRB;     // Right-bottom frame size
            u8 colorTL[4];       // Top-left color RGBA
            u8 colorTR[4];       // Top-right color RGBA
            u8 colorBL[4];       // Bottom-left color RGBA
            u8 colorBR[4];       // Bottom-right color RGBA
            u16 contentPaneIdx;   // Index of content child pane
        } window;
    };

    // Hierarchy
    u32 parentIndex;         // Index in parsed panes array (0xFFFFFFFF = root)
    char name[64];          // Resolved name from pan1 table

    bool valid;
};

// =============================================================================
// BrlytMaterial — Parsed material entry from mat1 section
// =============================================================================
struct BrlytMaterial {
    u16 nameIndex;           // Index into pan1 name table (reused)
    u16 texIndex;            // Index into txl1 texture list
    char name[64];
    char textureName[64];

    // TEV color registers (simplified — real format has full TEV setup)
    u8 tevColorR, tevColorG, tevColorB, tevColorA;
    u8 tevKonstR, tevKonstG, tevKonstB, tevKonstA;
    u8 blendMode;            // 0=none, 1=alpha, 2=etc.

    bool valid;
};

// =============================================================================
// BrlytAnimation — Parsed animation reference from pas1 section
// =============================================================================
struct BrlytAnimation {
    char name[64];          // Animation name
    u16 nameIndex;
    f32 startFrame;
    f32 endFrame;

    bool valid;
};

// =============================================================================
// BrlytLayout — Fully parsed BRLYT layout
// =============================================================================
struct BrlytLayout {
    BrlytHeader header;
    std::vector<BrlytPaneData> panes;
    std::vector<BrlytMaterial> materials;
    std::vector<std::string> textureNames;  // From txl1
    std::vector<std::string> fontNames;      // From fnt1
    std::vector<BrlytAnimation> animations;
    std::vector<std::string> paneNames;     // From pan1 (indexed by panes[].nameIndex)

    bool valid;
    std::string fileName;
};

// =============================================================================
// BrlytParser — Parses BRLYT binary data into BrlytLayout
// =============================================================================
class BrlytParser {
public:
    BrlytParser();
    ~BrlytParser();

    /// Parse BRLYT from raw bytes.
    bool parse(const u8* data, u32 size);

    /// Parse BRLYT from a file on disk.
    bool parseFile(const char* path);

    /// Get parsed layout data.
    const BrlytLayout& getLayout() const { return m_layout; }

    /// Get the raw data pointer (retained copy).
    const u8* getRawData() const { return m_rawData.empty() ? nullptr : m_rawData.data(); }
    u32 getRawSize() const { return static_cast<u32>(m_rawData.size()); }

    /// Check if data was loaded.
    bool isLoaded() const { return m_layout.valid; }

    /// Print layout summary to stdout.
    void printInfo() const;

private:
    bool parseHeader(const u8* data, u32 size);
    void parsePaneNameTable(const u8* data, u32 size);
    void parseTextureList(const u8* data, u32 size);
    void parseFontList(const u8* data, u32 size);
    void parseMaterials(const u8* data, u32 size);
    void parseAnimationSet(const u8* data, u32 size);
    void parsePaneTree(const u8* data, u32 size);

    // Recursive pane tree parsing
    void parsePaneRecursive(const u8* data, u32 offset, u32 sectionSize,
                             u32 parentIndex, u32 depth);

    // Big-endian read helpers
    static u16 readBE16(const u8* p);
    static u32 readBE32(const u8* p);
    static f32 readBE32f(const u8* p);

    BrlytLayout m_layout;
    std::vector<u8> m_rawData;
};

} // namespace Loaders
