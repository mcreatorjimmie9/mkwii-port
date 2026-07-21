// =============================================================================
// GameMenu.cpp — Pre-race start menu implementation (M10 Polish)
// =============================================================================

#include "game/GameMenu.hpp"
#include "game/BitmapFont.hpp"
#include <cstdio>
#include <cstring>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

GameMenu::GameMenu()
    : m_started(false), m_timer(0.0f), m_font(nullptr) {
    m_trackName[0] = '\0';
}

GameMenu::~GameMenu() {}

void GameMenu::init(const char* trackName) {
    m_started = false;
    m_timer = 0.0f;
    if (trackName) {
        std::snprintf(m_trackName, sizeof(m_trackName), "%s", trackName);
    } else {
        m_trackName[0] = '\0';
    }
}

bool GameMenu::initGL() {
    // Font is shared from main — we just need a pointer.
    // The caller should set m_font or we create a local one.
    // For simplicity, we use a static font instance.
    static BitmapFont s_menuFont;
    static bool s_inited = false;
    if (!s_inited) {
        s_menuFont.initGL();
        s_inited = true;
    }
    m_font = &s_menuFont;
    return true;
}

void GameMenu::cleanupGL() {
    m_font = nullptr;
}

bool GameMenu::update(f32 dt, bool enterPressed) {
    if (m_started) return false;
    m_timer += dt;
    if (enterPressed && m_timer > 0.5f) {
        m_started = true;
        return true;
    }
    return false;
}

void GameMenu::render(u32 screenW, u32 screenH) {
#ifdef HAS_OPENGL
    if (!m_font) return;

    GL3::gl.glEnable(GL3::GL_BLEND);
    GL3::gl.glBlendFunc(GL3::GL_SRC_ALPHA, GL3::GL_ONE_MINUS_SRC_ALPHA);
    GL3::gl.glDisable(GL3::GL_DEPTH_TEST);

    f32 pw = static_cast<f32>(screenW);
    f32 ph = static_cast<f32>(screenH);

    // Dark blue background
    m_font->drawRect(0, 0, pw, ph, 0.05f, 0.05f, 0.2f, 1.0f, screenW, screenH);

    // Decorative horizontal stripes (animated)
    f32 stripeY = (m_timer * 30.0f) - ph;
    for (f32 sy = stripeY; sy < ph; sy += 80.0f) {
        m_font->drawRect(0, sy, pw, 2.0f, 0.1f, 0.1f, 0.4f, 0.3f, screenW, screenH);
    }

    // Title: "MARIO KART" in large text
    f32 titleScale = 8.0f;
    const char* titleStr = "MARIO KART";
    f32 titleW = m_font->measureText(titleStr, titleScale);
    f32 titleX = (pw - titleW) * 0.5f;
    f32 titleY = ph * 0.22f;
    // Shadow
    m_font->drawText(titleX + 4.0f, titleY + 4.0f, titleStr,
                     0.0f, 0.0f, 0.0f, 0.5f, titleScale, screenW, screenH);
    // Main text — red
    m_font->drawText(titleX, titleY, titleStr,
                     1.0f, 0.2f, 0.1f, 1.0f, titleScale, screenW, screenH);

    // Subtitle: "Wii PC Port" in medium text
    f32 subScale = 4.0f;
    const char* subStr = "Wii PC Port";
    f32 subW = m_font->measureText(subStr, subScale);
    f32 subX = (pw - subW) * 0.5f;
    f32 subY = titleY + m_font->getCharHeight(titleScale) + 20.0f;
    m_font->drawText(subX, subY, subStr,
                     1.0f, 0.8f, 0.0f, 1.0f, subScale, screenW, screenH);

    // Track name
    if (m_trackName[0] != '\0') {
        f32 trackScale = 3.0f;
        f32 trackW = m_font->measureText(m_trackName, trackScale);
        f32 trackX = (pw - trackW) * 0.5f;
        f32 trackY = subY + m_font->getCharHeight(subScale) + 40.0f;
        m_font->drawText(trackX, trackY, m_trackName,
                         0.6f, 0.8f, 1.0f, 0.8f, trackScale, screenW, screenH);
    }

    // "PRESS ENTER TO START" — blinking
    bool visible = (static_cast<int>(m_timer * 2.0f) % 2) == 0;
    if (visible) {
        f32 promptScale = 3.5f;
        const char* promptStr = "PRESS ENTER TO START";
        f32 promptW = m_font->measureText(promptStr, promptScale);
        f32 promptX = (pw - promptW) * 0.5f;
        f32 promptY = ph * 0.65f;
        m_font->drawText(promptX, promptY, promptStr,
                         1.0f, 1.0f, 1.0f, 1.0f, promptScale, screenW, screenH);
    }

    // Controls help
    f32 helpScale = 2.0f;
    const char* helpStr = "WASD=Drive  SPACE=Item  ESC=Quit";
    f32 helpW = m_font->measureText(helpStr, helpScale);
    f32 helpX = (pw - helpW) * 0.5f;
    f32 helpY = ph * 0.82f;
    m_font->drawText(helpX, helpY, helpStr,
                     0.4f, 0.4f, 0.6f, 0.6f, helpScale, screenW, screenH);

    GL3::gl.glDisable(GL3::GL_BLEND);
    GL3::gl.glEnable(GL3::GL_DEPTH_TEST);
#else
    (void)screenW; (void)screenH;
#endif
}
