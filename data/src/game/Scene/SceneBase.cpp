// SceneBase.cpp - Base scene class implementation
// Reconstructed from Scene module

#include "SceneBase.hpp"
#include <cstring>
#include <rk_types.h>
#include <decomp.h>

namespace Scene {

// @addr 0x805b0028
SceneBase::SceneBase()
    : m_state(STATE_UNINITIALIZED)
    , m_isTransitioning(false)
    , m_transitionFlags(0)
    , m_loadStatus(0)
    , m_loadSubStatus(0)
    , m_alphaFade(0xFF)
    , m_fadeTimerA(-1)
    , m_fadeTimerB(-1)
    , m_fadeCompleteA(0)
    , m_fadeCompleteB(0)
    , m_frameCount(0)
    , m_sceneId(0)
    , m_userData(nullptr)
    , m_fadeDurationA(FADE_DURATION_DEFAULT)
    , m_fadeDurationB(FADE_DURATION_DEFAULT) {}

// @addr 0x805b0060
SceneBase::~SceneBase() {}

// @addr 0x805b0080
void SceneBase::load() {
    // Default: mark as loading, clear progress
    m_state = STATE_LOADING;
    m_loadStatus = 0;
    m_loadSubStatus = 0;
}

// @addr 0x805b00a0
void SceneBase::unload() {
    // Return to uninitialized state
    m_state = STATE_UNINITIALIZED;
    // Clear fade state
    m_fadeTimerA = -1;
    m_fadeTimerB = -1;
    m_fadeCompleteA = 0;
    m_fadeCompleteB = 0;
    m_alphaFade = FADE_ALPHA_OPAQUE;
}

// @addr 0x805b00c0
void SceneBase::reset() {
    // Reset frame counter
    m_frameCount = 0;

    // Reset fade state to default (no active fade)
    m_fadeTimerA = -1;
    m_fadeTimerB = -1;
    m_fadeCompleteA = 0;
    m_fadeCompleteB = 0;
    m_alphaFade = FADE_ALPHA_OPAQUE;

    // Reset loading state
    m_loadStatus = 0;
    m_loadSubStatus = 0;

    // Reset transition state
    m_transitionFlags = 0;
    m_isTransitioning = false;
}

// @addr 0x805b00e0
void SceneBase::beginTransition() {
    // Start the fade-out phase (phase A)
    // Phase A fades FROM opaque TO transparent (or vice versa)
    m_isTransitioning = true;
    m_fadeTimerA = 0;
    m_fadeCompleteA = 0;

    // Phase B has not started yet
    m_fadeTimerB = -1;
    m_fadeCompleteB = 0;

    // Set the transition-in-progress flag
    m_transitionFlags |= 1;
}

// @addr 0x805b0100 (note: moved here as this is the logical ordering)
// Actually beginTransition was at the old position. The addresses
// for the new methods are assigned sequentially.
// @addr 0x805b0120
void SceneBase::endTransition() {
    // Mark transition as complete
    m_isTransitioning = false;
    m_fadeTimerB = -1;
    m_fadeCompleteB = 1;
    m_transitionFlags = 0;

    // Fully reveal the scene
    m_alphaFade = FADE_ALPHA_TRANSPARENT;
    m_state = STATE_ACTIVE;
}

// @addr 0x805b0100
// Advances fade timers and computes the current fade alpha.
// Two-phase fade: Phase A (fade out), Phase B (fade in).
// In MKW, the typical scene transition fades to black (phase A),
// swaps the scene, then fades from black (phase B).
void SceneBase::calcFade() {
    // --- Phase A: Fade out (screen goes dark) ---
    if (m_fadeTimerA >= 0) {
        // Advance timer
        m_fadeTimerA++;

        // Check if phase A is complete
        if (m_fadeTimerA >= m_fadeDurationA) {
            // Mark phase A as complete
            m_fadeCompleteA = 1;
            m_fadeTimerA = m_fadeDurationA;
            m_alphaFade = FADE_ALPHA_OPAQUE;

            // When phase A completes, phase B should begin
            // (the scene swap happens between phases)
            // Phase B is triggered externally by calling beginTransition's
            // second half, or automatically here
        } else {
            // Compute alpha for phase A: linearly interpolate
            // from transparent (0) to opaque (255) as timer advances
            f32 t = (f32)m_fadeTimerA / (f32)m_fadeDurationA;
            if (t < 0.0f) {
                t = 0.0f;
            }
            if (t > 1.0f) {
                t = 1.0f;
            }
            // In MKW's actual implementation, the interpolation may use
            // a smoothstep or ease-in-out curve rather than linear.
            // Using a simple lerp here as a safe default:
            m_alphaFade = (u8)(t * (f32)FADE_ALPHA_OPAQUE);
        }
    }

    // --- Phase B: Fade in (screen becomes visible) ---
    if (m_fadeTimerB >= 0) {
        // Advance timer
        m_fadeTimerB++;

        // Check if phase B is complete
        if (m_fadeTimerB >= m_fadeDurationB) {
            // Mark phase B as complete — fully visible
            m_fadeCompleteB = 1;
            m_fadeTimerB = m_fadeDurationB;
            m_alphaFade = FADE_ALPHA_TRANSPARENT;
        } else {
            // Compute alpha for phase B: linearly interpolate
            // from opaque (255) to transparent (0) as timer advances
            f32 t = (f32)m_fadeTimerB / (f32)m_fadeDurationB;
            if (t < 0.0f) {
                t = 0.0f;
            }
            if (t > 1.0f) {
                t = 1.0f;
            }
            m_alphaFade = (u8)((1.0f - t) * (f32)FADE_ALPHA_OPAQUE);
        }
    }

    // If neither fade is active and scene is transitioning,
    // check if we should auto-start phase B after phase A completes
    if (m_fadeCompleteA && m_fadeTimerB < 0) {
        // Phase A finished, waiting for external code to trigger phase B
        // This is typically done by SceneDirector after swapping scenes.
        // Do nothing here — the director calls a method to start phase B.
    }
}

// @addr 0x805b0140
// Returns true if either fade phase is currently running.
bool SceneBase::isFading() const {
    // A fade is active if either timer is running (>= 0) and not yet complete
    bool phaseAActive = (m_fadeTimerA >= 0 && !m_fadeCompleteA);
    bool phaseBActive = (m_fadeTimerB >= 0 && !m_fadeCompleteB);
    return phaseAActive || phaseBActive;
}

// @addr 0x805b0160
// Sets the current fade alpha value directly.
// This is used for immediate fade adjustments, e.g., when
// a scene needs to skip the animation and snap to a specific alpha.
void SceneBase::setFadeColor(u8 alpha) {
    m_alphaFade = alpha;

    // If alpha is fully transparent, both fades are effectively done
    if (alpha == FADE_ALPHA_TRANSPARENT) {
        m_fadeTimerA = -1;
        m_fadeTimerB = -1;
        m_fadeCompleteA = 1;
        m_fadeCompleteB = 1;
    }
    // If alpha is fully opaque, we're in the middle of a fade-out
    else if (alpha == FADE_ALPHA_OPAQUE) {
        m_fadeCompleteA = 1;
        m_fadeTimerB = -1;
    }
}

// @addr 0x805b0170
// Gets the current fade alpha value.
u8 SceneBase::getFadeAlpha() const {
    return m_alphaFade;
}

// @addr 0x805b0180
// Updates loading status and sub-status fields.
// These are used by the loading screen UI to display progress.
// The status field typically indicates the major loading phase
// (e.g., 0=not started, 1=loading course, 2=loading objects, etc.)
// The subStatus field provides finer granularity within each phase.
void SceneBase::setLoadProgress(u32 status, u32 subStatus) {
    m_loadStatus = status;
    m_loadSubStatus = subStatus;

    // Automatically update scene state based on loading progress
    if (status > 0 && m_state == STATE_LOADING) {
        // Still loading — progress is being made
    }

    // The transition to STATE_READY is handled by the derived scene
    // when it detects that all loading is complete.
}

// @addr 0x805b0190
// Returns loading progress as a float in [0.0, 1.0].
// In MKW, loading uses a multi-phase system where:
//   - m_loadStatus represents the current major phase
//   - m_loadSubStatus represents progress within that phase
// A simple heuristic: progress = (status + subStatus/maxSub) / totalPhases
// For now, we use a normalized formula based on typical MKW loading:
//   Total phases = 4 (course, models, textures, audio)
//   Each subStatus ranges 0-100
f32 SceneBase::getLoadProgress() const {
    // Total number of major loading phases in MKW
    static const u32 TOTAL_PHASES = 4;
    // Max value for sub-status within a phase
    static const f32 MAX_SUB_STATUS = 100.0f;

    if (m_loadStatus >= TOTAL_PHASES) {
        return 1.0f;
    }

    // Compute progress: fraction of completed phases + partial current phase
    f32 completedPhases = (f32)m_loadStatus;
    f32 currentPhaseProgress = (f32)m_loadSubStatus / MAX_SUB_STATUS;
    if (currentPhaseProgress < 0.0f) {
        currentPhaseProgress = 0.0f;
    }
    if (currentPhaseProgress > 1.0f) {
        currentPhaseProgress = 1.0f;
    }

    f32 totalProgress = (completedPhases + currentPhaseProgress) / (f32)TOTAL_PHASES;
    if (totalProgress > 1.0f) {
        totalProgress = 1.0f;
    }
    if (totalProgress < 0.0f) {
        totalProgress = 0.0f;
    }

    return totalProgress;
}

// @addr 0x805b01a0
// Sets the scene identifier.
// This is typically set by the SceneDirector when creating a scene,
// and is used for routing and lookup.
void SceneBase::setSceneId(u32 id) {
    m_sceneId = id;
}

// @addr 0x805b01b0
// Gets the scene identifier.
// Note: This is a non-virtual fallback. The pure virtual getSceneId()
// declared above should be implemented by derived classes. This
// accessor returns the stored m_sceneId which setSceneId() sets.
// Derived classes that override the pure virtual should still call
// setSceneId() to keep m_sceneId in sync.
u32 SceneBase::getSceneId() const {
    return m_sceneId;
}

// @addr 0x805b01c0
// Sets generic user data pointer.
// This allows the SceneDirector or other systems to attach
// context data to a scene instance (e.g., the selected course ID,
// game mode parameters, or network session info).
void SceneBase::setUserData(void* data) {
    m_userData = data;
}

// @addr 0x805b01d0
// Gets the generic user data pointer.
void* SceneBase::getUserData() const {
    return m_userData;
}

} // namespace Scene