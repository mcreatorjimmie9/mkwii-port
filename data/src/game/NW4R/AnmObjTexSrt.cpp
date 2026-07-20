#include "AnmObjTexSrt.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>
#include <cmath>

// ============================================================================
// AnmObjTexSrt Implementation
// ============================================================================
// NW4R texture SRT (Scale/Rotate/Translate) animation — transforms texture
// coordinates via a 2D affine transform applied as a texture matrix.
// ============================================================================

// ============================================================================
// AnmObjTexSrt_Create()
// 0x80600800
// ============================================================================
AnmObjTexSrtData* AnmObjTexSrt_Create(AnmObjTexSrtData* obj, ResTexSrtAnm* res) {
    if (!obj || !res) return NULL;

    std::memset(obj, 0, sizeof(AnmObjTexSrtData));

    obj->resource = res;
    obj->frameRate = 1.0f;
    obj->playMode = ANM_PLAY_LOOP;
    obj->flags = ANMSCN_FLAG_PLAYING;
    obj->texCoordIdx = 0;

    // Default SRT: identity
    obj->current.scaleX = 1.0f;
    obj->current.scaleY = 1.0f;
    obj->current.rotation = 0.0f;
    obj->current.transX = 0.0f;
    obj->current.transY = 0.0f;

    // Parse metadata
    SrtAnimInfo info;
    AnmObjTexSrt_GetAnimInfo(res, &info);
    obj->totalFrames = info.duration;
    obj->texCoordIdx = info.targetTexCoord;

    // Compute initial texture matrix
    AnmObjTexSrt_ComputeTexMtx(&obj->current, obj->texMtx);

    return obj;
}

// ============================================================================
// AnmObjTexSrt_Destroy()
// 0x80600860
// ============================================================================
void AnmObjTexSrt_Destroy(AnmObjTexSrtData* obj) {
    if (!obj) return;
    obj->resource = NULL;
    obj->flags = 0;
}

// ============================================================================
// AnmObjTexSrt_Calc()
// 0x806008C0
// ============================================================================
void AnmObjTexSrt_Calc(AnmObjTexSrtData* obj, f32 deltaTime) {
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

    // Interpolate SRT values from keyframes
    SrtAnimInfo info;
    if (obj->resource) {
        AnmObjTexSrt_GetAnimInfo(obj->resource, &info);

        // Determine keyframe pair and fraction
        f32 f = 0.0f;
        if (info.frameCount > 1 && info.duration > 0.0f) {
            f = (newFrame / info.duration) * (info.frameCount - 1);
            if (f < 0.0f) f = 0.0f;
            if (f > info.frameCount - 1) f = info.frameCount - 1.0f;
        }

        s32 idxA = static_cast<s32>(f);
        f32 frac = f - idxA;

        // In real NW4R, keyframes are read from the SRT0 resource.
        // Stub: interpolate from identity to a test transform.
        obj->current.scaleX   = 1.0f + frac * 0.0f;  // identity scale
        obj->current.scaleY   = 1.0f + frac * 0.0f;
        obj->current.rotation = 0.0f;
        obj->current.transX   = 0.0f + frac * 0.0f;  // no translation
        obj->current.transY   = 0.0f + frac * 0.0f;
    }

    // Recompute texture matrix
    AnmObjTexSrt_ComputeTexMtx(&obj->current, obj->texMtx);
}

// ============================================================================
// AnmObjTexSrt_Apply()
// 0x80600960
// ============================================================================
// Load the computed 2x3 texture matrix into the GX texture matrix register.
// ============================================================================
void AnmObjTexSrt_Apply(AnmObjTexSrtData* obj, u8 texCoordIdx) {
    if (!obj) return;
    (void)texCoordIdx;

    // In real NW4R:
    // GXLoadTexMtxImm2x3(obj->texMtx, texCoordIdx, GX_PTIDENTITY);
}

// ============================================================================
// AnmObjTexSrt_SetFrame()
// 0x80600A00
// ============================================================================
void AnmObjTexSrt_SetFrame(AnmObjTexSrtData* obj, f32 frame) {
    if (!obj) return;
    obj->currentFrame = frame;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;
    AnmObjTexSrt_Calc(obj, 0.0f);
}

// ============================================================================
// AnmObjTexSrt_GetFrame()
// 0x80600A60
// ============================================================================
f32 AnmObjTexSrt_GetFrame(const AnmObjTexSrtData* obj) {
    if (!obj) return 0.0f;
    return obj->currentFrame;
}

// ============================================================================
// AnmObjTexSrt_GetDuration()
// 0x80600A80
// ============================================================================
f32 AnmObjTexSrt_GetDuration(const AnmObjTexSrtData* obj) {
    if (!obj) return 0.0f;
    return obj->totalFrames;
}

// ============================================================================
// AnmObjTexSrt_SetFrameRate()
// 0x80600AA0
// ============================================================================
void AnmObjTexSrt_SetFrameRate(AnmObjTexSrtData* obj, f32 rate) {
    if (!obj) return;
    obj->frameRate = rate;
}

// ============================================================================
// AnmObjTexSrt_SetPlayMode()
// 0x80600AC0
// ============================================================================
void AnmObjTexSrt_SetPlayMode(AnmObjTexSrtData* obj, u8 mode) {
    if (!obj) return;
    obj->playMode = mode;
}

// ============================================================================
// AnmObjTexSrt_IsFinished()
// 0x80600AE0
// ============================================================================
BOOL AnmObjTexSrt_IsFinished(const AnmObjTexSrtData* obj) {
    if (!obj) return TRUE;
    return (obj->flags & ANMSCN_FLAG_FINISHED) ? TRUE : FALSE;
}

// ============================================================================
// AnmObjTexSrt_ComputeTexMtx()
// 0x80600B00
// ============================================================================
// Build a 2x3 texture matrix from Scale, Rotation, Translation.
// Matrix = T * R * S
// Result is column-major for GX (2 rows x 3 columns):
//   [0][0] [0][1] [0][2]    =  row 0: a, b, c
//   [1][0] [1][1] [1][2]    =  row 1: d, e, f
// ============================================================================
void AnmObjTexSrt_ComputeTexMtx(const SrtKeyFrame* srt, f32 mtx[2][3]) {
    if (!srt || !mtx) return;

    f32 cosR = std::cos(srt->rotation);
    f32 sinR = std::sin(srt->rotation);

    f32 sX = srt->scaleX;
    f32 sY = srt->scaleY;

    // Rotation * Scale
    f32 rs00 = cosR * sX;
    f32 rs01 = -sinR * sY;
    f32 rs10 = sinR * sX;
    f32 rs11 = cosR * sY;

    // Translation * (Rotation * Scale)
    mtx[0][0] = rs00;
    mtx[0][1] = rs01;
    mtx[0][2] = srt->transX;
    mtx[1][0] = rs10;
    mtx[1][1] = rs11;
    mtx[1][2] = srt->transY;
}

// ============================================================================
// AnmObjTexSrt_GetAnimInfo()
// 0x80600B80
// ============================================================================
void AnmObjTexSrt_GetAnimInfo(ResTexSrtAnm* res, SrtAnimInfo* out) {
    if (!res || !out) return;
    // In real NW4R, this parses the SRT0 resource header.
    out->frameCount = 1;
    out->animType = 1; // linear
    out->duration = 60.0f;
    out->targetTexCoord = 0;
}

// ============================================================================
// AnmObjTexSrt_GetTexCoordIdx()
// 0x80600BC0
// ============================================================================
u8 AnmObjTexSrt_GetTexCoordIdx(const AnmObjTexSrtData* obj) {
    if (!obj) return 0;
    return obj->texCoordIdx;
}

// ============================================================================
// AnmObjTexSrt class implementation
// ============================================================================

AnmObjTexSrt::AnmObjTexSrt()
    : m_material(nullptr) {
    std::memset(&m_data, 0, sizeof(m_data));
}

AnmObjTexSrt::~AnmObjTexSrt() {
    detach();
    AnmObjTexSrt_Destroy(&m_data);
}

// Initialize the texture SRT animation to default state
void AnmObjTexSrt::init() {
    std::memset(&m_data, 0, sizeof(m_data));
    m_data.frameRate = 1.0f;
    m_data.playMode = ANM_PLAY_LOOP;
    m_data.flags = ANMSCN_FLAG_PLAYING;
    m_data.texCoordIdx = 0;
    m_data.current.scaleX = 1.0f;
    m_data.current.scaleY = 1.0f;
    m_data.current.rotation = 0.0f;
    m_data.current.transX = 0.0f;
    m_data.current.transY = 0.0f;
    AnmObjTexSrt_ComputeTexMtx(&m_data.current, m_data.texMtx);
}

// Per-frame animation update
void AnmObjTexSrt::calc(f32 dt) {
    AnmObjTexSrt_Calc(&m_data, dt);
}

// Set the current animation frame
void AnmObjTexSrt::setFrame(f32 frame) {
    AnmObjTexSrt_SetFrame(&m_data, frame);
}

// Get the current animation frame
f32 AnmObjTexSrt::getFrame() const {
    return AnmObjTexSrt_GetFrame(&m_data);
}

// Get the total frame count (duration)
f32 AnmObjTexSrt::getFrameCount() const {
    return AnmObjTexSrt_GetDuration(&m_data);
}

// Apply the current SRT transform to the bound material
void AnmObjTexSrt::applyToMaterial() {
    if (m_material == nullptr) return;
    AnmObjTexSrt_Apply(&m_data, m_data.texCoordIdx);
}

// Set play mode (loop/once/pingpong)
void AnmObjTexSrt::setPlayMode(u8 mode) {
    AnmObjTexSrt_SetPlayMode(&m_data, mode);
}

// Bind to a material for auto-apply
void AnmObjTexSrt::attach(void* mat) {
    m_material = mat;
}

// Unbind from material
void AnmObjTexSrt::detach() {
    m_material = nullptr;
}

// ============================================================================
// AnmObjTexSrt_createFromRes() — Factory
// ============================================================================
// Create an AnmObjTexSrt object from a resource, allocating on heap.
// ============================================================================
AnmObjTexSrt* AnmObjTexSrt_createFromRes(ResTexSrtAnm* res) {
    if (!res) return nullptr;

    AnmObjTexSrt* obj = new AnmObjTexSrt();
    if (obj == nullptr) return nullptr;

    AnmObjTexSrt_Create(&obj->m_data, res);
    return obj;
}

// Reset the SRT transform to identity (scale=1, rot=0, trans=0)
void AnmObjTexSrt_ResetTransform(AnmObjTexSrtData* obj) {
    if (!obj) return;
    obj->current.scaleX = 1.0f;
    obj->current.scaleY = 1.0f;
    obj->current.rotation = 0.0f;
    obj->current.transX = 0.0f;
    obj->current.transY = 0.0f;
    obj->current._14 = 0.0f;
    AnmObjTexSrt_ComputeTexMtx(&obj->current, obj->texMtx);
}

// Check if two SRT keyframes are equal
BOOL AnmObjTexSrt_IsKeyframeEqual(const SrtKeyFrame* a, const SrtKeyFrame* b) {
    if (!a || !b) return FALSE;
    if (a->scaleX != b->scaleX) return FALSE;
    if (a->scaleY != b->scaleY) return FALSE;
    if (a->rotation != b->rotation) return FALSE;
    if (a->transX != b->transX) return FALSE;
    if (a->transY != b->transY) return FALSE;
    return TRUE;
}

// Lerp between two SRT keyframes
void AnmObjTexSrt_LerpKeyframes(const SrtKeyFrame* a, const SrtKeyFrame* b,
                                 f32 t, SrtKeyFrame* out) {
    if (!a || !b || !out) return;
    out->scaleX   = a->scaleX   + (b->scaleX   - a->scaleX)   * t;
    out->scaleY   = a->scaleY   + (b->scaleY   - a->scaleY)   * t;
    out->rotation = a->rotation + (b->rotation - a->rotation) * t;
    out->transX   = a->transX   + (b->transX   - a->transX)   * t;
    out->transY   = a->transY   + (b->transY   - a->transY)   * t;
    out->_14 = 0.0f;
}

// Set SRT values directly (bypassing animation)
void AnmObjTexSrt_SetSRT(AnmObjTexSrtData* obj, f32 sx, f32 sy,
                          f32 rot, f32 tx, f32 ty) {
    if (!obj) return;
    obj->current.scaleX = sx;
    obj->current.scaleY = sy;
    obj->current.rotation = rot;
    obj->current.transX = tx;
    obj->current.transY = ty;
    AnmObjTexSrt_ComputeTexMtx(&obj->current, obj->texMtx);
}

// Get the current SRT values
const SrtKeyFrame* AnmObjTexSrt_GetCurrentSRT(const AnmObjTexSrtData* obj) {
    if (!obj) return nullptr;
    return &obj->current;
}

// Get the computed texture matrix
const f32 (*AnmObjTexSrt_GetTexMtx(const AnmObjTexSrtData* obj))[3] {
    if (!obj) return nullptr;
    return obj->texMtx;
}