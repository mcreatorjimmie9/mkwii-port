#pragma once
// ============================================================================
// AnmObjChr — NW4R Character / Shape Visibility Animation Object
// ============================================================================
// Controls the visibility of individual shapes (meshes / draw calls) within
// a 3D model. Each keyframe specifies a visibility mask indicating which
// shapes should be visible. Used for animated LOD transitions, showing/hiding
// model parts (e.g., driver appearing in kart), and sequential part reveals.
//
// NW4R namespace: nw4r::g3d::AnmObjChr
// Address range: 0x80601800 - 0x80601DFF
// Function count: 10
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct ResChrAnm;

// ============================================================================
// ChrKeyFrame — Shape visibility keyframe
// ============================================================================
// A bitmask where each bit corresponds to a shape in the model.
// Bit N = 1 means shape N is visible.
//
// Size: 0x08 bytes
// ============================================================================
struct ChrKeyFrame {
    u32 visibilityMask;         // 0x00: shape visibility bitmask
    u32 _04;                    // 0x04: padding / flags
};

// ============================================================================
// AnmObjChrData — Runtime state for character visibility animation
// ============================================================================
// Tracks the current visibility mask and animates between keyframes.
// On apply, the mask is written to the model's shape draw flags.
//
// Size: 0x38 bytes
// ============================================================================
struct AnmObjChrData {
    void* vtable;               // 0x00: vtable pointer
    ResChrAnm* resource;        // 0x04: animation resource data
    f32 currentFrame;           // 0x08: current frame position
    f32 frameRate;              // 0x0C: playback speed
    f32 totalFrames;            // 0x10: total animation duration
    u8  playMode;               // 0x14: 0=once, 1=loop, 2=pingpong
    u8  flags;                  // 0x15: state flags
    u16 _16;                    // 0x16: padding
    u32 _18;                    // 0x18: flags/state
    // Current visibility state
    u32 currentMask;            // 0x1C: current visibility bitmask
    u32 prevMask;               // 0x20: previous keyframe mask
    u32 shapeCount;             // 0x24: total shapes in model
    u8  _28[0x10];              // 0x28: reserved
};

// ============================================================================
// ChrAnimInfo — Parsed character animation metadata
// ============================================================================
struct ChrAnimInfo {
    u16 frameCount;             // 0x00: number of keyframes
    u8  animType;               // 0x02: interpolation (0=step only)
    u8  _03;                    // 0x03: padding
    f32 duration;               // 0x04: total duration
    u32 shapeCount;             // 0x08: total shape count in model
};

// ============================================================================
// Function declarations — AnmObjChr
// ============================================================================

// @addr 0x80601800 — Create AnmObjChr from resource
AnmObjChrData* AnmObjChr_Create(AnmObjChrData* obj, ResChrAnm* res);

// @addr 0x80601860 — Destroy / release AnmObjChr
void AnmObjChr_Destroy(AnmObjChrData* obj);

// @addr 0x806018C0 — Calculate / advance animation (step-based, no interpolation)
void AnmObjChr_Calc(AnmObjChrData* obj, f32 deltaTime);

// @addr 0x80601940 — Apply visibility mask to model's shape draw flags
void AnmObjChr_Apply(const AnmObjChrData* obj, u32* shapeDrawFlags);

// @addr 0x806019A0 — Set current frame
void AnmObjChr_SetFrame(AnmObjChrData* obj, f32 frame);

// @addr 0x80601A00 — Get current frame
f32 AnmObjChr_GetFrame(const AnmObjChrData* obj);

// @addr 0x80601A20 — Get total duration
f32 AnmObjChr_GetDuration(const AnmObjChrData* obj);

// @addr 0x80601A40 — Set playback frame rate
void AnmObjChr_SetFrameRate(AnmObjChrData* obj, f32 rate);

// @addr 0x80601A60 — Set play mode
void AnmObjChr_SetPlayMode(AnmObjChrData* obj, u8 mode);

// @addr 0x80601A80 — Check if animation is finished
BOOL AnmObjChr_IsFinished(const AnmObjChrData* obj);

// @addr 0x80601AA0 — Parse character animation info from resource
void AnmObjChr_GetAnimInfo(ResChrAnm* res, ChrAnimInfo* out);

// ============================================================================
// AnmObjChr — C++ class wrapper for character visibility animation
// ============================================================================
// Provides an object-oriented interface to the C-style AnmObjChrData.
// Used by higher-level model animation systems in the kart/driver viewer.
// ============================================================================

// Forward declaration for 3D model skeleton
class R3DModel;

// Play mode enum
enum AnmPlayMode {
    ANM_PLAYMODE_FORWARD  = ANM_PLAY_ONCE,      // Play once then stop
    ANM_PLAYMODE_BACKWARD = ANM_PLAY_REVERSE,   // Play in reverse once
    ANM_PLAYMODE_ONCE     = ANM_PLAY_ONCE,      // Alias
    ANM_PLAYMODE_LOOP     = ANM_PLAY_LOOP,      // Loop continuously
    ANM_PLAYMODE_PINGPONG = ANM_PLAY_PINGPONG,  // Back and forth
};

// Joint transform for skeleton application
struct JointTransform {
    f32 translation[3];   // X, Y, Z position offset
    f32 rotation[3];      // Euler angles (degrees)
    f32 scale[3];         // Scale factors
};

class AnmObjChr {
public:
    AnmObjChr();
    ~AnmObjChr();

    // Initialize CHR animation from resource data
    // @addr 0x80601B00
    bool init(ResChrAnm* res);

    // Update animation frame interpolation, apply to joints
    // @addr 0x80601B40
    void calc(f32 deltaTime);

    // Per-frame animation calculation with easing
    // Handles the per-frame step evaluation and visibility mask update
    // @addr 0x80601B80
    void calcAnimate(f32 deltaTime);

    // Set current animation frame
    // @addr 0x80601BC0
    void setFrame(f32 frame);

    // Get current frame
    // @addr 0x80601BE0
    f32 getFrame() const;

    // Check if animation has reached the end (only for ONCE mode)
    // @addr 0x80601C00
    bool isFrameAtEnd() const;

    // Get total frames in animation
    // @addr 0x80601C20
    f32 getFrameCount() const;

    // Set play mode (Forward/Backward/Once/PingPong/Loop)
    // @addr 0x80601C40
    void setPlayMode(AnmPlayMode mode);

    // Attach to a 3D model skeleton for joint updates
    // @addr 0x80601C60
    void attach(R3DModel* model);

    // Detach from current model
    // @addr 0x80601C80
    void detach();

    // Get animation name from resource
    // @addr 0x80601CA0
    const char* getName() const;

    // Write interpolated transforms to skeleton joints
    // For CHR animations, this applies visibility masks to shape draw flags
    // @addr 0x80601CC0
    void applyToJoints();

    // Access underlying data (for compatibility with C functions)
    AnmObjChrData* getData() { return &mData; }
    const AnmObjChrData* getData() const { return &mData; }

private:
    AnmObjChrData mData;    // Underlying animation data
    R3DModel* mpModel;      // Attached model (or nullptr)
};

// Factory: create AnmObjChr from raw resource data
// @addr 0x80601D00
AnmObjChr* AnmObjChr_createFromRes(const void* data, u32 size);