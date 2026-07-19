#pragma once
// Skybox.hpp — Skybox / Sky Dome Rendering
// Reconstructed from Scene module (0x8052xxxx)
//
// Skybox renders the background sky dome/cube for a course.
// Supports time-of-day color transitions and weather effects
// (rain particles, fog density, etc.).

#include "rk_common.h"

namespace Scene {

// =============================================================================
// WeatherType — Weather conditions affecting skybox rendering
// =============================================================================
enum WeatherType {
    WEATHER_CLEAR   = 0,  // No weather effects
    WEATHER_RAIN    = 1,  // Rain particles + darker sky
    WEATHER_FOG     = 2,  // Fog effect (reduced visibility)
    WEATHER_STORM   = 3,  // Heavy rain + dark sky + lightning
    WEATHER_SNOW    = 4,  // Snow particles (unused in final MKWii)
    WEATHER_COUNT   = 5,
};

// =============================================================================
// Skybox — Sky dome rendering with time-of-day and weather
//
// Renders a sky dome/cube as the background of the 3D scene.
// The dome is rendered before all course geometry (no depth write).
// Supports dynamic color based on time and weather overlays.
// =============================================================================
class Skybox {
public:
    Skybox();
    ~Skybox();

    /// Initialize skybox system.
    void init();

    /// Load skybox textures and model for a given course.
    /// @param skyboxId  Skybox resource ID (mapped per course)
    void load(u32 skyboxId);

    /// Render the sky dome.
    /// Called first in the draw pass (before all geometry).
    void draw();

    /// Update sky colors and effects based on time of day.
    /// @param timeOfDay  Time value [0.0, 1.0] (0 = midnight, 0.5 = noon)
    void update(f32 timeOfDay);

    /// Set the current weather type.
    /// @param weatherType  Weather condition
    void setWeather(u32 weatherType);

    /// Get the current weather type.
    WeatherType getWeather() const { return m_weatherType; }

    /// Get the current sky color (top of dome).
    void getSkyColorTop(u8* r, u8* g, u8* b) const {
        *r = m_skyColorTop[0]; *g = m_skyColorTop[1]; *b = m_skyColorTop[2];
    }

    /// Get the current sky color (horizon).
    void getSkyColorHorizon(u8* r, u8* g, u8* b) const {
        *r = m_skyColorHorizon[0]; *g = m_skyColorHorizon[1]; *b = m_skyColorHorizon[2];
    }

    /// Get fog color.
    void getFogColor(u8* r, u8* g, u8* b) const {
        *r = m_fogColor[0]; *g = m_fogColor[1]; *b = m_fogColor[2];
    }

    /// Get fog start/end distances.
    f32 getFogStart() const { return m_fogStart; }
    f32 getFogEnd() const { return m_fogEnd; }
    f32 getFogDensity() const { return m_fogDensity; }

private:
    void updateSkyColors(f32 timeOfDay);
    void updateWeatherEffects(f32 dt);

    // Sky colors (top, horizon, bottom)
    u8 m_skyColorTop[3];      // Zenith color
    u8 m_skyColorHorizon[3];  // Horizon color
    u8 m_skyColorBottom[3];   // Nadir color (ground fog)

    // Fog
    u8 m_fogColor[3];
    f32 m_fogStart;
    f32 m_fogEnd;
    f32 m_fogDensity;

    // Weather
    WeatherType m_weatherType;
    f32 m_rainIntensity;      // 0.0-1.0
    f32 m_weatherTimer;

    // Resource
    u32 m_skyboxId;           // Currently loaded skybox ID
    bool m_loaded;            // Whether skybox resources are loaded
    void* m_skyModelRes;      // Sky dome model resource
    void* m_skyTextures[6];   // Cube map face textures
};

} // namespace Scene