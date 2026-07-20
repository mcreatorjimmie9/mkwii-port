#pragma once
// ============================================================================
// ResTex, ResMat, ResBone, ResShape — NW4R Resource Accessors
// ============================================================================
// Typed accessor wrappers for BRRES resource blocks. These provide a
// safe, typed interface to the raw binary data within a BRRES file.
//
// Each Res* type is a lightweight non-owning reference into the BRRES
// file data. They do not allocate memory and are valid only as long as
// the backing BRRES data remains loaded.
//
// Address range: 0x80604100 - 0x806049FF
// Function count: 18 (6 ResTex + 6 ResMat + 3 ResBone + 3 ResShape)
// ============================================================================

#include <types.h>
#include <gx.hpp>

// ============================================================================
// NW4R Shared Constants (used by all AnmObj* and AnmScn types)
// ============================================================================

// Play mode constants
#define ANM_PLAY_ONCE     0
#define ANM_PLAY_LOOP     1
#define ANM_PLAY_PINGPONG 2
#define ANM_PLAY_REVERSE  3

// State flags (shared across all AnmObj types)
#define ANMSCN_FLAG_PLAYING  (1u << 0)
#define ANMSCN_FLAG_FINISHED (1u << 1)
#define ANMSCN_FLAG_PAUSED   (1u << 2)

// Forward declarations
struct G3dResFileData;

// ============================================================================
// ResTex — Texture resource accessor
// ============================================================================
// Provides access to texture metadata: dimensions, format, mipmap count,
// and the raw pixel data. The actual texture object (GXTexObj) is
// constructed from this data when binding to GX.
//
// NW4R namespace: nw4r::g3d::ResTex
// ============================================================================

// Texture format constants (matching GX)
enum ResTexFormat {
    RESTEX_FMT_I4    = 0x00,
    RESTEX_FMT_I8    = 0x01,
    RESTEX_FMT_IA4   = 0x02,
    RESTEX_FMT_IA8   = 0x03,
    RESTEX_FMT_RGB565 = 0x04,
    RESTEX_FMT_RGB5A3 = 0x05,
    RESTEX_FMT_RGBA8 = 0x06,
    RESTEX_FMT_CMPR  = 0x0E,
};

// Texture wrap modes
enum ResTexWrap {
    RESTEX_WRAP_REPEAT  = 0,
    RESTEX_WRAP_CLAMP   = 1,
    RESTEX_WRAP_MIRROR  = 2,
};

// ============================================================================
// ResTexData — Texture resource reference
// ============================================================================
// Size: 0x20 bytes (header; actual image data follows in BRRES)
// ============================================================================
struct ResTexData {
    const char* name;           // 0x00: texture name (null-terminated)
    u16 width;                  // 0x04: texture width in pixels
    u16 height;                 // 0x06: texture height in pixels
    u8  format;                 // 0x08: pixel format (ResTexFormat)
    u8  mipCount;               // 0x09: number of mip levels
    u8  wrapS;                  // 0x0A: horizontal wrap mode
    u8  wrapT;                  // 0x0B: vertical wrap mode
    u8  minFilter;              // 0x0C: minification filter
    u8  magFilter;              // 0x0D: magnification filter
    u8  lodBias;                // 0x0E: LOD bias
    u8  _0F;                    // 0x0F: padding
    u32 dataOffset;             // 0x10: offset to raw pixel data
    u32 _14;                    // 0x14: unknown
    u32 _18;                    // 0x18: unknown
    u32 _1C;                    // 0x1C: unknown
};

// ============================================================================
// ResMat — Material resource accessor
// ============================================================================
// Provides access to material definitions including TEV configuration,
// texture map assignments, and render state.
// ============================================================================
struct ResMatData {
    const char* name;           // 0x00: material name
    u32 texMapRefs[8];          // 0x04: texture map references (indices)
    u32 _24;                    // 0x24: TEV config offset
    u32 _28;                    // 0x28: render state offset
    u32 _2C;                    // 0x2C: flags
    u8  texGenCount;            // 0x30: number of texcoord generators
    u8  texMapCount;            // 0x31: number of texture maps
    u8  tevStageCount;          // 0x32: number of TEV stages
    u8  _33;                    // 0x33: padding
};

// ============================================================================
// ResBone — Bone/skeleton resource accessor
// ============================================================================
// Provides access to bone hierarchy and bind-pose transforms.
// ============================================================================
struct ResBoneData {
    const char* name;           // 0x00: bone name
    u16 parentIdx;              // 0x04: parent bone index (0xFFFF = root)
    u16 childIdx;               // 0x06: first child bone index
    u16 siblingIdx;             // 0x08: next sibling bone index
    u16 _0A;                    // 0x0A: padding
    f32 bindPose[3][4];         // 0x0C: bind-pose matrix (3x4)
    f32 invBindPose[3][4];      // 0x3C: inverse bind-pose matrix (3x4)
    u32 flags;                  // 0x6C: bone flags (billboard, etc.)
    u8  _70[4];                // 0x70: padding
};

// ============================================================================
// ResShape — Shape/mesh resource accessor
// ============================================================================
// Provides access to mesh data: vertex buffers, index buffers,
// and the material this shape references.
// ============================================================================
struct ResShapeData {
    const char* name;           // 0x00: shape name
    u16 materialIdx;            // 0x04: material index this shape uses
    u16 _06;                    // 0x06: padding
    u32 vertexDataOffset;       // 0x08: offset to vertex data
    u32 indexDataOffset;        // 0x0C: offset to index data
    u16 vertexCount;            // 0x10: number of vertices
    u16 indexCount;             // 0x12: number of indices
    u8  indexType;              // 0x14: index type (0=u16, 1=u8)
    u8  primType;               // 0x15: primitive type (0=tris, 1=tristrip, 2=quads)
    u8  _16[2];                // 0x16: padding
    u32 _18;                    // 0x18: bounding box / flags
    u32 _1C;                    // 0x1C: flags
    f32 _20;                    // 0x20: bounding sphere radius
};

// ============================================================================
// Opaque resource pointers (used in other headers)
// ============================================================================
struct ResTexPatAnm { u8 _[0x10]; };
struct ResTexSrtAnm { u8 _[0x10]; };
struct ResMatClrAnm { u8 _[0x10]; };
struct ResChrAnm    { u8 _[0x10]; };
struct ResAnmScn    { u8 _[0x10]; };

// Type aliases for use in other headers
typedef ResTexData   ResTex;
typedef ResMatData   ResMat;
typedef ResBoneData  ResBone;
typedef ResShapeData ResShape;

// ============================================================================
// Function declarations — ResTex
// ============================================================================

// @addr 0x80604100 — Get texture name
const char* ResTex_GetName(const ResTex* tex);

// @addr 0x80604120 — Get texture width
u16 ResTex_GetWidth(const ResTex* tex);

// @addr 0x80604140 — Get texture height
u16 ResTex_GetHeight(const ResTex* tex);

// @addr 0x80604160 — Get texture pixel format
u8 ResTex_GetFormat(const ResTex* tex);

// @addr 0x80604180 — Build a GXTexObj from the texture resource
void ResTex_BuildTexObj(const ResTex* tex, GXTexObj* out);

// @addr 0x80604220 — Get raw image data pointer
const void* ResTex_GetImageData(const ResTex* tex);

// ============================================================================
// Function declarations — ResMat
// ============================================================================

// @addr 0x80604280 — Get material name
const char* ResMat_GetName(const ResMat* mat);

// @addr 0x806042A0 — Get texture index for a given texture map slot
s32 ResMat_GetTexMapIdx(const ResMat* mat, u8 slot);

// @addr 0x806042D0 — Get TEV stage count for this material
u8 ResMat_GetTevStageCount(const ResMat* mat);

// @addr 0x806042F0 — Get texture map count
u8 ResMat_GetTexMapCount(const ResMat* mat);

// @addr 0x80604310 — Get the material's flags
u32 ResMat_GetFlags(const ResMat* mat);

// @addr 0x80604330 — Apply material state to GX hardware
void ResMat_Apply(const ResMat* mat, G3dResFileData* resFile);

// ============================================================================
// Function declarations — ResBone
// ============================================================================

// @addr 0x806043A0 — Get bone name
const char* ResBone_GetName(const ResBone* bone);

// @addr 0x806043C0 — Get parent bone index (0xFFFF = root)
u16 ResBone_GetParentIndex(const ResBone* bone);

// @addr 0x806043E0 — Get the bind-pose matrix
const f32* ResBone_GetBindPose(const ResBone* bone);

// ============================================================================
// Function declarations — ResShape
// ============================================================================

// @addr 0x80604420 — Get shape name
const char* ResShape_GetName(const ResShape* shape);

// @addr 0x80604440 — Get material index this shape uses
u16 ResShape_GetMaterialIndex(const ResShape* shape);

// @addr 0x80604460 — Get shape vertex count
u16 ResShape_GetVertexCount(const ResShape* shape);