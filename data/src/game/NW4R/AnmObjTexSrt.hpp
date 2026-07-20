#pragma once
// ============================================================================
// AnmObjTexSrt — NW4R Texture SRT (Scale/Rotate/Translate) Animation Object
// ============================================================================
// Animates a texture coordinate SRT transform: Scale, Rotation, and
// Translation. This is applied as a 2x3 texture matrix that transforms
// incoming texture coordinates before sampling.
//
// The SRT decomposition order is: Scale -> Rotate -> Translate
// The resulting texture matrix is: T * R * S
//
// Used for: rotating textures (mushroom icons), scrolling UVs (water/lava),
// pulsing texture scale effects, and animated texture transforms.
//
// NW4R namespace: nw4r::g3d::AnmObjTexSrt
// Address range: 0x80600800 - 0x80600EFF
// Function count: 12
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct ResTexSrtAnm;

// ============================================================================
// SrtKeyFrame — Single SRT transform keyframe
// ============================================================================
// Represents Scale (S), Rotation (R), and Translation (T) for one moment.
// Rotation is in radians.
//
// Size: 0x18 bytes
// ============================================================================
struct SrtKeyFrame {
    f32 scaleX;      // 0x00: horizontal scale factor
    f32 scaleY;      // 0x04: vertical scale factor
    f32 rotation;    // 0x08: rotation angle in radians
    f32 transX;      // 0x0C: horizontal translation
    f32 transY;      // 0x10: vertical translation
    f32 _14;         // 0x14: unknown / padding
};

// ============================================================================
// AnmObjTexSrtData — Runtime state for texture SRT animation
// ============================================================================
// Tracks current interpolated SRT values and converts them to a
// 2x3 texture matrix on apply.
//
// Size: 0x50 bytes
// ============================================================================
struct AnmObjTexSrtData {
    void* vtable;               // 0x00: vtable pointer
    ResTexSrtAnm* resource;     // 0x04: animation resource data
    f32 currentFrame;           // 0x08: current frame position
    f32 frameRate;              // 0x0C: playback speed
    f32 totalFrames;            // 0x10: total animation duration
    u8  playMode;               // 0x14: 0=once, 1=loop, 2=pingpong
    u8  flags;                  // 0x15: state flags
    u8  texCoordIdx;            // 0x16: target texcoord gen index
    u8  _17;                    // 0x17: padding
    u32 _18;                    // 0x18: flags/state
    u32 _1C;                    // 0x1C: flags/state
    // Current interpolated SRT
    SrtKeyFrame current;        // 0x20: current SRT values
    SrtKeyFrame prev;           // 0x38: previous keyframe SRT values
    // Computed 2x3 texture matrix (applied to GX)
    f32 texMtx[2][3];          // 0x50: resulting texture matrix
};

// ============================================================================
// SrtAnimInfo — Parsed SRT animation metadata
// ============================================================================
struct SrtAnimInfo {
    u16 frameCount;             // 0x00: number of keyframes
    u8  animType;               // 0x02: interpolation type
    u8  _03;                    // 0x03: padding
    f32 duration;               // 0x04: total duration in frames
    u8  targetTexCoord;         // 0x08: which texcoord gen to affect
    u8  _09[3];                // 0x09: padding
};

// ============================================================================
// Function declarations — AnmObjTexSrt
// ============================================================================

// @addr 0x80600800 — Create AnmObjTexSrt from resource
AnmObjTexSrtData* AnmObjTexSrt_Create(AnmObjTexSrtData* obj, ResTexSrtAnm* res);

// @addr 0x80600860 — Destroy / release AnmObjTexSrt
void AnmObjTexSrt_Destroy(AnmObjTexSrtData* obj);

// @addr 0x806008C0 — Calculate / advance animation
void AnmObjTexSrt_Calc(AnmObjTexSrtData* obj, f32 deltaTime);

// @addr 0x80600960 — Apply SRT transform as texture matrix to GX
void AnmObjTexSrt_Apply(AnmObjTexSrtData* obj, u8 texCoordIdx);

// @addr 0x80600A00 — Set current frame
void AnmObjTexSrt_SetFrame(AnmObjTexSrtData* obj, f32 frame);

// @addr 0x80600A60 — Get current frame
f32 AnmObjTexSrt_GetFrame(const AnmObjTexSrtData* obj);

// @addr 0x80600A80 — Get total duration
f32 AnmObjTexSrt_GetDuration(const AnmObjTexSrtData* obj);

// @addr 0x80600AA0 — Set playback frame rate
void AnmObjTexSrt_SetFrameRate(AnmObjTexSrtData* obj, f32 rate);

// @addr 0x80600AC0 — Set play mode
void AnmObjTexSrt_SetPlayMode(AnmObjTexSrtData* obj, u8 mode);

// @addr 0x80600AE0 — Check if animation is finished
BOOL AnmObjTexSrt_IsFinished(const AnmObjTexSrtData* obj);

// @addr 0x80600B00 — Compute the 2x3 texture matrix from SRT values
void AnmObjTexSrt_ComputeTexMtx(const SrtKeyFrame* srt, f32 mtx[2][3]);

// @addr 0x80600B80 — Parse SRT animation info from resource
void AnmObjTexSrt_GetAnimInfo(ResTexSrtAnm* res, SrtAnimInfo* out);

// @addr 0x80600BC0 — Get the target texcoord gen index
u8 AnmObjTexSrt_GetTexCoordIdx(const AnmObjTexSrtData* obj);

// Class-style wrapper for texture SRT animation object
// Provides init/calc/attach/detach on AnmObjTexSrtData
class AnmObjTexSrt {
public:
    AnmObjTexSrt();
    ~AnmObjTexSrt();

    void init();
    void calc(f32 dt);
    void setFrame(f32 frame);
    f32 getFrame() const;
    f32 getFrameCount() const;
    void applyToMaterial();
    void setPlayMode(u8 mode);
    void attach(void* mat);
    void detach();

    AnmObjTexSrtData* getData() { return &m_data; }
    const AnmObjTexSrtData* getData() const { return &m_data; }

private:
    AnmObjTexSrtData m_data;
    void* m_material;

    friend AnmObjTexSrt* AnmObjTexSrt_createFromRes(ResTexSrtAnm* res);
};

// Factory: create AnmObjTexSrt from a resource
AnmObjTexSrt* AnmObjTexSrt_createFromRes(ResTexSrtAnm* res);

// Utility functions
void AnmObjTexSrt_ResetTransform(AnmObjTexSrtData* obj);
BOOL AnmObjTexSrt_IsKeyframeEqual(const SrtKeyFrame* a, const SrtKeyFrame* b);
void AnmObjTexSrt_LerpKeyframes(const SrtKeyFrame* a, const SrtKeyFrame* b,
                                 f32 t, SrtKeyFrame* out);
void AnmObjTexSrt_SetSRT(AnmObjTexSrtData* obj, f32 sx, f32 sy,
                          f32 rot, f32 tx, f32 ty);
const SrtKeyFrame* AnmObjTexSrt_GetCurrentSRT(const AnmObjTexSrtData* obj);
const f32 (*AnmObjTexSrt_GetTexMtx(const AnmObjTexSrtData* obj))[3];