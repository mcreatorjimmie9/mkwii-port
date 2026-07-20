#include "AnmObjChr.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// AnmObjChr Implementation
// ============================================================================
// NW4R character/shape visibility animation — controls which shapes
// (meshes) are visible in a model. Uses step-based (non-interpolated)
// keyframe evaluation since visibility is a discrete property.
// ============================================================================

// ============================================================================
// AnmObjChr_Create()
// 0x80601800
// ============================================================================
AnmObjChrData* AnmObjChr_Create(AnmObjChrData* obj, ResChrAnm* res) {
    if (!obj || !res) return NULL;

    std::memset(obj, 0, sizeof(AnmObjChrData));

    obj->resource = res;
    obj->frameRate = 1.0f;
    obj->playMode = ANM_PLAY_LOOP;
    obj->flags = ANMSCN_FLAG_PLAYING;
    obj->currentMask = 0xFFFFFFFF; // all visible
    obj->prevMask = 0xFFFFFFFF;

    // Parse metadata
    ChrAnimInfo info;
    AnmObjChr_GetAnimInfo(res, &info);
    obj->totalFrames = info.duration;
    obj->shapeCount = info.shapeCount;

    return obj;
}

// ============================================================================
// AnmObjChr_Destroy()
// 0x80601860
// ============================================================================
void AnmObjChr_Destroy(AnmObjChrData* obj) {
    if (!obj) return;
    obj->resource = NULL;
    obj->flags = 0;
}

// ============================================================================
// AnmObjChr_Calc()
// 0x806018C0
// ============================================================================
void AnmObjChr_Calc(AnmObjChrData* obj, f32 deltaTime) {
    if (!obj || !(obj->flags & ANMSCN_FLAG_PLAYING)) return;
    if (obj->totalFrames <= 0.0f) return;

    f32 newFrame = obj->currentFrame + (deltaTime * obj->frameRate);

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
                newFrame -= (static_cast<s32>(newFrame / obj->totalFrames)) * obj->totalFrames;
                if (newFrame < 0.0f) newFrame += obj->totalFrames;
            }
            break;
        case ANM_PLAY_PINGPONG: {
            f32 cycle = obj->totalFrames * 2.0f;
            if (cycle > 0.0f) {
                f32 wrapped = newFrame - (static_cast<s32>(newFrame / cycle)) * cycle;
                if (wrapped < 0.0f) wrapped += cycle;
                if (wrapped > obj->totalFrames) wrapped = cycle - wrapped;
                newFrame = wrapped;
            }
            break;
        }
        default:
            break;
    }

    obj->currentFrame = newFrame;

    // Evaluate visibility mask at current frame
    // Character visibility uses step interpolation (no blending between masks)
    ChrAnimInfo info;
    if (obj->resource) {
        AnmObjChr_GetAnimInfo(obj->resource, &info);

        s32 frameIdx = 0;
        if (info.frameCount > 0 && info.duration > 0.0f) {
            f32 f = (newFrame / info.duration) * info.frameCount;
            if (f < 0.0f) f = 0.0f;
            if (f >= info.frameCount) f = info.frameCount - 1.0f;
            frameIdx = static_cast<s32>(f);
        }

        // In real NW4R, reads the visibility mask from the VIS0 resource
        // for the given keyframe index.
        // Stub: keep all shapes visible.
        obj->prevMask = obj->currentMask;
        obj->currentMask = 0xFFFFFFFF;
        (void)frameIdx;
    }
}

// ============================================================================
// AnmObjChr_Apply()
// 0x80601940
// ============================================================================
// Apply the current visibility mask to the model's shape draw flags array.
// Each bit in the mask corresponds to one shape's visibility.
// ============================================================================
void AnmObjChr_Apply(const AnmObjChrData* obj, u32* shapeDrawFlags) {
    if (!obj || !shapeDrawFlags) return;

    // The visibility mask is applied per-shape
    // shapeDrawFlags[i] &= obj->currentMask for the i-th shape
    // Or more commonly: the mask is ANDed with the existing draw flags
    for (u32 i = 0; i < obj->shapeCount && i < 32; i++) {
        u32 bit = BIT(i);
        if (obj->currentMask & bit) {
            shapeDrawFlags[i] |= BIT(0); // visible
        } else {
            shapeDrawFlags[i] &= ~BIT(0); // hidden
        }
    }
}

// ============================================================================
// AnmObjChr_SetFrame()
// 0x806019A0
// ============================================================================
void AnmObjChr_SetFrame(AnmObjChrData* obj, f32 frame) {
    if (!obj) return;
    obj->currentFrame = frame;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;
    AnmObjChr_Calc(obj, 0.0f);
}

// ============================================================================
// AnmObjChr_GetFrame()
// 0x80601A00
// ============================================================================
f32 AnmObjChr_GetFrame(const AnmObjChrData* obj) {
    if (!obj) return 0.0f;
    return obj->currentFrame;
}

// ============================================================================
// AnmObjChr_GetDuration()
// 0x80601A20
// ============================================================================
f32 AnmObjChr_GetDuration(const AnmObjChrData* obj) {
    if (!obj) return 0.0f;
    return obj->totalFrames;
}

// ============================================================================
// AnmObjChr_SetFrameRate()
// 0x80601A40
// ============================================================================
void AnmObjChr_SetFrameRate(AnmObjChrData* obj, f32 rate) {
    if (!obj) return;
    obj->frameRate = rate;
}

// ============================================================================
// AnmObjChr_SetPlayMode()
// 0x80601A60
// ============================================================================
void AnmObjChr_SetPlayMode(AnmObjChrData* obj, u8 mode) {
    if (!obj) return;
    obj->playMode = mode;
}

// ============================================================================
// AnmObjChr_IsFinished()
// 0x80601A80
// ============================================================================
BOOL AnmObjChr_IsFinished(const AnmObjChrData* obj) {
    if (!obj) return TRUE;
    return (obj->flags & ANMSCN_FLAG_FINISHED) ? TRUE : FALSE;
}

// ============================================================================
// AnmObjChr_GetAnimInfo()
// 0x80601AA0
// ============================================================================
void AnmObjChr_GetAnimInfo(ResChrAnm* res, ChrAnimInfo* out) {
    if (!res || !out) return;
    // In real NW4R, this parses the VIS0 resource header.
    out->frameCount = 1;
    out->animType = 0; // step (visibility is always step)
    out->duration = 60.0f;
    out->shapeCount = 1;
}