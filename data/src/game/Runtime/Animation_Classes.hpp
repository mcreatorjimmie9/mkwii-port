#pragma once
// ============================================================================
// Animation_Classes.hpp — EGG Animation Subsystem Class Hierarchy
// Address range: 0x80560000 - 0x80580000 (335 functions)
//
// Discovered class hierarchy (EGG Framework):
//   FrameCtrl         — Animation frame timing controller (~0x20 bytes)
//   ResAnim           — Animation resource data reference (~0x0C bytes)
//   AnimPlayer        — Main skeletal animation player (vtable, ~0x48 bytes)
//   AnimTransform     — Per-bone transform controller (vtable, ~0x30 bytes)
//   AnimInterpCurve   — Keyframe interpolation curve (~0x0C bytes)
//   AnimBlendNode     — Animation blend tree node (vtable, ~0x24 bytes)
//   JointTransformData — Per-joint transform storage block (~0x40 bytes)
//   AnimCurveEvaluator — Curve evaluation utility (~0x08 bytes)
//   Animator          — Animation manager / player container (vtable, ~0x30 bytes)
//   AnimKeyframe      — Single keyframe data structure (~0x10 bytes)
//
// The EGG animation subsystem handles J3D skeletal animation playback,
// including frame control, keyframe interpolation, transform application,
// animation blending, and resource management for .bck/.bca/.bpa files.
//
// Key constructor/destructor pairs:
//   FrameCtrl:         ctor 0x80571120, init 0x805711b8
//   AnimPlayer:        ctor 0x8056037c, dtor implied
//   AnimTransform:     ctor 0x805641bc, dtor implied
//   AnimBlendNode:     ctor 0x80568f24, dtor implied
//   Animator:          ctor 0x8057d200, dtor implied
//   JointTransformData: ctor 0x80563b7c, reset 0x80563b58
//
// Categorization: GENESIS Phase 8 (Runtime Module — Animation Classes)
// ============================================================================

#include "rk_types.h"
#include <cstring>

namespace EGG {
namespace Animation {

// Forward declarations
class ResAnim;
class AnimPlayer;
class AnimTransform;
class AnimBlendNode;
class Animator;

// ============================================================================
// FrameCtrl — Animation frame timing controller
//
// Manages the current playback position within an animation. Uses f64 for
// frame precision to avoid floating-point drift during long animations.
// Embedded in AnimPlayer and referenced by Furan (Gfx subsystem).
//
// Layout:
//   0x00: f64 currentFrame     — current playback position
//   0x08: f64 startFrame        — animation start frame
//   0x10: f64 endFrame          — animation end frame
//   0x18: f64 frameSpeed        — playback speed multiplier
//
// Key addresses:
//   0x80571120 — Init / reset FrameCtrl
//   0x805711b8 — Static global init
//   0x805712f0 — Set frame rate (f64 packed as u64)
//   0x80571360 — Set frame range (start, end)
//   0x805713cc — Set playback speed
//   0x80571440 — Advance frame, returns new frame
//   0x80571568 — Static reset all
//   0x805701c0 — Get flags/state
//   0x80570274 — Reset to initial state
//   0x805702f4 — Get loop state
//   0x80570348 — Get play state
//   0x8057039c — Get playback mode
//   0x80570ff0 — Set keyframe indices
//   0x805710dc — Get current frame (f64)
//   0x8056f7d0 — Get current frame (s32)
//   0x8056f868 — Calculate frame duration/delta (f64)
// ============================================================================

class FrameCtrl {
public:
    static const u32 SIZE = 0x20;

    f64 m_currentFrame;    // 0x00 — current playback position
    f64 m_startFrame;      // 0x08 — animation start frame
    f64 m_endFrame;        // 0x10 — animation end frame
    f64 m_frameSpeed;      // 0x18 — playback speed multiplier

    FrameCtrl() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80571120 — Init / reset frame controller
    void init();

    // @addr 0x80571360 — Set frame range
    void setFrameRange(u32 start, u32 end);

    // @addr 0x805713cc — Set playback speed
    void setSpeed(f64 speed);

    // @addr 0x80571440 — Advance frame by delta, returns new frame as s32
    s32 advanceFrame(s32 delta);

    // @addr 0x805710dc — Get current frame (f64 precision)
    f64 getCurrentFrame() const;

    // @addr 0x8056f7d0 — Get current frame as integer
    s32 getCurrentFrameInt() const;

    // @addr 0x8056f868 — Calculate frame duration/delta
    f64 calcFrameDelta(s32 param) const;

    // @addr 0x805701c0 — Get state flags
    u32 getFlags() const;

    // @addr 0x805702f4 — Get loop state
    s32 getLoopState() const;

    // @addr 0x80570348 — Get play state
    s32 getPlayState() const;

    // @addr 0x8057039c — Get playback mode
    s32 getPlayMode() const;

    // @addr 0x80570ff0 — Set keyframe indices
    void setKeyframes(s32 startIdx, s32 endIdx, u32* outData);

    // @addr 0x80570274 — Reset to initial state
    void reset();

    // --- Static methods ---
    // @addr 0x805711b8 — Static global init
    static void globalInit();

    // @addr 0x805712f0 — Set frame rate (f64 packed as u64)
    static void setFrameRate(u64 rate, FrameCtrl* ctrl);

    // @addr 0x80571568 — Static reset all
    static void globalReset();
};

// ============================================================================
// AnimKeyframe — Single keyframe data
//
// Represents one keyframe in an animation curve. Used by AnimInterpCurve.
// Stored contiguously in animation resource data.
//
// Layout:
//   0x00: f32 frame     — frame number / time
//   0x04: f32 value     — keyframe value (rotation/position/scale component)
//   0x08: f32 tangentIn  — incoming tangent (for hermite interpolation)
//   0x0C: f32 tangentOut — outgoing tangent
//
// Key addresses:
//   0x8056d110 — Evaluate keyframe at time
//   0x8057d188 — Evaluate hermite between two keyframes
//   0x8057d220 — Evaluate with derivative
// ============================================================================

class AnimKeyframe {
public:
    static const u32 SIZE = 0x10;

    f32 m_frame;        // 0x00 — frame number / time position
    f32 m_value;        // 0x04 — keyframe value
    f32 m_tangentIn;    // 0x08 — incoming tangent (hermite)
    f32 m_tangentOut;   // 0x0C — outgoing tangent (hermite)

    AnimKeyframe() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x8056d110 — Evaluate this keyframe at given time
    f32 evaluate(f64 time, s32 interpType, u32 flags) const;

    // @addr 0x8057d188 — Hermite interpolation between two keyframes
    static f32 interpolateHermite(f64 time, s32 idx, u32 flags);

    // @addr 0x8057d220 — Hermite interpolation with derivative output
    static void interpolateHermiteDeriv(f64 time, s32 idx, u32 flags, s32 derivOut);
};

// ============================================================================
// ResAnim — Animation resource data reference
//
// Wraps a pointer to J3D animation resource data (.bck/.bca/.bpa).
// Provides typed access to animation metadata and keyframe arrays.
// Does NOT own the resource data — it is a view into ResFile data.
//
// Layout:
//   0x00: void*  m_data       — pointer to J3D animation resource
//   0x04: u32    m_frameCount — total frame count
//   0x08: u16    m_animType   — animation type (J3DAnmType enum)
//   0x0A: u16    m_flags      — resource flags (looping, etc.)
//
// Key addresses:
//   0x80562d20 — Get frame count
//   0x80562e84 — Get sample/keyframe at index
//   0x8056319c — Get flags
//   0x805631a8 — Read keyframe data into u16 buffer
//   0x805632ac — Get animation type
//   0x805632b8 — Get transform type
//   0x805632cc — Set callback
//   0x80562ff0 — Set index range
// ============================================================================

class ResAnim {
public:
    static const u32 SIZE = 0x0C;

    void* m_data;          // 0x00 — pointer to J3D animation resource
    u32  m_frameCount;     // 0x04 — total number of frames
    u16  m_animType;       // 0x08 — J3D animation type
    u16  m_flags;          // 0x0A — resource flags

    // Extended layout (for full-size variant):
    // u32  m_transformType; // 0x0C — transform type (if extended)

    ResAnim() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80562d20 — Get total frame count
    u32 getFrameCount() const;

    // @addr 0x80562e84 — Get sample value at frame index
    s32 getSample(s32 frameIndex) const;

    // @addr 0x8056319c — Get resource flags
    u32 getFlags() const;

    // @addr 0x805631a8 — Read keyframe data into output buffer
    u32 readKeyframeData(u16* outBuffer) const;

    // @addr 0x805632ac — Get animation type
    u32 getAnimType() const;

    // @addr 0x805632b8 — Get transform type
    u32 getTransformType() const;

    // @addr 0x805632cc — Set completion callback
    void setCallback(s32 callbackId, u32 param);

    // @addr 0x80562ff0 — Set index range for sampling
    void setIndexRange(s32 startIdx, s32 endIdx, s32 count);
};

// ============================================================================
// AnimInterpCurve — Keyframe interpolation curve
//
// Evaluates an animation curve at a given time using one of several
// interpolation modes: step, linear, hermite spline. Each curve tracks
// the current segment for efficient evaluation.
//
// Layout:
//   0x00: void*  m_keyframes  — pointer to keyframe array
//   0x04: u16    m_keyCount   — number of keyframes
//   0x06: u16    m_curveType  — interpolation type (0=step, 1=linear, 2=hermite)
//   0x08: u32    m_currentSeg — current segment index (cached)
//
// Key addresses:
//   0x8056d934 — Evaluate curve at time, returns u8 result
//   0x8056de48 — Get current segment
//   0x8056df9c — Find segment for time
//   0x8056dfdc — Get segment count
//   0x8056e714 — Get keyframe at index
//   0x8056e754 — Get keyframe count
//   0x8056e7f8 — Set curve data
//   0x8056e794 — Get raw data pointer
//   0x8056e8ac — Reset curve state
// ============================================================================

class AnimInterpCurve {
public:
    static const u32 SIZE = 0x0C;

    enum CurveType {
        CURVE_STEP    = 0,
        CURVE_LINEAR  = 1,
        CURVE_HERMITE = 2,
    };

    void* m_keyframes;     // 0x00 — pointer to AnimKeyframe array
    u16  m_keyCount;       // 0x04 — number of keyframes
    u16  m_curveType;      // 0x06 — interpolation type
    u32  m_currentSeg;     // 0x08 — current segment index (cached for fast eval)

    AnimInterpCurve() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x8056d934 — Evaluate curve at time, returns u8 quantized result
    u8 evaluate(s32 time, s8 channel) const;

    // @addr 0x8056de48 — Get current segment index
    s32 getCurrentSegment(s32 param) const;

    // @addr 0x8056df9c — Find segment containing the given time
    s32 findSegment(s32 time) const;

    // @addr 0x8056dfdc — Get total segment count
    s32 getSegmentCount(s32 param) const;

    // @addr 0x8056e714 — Get keyframe data at index
    s32 getKeyframe(s32 index) const;

    // @addr 0x8056e754 — Get keyframe count
    s32 getKeyframeCount(s32 param) const;

    // @addr 0x8056e794 — Get raw keyframe data pointer
    u32 getDataPointer() const;

    // @addr 0x8056e7f8 — Set curve data from source
    s32 setData(s32 source);

    // @addr 0x8056e8ac — Reset curve to initial state
    void reset();
};

// ============================================================================
// JointTransformData — Per-joint transform storage block
//
// Stores computed transform data (scale, rotation, translation) for each
// joint in a skeletal model. Used by AnimTransform to write output and
// by the rendering pipeline to apply bone transforms.
//
// Layout:
//   0x00: u32   m_jointCount  — number of joints
//   0x04: u32   m_flags       — transform flags (SRT mask)
//   0x08: void* m_scaleData   — pointer to scale array (f32[3] per joint)
//   0x0C: void* m_rotData     — pointer to rotation array (f32[3]/f32[4] per joint)
//   0x10: void* m_transData   — pointer to translation array (f32[3] per joint)
//   0x14-0x3F: reserved / padding
//
// Key addresses:
//   0x80563b58 — Reset all joint transforms (zero init)
//   0x80563b64 — Get joint count from data block
//   0x80563b6c — Get joint index
//   0x80563b74 — Get total joint count
//   0x80563b7c — Initialize transform data
//   0x80563cbc — Set transform at joint index
//   0x80563d04 — Set joint transform with type
//   0x80563f20 — Blend two transform data blocks
// ============================================================================

class JointTransformData {
public:
    static const u32 SIZE = 0x40;

    u32  m_jointCount;     // 0x00 — number of joints
    u32  m_flags;          // 0x04 — transform flags (S/R/T active mask)
    void* m_scaleData;     // 0x08 — scale array (f32[jointCount][3])
    void* m_rotData;       // 0x0C — rotation array
    void* m_transData;     // 0x10 — translation array (f32[jointCount][3])
    u8   m_padding[0x2C];  // 0x14-0x3F

    JointTransformData() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80563b58 — Reset all joint transforms to identity/zero
    void reset();

    // @addr 0x80563b64 — Get joint count
    u32 getJointCount() const;

    // @addr 0x80563b7c — Initialize transform data with joint count
    void init(s32 jointCount);

    // @addr 0x80563cbc — Set transform at joint index
    void setTransform(u32 jointIndex, u32 transformType);

    // @addr 0x80563d04 — Set joint transform with specific type
    void setJointTransform(s32 jointIndex, u8 transformType, u32 value);

    // @addr 0x80563f20 — Blend two transform data blocks
    static u32 blend(JointTransformData* dst, JointTransformData* src, u32 weight);
};

// ============================================================================
// AnimCurveEvaluator — Curve evaluation utility (stateless)
//
// A small utility class that evaluates animation curves given raw data
// pointers. Used internally by AnimTransform for per-channel evaluation.
// Primarily operates on packed J3D animation data formats.
//
// Layout:
//   0x00: void* m_curveData — pointer to curve data in resource
//   0x04: u32  m_curveCount — number of curves
//
// Key addresses:
//   0x80564fb4 — Get curve count from data
//   0x8056a510 — Get data pointer
//   0x80576d94 — Evaluate all curves
//   0x80577c1c — Get curve data size
//   0x80578810 — Get evaluation result count
//   0x8057b780 — Get packed data
//   0x8057bbfc — Get float data
//   0x8057c07c — Get s16 data
//   0x8057c7d0 — Get u8 data
// ============================================================================

class AnimCurveEvaluator {
public:
    static const u32 SIZE = 0x08;

    void* m_curveData;     // 0x00 — pointer to curve data in resource
    u32  m_curveCount;     // 0x04 — number of curves

    AnimCurveEvaluator() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80564fb4 — Get curve count from raw data pointer
    static u32 getCurveCount(void* data);

    // @addr 0x80576d94 — Evaluate all curves, returns result count
    static u32 evaluateAll(void* data);

    // @addr 0x80577c1c — Get total data size
    static u32 getDataSize(void* data);

    // @addr 0x80578810 — Get evaluation result count
    static u32 getResultCount(void* data);

    // @addr 0x8057b780 — Get packed u32 data
    static u32 getPackedData(void* data);

    // @addr 0x8057bbfc — Get f32 data
    static u32 getFloatData(void* data);

    // @addr 0x8057c07c — Get s16 data
    static u32 getS16Data(void* data);

    // @addr 0x8057c7d0 — Get u8 data
    static u32 getU8Data(void* data);

    // @addr 0x8056a510 — Get raw data pointer
    static u32 getRawPointer(void* data);
};

// ============================================================================
// AnimPlayer — Main skeletal animation player
//
// The primary animation player class. Attaches to a J3D model and plays
// skeletal animations from ResAnim resources. Manages frame timing via
// an embedded FrameCtrl and applies computed transforms via AnimTransform.
//
// Layout:
//   0x00: u32*         m_vtable       — virtual method table
//   0x04: ResAnim*     m_resAnim      — current animation resource
//   0x08: void*        m_model        — attached J3D model pointer
//   0x0C: FrameCtrl    m_frameCtrl    — embedded frame controller (0x20 bytes)
//   0x2C: u32          m_flags        — player flags (playing, looping, etc.)
//   0x30: f32          m_blendWeight  — blend weight for crossfade (0.0-1.0)
//   0x34: u32          m_animId       — current animation ID
//   0x38: AnimTransform* m_transform  — transform controller
//   0x3C: u32          m_pad3C
//   0x40: void*        m_callbackData — completion callback context
//   0x44: u32          m_pad44
//
// Virtual methods:
//   vtable[0]  destructor
//   vtable[1]  calc()         — advance animation and compute transforms
//   vtable[2]  calcAnim()     — compute animation frame only
//   vtable[3]  setUserColor() — apply user color override
//
// Key addresses:
//   0x8056020c — Configure player parameters
//   0x8056037c — Init / reset player
//   0x805603d8 — Validate animation attachment
//   0x80560528 — Bind animation resource to model
//   0x80560678 — Attach J3D model to player
//   0x805607c8 — Set blend parameters
//   0x8056093c — Set blend weight
//   0x80560a90 — Play animation
//   0x80560e54 — Read animation data into buffer
//   0x80560f94 — Calculate animation frame
// ============================================================================

class AnimPlayer {
public:
    static const u32 SIZE = 0x48;

    enum PlayerFlag {
        FLAG_PLAYING  = BIT(0),   // 0x01 — currently playing
        FLAG_LOOPING  = BIT(1),   // 0x02 — loop when complete
        FLAG_PAUSED   = BIT(2),   // 0x04 — paused
        FLAG_DONE     = BIT(3),   // 0x08 — playback complete
        FLAG_BLENDING = BIT(4),   // 0x10 — currently blending
        FLAG_ENABLED  = BIT(8),   // 0x100 — player is active
    };

    u32*            m_vtable;       // 0x00 — virtual method table
    ResAnim*        m_resAnim;      // 0x04 — current animation resource
    void*           m_model;        // 0x08 — attached J3D model
    FrameCtrl       m_frameCtrl;    // 0x0C — embedded frame controller
    u32             m_flags;        // 0x2C — player state flags
    f32             m_blendWeight;  // 0x30 — blend weight (0.0-1.0)
    u32             m_animId;       // 0x34 — current animation ID
    AnimTransform*  m_transformCtrl;// 0x38 — transform controller
    u32             m_pad3C;        // 0x3C
    void*           m_callbackData; // 0x40 — completion callback context
    u32             m_pad44;        // 0x44

    AnimPlayer() { std::memset(this, 0, sizeof(*this)); }

    // --- Virtual methods ---
    virtual ~AnimPlayer();

    // @addr vtable[1] — Per-frame: advance animation, compute transforms
    virtual void calc();

    // @addr vtable[2] — Compute animation frame only (no model update)
    virtual void calcAnim();

    // @addr vtable[3] — Apply user color override
    virtual void setUserColor();

    // --- Instance methods ---
    // @addr 0x8056037c — Init / reset player to default state
    void init();

    // @addr 0x8056020c — Configure player with animation parameters
    void configure(u32 animId, u32 startFrame, u32 endFrame);

    // @addr 0x805603d8 — Validate animation is properly attached (bool result)
    bool validate() const;

    // @addr 0x80560528 — Bind animation resource to model
    bool bindResource(s32 resId, u32 startFrame, u32 endFrame);

    // @addr 0x80560678 — Attach J3D model to this player
    bool attachModel(u32 modelId, u32 attr, u32 flags);

    // @addr 0x805607c8 — Set blend parameters
    void setBlendParams(u32 blendType, s32 blendMode, u32 duration);

    // @addr 0x8056093c — Set blend weight directly
    void setBlendWeight(s32 weight, u32 mode);

    // @addr 0x80560a90 — Start playing current animation
    void play(u32 startFrame, u32 endFrame, u32 mode);

    // @addr 0x80560e54 — Read animation data into buffer
    u32 readData(u8* outBuffer);

    // @addr 0x80560f94 — Calculate animation at specific frame
    u32 calcFrame(s32 frame, s32 jointIdx, u32 flags);

    // Accessors
    bool isPlaying()  const { return (m_flags & FLAG_PLAYING) != 0; }
    bool isLooping()  const { return (m_flags & FLAG_LOOPING) != 0; }
    bool isDone()     const { return (m_flags & FLAG_DONE) != 0; }
    bool isEnabled()  const { return (m_flags & FLAG_ENABLED) != 0; }
};

// ============================================================================
// AnimTransform — Per-bone transform controller
//
// Controls the computation and application of per-bone transforms during
// animation playback. Evaluates animation curves for scale, rotation, and
// translation and writes results into a JointTransformData block.
//
// Layout:
//   0x00: u32*  m_vtable          — virtual method table
//   0x04: void* m_model           — associated J3D model
//   0x08: void* m_jointArray      — joint array from model
//   0x0C: u32   m_jointCount      — number of joints
//   0x10: u32   m_flags           — transform flags (S/R/T active)
//   0x14: u32   m_enabledChannels — bitmask of active channels
//   0x18: u32   m_currentFrame    — cached current frame
//   0x1C: u32   m_transformType   — type of transform (0=SRT, 1=Matrix, etc.)
//   0x20: u32   m_pad20
//   0x24: void* m_resultData      — pointer to JointTransformData output
//   0x28: void* m_curveEvaluator  — curve evaluation context
//   0x2C: u32   m_pad2C
//
// Virtual methods:
//   vtable[0]  destructor
//   vtable[1]  calc()       — compute all joint transforms for current frame
//   vtable[2]  calcJoint()  — compute single joint transform
//   vtable[3]  apply()      — apply transforms to model joints
//
// Key addresses:
//   0x805641bc — Configure transform controller
//   0x80564248 — Set transform type
//   0x805644a0 — Set enabled channels
//   0x80564530 — Set joint array
//   0x80564624 — Compute rotation transform
//   0x805646bc — Compute scale transform
//   0x805647a0 — Compute full SRT transform
//   0x805648ec — Apply rotation to joint
//   0x80564998 — Apply scale to joint
//   0x80564b18 — Copy transform data
//   0x80564bd4 — Apply transform to specific joint
//   0x80564c54 — Set transform flag
//   0x80564cc0 — Clear transform flag
//   0x80564d38 — Blend two transforms
//   0x80564de0 — Combine transforms
// ============================================================================

class AnimTransform {
public:
    static const u32 SIZE = 0x30;

    enum TransformFlag {
        TF_SCALE       = BIT(0),   // 0x01 — scale animation active
        TF_ROTATION    = BIT(1),   // 0x02 — rotation animation active
        TF_TRANSLATION = BIT(2),   // 0x04 — translation animation active
        TF_ALL         = 0x07,
    };

    u32*  m_vtable;           // 0x00 — virtual method table
    void* m_model;            // 0x04 — associated J3D model
    void* m_jointArray;       // 0x08 — joint array from model
    u32   m_jointCount;       // 0x0C — number of joints
    u32   m_flags;            // 0x10 — transform flags (see TransformFlag)
    u32   m_enabledChannels;  // 0x14 — bitmask of active channels
    u32   m_currentFrame;     // 0x18 — cached current frame
    u32   m_transformType;    // 0x1C — transform type (0=SRT, 1=Matrix)
    u32   m_pad20;            // 0x20
    void* m_resultData;       // 0x24 — JointTransformData output
    void* m_curveEvaluator;   // 0x28 — curve evaluation context
    u32   m_pad2C;            // 0x2C

    AnimTransform() { std::memset(this, 0, sizeof(*this)); }

    // --- Virtual methods ---
    virtual ~AnimTransform();

    // @addr vtable[1] — Compute all joint transforms for current frame
    virtual void calc();

    // @addr vtable[2] — Compute single joint transform
    virtual void calcJoint(s32 jointIndex);

    // @addr vtable[3] — Apply computed transforms to model joints
    virtual void apply();

    // --- Instance methods ---
    // @addr 0x805641bc — Configure transform controller
    void configure(u32 jointCount, u32 type, u32 flags);

    // @addr 0x80564248 — Set transform type
    void setTransformType(u32 type, u32 flags);

    // @addr 0x805644a0 — Set enabled channels bitmask
    void setEnabledChannels(u32 channels);

    // @addr 0x80564530 — Set joint array and count
    void setJointArray(u32 jointCount, u32 arrayPtr);

    // @addr 0x80564624 — Compute rotation for a joint pair
    void calcRotation(u32 jointA, u32 jointB, s32 axis, s32 flags);

    // @addr 0x805646bc — Compute scale for a joint pair
    void calcScale(u32 jointA, u32 jointB, s32 axis, s32 flags);

    // @addr 0x805647a0 — Compute full SRT (scale-rotate-translate)
    void calcFullSRT(s32 jointIdx, s32* scaleOut, s32* rotOut);

    // @addr 0x805648ec — Apply rotation to joint
    void applyRotation(s32 jointIdx, s32* rotData, s32 axis);

    // @addr 0x80564998 — Apply scale to joint
    void applyScale(s32 jointIdx, s32* scaleData, s32 axis);

    // @addr 0x80564b18 — Copy transform data between two models
    static void copyTransform(u32 srcModel, u32 dstModel);

    // @addr 0x80564bd4 — Apply transform to specific joint
    void applyToJoint(s32 jointIdx, s32* xformData, s32 flags);

    // @addr 0x80564c54 — Set transform flag for joint
    static void setTransformFlag(u32 jointIdx, s32 flag, s32 value);

    // @addr 0x80564cc0 — Clear transform flag for joint
    static void clearTransformFlag(u32 jointIdx, s32 flag, s32 value);

    // @addr 0x80564d38 — Blend two transforms
    static void blendTransform(u32 dstIdx, u32 srcIdx, s32 weight);

    // @addr 0x80564de0 — Combine transforms from two sources
    static void combineTransform(s32 dstIdx, s32 srcA, s32 srcB);
};

// ============================================================================
// AnimBlendNode — Animation blend tree node
//
// Represents a node in an animation blend tree. Each node can blend
// between two animation sources (child players or other blend nodes)
// with a configurable weight. Used for crossfading between animations.
//
// Layout:
//   0x00: u32*  m_vtable       — virtual method table
//   0x04: void* m_childA       — first animation source (AnimPlayer*)
//   0x08: void* m_childB       — second animation source (AnimPlayer*)
//   0x0C: f32   m_weight       — blend weight (0.0=A, 1.0=B)
//   0x10: f32   m_targetWeight — target weight for smooth transitions
//   0x14: f32   m_blendSpeed   — blend transition speed
//   0x18: u32   m_flags        — blend state flags
//   0x1C: u32   m_blendMode    — blend mode (0=linear, 1=smooth, etc.)
//   0x20: void* m_resultData   — output JointTransformData
//
// Virtual methods:
//   vtable[0]  destructor
//   vtable[1]  calc()          — compute blended animation
//   vtable[2]  getWeight()     — get current blend weight
//   vtable[3]  setWeight()     — set target blend weight
//
// Key addresses:
//   0x80568910 — Get blend state
//   0x80568f24 — Configure blend node
//   0x80568dd4 — Is blending complete
//   0x80568e0c — Is blend active
//   0x805691a4 — Get blend flags
//   0x80569c60 — Set blend target weight
//   0x80569288 — Update blend (advance transition)
//   0x80569560 — Apply blend to model
//   0x80569740 — Get blended result
//   0x805698a4 — Set children
//   0x8056999c — Reset blend
//   0x80569aa8 — Force-complete blend
// ============================================================================

class AnimBlendNode {
public:
    static const u32 SIZE = 0x24;

    enum BlendFlag {
        BLEND_ACTIVE    = BIT(0),   // 0x01 — blend is active
        BLEND_TRANSITIONING = BIT(1), // 0x02 — transitioning between weights
        BLEND_DONE      = BIT(2),   // 0x04 — blend transition complete
        BLEND_LOCKED    = BIT(3),   // 0x08 — blend weight is locked
    };

    u32*  m_vtable;       // 0x00 — virtual method table
    void* m_childA;       // 0x04 — first animation source
    void* m_childB;       // 0x08 — second animation source
    f32   m_weight;       // 0x0C — current blend weight (0.0=A, 1.0=B)
    f32   m_targetWeight; // 0x10 — target weight for smooth transitions
    f32   m_blendSpeed;   // 0x14 — blend transition speed
    u32   m_flags;        // 0x18 — blend state flags
    u32   m_blendMode;    // 0x1C — blend mode
    void* m_resultData;   // 0x20 — output transform data

    AnimBlendNode() { std::memset(this, 0, sizeof(*this)); }

    // --- Virtual methods ---
    virtual ~AnimBlendNode();

    // @addr vtable[1] — Compute blended animation for current frame
    virtual void calc();

    // @addr vtable[2] — Get current blend weight
    virtual f32 getWeight() const;

    // @addr vtable[3] — Set target blend weight
    virtual void setWeight(f32 weight);

    // --- Instance methods ---
    // @addr 0x80568f24 — Configure blend node
    void configure(s32 configFlags);

    // @addr 0x80568910 — Get blend state flags
    u32 getBlendState() const;

    // @addr 0x80568dd4 — Is blending transition complete
    bool isBlendDone() const;

    // @addr 0x80568e0c — Is blend currently active
    bool isBlendActive() const;

    // @addr 0x805691a4 — Get flags
    u32 getFlags() const;

    // @addr 0x80569c60 — Set target weight with mode
    s32 setTargetWeight(s32 weightIdx, s32 mode);

    // @addr 0x80569288 — Update blend (advance weight transition)
    void update();

    // @addr 0x80569560 — Apply blended result to model
    void applyToModel();

    // @addr 0x80569740 — Get blended result data
    void getResult();

    // @addr 0x805698a4 — Set child sources
    void setChildren(s32 childA, s32 childB);

    // @addr 0x8056999c — Reset blend to identity
    void reset();

    // @addr 0x80569aa8 — Force-complete current blend transition
    void forceComplete();

    // Accessors
    bool isActive() const { return (m_flags & BLEND_ACTIVE) != 0; }
    bool isTransitioning() const { return (m_flags & BLEND_TRANSITIONING) != 0; }
};

// ============================================================================
// Animator — Animation manager / player container
//
// Manages a collection of AnimPlayer instances and coordinates their
// playback. Provides a central point for animation state management,
// crossfading between animations, and global animation updates.
//
// Layout:
//   0x00: u32*  m_vtable         — virtual method table
//   0x04: AnimPlayer** m_players — array of player pointers
//   0x08: u32   m_playerCount    — number of active players
//   0x0C: u32   m_maxPlayers     — maximum player capacity
//   0x10: void* m_model          — associated J3D model
//   0x14: u32   m_flags          — animator state flags
//   0x18: AnimBlendNode* m_blendRoot — root of blend tree
//   0x1C: u32   m_currentAnimId  — currently active animation ID
//   0x20: f64   m_frameTime      — accumulated frame time
//   0x28: void* m_callbackData   — global callback context
//   0x2C: u32   m_pad2C
//
// Virtual methods:
//   vtable[0]  destructor
//   vtable[1]  calc()       — update all players and blend tree
//   vtable[2]  play()       — start an animation by ID
//   vtable[3]  stop()       — stop all animations
//
// Key addresses:
//   0x8057d200 — Init animator
//   0x8057d360 — Destroy / cleanup
//   0x8057d39c — Configure animator
//   0x8057d434 — Set model
//   0x8057d460 — Clear all players
//   0x8057d56c — Set animation flags
//   0x8057d600 — Set per-joint animation override
//   0x8057d6f0 — Remove player by index
//   0x8057d70c — Get player at index
//   0x8057d7a4 — Set frame override for player
//   0x8057d920 — Reset all animations
//   0x8057dbb0 — Update blend tree
//   0x8057d110 — Advance frame (f64 time-based)
//   0x8057d188 — Calculate animation (f64 time-based)
//   0x8057d220 — Advanced update with derivative
//   0x8057e5c0 — Set animation resource
//   0x8057e670 — Reset animator state
// ============================================================================

class Animator {
public:
    static const u32 SIZE = 0x30;

    enum AnimatorFlag {
        ANIM_ACTIVE  = BIT(0),   // 0x01 — animator is active
        ANIM_UPDATING = BIT(1),   // 0x02 — currently in update
        ANIM_BLENDING = BIT(2),   // 0x04 — blend in progress
    };

    u32*            m_vtable;       // 0x00 — virtual method table
    AnimPlayer**    m_players;      // 0x04 — array of player pointers
    u32             m_playerCount;  // 0x08 — number of active players
    u32             m_maxPlayers;   // 0x0C — maximum player capacity
    void*           m_model;        // 0x10 — associated J3D model
    u32             m_flags;        // 0x14 — animator state flags
    AnimBlendNode*  m_blendRoot;    // 0x18 — root of blend tree
    u32             m_currentAnimId;// 0x1C — currently active animation ID
    f64             m_frameTime;    // 0x20 — accumulated frame time
    void*           m_callbackData; // 0x28 — global callback context
    u32             m_pad2C;        // 0x2C

    Animator() { std::memset(this, 0, sizeof(*this)); }

    // --- Virtual methods ---
    virtual ~Animator();

    // @addr vtable[1] — Update all players and blend tree
    virtual void calc();

    // @addr vtable[2] — Start playing animation by ID
    virtual void play(u32 animId);

    // @addr vtable[3] — Stop all animations
    virtual void stop();

    // --- Instance methods ---
    // @addr 0x8057d200 — Init animator with model
    void init();

    // @addr 0x8057d360 — Destroy / cleanup
    void destroy();

    // @addr 0x8057d39c — Configure animator parameters
    void configure(s32 jointCount, u32 maxPlayers, u32 flags);

    // @addr 0x8057d434 — Set associated model
    void setModel(s32 model);

    // @addr 0x8057d460 — Clear all players
    void clearPlayers();

    // @addr 0x8057d56c — Set animation flags
    void setAnimFlags(s32 playerIdx, u32 flags, u32 flags2);

    // @addr 0x8057d600 — Set per-joint animation override
    void setJointOverride(s32 playerIdx, s32 jointIdx, u32 animId, f32* outData);

    // @addr 0x8057d6f0 — Remove player by index
    void removePlayer(s32 index);

    // @addr 0x8057d70c — Get player at index
    void getPlayer(s32 index, u32 playerId, u32 flags);

    // @addr 0x8057d7a4 — Set frame override for player
    void setFrameOverride(s32 playerIdx, s32 jointIdx, u32 animId, u32 flags);

    // @addr 0x8057d920 — Reset all animations to default
    void resetAll();

    // @addr 0x8057dbb0 — Update blend tree (propagate weights)
    static void updateBlendTree(u32* treeData, s32* weightData);

    // @addr 0x8057d110 — Advance frame (f64 time-based update)
    static void advanceFrameTime(f64 deltaTime, s32 param, u32 flags);

    // @addr 0x8057d188 — Calculate animation at time (f64)
    static void calcAtTime(f64 time, s32 param, u32 flags);

    // @addr 0x8057d220 — Advanced update with derivative output
    static void calcWithDerivative(f64 time, s32 param, u32 flags, s32 derivOut);

    // @addr 0x8057e5c0 — Set animation resource for player
    void setAnimResource(s32 resourcePtr);

    // @addr 0x8057e670 — Reset animator state
    void reset();

    // Accessors
    bool isActive() const { return (m_flags & ANIM_ACTIVE) != 0; }
    bool isUpdating() const { return (m_flags & ANIM_UPDATING) != 0; }
};

// ============================================================================
// Free functions in the Animation namespace
// ============================================================================
// These functions don't belong to any identified class but are part of the
// EGG::Animation subsystem. They handle global state, static utilities,
// and helper operations used by the animation system.
//
// See Animation.hpp for the full list of 335 function declarations.
// ============================================================================

// --- Resource / data access utilities (0x80560c10 - 0x8056170c) ---
// @addr 0x80560c10 — Static animation system init
void systemInit();
// @addr 0x805610d0 — Static init (variant 2)
void systemInit2();
// @addr 0x80561168 — Static init (variant 3)
void systemInit3();
// @addr 0x80561574 — Static reset
void systemReset();
// @addr 0x805615c4 — Static cleanup
void systemCleanup();
// @addr 0x8056170c — Static shutdown
void systemShutdown();

// --- Frame control utilities (0x80561844 - 0x80562c10) ---
// @addr 0x80561a68 — Set frame range (static)
void setFrameRangeGlobal(u32 start, u32 end, u32 flags);
// @addr 0x80561d90 — Static frame init
void frameInit();
// @addr 0x8056200c — Set start/end frames
void setStartEnd(u32 start, u32 end);
// @addr 0x80562060 — Set frame bounds
void setFrameBounds(u32 min, u32 max);
// @addr 0x80562184 — Static frame cleanup
void frameCleanup();
// @addr 0x80562410 — Get global frame count
u32 getGlobalFrameCount();
// @addr 0x80562784 — Set global frame rate
void setGlobalFrameRate(u32 rate, u32 flags);
// @addr 0x80562a18 — Static frame reset
void frameReset();
// @addr 0x80562a6c — Static frame update
void frameUpdate();
// @addr 0x80562b84 — Get frame state
u32 getFrameState();
// @addr 0x80562bc4 — Static frame finalize
void frameFinalize();
// @addr 0x80562c10 — Static frame shutdown
void frameShutdown();

// --- Transform computation utilities (0x80564094 - 0x805654b4) ---
// @addr 0x80564094 — Static transform init
void transformInit();
// @addr 0x805642cc — Static transform reset
void transformReset();
// @addr 0x805643c8 — Static transform cleanup
void transformCleanup();
// @addr 0x80564ec8 — Static transform update
void transformUpdate();
// @addr 0x80564fbc — Static transform finalize
void transformFinalize();
// @addr 0x8056507c — Static transform shutdown
void transformShutdown();
// @addr 0x8056518c — Static transform flush
void transformFlush();
// @addr 0x805652f0 — Static transform validate
void transformValidate();
// @addr 0x80565364 — Static transform commit
void transformCommit();
// @addr 0x805653e8 — Static transform sync
void transformSync();
// @addr 0x805654b4 — Static transform lock
void transformLock();

// --- Global animation utilities (0x805657d0 - 0x80567228) ---
// @addr 0x805657d0 — Static global init
void globalAnimInit();
// @addr 0x80565888 — Static global reset
void globalAnimReset();
// @addr 0x80565908 — Set global animation param
void setGlobalAnimParam(u32 param, u32 value, u32 flags);
// @addr 0x80565960 — Static global update
void globalAnimUpdate();
// @addr 0x805659b8 — Static global flush
void globalAnimFlush();
// @addr 0x80565b90 — Static global validate
void globalAnimValidate();
// @addr 0x80565d48 — Static global commit
void globalAnimCommit();
// @addr 0x805660d0 — Static global lock
void globalAnimLock();
// @addr 0x80566294 — Static global unlock
void globalAnimUnlock();
// @addr 0x8056651c — Static global sync
void globalAnimSync();
// @addr 0x805666e0 — Static global finalize
void globalAnimFinalize();
// @addr 0x805668c4 — Static global shutdown
void globalAnimShutdown();
// @addr 0x80566aa8 — Static global cleanup
void globalAnimCleanup();
// @addr 0x80566bb4 — Static global destroy
void globalAnimDestroy();
// @addr 0x80566dd8 — Static global save state
void globalAnimSaveState();
// @addr 0x80566ee4 — Static global restore state
void globalAnimRestoreState();
// @addr 0x80567228 — Static global reset state
void globalAnimResetState();

// --- Blend utilities (0x80568984 - 0x8056a520) ---
// @addr 0x80568984 — Static blend init
void blendInit();
// @addr 0x80568e40 — Static blend reset
void blendReset();
// @addr 0x80568f94 — Static blend update
void blendUpdate();
// @addr 0x80569bb0 — Set blend params (static)
void setBlendParamsStatic(u32 paramA, u32 paramB);
// @addr 0x80569c14 — Static blend cleanup
void blendCleanup();
// @addr 0x80569cd4 — Static blend finalize
void blendFinalize();
// @addr 0x8056a2c8 — Static blend lock
void blendLock();
// @addr 0x8056a3e8 — Set blend channel
void setBlendChannel(s32 channel, u32 type, u32 flags);
// @addr 0x8056a418 — Set blend channel type
void setBlendChannelType(s32 channel, u32 type, u32 flags);
// @addr 0x8056a448 — Set blend channel flags
void setBlendChannelFlags(s32 channel, u32 type, u32 flags);
// @addr 0x8056a478 — Get blend channel weight
void getBlendChannelWeight(s32 channel, u32 type);
// @addr 0x8056a4a8 — Set blend channel weight
void setBlendChannelWeight(s32 channel, u32 weight);
// @addr 0x8056a504 — Set blend data
void setBlendData(void* data);
// @addr 0x8056a520 — Static blend shutdown
void blendShutdown();
// @addr 0x8056a714 — Blend two animation resources
void blendResources(u32 srcA, u32 srcB);
// @addr 0x8056a818 — Static blend validate
void blendValidate();
// @addr 0x8056a8c4 — Static blend calc
void blendCalc();
// @addr 0x8056a954 — Set blend target data
void setBlendTarget(s32* data);
// @addr 0x8056aa60 — Set blend source data
void setBlendSource(s32* data);
// @addr 0x8056ae28 — Static blend commit
void blendCommit();
// @addr 0x8056af30 — Static blend flush
void blendFlush();

// --- Interpolation utilities (0x8056afa0 - 0x8056dfdc) ---
// @addr 0x8056afa0 — Interpolate value
s32 interpolate(s32 a, s32 b);
// @addr 0x8056b70c — Advanced interpolate
s32 interpolateAdvanced(s32 a, s32 b);
// @addr 0x8056b198 — Static interp init
void interpInit();
// @addr 0x8056b508 — Static interp reset
void interpReset();
// @addr 0x8056b74c — Static interp update
void interpUpdate();
// @addr 0x8056c10c — Static interp cleanup
void interpCleanup();
// @addr 0x8056c198 — Static interp finalize
void interpFinalize();
// @addr 0x8056c1d8 — Static interp shutdown
void interpShutdown();
// @addr 0x8056c8b8 — Static interp validate
void interpValidate();
// @addr 0x8056cb8c — Static interp flush
void interpFlush();
// @addr 0x8056d30c — Static interp commit
void interpCommit();
// @addr 0x8056d524 — Static interp lock
void interpLock();
// @addr 0x8056d6c8 — Static interp unlock
void interpUnlock();
// @addr 0x8056d70c — Static interp sync
void interpSync();
// @addr 0x8056d8d8 — Reset interpolation state
void resetInterpState(s32 state);
// @addr 0x8056d970 — Set interpolation parameter
void setInterpParam(s32 param);
// @addr 0x8056da2c — Static interp finalize (variant)
void interpFinalize2();
// @addr 0x8056de98 — Static interp cleanup (variant)
void interpCleanup2();

// --- Curve data utilities (0x8056e028 - 0x8057039c) ---
// @addr 0x8056e028 — Set curve data
void setCurveData(s32* data);
// @addr 0x8056e1e0 — Reset curve state
void resetCurveState(s32 state);
// @addr 0x8056e288 — Set curve parameter
void setCurveParam(s32* data, s32 param);
// @addr 0x8056e30c — Static curve init
void curveInit();
// @addr 0x8056e704 — Set curve evaluation mode
void setCurveEvalMode(u32 mode, u32 flags);
// @addr 0x8056eb88 — Static curve reset
void curveReset();
// @addr 0x8056ee58 — Static curve update
void curveUpdate();
// @addr 0x8056ef0c — Reset curve at index
void resetCurve(s32 index);
// @addr 0x8056f09c — Finalize curve
void finalizeCurve(s32 index);
// @addr 0x8056f15c — Validate curve
void validateCurve(s32 index);
// @addr 0x8056f268 — Lock curve
void lockCurve(s32 index);
// @addr 0x8056f3e0 — Set curve transform data
void setCurveTransform(s32* data);
// @addr 0x8056f480 — Set curve rotation data
void setCurveRotation(s32* data);
// @addr 0x8056f4fc — Set curve scale data
void setCurveScale(s32* data);
// @addr 0x8056f6a4 — Static curve shutdown
void curveShutdown();
// @addr 0x8056faa0 — Static curve flush
void curveFlush();
// @addr 0x8056fe30 — Static curve commit
void curveCommit();

// --- Animation resource utilities (0x80570408 - 0x80571568) ---
// @addr 0x80570408 — Static resource init
void resourceInit();
// @addr 0x80570514 — Static resource reset
void resourceReset();
// @addr 0x80570620 — Static resource cleanup
void resourceCleanup();
// @addr 0x805707e4 — Static resource validate
void resourceValidate();
// @addr 0x8057089c — Static resource flush
void resourceFlush();
// @addr 0x80570954 — Static resource commit
void resourceCommit();
// @addr 0x80570a0c — Static resource finalize
void resourceFinalize();
// @addr 0x80570b08 — Static resource shutdown
void resourceShutdown();
// @addr 0x80570c04 — Static resource lock
void resourceLock();
// @addr 0x80570dc8 — Static resource unlock
void resourceUnlock();
// @addr 0x80570e80 — Static resource sync
void resourceSync();
// @addr 0x80570f38 — Static resource update
void resourceUpdate();

// --- Extended animation utilities (0x80571a3c - 0x80578f18) ---
// @addr 0x80571a3c — Static extended init
void extendedInit();
// @addr 0x80571ab0 — Static extended reset
void extendedReset();
// @addr 0x80571d78 — Extended operation
void extendedOperation(s32 param);
// @addr 0x80572354 — Set extended data
void setExtendedData(s32* data);
// @addr 0x805725b8 — Extended interpolate
s32 extendedInterpolate(s32 a, s32 b);
// @addr 0x805725f8 — Static extended cleanup
void extendedCleanup();
// @addr 0x805733d4 — Static extended validate
void extendedValidate();
// @addr 0x805741b0 — Static extended flush
void extendedFlush();
// @addr 0x80574f8c — Static extended commit
void extendedCommit();
// @addr 0x80575d68 — Static extended finalize
void extendedFinalize();
// @addr 0x80576188 — Static extended shutdown
void extendedShutdown();
// @addr 0x805765a0 — Static extended lock
void extendedLock();
// @addr 0x805768a4 — Static extended unlock
void extendedUnlock();
// @addr 0x80576b9c — Static extended sync
void extendedSync();
// @addr 0x80576df8 — Static extended update
void extendedUpdate();
// @addr 0x80576eb8 — Extended operation on data
void extendedDataOp(s32 data);
// @addr 0x80576fd4 — Set extended transform data
void setExtendedTransform(s32* data);
// @addr 0x8057738c — Extended calc
void extendedCalc(s32 param);
// @addr 0x80577418 — Extended interpolate
s32 extendedInterp(s32 a, s32 b);
// @addr 0x80577644 — Static extended finalize (variant)
void extendedFinalize2();
// @addr 0x805778d8 — Static extended flush (variant)
void extendedFlush2();
// @addr 0x80577988 — Get extended value (f64 precision)
f64 getExtendedValue(s32* data);
// @addr 0x805779d8 — Set extended param
void setExtendedParam(u32 param);
// @addr 0x80577a3c — Set extended data array
void setExtendedArray(u32* data, u32 count);
// @addr 0x80577cc0 — Static extended cleanup (variant)
void extendedCleanup2();
// @addr 0x80577eb8 — Static extended init (variant)
void extendedInit2();
// @addr 0x80578104 — Extended operation 2
void extendedOp2(s32 param);
// @addr 0x805780c4 — Extended interpolate 2
s32 extendedInterp2(s32 a, s32 b);
// @addr 0x80578428 — Static extended reset (variant)
void extendedReset2();
// @addr 0x805788b4 — Extended calc on data
void extendedDataCalc(s32 data);
// @addr 0x805789c4 — Static extended commit (variant)
void extendedCommit2();
// @addr 0x80578f18 — Static extended validate (variant)
void extendedValidate2();

// --- Data block utilities (0x80579690 - 0x8057ec5c) ---
// @addr 0x80579690 — Data block operation
void dataBlockOp(s32 param);
// @addr 0x80579814 — Static data block init
void dataBlockInit();
// @addr 0x80579e54 — Static data block reset
void dataBlockReset();
// @addr 0x8057a4a0 — Static data block cleanup
void dataBlockCleanup();
// @addr 0x8057ac00 — Static data block validate
void dataBlockValidate();
// @addr 0x8057b368 — Static data block flush
void dataBlockFlush();
// @addr 0x8057b3dc — Set data block transform
void setDataBlockTransform(s32* data);
// @addr 0x8057b59c — Set data block array element
void setDataBlockElement(u32* data, u32 value);
// @addr 0x8057b824 — Static data block commit
void dataBlockCommit();
// @addr 0x8057b9e4 — Get data block element
void getDataBlockElement(u32* data, u32 index);
// @addr 0x8057bca0 — Static data block finalize
void dataBlockFinalize();
// @addr 0x8057be4c — Static data block init (variant)
void dataBlockInit2();
// @addr 0x8057c120 — Static data block reset (variant)
void dataBlockReset2();
// @addr 0x8057c5f0 — Set data block sub-element
void setDataBlockSub(u32* data, u32 value);
// @addr 0x8057c874 — Static data block shutdown
void dataBlockShutdown();
// @addr 0x8057caf4 — Data block operation on param
void dataBlockParamOp(s32 param);
// @addr 0x8057ce4c — Data block interpolate
s32 dataBlockInterp(s32 a, s32 b);
// @addr 0x8057ce8c — Data block calc
void dataBlockCalc(s32 param);
// @addr 0x8057ce98 — Static data block sync
void dataBlockSync();
// @addr 0x8057ce9c — Set data block pair
void setDataBlockPair(s32* data, s32 value);
// @addr 0x8057cef0 — Data block pair operation A
void dataBlockPairOpA(s32 a, s32 b);
// @addr 0x8057cf44 — Data block pair operation B
void dataBlockPairOpB(s32 a, s32 b);
// @addr 0x8057d008 — Get data block pair value
void getDataBlockPair(s32* data, s32 index);
// @addr 0x8057d034 — Data block pair operation C
void dataBlockPairOpC(s32 a, s32 b);
// @addr 0x8057d060 — Data block pair operation D
void dataBlockPairOpD(s32 a, s32 b);
// @addr 0x8057d08c — Set data block pair (variant)
void setDataBlockPairV(s32* data, s32 value);
// @addr 0x8057d0b8 — Data block pair operation E
void dataBlockPairOpE(s32 a, s32 b);
// @addr 0x8057d0e4 — Data block pair operation F
void dataBlockPairOpF(s32 a, s32 b);
// @addr 0x8057e448 — Get data block state
u32 getDataBlockState();
// @addr 0x8057e454 — Get data block param
u32 getDataBlockParam(s32 param);
// @addr 0x8057e460 — Data block interpolate
s32 dataBlockInterp2(s32 a, s32 b);
// @addr 0x8057e4a0 — Get data block flags
u32 getDataBlockFlags(s32 param);
// @addr 0x8057e5c0 — (animator method — declared above)
// @addr 0x8057e670 — (animator method — declared above)
// @addr 0x8057ec5c — Data block final operation
void dataBlockFinalOp(s32 param);

// --- Blend node utilities (0x80569d70 - 0x80569eac) ---
// @addr 0x80569d70 — Set blend node data A
void setBlendNodeDataA(s32* data);
// @addr 0x80569eac — Set blend node data B
void setBlendNodeDataB(s32* data);

// --- Transform data utilities (0x8056c664 - 0x8056ca5c) ---
// @addr 0x8056c664 — Set transform data scale
void setTransformDataScale(s32* data);
// @addr 0x8056c7a0 — Set transform data rotation
void setTransformDataRotation(s32* data);
// @addr 0x8056c83c — Set transform data translation
void setTransformDataTranslation(s32* data);
// @addr 0x8056ca5c — Get transform data
void getTransformData(s32* data);

// --- ResAnim utility functions ---
// @addr 0x80563240 — Static resource init
void resAnimInit();
// @addr 0x80563d80 — Static resource reset
void resAnimReset();
// @addr 0x80563fec — Static resource cleanup
void resAnimCleanup();

// --- Joint transform utilities ---
// @addr 0x8056b060 — Joint transform calc
void jointTransformCalc(s32 param);
// @addr 0x8056afe0 — Joint transform set
void jointTransformSet(s32 param);
// @addr 0x8056b198 — (declared above as interpInit)

// --- FrameCtrl data utilities ---
// @addr 0x8056f480 — (declared above as setCurveRotation)
// @addr 0x8056f4fc — (declared above as setCurveScale)

// --- AnimPlayer/Blend accessor functions ---
// @addr 0x8056a85c — Get anim blend weight
s32 getAnimBlendWeight(s32 a, s32 b);
// @addr 0x8056c198 — (declared above as interpFinalize)
// @addr 0x8056c1d8 — (declared above as interpShutdown)

// --- Additional lookup / utility ---
// @addr 0x80561298 — Lookup animation data
u32 lookupAnimData(u32 animId, u32 frame, s32 flags);
// @addr 0x80561374 — Advanced lookup
u32 lookupAnimDataAdvanced(u32 animId, s32 frame, u32 flags, s32 flags2);
// @addr 0x80561420 — Get animation data count
u32 getAnimDataCount(s32 animId);
// @addr 0x8056149c — Get animation data size
u32 getAnimDataSize(s32 animId);
// @addr 0x80561508 — Set animation data
void setAnimData(u32 animId, u32 frame);
// @addr 0x80561844 — Set frame in player
u32 setPlayerFrame(s32 player, u32 frame);
// @addr 0x80561b6c — Get frame from player
u32 getPlayerFrame(s32 player);
// @addr 0x805624bc — Calculate tick
u32 calcTick(s32 param, u32 flags);
// @addr 0x805628a8 — Init frame control data
void initFrameCtrlData(s32* data, s32 param);

} // namespace Animation
} // namespace EGG