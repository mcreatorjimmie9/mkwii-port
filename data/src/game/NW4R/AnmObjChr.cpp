#include "AnmObjChr.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>
#include <cstdlib>
#include <cmath>

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

// ============================================================================
// AnmObjChr C++ Class Implementation
// ============================================================================

/* AnmObjChr_ctor @ 0x80601B00 */
AnmObjChr::AnmObjChr()
    : mpModel(NULL) {
    std::memset(&mData, 0, sizeof(AnmObjChrData));
}

/* AnmObjChr_dtor */
AnmObjChr::~AnmObjChr() {
    AnmObjChr_Destroy(&mData);
    mpModel = NULL;
}

/* AnmObjChr_init @ 0x80601B00 */
bool AnmObjChr::init(ResChrAnm* res) {
    if (!res) return false;
    AnmObjChrData* result = AnmObjChr_Create(&mData, res);
    return result != NULL;
}

/* AnmObjChr_calc @ 0x80601B40 */
void AnmObjChr::calc(f32 deltaTime) {
    // Advance animation state
    AnmObjChr_Calc(&mData, deltaTime);

    // Apply visibility to attached model if present
    if (mpModel != NULL) {
        applyToJoints();
    }
}

/* AnmObjChr_calcAnimate @ 0x80601B80 */
void AnmObjChr::calcAnimate(f32 deltaTime) {
    // Per-frame animation calculation with easing
    // For CHR (visibility) animations, there is no easing —
    // visibility is a step function (shape is either visible or not).
    // This function exists for API consistency with other AnmObj types
    // (TexPat, MatClr, TexSrt) which do use easing curves.
    //
    // The NW4R animation system calls calcAnimate() from the scene
    // graph traversal, then calc() separately for state-dependent logic.
    (void)deltaTime;

    // Visibility animations have no easing — frame advancement
    // happens entirely in calc()
}

/* AnmObjChr_setFrame @ 0x80601BC0 */
void AnmObjChr::setFrame(f32 frame) {
    AnmObjChr_SetFrame(&mData, frame);
}

/* AnmObjChr_getFrame @ 0x80601BE0 */
f32 AnmObjChr::getFrame() const {
    return AnmObjChr_GetFrame(&mData);
}

/* AnmObjChr_isFrameAtEnd @ 0x80601C00 */
bool AnmObjChr::isFrameAtEnd() const {
    return AnmObjChr_IsFinished(&mData) != FALSE;
}

/* AnmObjChr_getFrameCount @ 0x80601C20 */
f32 AnmObjChr::getFrameCount() const {
    return AnmObjChr_GetDuration(&mData);
}

/* AnmObjChr_setPlayMode @ 0x80601C40 */
void AnmObjChr::setPlayMode(AnmPlayMode mode) {
    AnmObjChr_SetPlayMode(&mData, (u8)mode);
}

/* AnmObjChr_attach @ 0x80601C60 */
void AnmObjChr::attach(R3DModel* model) {
    mpModel = model;
    // In the original NW4R, attaching stores a pointer to the model's
    // ResMdl (model resource) so that applyToJoints() can access the
    // shape array and write visibility flags directly.
    // The model's shape count is used to validate the visibility mask.
}

/* AnmObjChr_detach @ 0x80601C80 */
void AnmObjChr::detach() {
    mpModel = NULL;
}

/* AnmObjChr_getName @ 0x80601CA0 */
const char* AnmObjChr::getName() const {
    // In real NW4R, the animation name is stored in the resource header
    // at a known offset (typically the first 4 bytes of user data).
    // For CHR animations, the name comes from the VIS0 block header.
    if (mData.resource == NULL) {
        return "null";
    }
    // Stub: return a generic name
    return "ChrAnm";
}

/* AnmObjChr_applyToJoints @ 0x80601CC0 */
void AnmObjChr::applyToJoints() {
    // Write the current visibility mask to the model's shape draw flags.
    // In real NW4R, this iterates the model's shape array and sets
    // each shape's visibility based on the corresponding bit in
    // mData.currentMask.
    //
    // The model's shape draw flags are stored in the ResMdl's shape array:
    //   for (u32 i = 0; i < shapeCount; i++) {
    //       bool visible = (mData.currentMask & BIT(i)) != 0;
    //       model->shapes[i].setVisible(visible);
    //   }
    //
    // For the port, we use the C-style apply function with a local buffer:
    u32 shapeDrawFlags[32]; // max 32 shapes (matching mask width)
    for (u32 i = 0; i < 32; i++) {
        shapeDrawFlags[i] = 0;
    }
    AnmObjChr_Apply(&mData, shapeDrawFlags);

    // In the real implementation, these flags would be written to the
    // model's ResShape array. Since R3DModel is a forward declaration,
    // we can't access it directly here. The flags are computed and
    // ready to be consumed by the rendering system.
}

// ============================================================================
// AnmObjChr Factory
// ============================================================================

/* AnmObjChr_createFromRes @ 0x80601D00 */
AnmObjChr* AnmObjChr_createFromRes(const void* data, u32 size) {
    if (!data || size < sizeof(ResChrAnm)) {
        return NULL;
    }
    // Allocate AnmObjChr from the current heap
    // In the original: new (heap) AnmObjChr()
    AnmObjChr* obj = new AnmObjChr();
    if (!obj) {
        return NULL;
    }
    // Cast the raw data to a ResChrAnm pointer
    // In real NW4R, the data is validated as a VIS0 block before use
    ResChrAnm res;
    std::memcpy(&res, data, (size < sizeof(ResChrAnm)) ? size : sizeof(ResChrAnm));

    if (!obj->init(&res)) {
        delete obj;
        return NULL;
    }
    return obj;
}

// ============================================================================
// Extended AnmObjChr helpers
// ============================================================================

/* AnmObjChr_getPrevMask @ 0x80601D40 */
u32 AnmObjChr::getPrevMask() const {
    return mData.prevMask;
}

/* AnmObjChr_getCurrentMask @ 0x80601D50 */
u32 AnmObjChr::getCurrentMask() const {
    return mData.currentMask;
}

/* AnmObjChr_getShapeCount @ 0x80601D60 */
u32 AnmObjChr::getShapeCount() const {
    return mData.shapeCount;
}

/* AnmObjChr_isPlaying @ 0x80601D70 */
bool AnmObjChr::isPlaying() const {
    return (mData.flags & ANMSCN_FLAG_PLAYING) != 0;
}

/* AnmObjChr_getFrameRate @ 0x80601D80 */
f32 AnmObjChr::getFrameRate() const {
    return mData.frameRate;
}

/* AnmObjChr_setFrameRate_obj @ 0x80601D90 */
void AnmObjChr::setFrameRate(f32 rate) {
    AnmObjChr_SetFrameRate(&mData, rate);
}

/* AnmObjChr_getResource @ 0x80601DA0 */
ResChrAnm* AnmObjChr::getResource() const {
    return mData.resource;
}

/* AnmObjChr_setShapeVisible @ 0x80601DB0 */
void AnmObjChr::setShapeVisible(u32 shapeIdx, bool visible) {
    if (shapeIdx >= 32) return;
    if (visible) {
        mData.currentMask |= (1u << shapeIdx);
    } else {
        mData.currentMask &= ~(1u << shapeIdx);
    }
}

/* AnmObjChr_isShapeVisible @ 0x80601DC0 */
bool AnmObjChr::isShapeVisible(u32 shapeIdx) const {
    if (shapeIdx >= 32) return false;
    return (mData.currentMask & (1u << shapeIdx)) != 0;
}

/* AnmObjChr_showAllShapes @ 0x80601DD0 */
void AnmObjChr::showAllShapes() {
    // Set all bits up to shapeCount
    if (mData.shapeCount >= 32) {
        mData.currentMask = 0xFFFFFFFF;
    } else {
        mData.currentMask = (1u << mData.shapeCount) - 1;
    }
}

/* AnmObjChr_hideAllShapes @ 0x80601DE0 */
void AnmObjChr::hideAllShapes() {
    mData.currentMask = 0;
}

/* AnmObjChr_reset @ 0x80601DF0 */
void AnmObjChr::reset() {
    AnmObjChr_SetFrame(&mData, 0.0f);
    mData.flags &= ~ANMSCN_FLAG_FINISHED;
    mData.flags |= ANMSCN_FLAG_PLAYING;
}