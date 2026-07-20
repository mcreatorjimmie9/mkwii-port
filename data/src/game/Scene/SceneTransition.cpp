// SceneTransition.cpp — Visual Transition Effects System
// Address range: 0x80610000 - 0x80616000 (Gap 1 — scene transitions)

#include "SceneTransition.hpp"
#include <cstring>
#include <cmath>

namespace Scene {

SceneTransition::SceneTransition()
    : m_phase(PHASE_IDLE)
    , m_type(TRANS_TYPE_FADE)
    , m_frameTimer(0)
    , m_fadeOutDuration(30)
    , m_fadeInDuration(30)
    , m_holdDuration(0)
    , m_alpha(0)
    , m_progress(0.0f)
    , m_speed(1.0f)
    , m_callback(nullptr)
    , m_callbackData(nullptr)
    , m_flags(0) {
    std::memset(&m_wipeParams, 0, sizeof(m_wipeParams));
    std::memset(&m_dissolveParams, 0, sizeof(m_dissolveParams));
    std::memset(&m_slideParams, 0, sizeof(m_slideParams));

    // Defaults
    m_wipeParams.centerX = 0.5f;
    m_wipeParams.centerY = 0.5f;
    m_wipeParams.maxRadius = 1.0f;
    m_wipeParams.softness = 0.02f;
    m_wipeParams.segments = 64;

    m_dissolveParams.blockSize = 4.0f;
    m_dissolveParams.noiseScale = 1.0f;
    m_dissolveParams.patternSeed = 0;
    m_dissolveParams.patternType = 0;

    m_slideParams.direction = 0.0f;
    m_slideParams.distance = 1.0f;
    m_slideParams.easing = 0.3f;
}

SceneTransition::~SceneTransition() {
    reset();
}

// @addr 0x80610000
void SceneTransition::init() {
    m_phase = PHASE_IDLE;
    m_type = TRANS_TYPE_FADE;
    m_frameTimer = 0;
    m_fadeOutDuration = 30;
    m_fadeInDuration = 30;
    m_holdDuration = 0;
    m_alpha = 0;
    m_progress = 0.0f;
    m_speed = 1.0f;
    m_flags = 0;
    m_callback = nullptr;
    m_callbackData = nullptr;
}

// @addr 0x80610080
void SceneTransition::fadeIn(s32 duration) {
    m_phase = PHASE_FADE_IN;
    m_fadeInDuration = duration > 0 ? duration : 30;
    m_frameTimer = 0;
    m_progress = 0.0f;
}

// @addr 0x80610100
void SceneTransition::fadeOut(s32 duration) {
    m_phase = PHASE_FADE_OUT;
    m_fadeOutDuration = duration > 0 ? duration : 30;
    m_frameTimer = 0;
    m_progress = 0.0f;
}

// @addr 0x80610200
void SceneTransition::calc() {
    if (m_phase == PHASE_IDLE) return;

    switch (m_phase) {
    case PHASE_FADE_OUT:
        updateFade();
        // After fade-out completes, enter hold phase
        if (m_frameTimer >= m_fadeOutDuration) {
            if (m_holdDuration > 0) {
                m_phase = PHASE_HOLD;
                m_frameTimer = 0;
            } else {
                // No hold — fire callback and skip to fade-in
                fireCallback();
                m_phase = PHASE_FADE_IN;
                m_frameTimer = 0;
            }
        }
        break;

    case PHASE_HOLD:
        m_frameTimer++;
        m_alpha = 255;
        m_progress = 1.0f;
        if (m_frameTimer >= m_holdDuration) {
            fireCallback();
            m_phase = PHASE_FADE_IN;
            m_frameTimer = 0;
        }
        break;

    case PHASE_FADE_IN:
        updateFade();
        // After fade-in completes, go idle
        if (m_frameTimer >= m_fadeInDuration) {
            m_phase = PHASE_IDLE;
            m_alpha = 0;
            m_progress = 1.0f;
        }
        break;

    case PHASE_IDLE:
    default:
        break;
    }
}

void SceneTransition::updateFade() {
    // Advance frame timer with speed multiplier
    m_frameTimer++;

    s32 duration = 0;
    if (m_phase == PHASE_FADE_OUT) {
        duration = m_fadeOutDuration;
    } else if (m_phase == PHASE_FADE_IN) {
        duration = m_fadeInDuration;
    }

    if (duration <= 0) {
        m_progress = 1.0f;
        m_alpha = 255;
        return;
    }

    // Apply speed multiplier to effective timer
    f32 effectiveFrame = static_cast<f32>(m_frameTimer) * m_speed;
    m_progress = effectiveFrame / static_cast<f32>(duration);

    // Clamp
    if (m_progress > 1.0f) m_progress = 1.0f;

    // Compute alpha
    if (m_phase == PHASE_FADE_OUT) {
        // Alpha goes from 0 to 255
        m_alpha = static_cast<u8>(m_progress * 255.0f);
    } else {
        // Alpha goes from 255 to 0
        m_alpha = static_cast<u8>((1.0f - m_progress) * 255.0f);
    }
}

void SceneTransition::updateWipe() {
    // Wipe transitions use a circle/line reveal
    // For now, compute alpha based on wipe progress
    updateFade();
}

void SceneTransition::updateDissolve() {
    // Dissolve uses a noise-based pattern
    // Base alpha follows the same curve as fade
    updateFade();
}

void SceneTransition::updateSlide() {
    // Slide transitions move the scene instead of overlaying
    // Alpha stays at 0 for slides
    m_frameTimer++;
    s32 duration = (m_phase == PHASE_FADE_OUT) ? m_fadeOutDuration : m_fadeInDuration;
    if (duration > 0) {
        m_progress = static_cast<f32>(m_frameTimer) / static_cast<f32>(duration);
        if (m_progress > 1.0f) m_progress = 1.0f;
    }
    m_alpha = 0; // Slide doesn't use overlay alpha
}

// @addr 0x80610300
void SceneTransition::draw() {
    if (m_phase == PHASE_IDLE) return;
    if (m_alpha == 0 && m_type != TRANS_TYPE_SLIDE) return;

    // In the real game, this renders a full-screen black quad with
    // the current alpha, or a wipe/dissolve pattern.
    // For wipe: a circle mask centered on m_wipeParams center
    // For dissolve: a noise-patterned mask
    // For slide: an offset copy of the framebuffer
    // For now, the alpha value is the key output.
}

// @addr 0x80610400
bool SceneTransition::isComplete() const {
    return m_phase == PHASE_IDLE;
}

// @addr 0x80610440
bool SceneTransition::isActive() const {
    return m_phase != PHASE_IDLE;
}

// @addr 0x80610480
u8 SceneTransition::getAlpha() const {
    return m_alpha;
}

// @addr 0x80610500
TransitionType SceneTransition::getType() const {
    return m_type;
}

// @addr 0x80610540
void SceneTransition::setType(TransitionType type) {
    if (m_phase != PHASE_IDLE) return;
    m_type = type;
}

// @addr 0x80610600
void SceneTransition::setWipeParams(const WipeParams& params) {
    m_wipeParams = params;
}

// @addr 0x80610700
void SceneTransition::setDissolveParams(const DissolveParams& params) {
    m_dissolveParams = params;
}

// @addr 0x80610800
void SceneTransition::setSlideParams(const SlideParams& params) {
    m_slideParams = params;
}

// @addr 0x80610900
void SceneTransition::skip() {
    if (m_phase == PHASE_IDLE) return;

    if (m_phase == PHASE_FADE_OUT) {
        // Skip to end of fade-out
        fireCallback();
        m_phase = PHASE_FADE_IN;
        m_frameTimer = m_fadeInDuration;
        m_alpha = 0;
        m_progress = 1.0f;
    } else if (m_phase == PHASE_FADE_IN) {
        // Skip to end of fade-in
        m_phase = PHASE_IDLE;
        m_alpha = 0;
        m_progress = 1.0f;
    } else if (m_phase == PHASE_HOLD) {
        fireCallback();
        m_phase = PHASE_IDLE;
        m_alpha = 0;
        m_progress = 1.0f;
    }
}

// @addr 0x80610980
void SceneTransition::reset() {
    m_phase = PHASE_IDLE;
    m_frameTimer = 0;
    m_alpha = 0;
    m_progress = 0.0f;
    m_callback = nullptr;
    m_callbackData = nullptr;
    m_flags = 0;
}

// @addr 0x80610A00
void SceneTransition::setSpeed(f32 speed) {
    m_speed = speed > 0.0f ? speed : 1.0f;
}

// @addr 0x80610A40
f32 SceneTransition::getProgress() const {
    return m_progress;
}

// @addr 0x80610A80
void SceneTransition::setCallback(TransitionCallback callback, void* userData) {
    m_callback = callback;
    m_callbackData = userData;
}

void SceneTransition::fireCallback() {
    if (m_callback) {
        m_callback(m_callbackData);
    }
}

} // namespace Scene