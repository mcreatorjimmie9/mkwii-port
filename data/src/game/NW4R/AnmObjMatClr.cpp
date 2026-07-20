#include "AnmObjMatClr.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>
#include <cmath>

// ============================================================================
// AnmObjMatClr Implementation
// ============================================================================
// NW4R material color animation — interpolates RGBA values and applies
// them to GX TEV color registers or material color channels.
// ============================================================================

// ============================================================================
// AnmObjMatClr_Create()
// 0x80600F00
// ============================================================================
AnmObjMatClrData* AnmObjMatClr_Create(AnmObjMatClrData* obj, ResMatClrAnm* res) {
    if (!obj || !res) return NULL;

    std::memset(obj, 0, sizeof(AnmObjMatClrData));

    obj->resource = res;
    obj->frameRate = 1.0f;
    obj->playMode = ANM_PLAY_LOOP;
    obj->flags = ANMSCN_FLAG_PLAYING;
    obj->targetReg = 0;

    // Default color: white (1, 1, 1, 1)
    obj->current.r = 1.0f;
    obj->current.g = 1.0f;
    obj->current.b = 1.0f;
    obj->current.a = 1.0f;

    // Parse metadata
    MatClrAnimInfo info;
    AnmObjMatClr_GetAnimInfo(res, &info);
    obj->totalFrames = info.duration;
    obj->targetReg = info.targetReg;

    return obj;
}

// ============================================================================
// AnmObjMatClr_Destroy()
// 0x80600F60
// ============================================================================
void AnmObjMatClr_Destroy(AnmObjMatClrData* obj) {
    if (!obj) return;
    obj->resource = NULL;
    obj->flags = 0;
}

// ============================================================================
// AnmObjMatClr_Calc()
// 0x80600FC0
// ============================================================================
void AnmObjMatClr_Calc(AnmObjMatClrData* obj, f32 deltaTime) {
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

    // Interpolate color from keyframes
    MatClrAnimInfo info;
    if (obj->resource) {
        AnmObjMatClr_GetAnimInfo(obj->resource, &info);

        f32 f = 0.0f;
        if (info.frameCount > 1 && info.duration > 0.0f) {
            f = (newFrame / info.duration) * (info.frameCount - 1);
            if (f < 0.0f) f = 0.0f;
            if (f > info.frameCount - 1) f = info.frameCount - 1.0f;
        }

        f32 frac = f - static_cast<s32>(f);

        // In real NW4R, reads keyframes from CLR0 resource.
        // Stub: interpolate from white to white (no visible effect).
        obj->current.r = 1.0f + frac * 0.0f;
        obj->current.g = 1.0f + frac * 0.0f;
        obj->current.b = 1.0f + frac * 0.0f;
        obj->current.a = 1.0f + frac * 0.0f;
    }
}

// ============================================================================
// AnmObjMatClr_Apply()
// 0x80601060
// ============================================================================
// Apply the current color to the appropriate TEV register.
// Converts float [0,1] to GX u8 [0,255] and calls GXSetTevColor.
// ============================================================================
void AnmObjMatClr_Apply(const AnmObjMatClrData* obj) {
    if (!obj) return;

    u32 color = AnmObjMatClr_FloatToGXColor(
        obj->current.r, obj->current.g,
        obj->current.b, obj->current.a
    );

    // In real NW4R:
    // GXSetTevColor(static_cast<GXTevRegID>(GX_TEVREG0 + obj->targetReg),
    //               static_cast<GXColor>(color));
    (void)color;
}

// ============================================================================
// AnmObjMatClr_ApplyToChannel()
// 0x80601100
// ============================================================================
// Apply color as a material color channel override.
// ============================================================================
void AnmObjMatClr_ApplyToChannel(const AnmObjMatClrData* obj, u8 channelId) {
    if (!obj) return;

    u32 color = AnmObjMatClr_FloatToGXColor(
        obj->current.r, obj->current.g,
        obj->current.b, obj->current.a
    );

    // In real NW4R:
    // GXSetChanMatColor(static_cast<GXChannelID>(channelId),
    //                    static_cast<GXColor>(color));
    (void)channelId;
    (void)color;
}

// ============================================================================
// AnmObjMatClr_SetFrame()
// 0x80601160
// ============================================================================
void AnmObjMatClr_SetFrame(AnmObjMatClrData* obj, f32 frame) {
    if (!obj) return;
    obj->currentFrame = frame;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;
    AnmObjMatClr_Calc(const_cast<AnmObjMatClrData*>(obj), 0.0f);
}

// ============================================================================
// AnmObjMatClr_GetFrame()
// 0x806011C0
// ============================================================================
f32 AnmObjMatClr_GetFrame(const AnmObjMatClrData* obj) {
    if (!obj) return 0.0f;
    return obj->currentFrame;
}

// ============================================================================
// AnmObjMatClr_GetDuration()
// 0x806011E0
// ============================================================================
f32 AnmObjMatClr_GetDuration(const AnmObjMatClrData* obj) {
    if (!obj) return 0.0f;
    return obj->totalFrames;
}

// ============================================================================
// AnmObjMatClr_SetFrameRate()
// 0x80601200
// ============================================================================
void AnmObjMatClr_SetFrameRate(AnmObjMatClrData* obj, f32 rate) {
    if (!obj) return;
    obj->frameRate = rate;
}

// ============================================================================
// AnmObjMatClr_SetPlayMode()
// 0x80601220
// ============================================================================
void AnmObjMatClr_SetPlayMode(AnmObjMatClrData* obj, u8 mode) {
    if (!obj) return;
    obj->playMode = mode;
}

// ============================================================================
// AnmObjMatClr_IsFinished()
// 0x80601240
// ============================================================================
BOOL AnmObjMatClr_IsFinished(const AnmObjMatClrData* obj) {
    if (!obj) return TRUE;
    return (obj->flags & ANMSCN_FLAG_FINISHED) ? TRUE : FALSE;
}

// ============================================================================
// AnmObjMatClr_FloatToGXColor()
// 0x80601260
// ============================================================================
// Convert float RGBA [0.0, 1.0] to packed GX color 0x00RRGGBB.
// Each channel is clamped to [0,255] and packed.
// ============================================================================
u32 AnmObjMatClr_FloatToGXColor(f32 r, f32 g, f32 b, f32 a) {
    u8 rr = static_cast<u8>(r * 255.0f);
    u8 gg = static_cast<u8>(g * 255.0f);
    u8 bb = static_cast<u8>(b * 255.0f);
    u8 aa = static_cast<u8>(a * 255.0f);

    // Clamp to valid range
    if (r < 0.0f) rr = 0;
    if (r > 1.0f) rr = 255;
    if (g < 0.0f) gg = 0;
    if (g > 1.0f) gg = 255;
    if (b < 0.0f) bb = 0;
    if (b > 1.0f) bb = 255;
    if (a < 0.0f) aa = 0;
    if (a > 1.0f) aa = 255;

    return (static_cast<u32>(rr) << 24) |
           (static_cast<u32>(gg) << 16) |
           (static_cast<u32>(bb) << 8)  |
           static_cast<u32>(aa);
}

// ============================================================================
// AnmObjMatClr_GetAnimInfo()
// 0x806012A0
// ============================================================================
void AnmObjMatClr_GetAnimInfo(ResMatClrAnm* res, MatClrAnimInfo* out) {
    if (!res || !out) return;
    // In real NW4R, this parses the CLR0 resource header.
    out->frameCount = 1;
    out->animType = 1; // linear
    out->targetReg = 0;
    out->duration = 60.0f;
}

// ============================================================================
// AnmObjMatClr class implementation
// ============================================================================

AnmObjMatClr::AnmObjMatClr()
    : m_material(nullptr) {
    std::memset(&m_data, 0, sizeof(m_data));
}

AnmObjMatClr::~AnmObjMatClr() {
    detach();
    AnmObjMatClr_Destroy(&m_data);
}

// Initialize the material color animation to default state
void AnmObjMatClr::init() {
    std::memset(&m_data, 0, sizeof(m_data));
    m_data.frameRate = 1.0f;
    m_data.playMode = ANM_PLAY_LOOP;
    m_data.flags = ANMSCN_FLAG_PLAYING;
    m_data.targetReg = 0;
    m_data.current.r = 1.0f;
    m_data.current.g = 1.0f;
    m_data.current.b = 1.0f;
    m_data.current.a = 1.0f;
}

// Per-frame color interpolation
void AnmObjMatClr::calc(f32 dt) {
    AnmObjMatClr_Calc(&m_data, dt);
}

// Set the current animation frame
void AnmObjMatClr::setFrame(f32 frame) {
    AnmObjMatClr_SetFrame(&m_data, frame);
}

// Get the current animation frame
f32 AnmObjMatClr::getFrame() const {
    return AnmObjMatClr_GetFrame(&m_data);
}

// Get the total frame count (duration)
f32 AnmObjMatClr::getFrameCount() const {
    return AnmObjMatClr_GetDuration(&m_data);
}

// Write interpolated color/alpha to the bound material
void AnmObjMatClr::applyToMaterial() {
    if (m_material == nullptr) return;
    AnmObjMatClr_Apply(&m_data);
}

// Set play mode (loop/once/pingpong)
void AnmObjMatClr::setPlayMode(u8 mode) {
    AnmObjMatClr_SetPlayMode(&m_data, mode);
}

// Bind to a material for auto-apply
void AnmObjMatClr::attach(void* mat) {
    m_material = mat;
}

// Unbind from material
void AnmObjMatClr::detach() {
    m_material = nullptr;
}

// ============================================================================
// AnmObjMatClr_createFromRes() — Factory
// ============================================================================
// Create an AnmObjMatClr object from a resource, allocating on heap.
// ============================================================================
AnmObjMatClr* AnmObjMatClr_createFromRes(ResMatClrAnm* res) {
    if (!res) return nullptr;

    AnmObjMatClr* obj = new AnmObjMatClr();
    if (obj == nullptr) return nullptr;

    AnmObjMatClr_Create(&obj->m_data, res);
    return obj;
}

// Reset the color to white (1, 1, 1, 1)
void AnmObjMatClr_ResetColor(AnmObjMatClrData* obj) {
    if (!obj) return;
    obj->current.r = 1.0f;
    obj->current.g = 1.0f;
    obj->current.b = 1.0f;
    obj->current.a = 1.0f;
}

// Check if two color keyframes are equal
BOOL AnmObjMatClr_IsKeyframeEqual(const MatClrKeyFrame* a,
                                    const MatClrKeyFrame* b) {
    if (!a || !b) return FALSE;
    if (a->r != b->r) return FALSE;
    if (a->g != b->g) return FALSE;
    if (a->b != b->b) return FALSE;
    if (a->a != b->a) return FALSE;
    return TRUE;
}

// Lerp between two color keyframes
void AnmObjMatClr_LerpKeyframes(const MatClrKeyFrame* a,
                                  const MatClrKeyFrame* b,
                                  f32 t, MatClrKeyFrame* out) {
    if (!a || !b || !out) return;
    out->r = a->r + (b->r - a->r) * t;
    out->g = a->g + (b->g - a->g) * t;
    out->b = a->b + (b->b - a->b) * t;
    out->a = a->a + (b->a - a->a) * t;
    out->_10 = 0;
}

// Set color directly (bypassing animation)
void AnmObjMatClr_SetColor(AnmObjMatClrData* obj,
                            f32 r, f32 g, f32 b, f32 a) {
    if (!obj) return;
    obj->current.r = r;
    obj->current.g = g;
    obj->current.b = b;
    obj->current.a = a;
}

// Get the current color values
const MatClrKeyFrame* AnmObjMatClr_GetCurrentColor(
        const AnmObjMatClrData* obj) {
    if (!obj) return nullptr;
    return &obj->current;
}

// Convert GX color back to float RGBA
void AnmObjMatClr_GXColorToFloat(u32 packed, f32& r, f32& g,
                                  f32& b, f32& a) {
    r = static_cast<f32>((packed >> 24) & 0xFF) / 255.0f;
    g = static_cast<f32>((packed >> 16) & 0xFF) / 255.0f;
    b = static_cast<f32>((packed >> 8) & 0xFF) / 255.0f;
    a = static_cast<f32>(packed & 0xFF) / 255.0f;
}