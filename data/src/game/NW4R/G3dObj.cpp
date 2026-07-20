#include "G3dObj.hpp"
#include "G3dResFile.hpp"
#include "AnmScn.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// G3dObj Implementation
// ============================================================================
// NW4R 3D graphics object — model instance managing bone hierarchy,
// material state, shape visibility, and attached animations.
// ============================================================================

// ============================================================================
// G3dObj_Create()
// 0x80602A00
// ============================================================================
// Create a model instance from a loaded BRRES resource file.
// Allocates bone transforms and shape draw flag arrays.
// ============================================================================
G3dObjData* G3dObj_Create(G3dObjData* obj, G3dResFileData* resFile) {
    if (!obj || !resFile) return NULL;

    std::memset(obj, 0, sizeof(G3dObjData));

    obj->resFile = resFile;
    obj->flags = G3DOBJ_VISIBLE;
    obj->boundingRadius = 100.0f;
    obj->_18 = 1.0f; // scale

    // Get counts from resource
    obj->_1C = G3dResFile_GetBoneCount(resFile);
    obj->_1D = G3dResFile_GetShapeCount(resFile);
    obj->_1E = G3dResFile_GetMaterialCount(resFile);
    obj->_1F = G3dResFile_GetTextureCount(resFile);

    // Allocate bone transforms
    if (obj->_1C > 0) {
        // In real NW4R, uses EGG::Heap::alloc
        obj->boneTransforms = new BoneTransform[obj->_1C];
        std::memset(obj->boneTransforms, 0, sizeof(BoneTransform) * obj->_1C);
    }

    // Allocate shape draw flags
    if (obj->_1D > 0) {
        obj->shapeDrawFlags = new u32[obj->_1D];
        for (u16 i = 0; i < obj->_1D; i++) {
            obj->shapeDrawFlags[i] = BIT(0); // visible by default
        }
    }

    // Initialize to bind pose
    G3dObj_InitBindPose(obj);

    return obj;
}

// ============================================================================
// G3dObj_Destroy()
// 0x80602B00
// ============================================================================
void G3dObj_Destroy(G3dObjData* obj) {
    if (!obj) return;

    // Detach animation scene
    if (obj->anmScn) {
        AnmScn_Destroy(obj->anmScn);
        obj->anmScn = NULL;
    }

    // Free bone transforms
    if (obj->boneTransforms) {
        delete[] obj->boneTransforms;
        obj->boneTransforms = NULL;
    }

    // Free shape draw flags
    if (obj->shapeDrawFlags) {
        delete[] obj->shapeDrawFlags;
        obj->shapeDrawFlags = NULL;
    }

    obj->resFile = NULL;
    obj->flags = 0;
}

// ============================================================================
// G3dObj_Calc()
// 0x80602BA0
// ============================================================================
// Calculate all bone transforms from the root downward.
// In the real NW4R, this walks the bone hierarchy, applying the
// animation scene's skeletal animation (CHR0) and computing
// world-space matrices.
// ============================================================================
void G3dObj_Calc(G3dObjData* obj) {
    if (!obj) return;

    // Mark bones as dirty
    obj->flags |= G3DOBJ_BONES_DIRTY;

    // If there's an attached animation scene, update it
    // (The scene calc is called separately; here we just
    //  apply bone transforms from CHR0 data)

    u8 boneCount = obj->_1C;

    // For each bone, compute its world-space matrix.
    // In real NW4R, this is a hierarchical walk:
    //   worldMtx[child] = worldMtx[parent] * localMtx[child]
    for (u8 i = 0; i < boneCount; i++) {
        BoneTransform* bt = &obj->boneTransforms[i];
        if (!bt) continue;

        // If no animation data, use bind pose
        if (!(bt->_3C & 0x01)) {
            // Load bind pose from resource
            if (obj->resFile) {
                ResBone* bone = G3dResFile_GetBone(obj->resFile, i);
                if (bone) {
                    const f32* bindPose = ResBone_GetBindPose(bone);
                    if (bindPose) {
                        std::memcpy(bt->matrix, bindPose, sizeof(f32) * 12);
                    }
                }
            }
            bt->scale[0] = 1.0f;
            bt->scale[1] = 1.0f;
            bt->scale[2] = 1.0f;
        }
    }

    obj->flags &= ~G3DOBJ_BONES_DIRTY;
}

// ============================================================================
// G3dObj_Draw()
// 0x80602CC0
// ============================================================================
// Draw all visible shapes of the model.
// For each shape: set material state, load bone palette, draw geometry.
// ============================================================================
void G3dObj_Draw(G3dObjData* obj, const G3dObjDrawInfo* drawInfo) {
    if (!obj) return;
    if (!(obj->flags & G3DOBJ_VISIBLE)) return;

    (void)drawInfo;

    u16 shapeCount = obj->_1D;

    for (u16 i = 0; i < shapeCount; i++) {
        // Check shape visibility
        if (obj->shapeDrawFlags && !(obj->shapeDrawFlags[i] & BIT(0))) {
            continue; // shape is hidden
        }

        // Draw individual shape
        G3dObj_DrawShape(obj, i);
    }
}

// ============================================================================
// G3dObj_DrawShape()
// 0x80602D80
// ============================================================================
// Draw a single shape by index. Applies the shape's material and
// submits the geometry to GX.
// ============================================================================
void G3dObj_DrawShape(G3dObjData* obj, u16 shapeIdx) {
    if (!obj) return;

    // In real NW4R:
    // 1. Get the shape's material index
    // 2. Apply material state (TEV, textures, render state)
    // 3. Load bone palette for skinning
    // 4. Set vertex attributes
    // 5. Draw indexed primitives
    //
    // On PC, this is a no-op.

    (void)shapeIdx;
}

// ============================================================================
// G3dObj_SetAnmScn()
// 0x80602E00
// ============================================================================
void G3dObj_SetAnmScn(G3dObjData* obj, AnmScnData* anmScn) {
    if (!obj) return;

    // Detach old scene
    if (obj->anmScn && obj->anmScn != anmScn) {
        // Don't destroy — caller manages lifetime
    }

    obj->anmScn = anmScn;
    if (anmScn) {
        anmScn->targetModel = obj;
    }
}

// ============================================================================
// G3dObj_GetAnmScn()
// 0x80602E40
// ============================================================================
AnmScnData* G3dObj_GetAnmScn(G3dObjData* obj) {
    if (!obj) return NULL;
    return obj->anmScn;
}

// ============================================================================
// G3dObj_CalcBone()
// 0x80602E60
// ============================================================================
// Recalculate a single bone's world-space transform.
// Used for selective bone updates (e.g., IK, procedural animation).
// ============================================================================
void G3dObj_CalcBone(G3dObjData* obj, u16 boneIdx) {
    if (!obj || boneIdx >= obj->_1C) return;
    if (!obj->boneTransforms) return;

    BoneTransform* bt = &obj->boneTransforms[boneIdx];
    if (!bt) return;

    // Get parent bone's transform
    ResBone* bone = NULL;
    if (obj->resFile) {
        bone = G3dResFile_GetBone(obj->resFile, boneIdx);
    }

    // Compute world matrix = parent_world * local
    u16 parentIdx = 0xFFFF;
    if (bone) {
        parentIdx = ResBone_GetParentIndex(bone);
    }

    if (parentIdx != 0xFFFF && parentIdx < obj->_1C) {
        // Parent exists — multiply parent's world matrix by this bone's local
        const f32* parentMtx = G3dObj_GetBoneMatrix(obj, parentIdx);
        if (parentMtx) {
            // In real NW4R, this does a 3x4 * 3x4 matrix multiply
            std::memcpy(bt->matrix, parentMtx, sizeof(f32) * 12);
        }
    } else {
        // Root bone — use local transform directly
        if (bone) {
            const f32* bindPose = ResBone_GetBindPose(bone);
            if (bindPose) {
                std::memcpy(bt->matrix, bindPose, sizeof(f32) * 12);
            }
        }
    }
}

// ============================================================================
// G3dObj_GetBoneMatrix()
// 0x80602F00
// ============================================================================
const f32* G3dObj_GetBoneMatrix(G3dObjData* obj, u16 boneIdx) {
    if (!obj || boneIdx >= obj->_1C || !obj->boneTransforms) return NULL;
    return obj->boneTransforms[boneIdx].matrix[0];
}

// ============================================================================
// G3dObj_GetBoneCount()
// 0x80602F40
// ============================================================================
u8 G3dObj_GetBoneCount(const G3dObjData* obj) {
    if (!obj) return 0;
    return obj->_1C;
}

// ============================================================================
// G3dObj_GetShapeCount()
// 0x80602F60
// ============================================================================
u8 G3dObj_GetShapeCount(const G3dObjData* obj) {
    if (!obj) return 0;
    return obj->_1D;
}

// ============================================================================
// G3dObj_GetMaterialCount()
// 0x80602F80
// ============================================================================
u8 G3dObj_GetMaterialCount(const G3dObjData* obj) {
    if (!obj) return 0;
    return obj->_1E;
}

// ============================================================================
// G3dObj_GetBoundingRadius()
// 0x80602FA0
// ============================================================================
f32 G3dObj_GetBoundingRadius(const G3dObjData* obj) {
    if (!obj) return 0.0f;
    return obj->boundingRadius;
}

// ============================================================================
// G3dObj_SetVisible()
// 0x80602FC0
// ============================================================================
void G3dObj_SetVisible(G3dObjData* obj, BOOL visible) {
    if (!obj) return;
    if (visible) {
        obj->flags |= G3DOBJ_VISIBLE;
    } else {
        obj->flags &= ~G3DOBJ_VISIBLE;
    }
}

// ============================================================================
// G3dObj_IsVisible()
// 0x80602FE0
// ============================================================================
BOOL G3dObj_IsVisible(const G3dObjData* obj) {
    if (!obj) return FALSE;
    return (obj->flags & G3DOBJ_VISIBLE) ? TRUE : FALSE;
}

// ============================================================================
// G3dObj_SetShapeVisible()
// 0x80603000
// ============================================================================
void G3dObj_SetShapeVisible(G3dObjData* obj, u16 shapeIdx, BOOL visible) {
    if (!obj || !obj->shapeDrawFlags || shapeIdx >= obj->_1D) return;
    if (visible) {
        obj->shapeDrawFlags[shapeIdx] |= BIT(0);
    } else {
        obj->shapeDrawFlags[shapeIdx] &= ~BIT(0);
    }
}

// ============================================================================
// G3dObj_SetFlags()
// 0x80603040
// ============================================================================
void G3dObj_SetFlags(G3dObjData* obj, u32 flags) {
    if (!obj) return;
    obj->flags |= flags;
}

// ============================================================================
// G3dObj_ClearFlags()
// 0x80603060
// ============================================================================
void G3dObj_ClearFlags(G3dObjData* obj, u32 flags) {
    if (!obj) return;
    obj->flags &= ~flags;
}

// ============================================================================
// G3dObj_GetResFile()
// 0x80603080
// ============================================================================
G3dResFileData* G3dObj_GetResFile(G3dObjData* obj) {
    if (!obj) return NULL;
    return obj->resFile;
}

// ============================================================================
// G3dObj_SetScale()
// 0x806030A0
// ============================================================================
void G3dObj_SetScale(G3dObjData* obj, f32 scale) {
    if (!obj) return;
    obj->_18 = scale;
}

// ============================================================================
// G3dObj_InitBindPose()
// 0x806030C0
// ============================================================================
// Load all bone transforms from their bind-pose data in the resource.
// This sets the "rest" position of all bones before any animation.
// ============================================================================
void G3dObj_InitBindPose(G3dObjData* obj) {
    if (!obj || !obj->resFile) return;

    u8 boneCount = obj->_1C;
    for (u8 i = 0; i < boneCount; i++) {
        ResBone* bone = G3dResFile_GetBone(obj->resFile, i);
        if (bone && obj->boneTransforms) {
            const f32* bindPose = ResBone_GetBindPose(bone);
            if (bindPose) {
                std::memcpy(obj->boneTransforms[i].matrix, bindPose, sizeof(f32) * 12);
            }
            obj->boneTransforms[i].scale[0] = 1.0f;
            obj->boneTransforms[i].scale[1] = 1.0f;
            obj->boneTransforms[i].scale[2] = 1.0f;
            obj->boneTransforms[i]._3C = 0;
        }
    }
}

// @addr 0x80603100 (estimated)
void G3dObj_Init(G3dObjData* obj) {
    if (!obj) return;
    std::memset(obj, 0, sizeof(G3dObjData));
    obj->flags = G3DOBJ_VISIBLE;
    obj->boundingRadius = 100.0f;
    obj->_18 = 1.0f;
    obj->_1C = 0;
    obj->_1D = 0;
}

// @addr 0x80603140 (estimated)
G3dObjData* G3dObj_Load(G3dObjData* obj, G3dResFileData* resFile) {
    if (!obj || !resFile) return NULL;
    G3dObj_Destroy(obj);
    return G3dObj_Create(obj, resFile);
}

// @addr 0x80603180 (estimated)
G3dObjData* G3dObj_SetModel(G3dObjData* obj, G3dResFileData* resFile) {
    return G3dObj_Load(obj, resFile);
}

// @addr 0x806031C0 (estimated)
G3dResFileData* G3dObj_GetModel(const G3dObjData* obj) {
    if (!obj) return NULL;
    return obj->resFile;
}

// @addr 0x80603200 (estimated)
void G3dObj_SetPosition(G3dObjData* obj, f32 x, f32 y, f32 z) {
    if (!obj || !obj->boneTransforms || obj->_1C == 0) return;
    BoneTransform* root = &obj->boneTransforms[0];
    root->matrix[0][3] = x;
    root->matrix[1][3] = y;
    root->matrix[2][3] = z;
    obj->flags |= G3DOBJ_BONES_DIRTY;
}

// @addr 0x80603240 (estimated)
void G3dObj_SetRotation(G3dObjData* obj, f32 rx, f32 ry, f32 rz) {
    if (!obj || !obj->boneTransforms || obj->_1C == 0) return;
    f32 cx = std::cos(rx), sx = std::sin(rx);
    f32 cy = std::cos(ry), sy = std::sin(ry);
    f32 cz = std::cos(rz), sz = std::sin(rz);
    BoneTransform* root = &obj->boneTransforms[0];
    f32 tx = root->matrix[0][3];
    f32 ty = root->matrix[1][3];
    f32 tz = root->matrix[2][3];
    root->matrix[0][0] = cy * cz + sx * sy * sz;
    root->matrix[0][1] = -cy * sz + sx * sy * cz;
    root->matrix[0][2] = cx * sy;
    root->matrix[1][0] = cx * sz;
    root->matrix[1][1] = cx * cz;
    root->matrix[1][2] = -sx;
    root->matrix[2][0] = -sy * cz + sx * cy * sz;
    root->matrix[2][1] = sy * sz + sx * cy * cz;
    root->matrix[2][2] = cx * cy;
    root->matrix[0][3] = tx;
    root->matrix[1][3] = ty;
    root->matrix[2][3] = tz;
    obj->flags |= G3DOBJ_BONES_DIRTY;
}

// @addr 0x80603280 (estimated)
void G3dObj_SetScaleXYZ(G3dObjData* obj, f32 sx, f32 sy, f32 sz) {
    if (!obj || !obj->boneTransforms || obj->_1C == 0) return;
    BoneTransform* root = &obj->boneTransforms[0];
    root->scale[0] = sx;
    root->scale[1] = sy;
    root->scale[2] = sz;
    obj->flags |= G3DOBJ_BONES_DIRTY;
}

// @addr 0x806032C0 (estimated)
void G3dObj_GetPosition(const G3dObjData* obj, f32* x, f32* y, f32* z) {
    if (!obj || !obj->boneTransforms || obj->_1C == 0) {
        if (x) *x = 0.0f;
        if (y) *y = 0.0f;
        if (z) *z = 0.0f;
        return;
    }
    const BoneTransform* root = &obj->boneTransforms[0];
    if (x) *x = root->matrix[0][3];
    if (y) *y = root->matrix[1][3];
    if (z) *z = root->matrix[2][3];
}

// @addr 0x80603300 (estimated)
f32 G3dObj_GetScale(const G3dObjData* obj) {
    if (!obj) return 1.0f;
    return obj->_18;
}

// @addr 0x80603320 (estimated)
void G3dObj_SetLODThreshold(G3dObjData* obj, f32 threshold) {
    if (!obj) return;
    obj->_14 = threshold;
}