#include "G3dResFile.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// G3dResFile Implementation
// ============================================================================
// NW4R BRRES resource file loader/parser. Reads the binary BRRES format
// and provides typed access to its contained resource blocks.
// ============================================================================

// ============================================================================
// G3dResFile_Load()
// 0x80603800
// ============================================================================
// Parse a BRRES file from raw memory. Validates the header, then
// enumerates all blocks and stores pointers to each typed section.
// ============================================================================
G3dResFileData* G3dResFile_Load(G3dResFileData* obj, const void* data, u32 size) {
    if (!obj || !data || size < sizeof(BRRESHeader)) return NULL;

    std::memset(obj, 0, sizeof(G3dResFileData));

    const BRRESHeader* hdr = static_cast<const BRRESHeader*>(data);

    // Validate magic and version
    if (!G3dResFile_Validate(data, size)) return NULL;

    obj->fileData = data;
    obj->fileSize = size;
    obj->blockCount = hdr->blockCount;

    // Enumerate blocks
    // In real NW4R, this walks the block directory in the BRRES header.
    // Each block has a tag that identifies its type.
    // Stub: mark as loaded without actually parsing blocks.

    // The BRRES block directory starts at offset 0x10 (after the header).
    // Each entry is 0x10 bytes: {u32 tag, u32 offset, u32 size, u32 _pad}

    u32 dirOffset = 0x10;
    const u8* base = static_cast<const u8*>(data);

    for (u16 i = 0; i < hdr->blockCount; i++) {
        if (dirOffset + 0x10 > size) break;

        u32 tag = *reinterpret_cast<const u32*>(base + dirOffset);
        u32 blockOffset = *reinterpret_cast<const u32*>(base + dirOffset + 4);
        u32 blockSize = *reinterpret_cast<const u32*>(base + dirOffset + 8);

        (void)blockSize;

        if (blockOffset < size) {
            const void* blockData = base + blockOffset;

            switch (tag) {
                case BRRES_TEX:
                    obj->texBlock = blockData;
                    break;
                case BRRES_MAT3:
                    obj->matBlock = blockData;
                    break;
                case BRRES_MDL3:
                    obj->mdlBlock = blockData;
                    break;
                case BRRES_CHR0:
                    obj->chrBlock = blockData;
                    break;
                case BRRES_SRT0:
                    obj->srtBlock = blockData;
                    break;
                case BRRES_PAT0:
                    obj->patBlock = blockData;
                    break;
                case BRRES_CLR0:
                    obj->clrBlock = blockData;
                    break;
                case BRRES_SHP0:
                    obj->shpBlock = blockData;
                    break;
                case BRRES_VIS0:
                    obj->visBlock = blockData;
                    break;
                case BRRES_SCN0:
                    obj->scnBlock = blockData;
                    break;
                default:
                    break;
            }
        }

        dirOffset += 0x10;
    }

    // Parse counts from the MDL3 block
    // In a real parser, we'd read the MDL3 header for bone/shape/material counts.
    // For the stub, set defaults.
    obj->textureCount = 0;
    obj->materialCount = 0;
    obj->boneCount = 0;
    obj->shapeCount = 0;

    if (obj->texBlock) {
        // TEX header: {u32 tag, u32 size, u32 count}
        const u32* texHdr = static_cast<const u32*>(obj->texBlock);
        obj->textureCount = static_cast<u16>(texHdr[2]);
    }

    return obj;
}

// ============================================================================
// G3dResFile_Release()
// 0x80603900
// ============================================================================
void G3dResFile_Release(G3dResFileData* obj) {
    if (!obj) return;

    // Clear all block references
    obj->texBlock = NULL;
    obj->matBlock = NULL;
    obj->mdlBlock = NULL;
    obj->chrBlock = NULL;
    obj->srtBlock = NULL;
    obj->patBlock = NULL;
    obj->clrBlock = NULL;
    obj->shpBlock = NULL;
    obj->visBlock = NULL;
    obj->scnBlock = NULL;
    obj->scsBlock = NULL;
    obj->fileData = NULL;
    obj->fileSize = 0;
    obj->blockCount = 0;
    obj->textureCount = 0;
    obj->materialCount = 0;
    obj->boneCount = 0;
    obj->shapeCount = 0;
}

// ============================================================================
// G3dResFile_GetTextureCount()
// 0x80603980
// ============================================================================
u16 G3dResFile_GetTextureCount(const G3dResFileData* obj) {
    if (!obj) return 0;
    return obj->textureCount;
}

// ============================================================================
// G3dResFile_GetMaterialCount()
// 0x806039A0
// ============================================================================
u16 G3dResFile_GetMaterialCount(const G3dResFileData* obj) {
    if (!obj) return 0;
    return obj->materialCount;
}

// ============================================================================
// G3dResFile_GetBoneCount()
// 0x806039C0
// ============================================================================
u16 G3dResFile_GetBoneCount(const G3dResFileData* obj) {
    if (!obj) return 0;
    return obj->boneCount;
}

// ============================================================================
// G3dResFile_GetShapeCount()
// 0x806039E0
// ============================================================================
u16 G3dResFile_GetShapeCount(const G3dResFileData* obj) {
    if (!obj) return 0;
    return obj->shapeCount;
}

// ============================================================================
// G3dResFile_GetTexture()
// 0x80603A00
// ============================================================================
// Get texture by index. Returns NULL if out of range.
// In real NW4R, this walks the TEX block's entry table.
// ============================================================================
ResTex* G3dResFile_GetTexture(G3dResFileData* obj, u16 idx) {
    if (!obj || !obj->texBlock || idx >= obj->textureCount) return NULL;

    // TEX block layout:
    //   0x00: {u32 "TEX ", u32 blockSize, u32 count}
    //   0x0C: array of {u32 offset} (relative to TEX block start)
    const u8* texBase = static_cast<const u8*>(obj->texBlock);
    const u32* offsets = reinterpret_cast<const u32*>(texBase + 0x0C);

    u32 entryOffset = offsets[idx];
    return reinterpret_cast<ResTex*>(const_cast<u8*>(texBase + entryOffset));
}

// ============================================================================
// G3dResFile_GetTextureByName()
// 0x80603A40
// ============================================================================
// Search textures by name. Linear scan.
// ============================================================================
ResTex* G3dResFile_GetTextureByName(G3dResFileData* obj, const char* name) {
    if (!obj || !name) return NULL;

    for (u16 i = 0; i < obj->textureCount; i++) {
        ResTex* tex = G3dResFile_GetTexture(obj, i);
        if (tex && tex->name && std::strcmp(tex->name, name) == 0) {
            return tex;
        }
    }
    return NULL;
}

// ============================================================================
// G3dResFile_GetMaterial()
// 0x80603A80
// ============================================================================
ResMat* G3dResFile_GetMaterial(G3dResFileData* obj, u16 idx) {
    if (!obj || !obj->matBlock || idx >= obj->materialCount) return NULL;

    // MAT3 block layout similar to TEX
    const u8* matBase = static_cast<const u8*>(obj->matBlock);
    const u32* offsets = reinterpret_cast<const u32*>(matBase + 0x0C);

    u32 entryOffset = offsets[idx];
    return reinterpret_cast<ResMat*>(const_cast<u8*>(matBase + entryOffset));
}

// ============================================================================
// G3dResFile_GetMaterialByName()
// 0x80603AC0
// ============================================================================
ResMat* G3dResFile_GetMaterialByName(G3dResFileData* obj, const char* name) {
    if (!obj || !name) return NULL;

    for (u16 i = 0; i < obj->materialCount; i++) {
        ResMat* mat = G3dResFile_GetMaterial(obj, i);
        if (mat && mat->name && std::strcmp(mat->name, name) == 0) {
            return mat;
        }
    }
    return NULL;
}

// ============================================================================
// G3dResFile_GetBone()
// 0x80603B00
// ============================================================================
ResBone* G3dResFile_GetBone(G3dResFileData* obj, u16 idx) {
    if (!obj || !obj->mdlBlock || idx >= obj->boneCount) return NULL;

    // Bone data is within the MDL3 block
    const u8* mdlBase = static_cast<const u8*>(obj->mdlBlock);
    // MDL3 layout varies; stub returns offset-based pointer
    return reinterpret_cast<ResBone*>(const_cast<u8*>(mdlBase + 0x10 + idx * 0x74));
}

// ============================================================================
// G3dResFile_GetShape()
// 0x80603B40
// ============================================================================
ResShape* G3dResFile_GetShape(G3dResFileData* obj, u16 idx) {
    if (!obj || !obj->mdlBlock || idx >= obj->shapeCount) return NULL;

    const u8* mdlBase = static_cast<const u8*>(obj->mdlBlock);
    return reinterpret_cast<ResShape*>(const_cast<u8*>(mdlBase + 0x100 + idx * 0x28));
}

// ============================================================================
// G3dResFile_GetAnmScn()
// 0x80603B80
// ============================================================================
ResAnmScn* G3dResFile_GetAnmScn(G3dResFileData* obj) {
    if (!obj || !obj->scnBlock) return NULL;
    return reinterpret_cast<ResAnmScn*>(const_cast<void*>(obj->scnBlock));
}

// ============================================================================
// G3dResFile_Validate()
// 0x80603BC0
// ============================================================================
// Check that the data starts with a valid BRRES header.
// Expected magic: "bres" (0x62726573)
// Expected byte order: 0xFEFF
// ============================================================================
BOOL G3dResFile_Validate(const void* data, u32 size) {
    if (!data || size < 0x10) return FALSE;

    const BRRESHeader* hdr = static_cast<const BRRESHeader*>(data);

    // Check magic
    if (hdr->magic[0] != 'b' || hdr->magic[1] != 'r' ||
        hdr->magic[2] != 'e' || hdr->magic[3] != 's') {
        return FALSE;
    }

    // Check byte order mark
    if (hdr->byteOrder != 0xFEFF) {
        return FALSE;
    }

    // Check file size
    if (hdr->fileSize > size) {
        return FALSE;
    }

    return TRUE;
}

// ============================================================================
// G3dResFile_GetBlock()
// 0x80603C00
// ============================================================================
const void* G3dResFile_GetBlock(G3dResFileData* obj, u32 blockType) {
    if (!obj) return NULL;

    switch (blockType) {
        case BRRES_TEX:  return obj->texBlock;
        case BRRES_MAT3: return obj->matBlock;
        case BRRES_MDL3: return obj->mdlBlock;
        case BRRES_CHR0: return obj->chrBlock;
        case BRRES_SRT0: return obj->srtBlock;
        case BRRES_PAT0: return obj->patBlock;
        case BRRES_CLR0: return obj->clrBlock;
        case BRRES_SHP0: return obj->shpBlock;
        case BRRES_VIS0: return obj->visBlock;
        case BRRES_SCN0: return obj->scnBlock;
        case BRRES_SCS0: return obj->scsBlock;
        default: return NULL;
    }
}

// ============================================================================
// G3dResFile::load — Class method wrapper for G3dResFile_Load
// @addr 0x80603C40
// ============================================================================

/* G3dResFile_load @ 0x80603C40 */
bool G3dResFileData::load(const void* data, u32 size) {
    return G3dResFile_Load(this, data, size) != NULL;
}

// ============================================================================
// G3dResFile::parseHeader — Parse and cache header fields
// @addr 0x80603C80
// ============================================================================

/* G3dResFile_parseHeader @ 0x80603C80 */
bool G3dResFileData::parseHeader() {
    if (fileData == NULL || fileSize == 0) return false;

    const BRRESHeader* hdr = static_cast<const BRRESHeader*>(fileData);
    if (hdr->magic[0] != 'b' || hdr->magic[1] != 'r' ||
        hdr->magic[2] != 'e' || hdr->magic[3] != 's') {
        return false;
    }
    if (hdr->byteOrder != 0xFEFF) return false;
    if (hdr->fileSize > fileSize) return false;

    blockCount = hdr->blockCount;
    return true;
}

// ============================================================================
// G3dResFile::getSectionCount — Return number of blocks in the file
// @addr 0x80603CC0
// ============================================================================

/* G3dResFile_getSectionCount @ 0x80603CC0 */
u16 G3dResFileData::getSectionCount() const {
    return blockCount;
}

// ============================================================================
// G3dResFile::getSectionData — Get raw pointer to a section by index
// @addr 0x80603CE0
// ============================================================================

/* G3dResFile_getSectionData @ 0x80603CE0 */
const void* G3dResFileData::getSectionData(u16 index) const {
    if (fileData == NULL || index >= blockCount) return NULL;

    const u8* base = static_cast<const u8*>(fileData);
    u32 dirOffset = 0x10 + (u32)index * 0x10;
    u32 fileSz = fileSize;

    if (dirOffset + 0x08 > fileSz) return NULL;

    u32 blockOffset = *reinterpret_cast<const u32*>(base + dirOffset + 4);
    if (blockOffset >= fileSz) return NULL;

    return base + blockOffset;
}

// ============================================================================
// G3dResFile::getScnData — Get the SCN0 (animation scene) block
// @addr 0x80603D20
// ============================================================================

/* G3dResFile_getScnData @ 0x80603D20 */
const void* G3dResFileData::getScnData() const {
    return scnBlock;
}

// ============================================================================
// G3dResFile::getBmdData — Get the MDL3 (model) block
// @addr 0x80603D40
// ============================================================================

/* G3dResFile_getBmdData @ 0x80603D40 */
const void* G3dResFileData::getBmdData() const {
    return mdlBlock;
}

// ============================================================================
// G3dResFile::validate — Full validation of the loaded file
// @addr 0x80603D60
// ============================================================================

/* G3dResFile_validate @ 0x80603D60 */
bool G3dResFileData::validate() const {
    if (fileData == NULL || fileSize == 0) return false;
    return G3dResFile_Validate(fileData, fileSize) == TRUE;
}

// ============================================================================
// G3dResFile_getModelCount — Free function to get model count
// @addr 0x80603DA0
//
// In a full implementation, this reads the MDL3 block header to determine
// how many model definitions are present. For a standard BRRES, there is
// typically one MDL3 block containing one model. However, some BRRES files
// used in MKW (e.g., course models) may contain multiple.
// ============================================================================

/* G3dResFile_getModelCount @ 0x80603DA0 */
u16 G3dResFile_getModelCount(const G3dResFileData* obj) {
    if (!obj || !obj->mdlBlock) return 0;

    // MDL3 header: {char tag[4], u32 size, u16 revision, u16 mdlCount, ...}
    const u8* mdlBase = static_cast<const u8*>(obj->mdlBlock);
    u16 mdlCount = *reinterpret_cast<const u16*>(mdlBase + 0x08);
    return mdlCount;
}