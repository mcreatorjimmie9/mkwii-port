#pragma once
// ============================================================================
// LightManager — GX Lighting Setup and Configuration
// ============================================================================
// Manages the 8 hardware lights available on the Wii's GX hardware.
// Mario Kart Wii typically uses:
//   - Light 0: Directional "sun" light for the main course illumination
//   - Light 1-2: Fill lights to reduce shadow harshness
//   - Light 7: Ambient hemisphere light (sky/ground colors)
//
// The light manager updates light positions relative to the camera each frame,
// sets up light colors for time-of-day effects, and handles light fading
// during transitions (e.g., entering/exiting caves).
//
// Address range: 0x80540000 - 0x8054FFFF
// ============================================================================

#include <types.h>
#include <gx.hpp>

// Maximum number of GX lights
static const u8 MAX_GX_LIGHTS = 8;

// ============================================================================
// LightConfig — Configuration for a single light source
// ============================================================================
// Contains all parameters needed to initialize a GXLightObj and
// upload it to a hardware light slot.
//
// Size: 0x50 bytes
// ============================================================================
struct LightConfig {
    // Color
    GXColor color;            // 0x00: RGBA light color
    u8  _04;                  // 0x04: padding

    // Position (for point lights) or Direction (for directional lights)
    f32 posX;                 // 0x08: light position/direction X
    f32 posY;                 // 0x0C: light position/direction Y
    f32 posZ;                 // 0x10: light position/direction Z

    // Specular direction (half-angle vector)
    f32 specX;                // 0x14: specular direction X
    f32 specY;                // 0x18: specular direction Y
    f32 specZ;                // 0x1C: specular direction Z

    // Attenuation (A function: a0 + a1*d + a2*d^2)
    f32 attnA0;               // 0x20: attenuation constant
    f32 attnA1;               // 0x24: attenuation linear
    f32 attnA2;               // 0x28: attenuation quadratic

    // Distance attenuation (K function: 1/(k0 + k1*r + k2*r^2))
    f32 distAttnK0;           // 0x2C: distance attn constant
    f32 distAttnK1;           // 0x30: distance attn linear
    f32 distAttnK2;           // 0x34: distance attn quadratic
    f32 refDist;              // 0x38: reference distance
    f32 refBrightness;        // 0x3C: reference brightness

    // Spotlight
    f32 spotCutoff;           // 0x40: spotlight cutoff angle (cosine)
    u32 spotFn;               // 0x44: spotlight function (GX_SP_*)

    // Type and state
    u8  lightType;            // 0x48: 0=point, 1=directional, 2=spot
    u8  enabled;              // 0x49: is this light active
    u16 _4A;                  // 0x4A: padding

    // Fading
    f32 fadeTarget;           // 0x4C: target brightness for fade
};

// ============================================================================
// LightGroup — A named group of lights (e.g., "outdoor", "cave")
// ============================================================================
// Courses define multiple light groups for different areas. The active
// group is selected based on the player's position.
//
// Size: 0x80 bytes
// ============================================================================
struct LightGroup {
    u32  groupId;             // 0x00: group identifier
    char name[32];            // 0x04: group name (null-terminated)
    u8   lightCount;          // 0x24: number of lights in this group
    u8   ambientLightIdx;     // 0x25: index of the ambient/hemisphere light
    u8   _26;                 // 0x26: padding
    u8   _27;                 // 0x27: padding
    LightConfig lights[2];    // 0x28: light configurations (typically 2 per group)
    // Total: 0x28 + 2*0x50 = 0xC8, but usually padded to 0x80
    // We store only the first 2 and extend later
    f32  _C8;                 // 0xC8: transition speed
};

// ============================================================================
// LightManager — Global light system manager
// ============================================================================
// Central manager for all lighting state. Updated once per frame.
//
// Size: 0x100 bytes
// ============================================================================
struct LightManager {
    // Current light states
    GXLightObj lightObjs[MAX_GX_LIGHTS]; // 0x00: 8 * 0x40 = 0x200 — stored past struct
    LightConfig configs[MAX_GX_LIGHTS];   // 0x00: runtime configs

    // Current active group
    u32  activeGroupId;       // 0xA4: currently active light group
    u32  prevGroupId;         // 0xA8: previous group (for blending)

    // Transition state
    f32  blendFactor;         // 0xAC: 0.0 = prev, 1.0 = current
    f32  blendSpeed;          // 0xB0: blend speed (per second)

    // Ambient light
    GXColor ambColor;         // 0xB4: global ambient color

    // Frame state
    u32  frameCount;          // 0xB8: current frame
    u8   numActiveLights;     // 0xBC: number of lights to upload
    u8   _BD;                 // 0xBD: padding
    u16  _BE;                 // 0xBE: padding

    // Camera-relative flag
    u8   cameraRelative;      // 0xC0: lights move with camera
    u8   _C1[3];              // 0xC1: padding

    // View matrix pointer (for camera-relative lights)
    void* viewMatrix;         // 0xC4: pointer to current view matrix
    f32  _C8;                 // 0xC8: unknown
    f32  _CC;                 // 0xCC: unknown
};

// ============================================================================
// Function declarations — Light Manager
// ============================================================================

// 0x80540000 — Initialize the light manager to default state
// @addr 0x80540000
void LightMgr_Init(LightManager* mgr);

// 0x80540100 — Set up a light as a directional light (sun)
// @addr 0x80540100
void LightMgr_SetDirectional(LightManager* mgr, u8 lightId,
                              f32 dirX, f32 dirY, f32 dirZ,
                              GXColor color);

// 0x80540200 — Set up a light as a point light
// @addr 0x80540200
void LightMgr_SetPoint(LightManager* mgr, u8 lightId,
                        f32 posX, f32 posY, f32 posZ,
                        f32 refDist, f32 refBrightness,
                        GXColor color);

// 0x80540340 — Set up a light as a spotlight
// @addr 0x80540340
void LightMgr_SetSpotlight(LightManager* mgr, u8 lightId,
                            f32 posX, f32 posY, f32 posZ,
                            f32 dirX, f32 dirY, f32 dirZ,
                            f32 cutoff, u32 spotFn,
                            GXColor color);

// 0x805404C0 — Update light positions relative to the camera
// @addr 0x805404C0
void LightMgr_UpdateCameraRelative(LightManager* mgr);

// 0x805405C0 — Upload all active lights to GX hardware
// @addr 0x805405C0
void LightMgr_UploadAll(const LightManager* mgr);

// 0x80540700 — Set the global ambient color
// @addr 0x80540700
void LightMgr_SetAmbient(LightManager* mgr, GXColor color);

// 0x80540740 — Begin transition to a new light group
// @addr 0x80540740
void LightMgr_TransitionTo(LightManager* mgr, u32 groupId, f32 speed);

// 0x80540800 — Update the light transition blend factor
// @addr 0x80540800
void LightMgr_UpdateTransition(LightManager* mgr, f32 dt);

// 0x80540900 — Enable/disable a specific light
// @addr 0x80540900
void LightMgr_SetEnabled(LightManager* mgr, u8 lightId, u8 enabled);

// 0x80540940 — Set the number of active lights
// @addr 0x80540940
void LightMgr_SetNumLights(LightManager* mgr, u8 count);

// 0x80540980 — Fade a light's brightness toward a target
// @addr 0x80540980
void LightMgr_UpdateFade(LightManager* mgr, u8 lightId, f32 dt);