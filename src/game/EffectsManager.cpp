// =============================================================================
// EffectsManager.cpp — Visual effects implementation (M10 Polish)
// =============================================================================

#include "game/EffectsManager.hpp"
#include "game/BitmapFont.hpp"
#include <cmath>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

EffectsManager::EffectsManager()
    : m_boostActive(false), m_boostTimer(0.0f), m_boostDuration(1.0f)
    , m_starActive(false), m_starTimer(0.0f), m_starDuration(8.0f)
    , m_hitActive(false), m_hitTimer(0.0f), m_hitDuration(0.5f)
    , m_currentSpeed(0.0f), m_font(nullptr) {}

EffectsManager::~EffectsManager() {}

bool EffectsManager::initGL() {
    // Use a static shared font instance
    static BitmapFont s_fxFont;
    static bool s_inited = false;
    if (!s_inited) {
        s_fxFont.initGL();
        s_inited = true;
    }
    m_font = &s_fxFont;
    return true;
}

void EffectsManager::cleanupGL() {
    m_font = nullptr;
}

void EffectsManager::triggerBoost(f32 duration) {
    m_boostActive = true;
    m_boostTimer = duration;
    m_boostDuration = duration;
}

void EffectsManager::triggerStar(f32 duration) {
    m_starActive = true;
    m_starTimer = duration;
    m_starDuration = duration;
}

void EffectsManager::triggerHit(f32 duration) {
    m_hitActive = true;
    m_hitTimer = duration;
    m_hitDuration = duration;
}

void EffectsManager::update(f32 speed, f32 dt) {
    m_currentSpeed = speed;

    if (m_boostActive) {
        m_boostTimer -= dt;
        if (m_boostTimer <= 0.0f) {
            m_boostActive = false;
            m_boostTimer = 0.0f;
        }
    }

    if (m_starActive) {
        m_starTimer -= dt;
        if (m_starTimer <= 0.0f) {
            m_starActive = false;
            m_starTimer = 0.0f;
        }
    }

    if (m_hitActive) {
        m_hitTimer -= dt;
        if (m_hitTimer <= 0.0f) {
            m_hitActive = false;
            m_hitTimer = 0.0f;
        }
    }
}

void EffectsManager::drawVignette(f32 r, f32 g, f32 b, f32 a,
                                    u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_font) return;

    f32 pw = static_cast<f32>(screenW);
    f32 ph = static_cast<f32>(screenH);
    f32 border = 60.0f;

    // Top bar
    m_font->drawRect(0, 0, pw, border, r, g, b, a, screenW, screenH);
    // Bottom bar
    m_font->drawRect(0, ph - border, pw, border, r, g, b, a, screenW, screenH);
    // Left bar
    m_font->drawRect(0, 0, border, ph, r, g, b, a * 0.5f, screenW, screenH);
    // Right bar
    m_font->drawRect(pw - border, 0, border, ph, r, g, b, a * 0.5f, screenW, screenH);
#else
    (void)r; (void)g; (void)b; (void)a; (void)screenW; (void)screenH;
#endif
}

void EffectsManager::render(u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_font) return;

    GL3::gl.glEnable(GL3::GL_BLEND);
    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);
    GL3::gl.glDisable(GL3::GL_DEPTH_TEST);

    // Speed lines vignette (always active when fast)
    f32 speedRatio = m_currentSpeed / 3000.0f;
    if (speedRatio > 0.5f) {
        f32 intensity = (speedRatio - 0.5f) * 2.0f;  // 0 to 1
        if (intensity > 1.0f) intensity = 1.0f;
        drawVignette(0.8f, 0.8f, 1.0f, intensity * 0.15f, screenW, screenH);
    }

    // Boost flash — orange vignette
    if (m_boostActive) {
        f32 t = m_boostTimer / m_boostDuration;  // 1 -> 0
        f32 alpha = t * 0.4f;
        drawVignette(1.0f, 0.6f, 0.0f, alpha, screenW, screenH);
    }

    // Star invincibility — rainbow cycling
    if (m_starActive) {
        f32 t = m_starTimer / m_starDuration;  // 1 -> 0
        f32 alpha = std::min(t * 2.0f, 1.0f) * 0.3f;

        // Rainbow color cycling
        f32 phase = m_starTimer * 4.0f;
        f32 cr = 0.5f + 0.5f * std::sin(phase);
        f32 cg = 0.5f + 0.5f * std::sin(phase + 2.094f);
        f32 cb = 0.5f + 0.5f * std::sin(phase + 4.189f);

        drawVignette(cr, cg, cb, alpha, screenW, screenH);
    }

    // Hit flash — red full screen
    if (m_hitActive) {
        f32 t = m_hitTimer / m_hitDuration;
        f32 alpha = t * 0.5f;
        f32 pw = static_cast<f32>(screenW);
        f32 ph = static_cast<f32>(screenH);
        m_font->drawRect(0, 0, pw, ph, 1.0f, 0.0f, 0.0f, alpha, screenW, screenH);
    }

    GL3::gl.glDisable(GL3::GL_BLEND);
    GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
#else
    (void)screenW; (void)screenH;
#endif
}
