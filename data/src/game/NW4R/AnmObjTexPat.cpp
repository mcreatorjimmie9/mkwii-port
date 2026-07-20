#include "AnmObjTexPat.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// AnmObjTexPat Implementation
// ============================================================================
// NW4R texture pattern animation — swaps UV coordinate regions between
// keyframes for sprite-sheet style frame-by-frame texture animation.
// ============================================================================

// ============================================================================
// AnmObjTexPat_Create()
// 0x80600000
// ============================================================================
// Initialize AnmObjTexPat from a texture pattern animation resource.
// Parses the resource to determine frame count and duration.
// ============================================================================
AnmObjTexPatData* AnmObjTexPat_Create(AnmObjTexPatData* obj, ResTexPatAnm* res) {
    if (!obj || !res) return NULL;

    std::memset(obj, 0, sizeof(AnmObjTexPatData));

    // Store resource and parse metadata
    obj->resource = res;
    obj->frameRate = 1.0f;
    obj->playMode = ANM_PLAY_LOOP;
    obj->flags = ANMSCN_FLAG_PLAYING;

    // Parse animation info from resource
    TexPatAnimInfo info;
    AnmObjTexPat_GetAnimInfo(res, &info);
    obj->totalFrames = info.duration;

    // Initialize to first keyframe
    AnmObjTexPat_SetFrame(obj, 0.0f);

    return obj;
}

// ============================================================================
// AnmObjTexPat_Destroy()
// 0x80600048
// ============================================================================
void AnmObjTexPat_Destroy(AnmObjTexPatData* obj) {
    if (!obj) return;
    obj->resource = NULL;
    obj->flags = 0;
}

// ============================================================================
// AnmObjTexPat_Calc()
// 0x80600090
// ============================================================================
// Advance the animation by deltaTime * frameRate.
// Handles loop/pingpong/once play modes.
// ============================================================================
void AnmObjTexPat_Calc(AnmObjTexPatData* obj, f32 deltaTime) {
    if (!obj || !(obj->flags & ANMSCN_FLAG_PLAYING)) return;
    if (obj->totalFrames <= 0.0f) return;

    // Advance frame
    f32 newFrame = obj->currentFrame + (deltaTime * obj->frameRate);

    // Handle play modes
    switch (obj->playMode) {
        case ANM_PLAY_ONCE:
            if (newFrame >= obj->totalFrames) {
                newFrame = obj->totalFrames;
                obj->flags |= ANMSCN_FLAG_FINISHED;
                obj->flags &= ~ANMSCN_FLAG_PLAYING;
            }
            break;
        case ANM_PLAY_LOOP:
            if (obj->totalFrames > 0.0f) {
                newFrame = newFrame - (static_cast<s32>(newFrame / obj->totalFrames)) * obj->totalFrames;
                if (newFrame < 0.0f) newFrame += obj->totalFrames;
            }
            break;
        case ANM_PLAY_PINGPONG: {
            f32 cycle = obj->totalFrames * 2.0f;
            if (cycle > 0.0f) {
                f32 wrapped = newFrame - (static_cast<s32>(newFrame / cycle)) * cycle;
                if (wrapped < 0.0f) wrapped += cycle;
                if (wrapped > obj->totalFrames) {
                    wrapped = cycle - wrapped;
                }
                newFrame = wrapped;
            }
            break;
        }
        default:
            break;
    }

    obj->currentFrame = newFrame;

    // Evaluate keyframes
    TexPatAnimInfo info;
    if (obj->resource) {
        AnmObjTexPat_GetAnimInfo(obj->resource, &info);
        if (info.animType == 0) {
            AnmObjTexPat_EvalStep(obj, obj->currentFrame, &obj->current);
        } else {
            AnmObjTexPat_EvalLinear(obj, obj->currentFrame, &obj->current);
        }
    }
}

// ============================================================================
// AnmObjTexPat_Apply()
// 0x80600140
// ============================================================================
// Apply the current UV rectangle to a material's texture coordinate
// settings. This modifies the texcoord gen to map the UV rect
// region of the texture.
// ============================================================================
void AnmObjTexPat_Apply(AnmObjTexPatData* obj, MaterialData* mat, u8 texMapIdx) {
    if (!obj || !mat) return;

    // In the real NW4R, this would set up the texcoord gen
    // to remap coordinates to the current UV sub-rectangle.
    // On PC, we store the UV rect for the renderer to consume.

    const TexPatKeyFrame* uv = &obj->current;
    (void)texMapIdx;
    (void)uv;
    // The actual GX calls would be:
    // GXSetTexCoordGen2(texMapIdx, GX_TG_MTX3x4, GX_TEXCOORD0, GX_FALSE, texMapIdx);
    // GXLoadTexMtxImm2x3(texMatrix, texMapIdx, GX_PTIDENTITY);
}

// ============================================================================
// AnmObjTexPat_SetFrame()
// 0x806001E0
// ============================================================================
void AnmObjTexPat_SetFrame(AnmObjTexPatData* obj, f32 frame) {
    if (!obj) return;
    obj->currentFrame = frame;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;

    // Evaluate at new frame
    TexPatAnimInfo info;
    if (obj->resource) {
        AnmObjTexPat_GetAnimInfo(obj->resource, &info);
        if (info.animType == 0) {
            AnmObjTexPat_EvalStep(obj, frame, &obj->current);
        } else {
            AnmObjTexPat_EvalLinear(obj, frame, &obj->current);
        }
    }
}

// ============================================================================
// AnmObjTexPat_GetFrame()
// 0x80600240
// ============================================================================
f32 AnmObjTexPat_GetFrame(const AnmObjTexPatData* obj) {
    if (!obj) return 0.0f;
    return obj->currentFrame;
}

// ============================================================================
// AnmObjTexPat_GetDuration()
// 0x80600260
// ============================================================================
f32 AnmObjTexPat_GetDuration(const AnmObjTexPatData* obj) {
    if (!obj) return 0.0f;
    return obj->totalFrames;
}

// ============================================================================
// AnmObjTexPat_SetFrameRate()
// 0x80600280
// ============================================================================
void AnmObjTexPat_SetFrameRate(AnmObjTexPatData* obj, f32 rate) {
    if (!obj) return;
    obj->frameRate = rate;
}

// ============================================================================
// AnmObjTexPat_SetPlayMode()
// 0x806002A0
// ============================================================================
void AnmObjTexPat_SetPlayMode(AnmObjTexPatData* obj, u8 mode) {
    if (!obj) return;
    obj->playMode = mode;
}

// ============================================================================
// AnmObjTexPat_IsFinished()
// 0x806002C0
// ============================================================================
BOOL AnmObjTexPat_IsFinished(const AnmObjTexPatData* obj) {
    if (!obj) return TRUE;
    return (obj->flags & ANMSCN_FLAG_FINISHED) ? TRUE : FALSE;
}

// ============================================================================
// AnmObjTexPat_GetResource()
// 0x806002E0
// ============================================================================
ResTexPatAnm* AnmObjTexPat_GetResource(const AnmObjTexPatData* obj) {
    if (!obj) return NULL;
    return obj->resource;
}

// ============================================================================
// AnmObjTexPat_GetAnimInfo()
// 0x80600300
// ============================================================================
// Parse animation metadata from the resource block.
// In the real BRRES, this reads the PAT0 header fields.
// ============================================================================
void AnmObjTexPat_GetAnimInfo(ResTexPatAnm* res, TexPatAnimInfo* out) {
    if (!res || !out) return;
    // In real NW4R, this parses the PAT0 resource header.
    // Stub: set reasonable defaults.
    out->frameCount = 1;
    out->animType = 0; // step
    out->duration = 60.0f;
    out->_08 = 0.0f;
}

// ============================================================================
// AnmObjTexPat_EvalStep()
// 0x80600340
// ============================================================================
// Step interpolation: snap to the nearest keyframe without blending.
// Used for sprite-sheet animations where you want discrete frames.
// ============================================================================
void AnmObjTexPat_EvalStep(const AnmObjTexPatData* obj, f32 t, TexPatKeyFrame* out) {
    if (!obj || !out) return;

    TexPatAnimInfo info;
    if (obj->resource) {
        AnmObjTexPat_GetAnimInfo(obj->resource, &info);
    } else {
        info.frameCount = 1;
        info.duration = 1.0f;
    }

    // Determine which keyframe we're on
    s32 frameIdx = 0;
    if (info.frameCount > 0 && info.duration > 0.0f) {
        f32 f = (t / info.duration) * info.frameCount;
        if (f < 0.0f) f = 0.0f;
        if (f >= info.frameCount) f = info.frameCount - 1.0f;
        frameIdx = static_cast<s32>(f);
    }

    // In the real NW4R, this reads the keyframe data from the PAT0 resource.
    // Stub: use frame index to compute UV sub-rect assuming a uniform grid.
    if (info.frameCount <= 1) {
        out->minU = 0.0f; out->minV = 0.0f;
        out->maxU = 1.0f; out->maxV = 1.0f;
    } else {
        // Assume 1D strip layout (N frames in a row)
        f32 invCount = 1.0f / info.frameCount;
        out->minU = frameIdx * invCount;
        out->minV = 0.0f;
        out->maxU = (frameIdx + 1) * invCount;
        out->maxV = 1.0f;
    }
    (void)t;
}

// ============================================================================
// AnmObjTexPat_EvalLinear()
// 0x806003C0
// ============================================================================
// Linear interpolation between consecutive keyframes.
// ============================================================================
void AnmObjTexPat_EvalLinear(const AnmObjTexPatData* obj, f32 t, TexPatKeyFrame* out) {
    if (!obj || !out) return;

    TexPatAnimInfo info;
    if (obj->resource) {
        AnmObjTexPat_GetAnimInfo(obj->resource, &info);
    } else {
        info.frameCount = 1;
        info.duration = 1.0f;
    }

    if (info.frameCount <= 1) {
        AnmObjTexPat_EvalStep(obj, t, out);
        return;
    }

    // Compute fractional position
    f32 f = (t / info.duration) * (info.frameCount - 1);
    if (f < 0.0f) f = 0.0f;
    if (f > info.frameCount - 1) f = info.frameCount - 1.0f;

    s32 idxA = static_cast<s32>(f);
    f32 frac = f - idxA;
    s32 idxB = idxA + 1;
    if (idxB >= info.frameCount) idxB = info.frameCount - 1;

    // Evaluate both keyframes
    TexPatKeyFrame kA, kB;
    AnmObjTexPat_EvalStep(obj, static_cast<f32>(idxA * info.duration / (info.frameCount > 1 ? info.frameCount - 1 : 1)), &kA);
    AnmObjTexPat_EvalStep(obj, static_cast<f32>(idxB * info.duration / (info.frameCount > 1 ? info.frameCount - 1 : 1)), &kB);

    // Linear interpolation
    out->minU = kA.minU + (kB.minU - kA.minU) * frac;
    out->minV = kA.minV + (kB.minV - kA.minV) * frac;
    out->maxU = kA.maxU + (kB.maxU - kA.maxU) * frac;
    out->maxV = kA.maxV + (kB.maxV - kA.maxV) * frac;
}

// ============================================================================
// AnmObjTexPat_GetCurrentUV()
// 0x80600440
// ============================================================================
const TexPatKeyFrame* AnmObjTexPat_GetCurrentUV(const AnmObjTexPatData* obj) {
    if (!obj) return NULL;
    return &obj->current;
}

// ============================================================================
// AnmObjTexPat_Reset()
// 0x80600460
// ============================================================================
void AnmObjTexPat_Reset(AnmObjTexPatData* obj) {
    if (!obj) return;
    obj->currentFrame = 0.0f;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;

    TexPatAnimInfo info;
    if (obj->resource) {
        AnmObjTexPat_GetAnimInfo(obj->resource, &info);
        if (info.animType == 0) {
            AnmObjTexPat_EvalStep(obj, 0.0f, &obj->current);
        } else {
            AnmObjTexPat_EvalLinear(obj, 0.0f, &obj->current);
        }
    } else {
        obj->current.minU = 0.0f; obj->current.minV = 0.0f;
        obj->current.maxU = 1.0f; obj->current.maxV = 1.0f;
    }
}

// ============================================================================
// AnmObjTexPat C++ Class Implementation
// ============================================================================

/* AnmObjTexPat_ctor @ 0x80600500 */
AnmObjTexPat::AnmObjTexPat()
    : mpMaterial(NULL) {
    std::memset(&mData, 0, sizeof(AnmObjTexPatData));
}

/* AnmObjTexPat_dtor */
AnmObjTexPat::~AnmObjTexPat() {
    AnmObjTexPat_Destroy(&mData);
    mpMaterial = NULL;
}

/* AnmObjTexPat_init @ 0x80600500 */
bool AnmObjTexPat::init(ResTexPatAnm* res) {
    if (!res) return false;
    AnmObjTexPatData* result = AnmObjTexPat_Create(&mData, res);
    return result != NULL;
}

/* AnmObjTexPat_calc @ 0x80600540 */
void AnmObjTexPat::calc(f32 deltaTime) {
    // Advance animation state
    AnmObjTexPat_Calc(&mData, deltaTime);

    // If attached to a material, automatically apply UV
    if (mpMaterial != NULL) {
        applyToMaterial(mpMaterial, 0);
    }
}

/* AnmObjTexPat_setFrame @ 0x80600580 */
void AnmObjTexPat::setFrame(f32 frame) {
    AnmObjTexPat_SetFrame(&mData, frame);
}

/* AnmObjTexPat_getFrame @ 0x806005A0 */
f32 AnmObjTexPat::getFrame() const {
    return AnmObjTexPat_GetFrame(&mData);
}

/* AnmObjTexPat_getFrameCount @ 0x806005C0 */
f32 AnmObjTexPat::getFrameCount() const {
    return AnmObjTexPat_GetDuration(&mData);
}

/* AnmObjTexPat_applyToMaterial @ 0x806005E0 */
void AnmObjTexPat::applyToMaterial(MaterialData* mat, u8 texMapIdx) {
    if (!mat) return;
    AnmObjTexPat_Apply(&mData, mat, texMapIdx);
}

/* AnmObjTexPat_setPlayMode @ 0x80600600 */
void AnmObjTexPat::setPlayMode(u8 mode) {
    AnmObjTexPat_SetPlayMode(&mData, mode);
}

/* AnmObjTexPat_attach @ 0x80600620 */
void AnmObjTexPat::attach(MaterialData* mat) {
    mpMaterial = mat;
    // In real NW4R, attaching stores a pointer to the material's
    // texcoord gen settings so that applyToMaterial() can modify them
    // directly during the scene graph animation traversal.
    // The material's texture map index is used to select which
    // texcoord gen stage to modify.
}

/* AnmObjTexPat_detach @ 0x80600640 */
void AnmObjTexPat::detach() {
    mpMaterial = NULL;
}

// ============================================================================
// AnmObjTexPat Factory
// ============================================================================

/* AnmObjTexPat_createFromRes @ 0x80600680 */
AnmObjTexPat* AnmObjTexPat_createFromRes(const void* data, u32 size) {
    if (!data || size < sizeof(ResTexPatAnm)) {
        return NULL;
    }
    // Allocate AnmObjTexPat from the current heap
    // In the original: new (heap) AnmObjTexPat()
    AnmObjTexPat* obj = new AnmObjTexPat();
    if (!obj) {
        return NULL;
    }
    // Cast the raw data to a ResTexPatAnm pointer
    // In real NW4R, the data is validated as a PAT0 block before use.
    // The PAT0 header contains: magic "PAT0", size, frame count,
    // and a list of keyframes with UV sub-rects.
    ResTexPatAnm res;
    std::memcpy(&res, data, (size < sizeof(ResTexPatAnm)) ? size : sizeof(ResTexPatAnm));

    if (!obj->init(&res)) {
        delete obj;
        return NULL;
    }
    return obj;
}