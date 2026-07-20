#pragma once
// ============================================================================
// G3dObj — NW4R 3D Graphics Object (Model Instance)
// ============================================================================
// A G3dObj represents an instance of a 3D model loaded from a BRRES file.
// It manages:
//   - Bone/skeleton hierarchy transforms
//   - Material binding and state
//   - Shape visibility and draw ordering
//   - Attached animation scenes (AnmScn)
//   - Bounding volume and culling data
//
// G3dObj is the NW4R equivalent of J3DModel, used for rendering karts,
// course objects, items, and other 3D game entities.
//
// NW4R namespace: nw4r::g3d::G3dObj
// Address range: 0x80602A00 - 0x806037FF
// Function count: 20
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct G3dResFileData;
struct AnmScnData;

// ============================================================================
// BoneTransform — Per-bone transform data
// ============================================================================
// Stores the computed world-space transform for one bone.
//
// Size: 0x40 bytes
// ============================================================================
struct BoneTransform {
    f32 matrix[3][4];           // 0x00: 3x4 world-space matrix
    f32 scale[3];              // 0x30: accumulated scale (X, Y, Z)
    u32 _3C;                    // 0x3C: flags (dirty, etc.)
};

// ============================================================================
// G3dObjData — 3D graphics object instance
// ============================================================================
// The main model instance class. Manages all rendering state for one
// instantiation of a 3D model.
//
// Size: 0x80 bytes (core, plus dynamically allocated bone/sh arrays)
// ============================================================================
struct G3dObjData {
    void* vtable;               // 0x00: vtable pointer
    G3dResFileData* resFile;    // 0x04: resource file this model was loaded from
    u32 flags;                  // 0x08: object flags (visible, castShadow, etc.)
    u32 _0C;                    // 0x0C: render group / sort key
    f32 boundingRadius;         // 0x10: bounding sphere radius
    f32 _14;                    // 0x14: LOD threshold
    f32 _18;                    // 0x18: scale
    u8  _1C;                    // 0x1C: bone count
    u8  _1D;                    // 0x1D: shape count
    u8  _1E;                    // 0x1E: material count
    u8  _1F;                    // 0x1F: texture count
    u32 _20;                    // 0x20: flags/state
    u32 _24;                    // 0x24: flags/state
    // Dynamic arrays
    BoneTransform* boneTransforms; // 0x28: per-bone transforms
    u32* shapeDrawFlags;        // 0x2C: per-shape visibility flags
    u32 _30;                    // 0x30: current draw pass
    // Attached animation scene
    AnmScnData* anmScn;         // 0x34: attached animation scene
    AnmScnData* anmScn2;        // 0x38: secondary animation scene (blending)
    u8  _3C[0x44];              // 0x3C: additional state
};

// ============================================================================
// G3dObjDrawInfo — Per-draw information
// ============================================================================
struct G3dObjDrawInfo {
    u32 drawFlags;              // 0x00: draw pass flags
    u32 sortKey;                // 0x04: sort key for draw ordering
    u8  lodLevel;               // 0x08: current LOD level
    u8  _09[3];                // 0x09: padding
};

// ============================================================================
// G3dObj flags
// ============================================================================
enum G3dObjFlags {
    G3DOBJ_VISIBLE     = BIT(0),
    G3DOBJ_CASTSHADOW  = BIT(1),
    G3DOBJ_RECVSHADOW  = BIT(2),
    G3DOBJ_SORTBYDIST  = BIT(3),
    G3DOBJ_ENVMAP      = BIT(4),
    G3DOBJ_BONES_DIRTY = BIT(8),
    G3DOBJ_ANIMATING   = BIT(16),
};

// ============================================================================
// Function declarations — G3dObj
// ============================================================================

// @addr 0x80602A00 — Create G3dObj from resource file
G3dObjData* G3dObj_Create(G3dObjData* obj, G3dResFileData* resFile);

// @addr 0x80602B00 — Destroy G3dObj and release resources
void G3dObj_Destroy(G3dObjData* obj);

// @addr 0x80602BA0 — Calculate bone transforms (skeletal animation update)
void G3dObj_Calc(G3dObjData* obj);

// @addr 0x80602CC0 — Draw the model (all visible shapes)
void G3dObj_Draw(G3dObjData* obj, const G3dObjDrawInfo* drawInfo);

// @addr 0x80602D80 — Draw a specific shape by index
void G3dObj_DrawShape(G3dObjData* obj, u16 shapeIdx);

// @addr 0x80602E00 — Set attached animation scene
void G3dObj_SetAnmScn(G3dObjData* obj, AnmScnData* anmScn);

// @addr 0x80602E40 — Get attached animation scene
AnmScnData* G3dObj_GetAnmScn(G3dObjData* obj);

// @addr 0x80602E60 — Calculate bone transforms for a single bone
void G3dObj_CalcBone(G3dObjData* obj, u16 boneIdx);

// @addr 0x80602F00 — Get bone transform matrix
const f32* G3dObj_GetBoneMatrix(G3dObjData* obj, u16 boneIdx);

// @addr 0x80602F40 — Get bone count
u8 G3dObj_GetBoneCount(const G3dObjData* obj);

// @addr 0x80602F60 — Get shape count
u8 G3dObj_GetShapeCount(const G3dObjData* obj);

// @addr 0x80602F80 — Get material count
u8 G3dObj_GetMaterialCount(const G3dObjData* obj);

// @addr 0x80602FA0 — Get bounding radius
f32 G3dObj_GetBoundingRadius(const G3dObjData* obj);

// @addr 0x80602FC0 — Set visibility flag
void G3dObj_SetVisible(G3dObjData* obj, BOOL visible);

// @addr 0x80602FE0 — Check if model is visible
BOOL G3dObj_IsVisible(const G3dObjData* obj);

// @addr 0x80603000 — Set shape visibility
void G3dObj_SetShapeVisible(G3dObjData* obj, u16 shapeIdx, BOOL visible);

// @addr 0x80603040 — Set flags
void G3dObj_SetFlags(G3dObjData* obj, u32 flags);

// @addr 0x80603060 — Clear flags
void G3dObj_ClearFlags(G3dObjData* obj, u32 flags);

// @addr 0x80603080 — Get the resource file
G3dResFileData* G3dObj_GetResFile(G3dObjData* obj);

// @addr 0x806030A0 — Set model scale
void G3dObj_SetScale(G3dObjData* obj, f32 scale);

// @addr 0x806030C0 — Initialize bone transforms to bind pose
void G3dObj_InitBindPose(G3dObjData* obj);

// @addr 0x80603100 — Initialize G3dObj to default state
void G3dObj_Init(G3dObjData* obj);

// @addr 0x80603140 — Load model from resource (destroy + create)
G3dObjData* G3dObj_Load(G3dObjData* obj, G3dResFileData* resFile);

// @addr 0x80603180 — Set model resource
G3dObjData* G3dObj_SetModel(G3dObjData* obj, G3dResFileData* resFile);

// @addr 0x806031C0 — Get model resource
G3dResFileData* G3dObj_GetModel(const G3dObjData* obj);

// @addr 0x80603200 — Set world position
void G3dObj_SetPosition(G3dObjData* obj, f32 x, f32 y, f32 z);

// @addr 0x80603240 — Set rotation (Euler angles)
void G3dObj_SetRotation(G3dObjData* obj, f32 rx, f32 ry, f32 rz);

// @addr 0x80603280 — Set per-axis scale
void G3dObj_SetScaleXYZ(G3dObjData* obj, f32 sx, f32 sy, f32 sz);

// @addr 0x806032C0 — Get position
void G3dObj_GetPosition(const G3dObjData* obj, f32* x, f32* y, f32* z);

// @addr 0x80603300 — Get scale
f32 G3dObj_GetScale(const G3dObjData* obj);

// @addr 0x80603320 — Set LOD threshold
void G3dObj_SetLODThreshold(G3dObjData* obj, f32 threshold);