#pragma once
// ============================================================================
// G3dResFile — NW4R 3D Resource File
// ============================================================================
// Represents a loaded BRRES (Binary Revolution Resource) file, which is
// the primary 3D resource container format used by Nintendo Wii games.
// A BRRES file contains sections (called "blocks") for:
//   - TEX  (textures)
//   - MAT3 (materials)
//   - MDL3 (model/mesh data)
//   - CHR0 (skeletal animation)
//   - SRT0 (texture SRT animation)
//   - PAT0 (texture pattern animation)
//   - CLR0 (material color animation)
//   - SHP0 (shape deformation animation)
//   - VIS0 (visibility animation)
//   - SCN0 (animation scene)
//   - SCS0 (scene ambient)
//
// NW4R namespace: nw4r::g3d::ResFile
// Address range: 0x80603800 - 0x806040FF
// Function count: 15
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct ResAnmScn;

// ============================================================================
// BRRES block type identifiers (magic values)
// ============================================================================
enum BRRESBlockType {
    BRRES_TEX  = 0x54455800,  // "TEX\0"
    BRRES_MAT3 = 0x4D415433,  // "MAT3"
    BRRES_MDL3 = 0x4D444C33,  // "MDL3"
    BRRES_CHR0 = 0x43485230,  // "CHR0"
    BRRES_SRT0 = 0x53525430,  // "SRT0"
    BRRES_PAT0 = 0x50415430,  // "PAT0"
    BRRES_CLR0 = 0x434C5230,  // "CLR0"
    BRRES_SHP0 = 0x53485030,  // "SHP0"
    BRRES_VIS0 = 0x56495330,  // "VIS0"
    BRRES_SCN0 = 0x53434E30,  // "SCN0"
    BRRES_SCS0 = 0x53435330,  // "SCS0"
};

// ============================================================================
// BRRESHeader — File header
// ============================================================================
struct BRRESHeader {
    char magic[4];              // 0x00: "bres"
    u16 byteOrder;              // 0x04: byte order mark (0xFEFF)
    u16 version;                // 0x06: format version
    u32 fileSize;               // 0x08: total file size
    u16 blockCount;             // 0x0C: number of blocks
    u16 _0E;                    // 0x0E: padding
};

// ============================================================================
// BRRESBlockHeader — Per-block header
// ============================================================================
struct BRRESBlockHeader {
    char tag[4];                // 0x00: block type magic
    u32 blockSize;              // 0x04: block data size (including header)
};

// ============================================================================
// G3dResFileData — Loaded BRRES resource file
// ============================================================================
// Stores references to each block's data and provides accessor methods
// for textures, materials, bones, shapes, and animations.
//
// Size: 0x60 bytes
// ============================================================================
struct G3dResFileData {
    void* vtable;               // 0x00: vtable pointer
    const void* fileData;       // 0x04: pointer to raw BRRES file data
    u32 fileSize;               // 0x08: file size
    u32 blockCount;             // 0x0C: number of blocks
    // Block pointers (null if block not present)
    const void* texBlock;       // 0x10: TEX block
    const void* matBlock;       // 0x14: MAT3 block
    const void* mdlBlock;       // 0x18: MDL3 block
    const void* chrBlock;       // 0x1C: CHR0 block
    const void* srtBlock;       // 0x20: SRT0 block
    const void* patBlock;       // 0x24: PAT0 block
    const void* clrBlock;       // 0x28: CLR0 block
    const void* shpBlock;       // 0x2C: SHP0 block
    const void* visBlock;       // 0x30: VIS0 block
    const void* scnBlock;       // 0x34: SCN0 block
    const void* scsBlock;       // 0x38: SCS0 block
    // Counts
    u16 textureCount;           // 0x3C: number of textures
    u16 materialCount;          // 0x3E: number of materials
    u16 boneCount;              // 0x40: number of bones
    u16 shapeCount;             // 0x42: number of shapes
    u16 _44;                    // 0x44: unknown
    u16 _46;                    // 0x46: unknown
    u32 flags;                  // 0x48: flags
    u32 _4C;                    // 0x4C: flags/state
    u8  _50[0x10];              // 0x50: reserved

    // --- Class methods ---
    bool load(const void* data, u32 size);
    bool parseHeader();
    u16 getSectionCount() const;
    const void* getSectionData(u16 index) const;
    const void* getScnData() const;
    const void* getBmdData() const;
    bool validate() const;
};

// ============================================================================
// Function declarations — G3dResFile
// ============================================================================

// @addr 0x80603800 — Load/parse a BRRES resource file from memory
G3dResFileData* G3dResFile_Load(G3dResFileData* obj, const void* data, u32 size);

// @addr 0x80603900 — Release all resources held by the file
void G3dResFile_Release(G3dResFileData* obj);

// @addr 0x80603980 — Get texture count
u16 G3dResFile_GetTextureCount(const G3dResFileData* obj);

// @addr 0x806039A0 — Get material count
u16 G3dResFile_GetMaterialCount(const G3dResFileData* obj);

// @addr 0x806039C0 — Get bone count
u16 G3dResFile_GetBoneCount(const G3dResFileData* obj);

// @addr 0x806039E0 — Get shape count
u16 G3dResFile_GetShapeCount(const G3dResFileData* obj);

// @addr 0x80603A00 — Get texture by index
ResTex* G3dResFile_GetTexture(G3dResFileData* obj, u16 idx);

// @addr 0x80603A40 — Get texture by name
ResTex* G3dResFile_GetTextureByName(G3dResFileData* obj, const char* name);

// @addr 0x80603A80 — Get material by index
ResMat* G3dResFile_GetMaterial(G3dResFileData* obj, u16 idx);

// @addr 0x80603AC0 — Get material by name
ResMat* G3dResFile_GetMaterialByName(G3dResFileData* obj, const char* name);

// @addr 0x80603B00 — Get bone by index
ResBone* G3dResFile_GetBone(G3dResFileData* obj, u16 idx);

// @addr 0x80603B40 — Get shape by index
ResShape* G3dResFile_GetShape(G3dResFileData* obj, u16 idx);

// @addr 0x80603B80 — Get the SCN0 animation scene resource
ResAnmScn* G3dResFile_GetAnmScn(G3dResFileData* obj);

// @addr 0x80603BC0 — Validate BRRES header magic and version
BOOL G3dResFile_Validate(const void* data, u32 size);

// @addr 0x80603C00 — Get a specific animation block by type
const void* G3dResFile_GetBlock(G3dResFileData* obj, u32 blockType);

// @addr 0x80603DA0 — Get model count from MDL3 block
u16 G3dResFile_getModelCount(const G3dResFileData* obj);