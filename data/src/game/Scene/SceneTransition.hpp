#pragma once
// SceneTransition.hpp — Visual Transition Effects System
// Address range: 0x80610000 - 0x80616000 (Gap 1 — scene transitions)
//
// SceneTransition manages visual effects during scene changes:
//   - Fade (black overlay with alpha interpolation)
//   - Wipe (directional reveal, like circle or line wipe)
//   - Dissolve (pixelated/random pattern transition)
//   - Slide (horizontal/vertical slide between scenes)
//
// The transition system uses a frame-based timer with configurable speed.
// A callback fires when the transition completes, allowing SceneMgr
// to finalize the scene swap at the midpoint (full blackout).
//
// Key addresses:
//   0x80610000 — SceneTransition::init
//   0x80610080 — SceneTransition::fadeIn
//   0x80610100 — SceneTransition::fadeOut
//   0x80610200 — SceneTransition::calc
//   0x80610300 — SceneTransition::draw
//   0x80610400 — SceneTransition::isComplete
//   0x80610440 — SceneTransition::isActive
//   0x80610480 — SceneTransition::getAlpha
//   0x80610500 — SceneTransition::getType
//   0x80610540 — SceneTransition::setType
//   0x80610600 — SceneTransition::setWipeParams
//   0x80610700 — SceneTransition::setDissolveParams
//   0x80610800 — SceneTransition::setSlideParams
//   0x80610900 — SceneTransition::skip
//   0x80610980 — SceneTransition::reset
//   0x80610A00 — SceneTransition::setSpeed
//   0x80610A40 — SceneTransition::getProgress
//   0x80610A80 — SceneTransition::onComplete (callback)

#include "rk_common.h"

namespace Scene {

// =============================================================================
// TransitionType — Visual effect type for scene transitions
// =============================================================================
enum TransitionType {
    TRANS_TYPE_NONE     = 0,  // No transition
    TRANS_TYPE_FADE     = 1,  // Simple alpha fade to/from black
    TRANS_TYPE_WIPE     = 2,  // Directional wipe (circle/line)
    TRANS_TYPE_DISSOLVE = 3,  // Pixelated dissolve pattern
    TRANS_TYPE_SLIDE    = 4,  // Horizontal/vertical slide
    TRANS_TYPE_WIPE_LR  = 5,  // Left-to-right wipe
    TRANS_TYPE_WIPE_RL  = 6,  // Right-to-left wipe
    TRANS_TYPE_WIPE_TB  = 7,  // Top-to-bottom wipe
    TRANS_TYPE_WIPE_BT  = 8,  // Bottom-to-top wipe
    TRANS_TYPE_COUNT    = 9,
};

// =============================================================================
// TransitionPhase — Current phase of a transition
// =============================================================================
enum TransitionPhase {
    PHASE_IDLE     = 0,  // No transition active
    PHASE_FADE_OUT = 1,  // Fading out (current scene disappearing)
    PHASE_HOLD     = 2,  // Holding at full black/midpoint
    PHASE_FADE_IN  = 3,  // Fading in (new scene appearing)
};

// =============================================================================
// TransitionCallback — Function pointer for transition completion
// =============================================================================
typedef void (*TransitionCallback)(void* userData);

// =============================================================================
// WipeParams — Configuration for wipe transitions
// =============================================================================
struct WipeParams {
    f32 centerX;        // Center X for circle wipe (0.0 - 1.0)
    f32 centerY;        // Center Y for circle wipe (0.0 - 1.0)
    f32 maxRadius;      // Maximum wipe radius
    f32 softness;       // Edge softness (anti-alias)
    u32 segments;       // Number of arc segments for circle
};

// =============================================================================
// DissolveParams — Configuration for dissolve transitions
// =============================================================================
struct DissolveParams {
    u32  patternSeed;   // Random seed for dissolve pattern
    f32  blockSize;     // Size of dissolve blocks in pixels
    f32  noiseScale;    // Noise pattern scale
    u32  patternType;   // Pattern variant (0=random, 1=checker, 2=diagonal)
};

// =============================================================================
// SlideParams — Configuration for slide transitions
// =============================================================================
struct SlideParams {
    f32 direction;      // Angle in degrees (0=right, 90=up, etc.)
    f32 distance;       // Slide distance in normalized coords
    f32 easing;         // Easing strength (0=linear, 1=max ease)
};

// =============================================================================
// SceneTransition — Visual transition effect controller
//
// Manages the lifecycle of a single transition effect:
//   1. fadeOut() — begin fading out current scene
//   2. At midpoint (full blackout), callback fires
//   3. fadeIn() — begin fading in new scene
//   4. On complete, transition deactivates
// =============================================================================
class SceneTransition {
public:
    SceneTransition();
    ~SceneTransition();

    // --- Lifecycle ---

    /// Initialize/reset the transition system.
    /// @addr 0x80610000
    void init();

    /// Begin a fade-in transition (from black to visible).
    /// @param duration  Number of frames for the fade
    /// @addr 0x80610080
    void fadeIn(s32 duration);

    /// Begin a fade-out transition (from visible to black).
    /// @param duration  Number of frames for the fade
    /// @addr 0x80610100
    void fadeOut(s32 duration);

    /// Per-frame update. Advances the transition timer.
    /// @addr 0x80610200
    void calc();

    /// Render the transition overlay.
    /// @addr 0x80610300
    void draw();

    // --- State queries ---

    /// Check if the transition has fully completed.
    /// @addr 0x80610400
    bool isComplete() const;

    /// Check if any transition is currently active.
    /// @addr 0x80610440
    bool isActive() const;

    /// Get the current alpha value (0=transparent, 255=opaque).
    /// @addr 0x80610480
    u8 getAlpha() const;

    /// Get the transition type.
    /// @addr 0x80610500
    TransitionType getType() const;

    // --- Configuration ---

    /// Set the transition type.
    /// @addr 0x80610540
    void setType(TransitionType type);

    /// Configure wipe transition parameters.
    /// @addr 0x80610600
    void setWipeParams(const WipeParams& params);

    /// Configure dissolve transition parameters.
    /// @addr 0x80610700
    void setDissolveParams(const DissolveParams& params);

    /// Configure slide transition parameters.
    /// @addr 0x80610800
    void setSlideParams(const SlideParams& params);

    /// Skip to the end of the current transition.
    /// @addr 0x80610900
    void skip();

    /// Reset to idle state.
    /// @addr 0x80610980
    void reset();

    /// Set the speed multiplier for the transition.
    /// @addr 0x80610A00
    void setSpeed(f32 speed);

    /// Get current progress (0.0 = start, 1.0 = complete).
    /// @addr 0x80610A40
    f32 getProgress() const;

    // --- Callback ---

    /// Set the completion callback.
    /// @addr 0x80610A80
    void setCallback(TransitionCallback callback, void* userData = nullptr);

    /// Get the current transition phase.
    TransitionPhase getPhase() const { return m_phase; }

    /// Get the fade-out duration.
    s32 getFadeOutDuration() const { return m_fadeOutDuration; }

    /// Get the fade-in duration.
    s32 getFadeInDuration() const { return m_fadeInDuration; }

private:
    // --- Internal update helpers ---

    void updateFade();
    void updateWipe();
    void updateDissolve();
    void updateSlide();

    /// Fire the completion callback if set.
    void fireCallback();

    // Extended API
    // @addr 0x80610AC0
    void startFade(s32 targetScene, f32 duration);
    // @addr 0x80610B00
    void startWipe(s32 targetScene, f32 duration);
    // @addr 0x80610B40
    void update(f32 dt);
    // @addr 0x80610BC0
    void setColor(u8 r, u8 g, u8 b);
    // @addr 0x80610C00
    void setDuration(f32 durationSeconds);
    // @addr 0x80610C40
    void setHoldDuration(f32 holdSeconds);
    // @addr 0x80610C80
    f32 getHoldDuration() const;
    // @addr 0x80610CC0
    void startDissolve(f32 duration);
    // @addr 0x80610D00
    void startSlide(f32 duration, f32 direction);
    // @addr 0x80610D40
    const WipeParams& getWipeParams() const;
    // @addr 0x80610D80
    const DissolveParams& getDissolveParams() const;
    // @addr 0x80610DC0
    const SlideParams& getSlideParams() const;
    // @addr 0x80610E00
    void setFlags(u32 flags);
    // @addr 0x80610E20
    u32 getFlags() const;
    // @addr 0x80610E40
    f32 getFadeOutDurationSec() const;
    // @addr 0x80610E60
    f32 getFadeInDurationSec() const;

    // --- Members ---

    TransitionPhase    m_phase;           // 0x00 — Current phase
    TransitionType     m_type;            // 0x04 — Visual effect type
    s32                m_frameTimer;      // 0x08 — Frames elapsed in current phase
    s32                m_fadeOutDuration; // 0x0C — Fade-out frame count
    s32                m_fadeInDuration;  // 0x10 — Fade-in frame count
    s32                m_holdDuration;    // 0x14 — Hold-at-black frame count
    u8                 m_alpha;           // 0x18 — Current overlay alpha
    f32                m_progress;        // 0x1C — Normalized progress 0-1
    f32                m_speed;           // 0x20 — Speed multiplier

    // Transition-type-specific params
    WipeParams         m_wipeParams;      // 0x24
    DissolveParams     m_dissolveParams;  // 0x3C
    SlideParams        m_slideParams;     // 0x50

    // Callback
    TransitionCallback m_callback;        // 0x5C
    void*              m_callbackData;    // 0x60

    u32                m_flags;           // 0x64 — Transition flags
};

} // namespace Scene

// @addr 0x80610E80
u32 SceneTransition_getCurrentScene();
