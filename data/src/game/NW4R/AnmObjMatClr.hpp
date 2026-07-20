#pragma once
// ============================================================================
// AnmObjMatClr — NW4R Material Color Animation Object
// ============================================================================
// Animates material color registers (GX TEV colors) over time.
// Each keyframe defines RGBA color values that are interpolated and
// applied to the TEV constant color registers (GX_TEVREG0-2) or the
// material color/ambient color channels.
//
// Used for: pulsing color effects (item glow), fade-in/out transitions,
// color cycling on materials, and dynamic tinting of 3D objects.
//
// NW4R namespace: nw4r::g3d::AnmObjMatClr
// Address range: 0x80600F00 - 0x806017FF
// Function count: 12
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct ResMatClrAnm;

// ============================================================================
// MatClrKeyFrame — Single material color keyframe
// ============================================================================
// RGBA color values for one moment in the animation.
// Color components are stored as [0.0, 1.0] floats.
//
// Size: 0x14 bytes
// ============================================================================
struct MatClrKeyFrame {
    f32 r;          // 0x00: red component
    f32 g;          // 0x04: green component
    f32 b;          // 0x08: blue component
    f32 a;          // 0x0C: alpha component
    u32 _10;        // 0x10: flags / register target
};

// ============================================================================
// AnmObjMatClrData — Runtime state for material color animation
// ============================================================================
// Interpolates between keyframes and stores the current RGBA color
// to be applied to TEV registers or material channels.
//
// Size: 0x48 bytes
// ============================================================================
struct AnmObjMatClrData {
    void* vtable;               // 0x00: vtable pointer
    ResMatClrAnm* resource;     // 0x04: animation resource data
    f32 currentFrame;           // 0x08: current frame position
    f32 frameRate;              // 0x0C: playback speed
    f32 totalFrames;            // 0x10: total animation duration
    u8  playMode;               // 0x14: 0=once, 1=loop, 2=pingpong
    u8  flags;                  // 0x15: state flags
    u8  targetReg;              // 0x16: target TEV register (0=TEVREG0, etc.)
    u8  _17;                    // 0x17: padding
    u32 _18;                    // 0x18: flags/state
    u32 _1C;                    // 0x1C: flags/state
    // Current interpolated color
    MatClrKeyFrame current;     // 0x20: current RGBA
    MatClrKeyFrame prev;        // 0x34: previous keyframe RGBA
};

// ============================================================================
// MatClrAnimInfo — Parsed material color animation metadata
// ============================================================================
struct MatClrAnimInfo {
    u16 frameCount;             // 0x00: number of keyframes
    u8  animType;               // 0x02: interpolation type (0=step, 1=linear, 2=hermite)
    u8  targetReg;              // 0x03: which register to target
    f32 duration;               // 0x04: total duration
};

// ============================================================================
// Function declarations — AnmObjMatClr
// ============================================================================

// @addr 0x80600F00 — Create AnmObjMatClr from resource
AnmObjMatClrData* AnmObjMatClr_Create(AnmObjMatClrData* obj, ResMatClrAnm* res);

// @addr 0x80600F60 — Destroy / release AnmObjMatClr
void AnmObjMatClr_Destroy(AnmObjMatClrData* obj);

// @addr 0x80600FC0 — Calculate / advance animation
void AnmObjMatClr_Calc(AnmObjMatClrData* obj, f32 deltaTime);

// @addr 0x80601060 — Apply color to TEV register (converts float [0,1] to GX u8)
void AnmObjMatClr_Apply(const AnmObjMatClrData* obj);

// @addr 0x80601100 — Apply color to a specific material channel
void AnmObjMatClr_ApplyToChannel(const AnmObjMatClrData* obj, u8 channelId);

// @addr 0x80601160 — Set current frame
void AnmObjMatClr_SetFrame(AnmObjMatClrData* obj, f32 frame);

// @addr 0x806011C0 — Get current frame
f32 AnmObjMatClr_GetFrame(const AnmObjMatClrData* obj);

// @addr 0x806011E0 — Get total duration
f32 AnmObjMatClr_GetDuration(const AnmObjMatClrData* obj);

// @addr 0x80601200 — Set playback frame rate
void AnmObjMatClr_SetFrameRate(AnmObjMatClrData* obj, f32 rate);

// @addr 0x80601220 — Set play mode
void AnmObjMatClr_SetPlayMode(AnmObjMatClrData* obj, u8 mode);

// @addr 0x80601240 — Check if animation is finished
BOOL AnmObjMatClr_IsFinished(const AnmObjMatClrData* obj);

// @addr 0x80601260 — Convert float RGBA to GX color (0x00RRGGBB)
u32 AnmObjMatClr_FloatToGXColor(f32 r, f32 g, f32 b, f32 a);

// @addr 0x806012A0 — Parse material color animation info
void AnmObjMatClr_GetAnimInfo(ResMatClrAnm* res, MatClrAnimInfo* out);

// Class-style wrapper for material color animation object
class AnmObjMatClr {
public:
    AnmObjMatClr();
    ~AnmObjMatClr();

    void init();
    void calc(f32 dt);
    void setFrame(f32 frame);
    f32 getFrame() const;
    f32 getFrameCount() const;
    void applyToMaterial();
    void setPlayMode(u8 mode);
    void attach(void* mat);
    void detach();

    AnmObjMatClrData* getData() { return &m_data; }
    const AnmObjMatClrData* getData() const { return &m_data; }

private:
    AnmObjMatClrData m_data;
    void* m_material;

    friend AnmObjMatClr* AnmObjMatClr_createFromRes(ResMatClrAnm* res);
};

// Factory: create AnmObjMatClr from a resource
AnmObjMatClr* AnmObjMatClr_createFromRes(ResMatClrAnm* res);

// Utility functions
void AnmObjMatClr_ResetColor(AnmObjMatClrData* obj);
BOOL AnmObjMatClr_IsKeyframeEqual(const MatClrKeyFrame* a,
                                    const MatClrKeyFrame* b);
void AnmObjMatClr_LerpKeyframes(const MatClrKeyFrame* a,
                                  const MatClrKeyFrame* b,
                                  f32 t, MatClrKeyFrame* out);
void AnmObjMatClr_SetColor(AnmObjMatClrData* obj,
                            f32 r, f32 g, f32 b, f32 a);
const MatClrKeyFrame* AnmObjMatClr_GetCurrentColor(
        const AnmObjMatClrData* obj);
void AnmObjMatClr_GXColorToFloat(u32 packed, f32& r, f32& g,
                                  f32& b, f32& a);