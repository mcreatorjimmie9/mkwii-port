#include "Skybox.hpp"
#include <math.h>

namespace Scene {

Skybox::Skybox()
    : m_fogStart(500.0f)
    , m_fogEnd(2000.0f)
    , m_fogDensity(0.0f)
    , m_weatherType(WEATHER_CLEAR)
    , m_rainIntensity(0.0f)
    , m_weatherTimer(0.0f)
    , m_skyboxId(0xFFFFFFFF)
    , m_loaded(false)
    , m_skyModelRes(nullptr) {
    for (s32 i = 0; i < 6; i++) m_skyTextures[i] = nullptr;
    m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
    m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
    m_skyColorBottom[0] = 200; m_skyColorBottom[1] = 220; m_skyColorBottom[2] = 240;
    m_fogColor[0] = 200; m_fogColor[1] = 220; m_fogColor[2] = 240;
}

Skybox::~Skybox() {}

void Skybox::init() {
    m_weatherType = WEATHER_CLEAR;
    m_rainIntensity = 0.0f;
    m_weatherTimer = 0.0f;
    m_fogDensity = 0.0f;
    m_skyboxId = 0xFFFFFFFF;
    m_loaded = false;
    m_skyModelRes = nullptr;
    for (s32 i = 0; i < 6; i++) m_skyTextures[i] = nullptr;

    // Default clear sky colors
    m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
    m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
    m_skyColorBottom[0] = 200; m_skyColorBottom[1] = 220; m_skyColorBottom[2] = 240;
    m_fogColor[0] = 200; m_fogColor[1] = 220; m_fogColor[2] = 240;
    m_fogStart = 500.0f;
    m_fogEnd = 2000.0f;
}

void Skybox::load(u32 skyboxId) {
    m_skyboxId = skyboxId;

    // In the real game, this loads:
    // 1. Sky dome model (BMD/BDL) from course archive
    // 2. Sky texture set (BRRES) — typically 6 cube map faces
    // 3. Sky animation data (if the course has animated sky)

    // Set default colors based on skybox ID
    // Different courses have different sky themes
    switch (skyboxId) {
    default:
        // Default: bright blue sky
        m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
        m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
        break;
    }

    m_loaded = true;
}

void Skybox::update(f32 timeOfDay) {
    if (!m_loaded) return;

    // Update sky colors based on time of day
    updateSkyColors(timeOfDay);

    // Update weather effects (rain, fog)
    m_weatherTimer += (1.0f / 60.0f);
    updateWeatherEffects(1.0f / 60.0f);
}

void Skybox::updateSkyColors(f32 timeOfDay) {
    // Simple time-of-day color model:
    // timeOfDay 0.0 = midnight, 0.25 = sunrise, 0.5 = noon, 0.75 = sunset

    // Define key colors at different times
    // Noon sky (bright blue)
    static const u8 noonTop[3]     = {100, 150, 255};
    static const u8 noonHorizon[3] = {180, 210, 255};

    // Sunset sky (orange/pink)
    static const u8 sunsetTop[3]     = {80, 60, 120};
    static const u8 sunsetHorizon[3] = {255, 140, 60};

    // Night sky (dark blue/black)
    static const u8 nightTop[3]     = {10, 10, 40};
    static const u8 nightHorizon[3] = {20, 20, 60};

    // Calculate interpolation factors
    f32 dayFactor = sinf(timeOfDay * 3.14159f); // 0 at night, 1 at noon
    f32 sunsetFactor = 0.0f;

    // Sunrise/sunset peaks at timeOfDay ~0.2 and ~0.8
    f32 sunrise = fabsf(timeOfDay - 0.2f);
    f32 sunset  = fabsf(timeOfDay - 0.8f);
    f32 minSunTime = sunrise < sunset ? sunrise : sunset;
    if (minSunTime < 0.15f) {
        sunsetFactor = 1.0f - (minSunTime / 0.15f);
    }

    // Interpolate between night and day
    for (s32 i = 0; i < 3; i++) {
        f32 dayColor = (f32)nightTop[i] + ((f32)noonTop[i] - (f32)nightTop[i]) * dayFactor;
        f32 sunsetColor = (f32)sunsetTop[i] * sunsetFactor;
        m_skyColorTop[i] = (u8)(dayColor + sunsetColor * (1.0f - dayFactor));
        if (m_skyColorTop[i] > 255) m_skyColorTop[i] = 255;

        f32 dayHColor = (f32)nightHorizon[i] + ((f32)noonHorizon[i] - (f32)nightHorizon[i]) * dayFactor;
        f32 sunsetHColor = (f32)sunsetHorizon[i] * sunsetFactor;
        m_skyColorHorizon[i] = (u8)(dayHColor + sunsetHColor * (1.0f - dayFactor));
        if (m_skyColorHorizon[i] > 255) m_skyColorHorizon[i] = 255;
    }

    // Fog color tracks horizon color
    for (s32 i = 0; i < 3; i++) {
        m_fogColor[i] = m_skyColorHorizon[i];
    }
}

void Skybox::updateWeatherEffects(f32 dt) {
    (void)dt;

    switch (m_weatherType) {
    case WEATHER_CLEAR:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.0f;
        m_fogStart = 500.0f;
        m_fogEnd = 2000.0f;
        break;

    case WEATHER_RAIN:
        m_rainIntensity = 0.6f;
        m_fogDensity = 0.002f;
        m_fogStart = 300.0f;
        m_fogEnd = 1000.0f;
        // Darken sky slightly
        for (s32 i = 0; i < 3; i++) {
            m_skyColorTop[i] = (u8)(m_skyColorTop[i] * 0.7f);
            m_skyColorHorizon[i] = (u8)(m_skyColorHorizon[i] * 0.8f);
        }
        break;

    case WEATHER_FOG:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.005f;
        m_fogStart = 100.0f;
        m_fogEnd = 500.0f;
        break;

    case WEATHER_STORM:
        m_rainIntensity = 1.0f;
        m_fogDensity = 0.004f;
        m_fogStart = 200.0f;
        m_fogEnd = 800.0f;
        // Darken sky significantly
        for (s32 i = 0; i < 3; i++) {
            m_skyColorTop[i] = (u8)(m_skyColorTop[i] * 0.4f);
            m_skyColorHorizon[i] = (u8)(m_skyColorHorizon[i] * 0.5f);
        }
        break;

    case WEATHER_SNOW:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.003f;
        m_fogStart = 200.0f;
        m_fogEnd = 800.0f;
        break;

    default:
        break;
    }
}

void Skybox::setWeather(u32 weatherType) {
    if (weatherType < WEATHER_COUNT) {
        m_weatherType = (WeatherType)weatherType;
    }
}

void Skybox::draw() {
    if (!m_loaded) return;

    // Render sky dome:
    // 1. Disable depth write (sky is always behind everything)
    // 2. Disable depth test (or set depth to maximum)
    // 3. Set sky model view matrix (camera rotation only, no translation)
    // 4. Draw sky dome model with vertex colors or texture
    // 5. Re-enable depth write/test

    // GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE)
    // GXLoadPosMtxImm(skyViewMtx, GX_PNMTX0)
    // GXCallDisplayList(skyDlist, dlistSize)
    // GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE)
}

} // namespace Scene