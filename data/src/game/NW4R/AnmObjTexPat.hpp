#pragma once
// ============================================================================
// AnmObjTexPat — NW4R Texture Pattern Animation Object
// ============================================================================
// Animates texture pattern switching by swapping UV coordinate regions
// between animation keyframes. Each keyframe defines a sub-rectangle of the
// source texture that should be displayed, enabling sprite-sheet style
// frame-by-frame texture animation.
//
// Used for: animated billboards, item box rotation sparkles, flame effects,
// animated UI texture regions, and sprite sheet playback.
//
// NW4R namespace: nw4r::g3d::AnmObjTexPat
// Address range: 0x80600000 - 0x806007FF
// Function count: 15
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct ResTexPatAnm;
struct MaterialData;

// ============================================================================
// TexPatKeyFrame — Single texture pattern keyframe
// ============================================================================
// Defines which sub-rectangle of the texture to display.
// The UV coordinates are normalized [0.0, 1.0].
//
// Size: 0x10 bytes
// ============================================================================
struct TexPatKeyFrame {
    f32 minU;       // 0x00: left edge of source rectangle
    f32 minV;       // 0x04: top edge of source rectangle
    f32 maxU;       // 0x08: right edge of source rectangle
    f32 maxV;       // 0x0C: bottom edge of source rectangle
};

// ============================================================================
// AnmObjTexPatData — Runtime state for texture pattern animation
// ============================================================================
// Holds the interpolated UV rect and frame tracking state.
//
// Size: 0x40 bytes
// ============================================================================
struct AnmObjTexPatData {
    void* vtable;               // 0x00: vtable pointer
    ResTexPatAnm* resource;     // 0x04: animation resource data
    f32 currentFrame;           // 0x08: current frame position
    f32 frameRate;              // 0x0C: playback speed (frames/tick)
    f32 totalFrames;            // 0x10: total animation duration
    u8  playMode;               // 0x14: 0=once, 1=loop, 2=pingpong
    u8  flags;                  // 0x15: state flags (bit0=playing, bit1=done)
    u16 _16;                    // 0x16: padding
    u32 _18;                    // 0x18: flags/state
    u32 _1C;                    // 0x1C: flags/state
    // Current interpolated UV rect
    TexPatKeyFrame current;     // 0x20: current UV rect
    TexPatKeyFrame prev;        // 0x30: previous keyframe UV rect
};

// ============================================================================
// TexPatAnimInfo — Parsed animation metadata
// ============================================================================
struct TexPatAnimInfo {
    u16 frameCount;             // 0x00: number of keyframes
    u8  animType;               // 0x02: interpolation type (0=step, 1=linear)
    u8  _03;                    // 0x03: padding
    f32 duration;               // 0x04: total animation duration in frames
    f32 _08;                    // 0x08: unknown
};

// ============================================================================
// Function declarations — AnmObjTexPat
// ============================================================================

// @addr 0x80600000 — Create AnmObjTexPat from resource
AnmObjTexPatData* AnmObjTexPat_Create(AnmObjTexPatData* obj, ResTexPatAnm* res);

// @addr 0x80600048 — Destroy / release AnmObjTexPat
void AnmObjTexPat_Destroy(AnmObjTexPatData* obj);

// @addr 0x80600090 — Calculate / advance animation by delta time
void AnmObjTexPat_Calc(AnmObjTexPatData* obj, f32 deltaTime);

// @addr 0x80600140 — Apply current texture pattern to material (set UV coords)
void AnmObjTexPat_Apply(AnmObjTexPatData* obj, MaterialData* mat, u8 texMapIdx);

// @addr 0x806001E0 — Set current frame position
void AnmObjTexPat_SetFrame(AnmObjTexPatData* obj, f32 frame);

// @addr 0x80600240 — Get current frame position
f32 AnmObjTexPat_GetFrame(const AnmObjTexPatData* obj);

// @addr 0x80600260 — Get total animation duration
f32 AnmObjTexPat_GetDuration(const AnmObjTexPatData* obj);

// @addr 0x80600280 — Set playback frame rate
void AnmObjTexPat_SetFrameRate(AnmObjTexPatData* obj, f32 rate);

// @addr 0x806002A0 — Set play mode (once/loop/pingpong)
void AnmObjTexPat_SetPlayMode(AnmObjTexPatData* obj, u8 mode);

// @addr 0x806002C0 — Check if animation has finished playing
BOOL AnmObjTexPat_IsFinished(const AnmObjTexPatData* obj);

// @addr 0x806002E0 — Get the animation resource pointer
ResTexPatAnm* AnmObjTexPat_GetResource(const AnmObjTexPatData* obj);

// @addr 0x80600300 — Parse animation info from resource
void AnmObjTexPat_GetAnimInfo(ResTexPatAnm* res, TexPatAnimInfo* out);

// @addr 0x80600340 — Evaluate keyframe at given time (step interpolation)
void AnmObjTexPat_EvalStep(const AnmObjTexPatData* obj, f32 t, TexPatKeyFrame* out);

// @addr 0x806003C0 — Evaluate keyframe at given time (linear interpolation)
void AnmObjTexPat_EvalLinear(const AnmObjTexPatData* obj, f32 t, TexPatKeyFrame* out);

// @addr 0x80600440 — Get current UV rect
const TexPatKeyFrame* AnmObjTexPat_GetCurrentUV(const AnmObjTexPatData* obj);

// @addr 0x80600460 — Reset animation to frame 0
void AnmObjTexPat_Reset(AnmObjTexPatData* obj);

// ============================================================================
// AnmObjTexPat — C++ class wrapper for texture pattern animation
// ============================================================================
// Provides an object-oriented interface to the C-style AnmObjTexPatData.
// Used by the material animation system to drive texture UV animation
// on materials within the layout/model rendering pipeline.
// ============================================================================

// Forward declarations
struct MaterialData;

class AnmObjTexPat {
public:
    AnmObjTexPat();
    ~AnmObjTexPat();

    // Initialize from resource data
    // @addr 0x80600500
    bool init(ResTexPatAnm* res);

    // Advance animation frame by delta time
    // @addr 0x80600540
    void calc(f32 deltaTime);

    // Set current frame position
    // @addr 0x80600580
    void setFrame(f32 frame);

    // Get current frame position
    // @addr 0x806005A0
    f32 getFrame() const;

    // Get total frame count (duration)
    // @addr 0x806005C0
    f32 getFrameCount() const;

    // Apply current UV rect to a material's texture coordinate settings
    // @addr 0x806005E0
    void applyToMaterial(MaterialData* mat, u8 texMapIdx);

    // Set play mode (once/loop/pingpong)
    // @addr 0x80600600
    void setPlayMode(u8 mode);

    // Attach to a material for automatic UV application
    // @addr 0x80600620
    void attach(MaterialData* mat);

    // Detach from current material
    // @addr 0x80600640
    void detach();

    // Access underlying data
    AnmObjTexPatData* getData() { return &mData; }
    const AnmObjTexPatData* getData() const { return &mData; }

    // Get the attached material
    MaterialData* getAttachedMaterial() const { return mpMaterial; }

private:
    AnmObjTexPatData mData;    // Underlying animation data
    MaterialData* mpMaterial;  // Attached material (or nullptr)
};

// Factory: create AnmObjTexPat from raw resource data
// @addr 0x80600680
AnmObjTexPat* AnmObjTexPat_createFromRes(const void* data, u32 size);