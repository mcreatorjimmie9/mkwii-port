#include "Skybox.hpp"
#include <math.h>

namespace Scene {

// Known MKWii course IDs with distinctive sky themes
static const u32 COURSE_MUSHROOM_GORGE   = 0x09;
static const u32 COURSE_GRUMBLE_VOLCANO  = 0x15;
static const u32 COURSE_COCONUT_MALL     = 0x19;
static const u32 COURSE_DK_SUMMIT        = 0x1C;
static const u32 COURSE_BOWSER_CASTLE    = 0x22;
static const u32 COURSE_RAINBOW_ROAD     = 0x25;
static const u32 COURSE_MOONVIEW_HIGHWAY = 0x1E;
static const u32 COURSE_TOAD_HARBOR      = 0x04;

// Cosine blend for smoother S-curve interpolation
static inline f32 cosBlend(f32 t) {
    return (1.0f - cosf(t * 3.14159265f)) * 0.5f;
}

static inline u8 clampU8(f32 v) {
    return v < 0.0f ? 0 : (v > 255.0f ? 255 : (u8)v);
}

// =============================================================================
// Skybox
// =============================================================================

Skybox::Skybox()
    : m_fogStart(500.0f)
    , m_fogEnd(2000.0f)
    , m_fogDensity(0.0f)
    , m_weatherType(WEATHER_CLEAR)
    , m_rainIntensity(0.0f)
    , m_weatherTimer(0.0f)
    , m_rainSpawnAccum(0.0f)
    , m_skyboxId(0xFFFFFFFF)
    , m_loaded(false)
    , m_skyModelRes(nullptr)
    , m_skyOverride(false) {
    for (s32 i = 0; i < 6; i++) m_skyTextures[i] = nullptr;
    m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
    m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
    m_skyColorBottom[0] = 200; m_skyColorBottom[1] = 220; m_skyColorBottom[2] = 240;
    m_fogColor[0] = 200; m_fogColor[1] = 220; m_fogColor[2] = 240;
    m_overrideTop[0] = 0; m_overrideTop[1] = 0; m_overrideTop[2] = 0;
    m_overrideHorizon[0] = 0; m_overrideHorizon[1] = 0; m_overrideHorizon[2] = 0;
    m_overrideBottom[0] = 0; m_overrideBottom[1] = 0; m_overrideBottom[2] = 0;
}

Skybox::~Skybox() {}

void Skybox::init() {
    m_weatherType = WEATHER_CLEAR;
    m_rainIntensity = 0.0f;
    m_weatherTimer = 0.0f;
    m_rainSpawnAccum = 0.0f;
    m_fogDensity = 0.0f;
    m_skyboxId = 0xFFFFFFFF;
    m_loaded = false;
    m_skyModelRes = nullptr;
    m_skyOverride = false;
    for (s32 i = 0; i < 6; i++) m_skyTextures[i] = nullptr;

    m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
    m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
    m_skyColorBottom[0] = 200; m_skyColorBottom[1] = 220; m_skyColorBottom[2] = 240;
    m_fogColor[0] = 200; m_fogColor[1] = 220; m_fogColor[2] = 240;
    m_fogStart = 500.0f;
    m_fogEnd = 2000.0f;
}

// =============================================================================
// load - Course-specific skybox themes
// @addr 0x80524000
// =============================================================================

void Skybox::load(u32 skyboxId) {
    m_skyboxId = skyboxId;

    // Each MKW course has a distinctive sky palette.
    struct SkyTheme { u32 id; u8 top[3]; u8 hor[3]; u8 bot[3]; };
    static const SkyTheme themes[] = {
        {COURSE_MUSHROOM_GORGE,  {140,180,200}, {180,200,170}, {160,180,140}},
        {COURSE_GRUMBLE_VOLCANO, {40,20,30},    {120,50,20},   {80,30,10}},
        {COURSE_COCONUT_MALL,    {240,240,250}, {220,220,230}, {200,200,210}},
        {COURSE_DK_SUMMIT,       {160,190,220}, {200,215,230}, {220,230,240}},
        {COURSE_BOWSER_CASTLE,   {20,10,30},    {60,30,50},    {40,20,30}},
        {COURSE_RAINBOW_ROAD,    {100,50,200},  {200,100,255}, {255,200,100}},
        {COURSE_MOONVIEW_HIGHWAY,{10,10,40},    {30,25,60},    {20,20,50}},
        {COURSE_TOAD_HARBOR,     {80,140,255},  {200,220,255}, {180,210,230}},
    };

    bool matched = false;
    for (s32 t = 0; t < (s32)(sizeof(themes) / sizeof(themes[0])); t++) {
        if (themes[t].id == skyboxId) {
            for (s32 i = 0; i < 3; i++) {
                m_skyColorTop[i] = themes[t].top[i];
                m_skyColorHorizon[i] = themes[t].hor[i];
                m_skyColorBottom[i] = themes[t].bot[i];
            }
            matched = true;
            break;
        }
    }
    if (!matched) {
        m_skyColorTop[0] = 100; m_skyColorTop[1] = 150; m_skyColorTop[2] = 255;
        m_skyColorHorizon[0] = 180; m_skyColorHorizon[1] = 210; m_skyColorHorizon[2] = 255;
        m_skyColorBottom[0] = 200; m_skyColorBottom[1] = 220; m_skyColorBottom[2] = 240;
    }

    m_loaded = true;
}

void Skybox::update(f32 timeOfDay) {
    if (!m_loaded) return;

    // If cutscene override is active, skip time-of-day update
    if (m_skyOverride) {
        for (s32 i = 0; i < 3; i++) {
            m_skyColorTop[i] = m_overrideTop[i];
            m_skyColorHorizon[i] = m_overrideHorizon[i];
            m_skyColorBottom[i] = m_overrideBottom[i];
            m_fogColor[i] = m_overrideHorizon[i];
        }
        return;
    }

    updateSkyColors(timeOfDay);
    m_weatherTimer += (1.0f / 60.0f);
    updateWeatherEffects(1.0f / 60.0f);
}

// =============================================================================
// updateSkyColors - Cosine-blended time-of-day interpolation
// @addr 0x80524200
// =============================================================================

void Skybox::updateSkyColors(f32 timeOfDay) {
    // Key colors at different times
    static const u8 noonTop[3]     = {100, 150, 255};
    static const u8 noonHorizon[3] = {180, 210, 255};

    static const u8 sunsetTop[3]     = {80, 60, 120};
    static const u8 sunsetHorizon[3] = {255, 140, 60};

    static const u8 nightTop[3]     = {10, 10, 40};
    static const u8 nightHorizon[3] = {20, 20, 60};

    // Cosine-blended day factor: smoother S-curve than sin()
    f32 rawDay = sinf(timeOfDay * 3.14159f);
    f32 dayFactor = cosBlend(rawDay); // 0 at night, 1 at noon

    // Sunset peaks near timeOfDay ~0.2 and ~0.8
    f32 sunrise = fabsf(timeOfDay - 0.2f);
    f32 sunset  = fabsf(timeOfDay - 0.8f);
    f32 minSunTime = sunrise < sunset ? sunrise : sunset;
    f32 sunsetFactor = 0.0f;
    if (minSunTime < 0.15f) {
        sunsetFactor = 1.0f - cosBlend(minSunTime / 0.15f);
    }

    // Interpolate top color: night <-> noon with sunset blend
    for (s32 i = 0; i < 3; i++) {
        f32 dayC = (f32)nightTop[i] + ((f32)noonTop[i] - (f32)nightTop[i]) * dayFactor;
        f32 sunC = (f32)sunsetTop[i] * sunsetFactor;
        m_skyColorTop[i] = clampU8(dayC + sunC * (1.0f - dayFactor));
    }

    // Interpolate horizon color
    for (s32 i = 0; i < 3; i++) {
        f32 dayC = (f32)nightHorizon[i] + ((f32)noonHorizon[i] - (f32)nightHorizon[i]) * dayFactor;
        f32 sunC = (f32)sunsetHorizon[i] * sunsetFactor;
        m_skyColorHorizon[i] = clampU8(dayC + sunC * (1.0f - dayFactor));
    }

    // Bottom color is a blend of horizon and fog
    for (s32 i = 0; i < 3; i++) {
        m_skyColorBottom[i] = clampU8((f32)m_skyColorHorizon[i] * 1.05f);
    }

    // Fog color tracks horizon color
    for (s32 i = 0; i < 3; i++) {
        m_fogColor[i] = m_skyColorHorizon[i];
    }
}

// =============================================================================
// updateWeatherEffects - Rain particle spawn rate + fog adjustments
// @addr 0x80524400
// =============================================================================

void Skybox::updateWeatherEffects(f32 dt) {
    switch (m_weatherType) {
    case WEATHER_CLEAR:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.0f;
        m_fogStart = 500.0f;
        m_fogEnd = 2000.0f;
        m_rainSpawnAccum = 0.0f;
        break;

    case WEATHER_RAIN: {
        m_rainIntensity = 0.6f;
        m_fogDensity = 0.002f;
        m_fogStart = 300.0f;
        m_fogEnd = 1000.0f;
        for (s32 i = 0; i < 3; i++) {
            m_skyColorTop[i] = (u8)(m_skyColorTop[i] * 0.7f);
            m_skyColorHorizon[i] = (u8)(m_skyColorHorizon[i] * 0.8f);
        }
        // Rain particle spawn rate: ~120 particles/sec
        m_rainSpawnAccum += dt * 120.0f;
        while (m_rainSpawnAccum >= 1.0f) {
            m_rainSpawnAccum -= 1.0f;
            // spawnRainDrop() would be called here
        }
        break;
    }

    case WEATHER_FOG:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.005f;
        m_fogStart = 100.0f;
        m_fogEnd = 500.0f;
        m_rainSpawnAccum = 0.0f;
        break;

    case WEATHER_STORM: {
        m_rainIntensity = 1.0f;
        m_fogDensity = 0.004f;
        m_fogStart = 200.0f;
        m_fogEnd = 800.0f;
        for (s32 i = 0; i < 3; i++) {
            m_skyColorTop[i] = (u8)(m_skyColorTop[i] * 0.4f);
            m_skyColorHorizon[i] = (u8)(m_skyColorHorizon[i] * 0.5f);
        }
        // Heavy rain: ~300 particles/sec
        m_rainSpawnAccum += dt * 300.0f;
        while (m_rainSpawnAccum >= 1.0f) {
            m_rainSpawnAccum -= 1.0f;
            // spawnRainDrop() would be called here
        }
        break;
    }

    case WEATHER_SNOW:
        m_rainIntensity = 0.0f;
        m_fogDensity = 0.003f;
        m_fogStart = 200.0f;
        m_fogEnd = 800.0f;
        m_rainSpawnAccum = 0.0f;
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

// =============================================================================
// setFogParams - Override fog start/end/density
// @addr 0x80524600
// =============================================================================

void Skybox::setFogParams(f32 start, f32 end, f32 density) {
    if (start >= 0.0f) m_fogStart = start;
    if (end > start) m_fogEnd = end;
    if (density >= 0.0f) m_fogDensity = density;
}

// =============================================================================
// getAmbientLightColor - Derived from sky color for dynamic lighting
// @addr 0x80524640
// =============================================================================

void Skybox::getAmbientLightColor(u8* r, u8* g, u8* b) const {
    // Ambient is a dimmed blend of horizon color, used by
    // GXSetChanAmbColor(GX_COLOR0, ...) for course geometry lighting.
    *r = clampU8((f32)m_skyColorHorizon[0] * 0.5f);
    *g = clampU8((f32)m_skyColorHorizon[1] * 0.5f);
    *b = clampU8((f32)m_skyColorHorizon[2] * 0.6f);
}

// =============================================================================
// loadSkyTextures - Assign 6 cube face texture resources
// @addr 0x80524700
// =============================================================================

void Skybox::loadSkyTextures(void* faceTextures[6]) {
    if (!faceTextures) return;
    // Order: +X, -X, +Y, -Y, +Z, -Z (OpenGL cube map convention)
    for (s32 i = 0; i < 6; i++) {
        m_skyTextures[i] = faceTextures[i];
    }
}

// =============================================================================
// setSkyOverride - Cutscene control to force sky colors
// @addr 0x80524780
// =============================================================================

void Skybox::setSkyOverride(const u8 topColor[3], const u8 horizonColor[3],
                            const u8 bottomColor[3]) {
    if (!topColor || !horizonColor || !bottomColor) {
        m_skyOverride = false;
        return;
    }
    m_skyOverride = true;
    for (s32 i = 0; i < 3; i++) {
        m_overrideTop[i] = topColor[i];
        m_overrideHorizon[i] = horizonColor[i];
        m_overrideBottom[i] = bottomColor[i];
    }
}

// =============================================================================
// draw - Render sky dome
// @addr 0x80524800
// =============================================================================

void Skybox::draw() {
    if (!m_loaded) return;
    drawSkyDome();
}

// =============================================================================
// drawSkyDome - GX rendering setup for sky dome
// @addr 0x80524840
// =============================================================================

void Skybox::drawSkyDome() {
    // Sky dome is rendered before all course geometry.
    // GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    //
    // Rotation-only view matrix (no translation) so the dome
    // appears infinitely far away:
    //   Mtx44 skyView; memcpy(skyView, camView, 64);
    //   skyView[0][3] = skyView[1][3] = skyView[2][3] = 0.0f;
    //   GXLoadPosMtxImm(skyView, GX_PNMTX0);
    //
    // GXSetChanAmbColor(GX_COLOR0A0,
    //     {m_skyColorHorizon[0], m_skyColorHorizon[1], m_skyColorHorizon[2], 0xFF});
    //
    // if (m_fogDensity > 0.0f) {
    //     GXSetFog(GX_LINEAR, m_fogStart, m_fogEnd, 0.0f, 1.0f,
    //              {m_fogColor[0], m_fogColor[1], m_fogColor[2], 0xFF});
    // }
    //
    // for (s32 i = 0; i < 6; i++) {
    //     if (m_skyTextures[i]) {
    //         GXTexObj texObj; GXInitTexObj(&texObj, ...);
    //         GXLoadTexObj(&texObj, GX_TEXMAP0 + i);
    //     }
    // }
    // GXCallDisplayList(skyDlist, dlistSize);
    // GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
    (void)m_skyColorTop; (void)m_skyColorHorizon; (void)m_skyColorBottom;
    (void)m_fogColor; (void)m_fogStart; (void)m_fogEnd; (void)m_fogDensity;
}

// @addr 0x805248C0 (estimated)
// setTimeOfDay — Set the time of day for sky color interpolation.
// @param timeOfDay  Time value [0.0, 1.0] (0=midnight, 0.5=noon)
void Skybox::setTimeOfDay(f32 timeOfDay) {
    if (!m_loaded) return;
    // Clamp to valid range
    if (timeOfDay < 0.0f) timeOfDay = 0.0f;
    if (timeOfDay > 1.0f) timeOfDay = 1.0f;
    // Update sky colors based on the new time
    updateSkyColors(timeOfDay);
}

// @addr 0x80524900 (estimated)
// rotate — Apply a rotation offset to the sky dome.
// The sky dome rotates slowly over time for visual interest.
void Skybox::rotate(f32 angleDeg) {
    mRotationAngle += angleDeg;
    // Keep in [0, 360) range
    while (mRotationAngle >= 360.0f) {
        mRotationAngle -= 360.0f;
    }
    while (mRotationAngle < 0.0f) {
        mRotationAngle += 360.0f;
    }
}

// @addr 0x80524940 (estimated)
// getSkyColor — Get interpolated sky color at a given height fraction.
// @param heightFraction  0.0 = bottom (nadir), 1.0 = top (zenith)
// @param r, g, b  Output color channels
void Skybox::getSkyColor(f32 heightFraction, u8* r, u8* g, u8* b) const {
    if (!r || !g || !b) return;
    // Clamp height fraction
    if (heightFraction < 0.0f) heightFraction = 0.0f;
    if (heightFraction > 1.0f) heightFraction = 1.0f;

    if (heightFraction > 0.5f) {
        // Upper half: horizon to top
        f32 t = (heightFraction - 0.5f) * 2.0f;
        *r = (u8)((f32)m_skyColorHorizon[0] + ((f32)m_skyColorTop[0] - (f32)m_skyColorHorizon[0]) * t);
        *g = (u8)((f32)m_skyColorHorizon[1] + ((f32)m_skyColorTop[1] - (f32)m_skyColorHorizon[1]) * t);
        *b = (u8)((f32)m_skyColorHorizon[2] + ((f32)m_skyColorTop[2] - (f32)m_skyColorHorizon[2]) * t);
    } else {
        // Lower half: bottom to horizon
        f32 t = heightFraction * 2.0f;
        *r = (u8)((f32)m_skyColorBottom[0] + ((f32)m_skyColorHorizon[0] - (f32)m_skyColorBottom[0]) * t);
        *g = (u8)((f32)m_skyColorBottom[1] + ((f32)m_skyColorHorizon[1] - (f32)m_skyColorBottom[1]) * t);
        *b = (u8)((f32)m_skyColorBottom[2] + ((f32)m_skyColorHorizon[2] - (f32)m_skyColorBottom[2]) * t);
    }
}

// @addr 0x805249C0 (estimated)
// getFogColor — Get the current fog color as RGB values.
void Skybox::getFogColor(u8* r, u8* g, u8* b) const {
    if (r) *r = m_fogColor[0];
    if (g) *g = m_fogColor[1];
    if (b) *b = m_fogColor[2];
}

// @addr 0x805249E0 (estimated)
// getRotation — Get the current sky dome rotation angle in degrees.
f32 Skybox::getRotation() const {
    return mRotationAngle;
}

// @addr 0x80524A00 (estimated)
// isLoaded — Check if the skybox resources are loaded.
bool Skybox::isLoaded() const {
    return m_loaded;
}

// @addr 0x80524A20 (estimated)
// getSkyboxId — Get the currently loaded skybox course ID.
u32 Skybox::getSkyboxId() const {
    return m_skyboxId;
}

// @addr 0x80524A40 (estimated)
// getRainIntensity — Get the current rain intensity [0.0, 1.0].
f32 Skybox::getRainIntensity() const {
    return m_rainIntensity;
}

// @addr 0x80524A60 (estimated)
// getWeatherTimer — Get the elapsed time since weather started.
f32 Skybox::getWeatherTimer() const {
    return m_weatherTimer;
}

// @addr 0x80524A80 (estimated)
// clearOverride — Clear the cutscene sky override.
void Skybox::clearOverride() {
    m_skyOverride = false;
}

} // namespace Scene