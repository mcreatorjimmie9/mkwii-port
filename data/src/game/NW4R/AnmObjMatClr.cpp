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