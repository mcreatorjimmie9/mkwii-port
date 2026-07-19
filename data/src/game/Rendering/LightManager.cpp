#include "LightManager.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cstring>
#include <cmath>

// ============================================================================
// Global light manager instance
// ============================================================================
static LightManager sLightManager;  // @addr 0x80541000

// Global light objects (separate from manager due to size)
static GXLightObj sLightObjArray[MAX_GX_LIGHTS];  // @addr 0x80541200

// ============================================================================
// LightMgr_Init()
// 0x80540000 (256 bytes)
// ============================================================================
// Initialize the light manager to a default state.
// Sets up 2 default lights: a white directional sun above and
// a dim blue ambient fill from below.
//
// @param mgr  Light manager to initialize
// ============================================================================
void LightMgr_Init(LightManager* mgr) {
    std::memset(mgr, 0, sizeof(LightManager));

    // Default: 2 active lights
    mgr->numActiveLights = 2;
    mgr->activeGroupId = 0;
    mgr->prevGroupId = 0xFFFFFFFF;
    mgr->blendFactor = 1.0f;
    mgr->blendSpeed = 1.0f;
    mgr->frameCount = 0;
    mgr->cameraRelative = 1;
    mgr->viewMatrix = nullptr;

    // Default ambient: dark blue-gray (0x404860FF)
    mgr->ambColor = 0x404860FF;

    // Light 0: Main directional "sun" from upper-right-front
    mgr->configs[0].color = 0xFFFFFFC0;    // bright white, alpha=192
    mgr->configs[0].posX = 0.577f;          // normalized direction
    mgr->configs[0].posY = 0.577f;
    mgr->configs[0].posZ = 0.577f;
    mgr->configs[0].specX = 0.577f;
    mgr->configs[0].specY = 0.577f;
    mgr->configs[0].specZ = 0.577f;
    mgr->configs[0].attnA0 = 1.0f;
    mgr->configs[0].attnA1 = 0.0f;
    mgr->configs[0].attnA2 = 0.0f;
    mgr->configs[0].distAttnK0 = 1.0f;
    mgr->configs[0].distAttnK1 = 0.0f;
    mgr->configs[0].distAttnK2 = 0.0f;
    mgr->configs[0].refDist = 0.0f;
    mgr->configs[0].refBrightness = 1.0f;
    mgr->configs[0].spotCutoff = 0.0f;
    mgr->configs[0].spotFn = GX_SP_OFF;
    mgr->configs[0].lightType = 1;          // directional
    mgr->configs[0].enabled = 1;
    mgr->configs[0].fadeTarget = 1.0f;

    // Light 1: Fill light from below-left
    mgr->configs[1].color = 0x6080A080;    // blue-ish fill, alpha=128
    mgr->configs[1].posX = -0.5f;
    mgr->configs[1].posY = -0.7f;
    mgr->configs[1].posZ = 0.5f;
    mgr->configs[1].specX = 0.0f;
    mgr->configs[1].specY = 0.0f;
    mgr->configs[1].specZ = 0.0f;
    mgr->configs[1].attnA0 = 1.0f;
    mgr->configs[1].attnA1 = 0.0f;
    mgr->configs[1].attnA2 = 0.0f;
    mgr->configs[1].distAttnK0 = 1.0f;
    mgr->configs[1].distAttnK1 = 0.0f;
    mgr->configs[1].distAttnK2 = 0.0f;
    mgr->configs[1].refDist = 1000.0f;
    mgr->configs[1].refBrightness = 0.5f;
    mgr->configs[1].spotCutoff = 0.0f;
    mgr->configs[1].spotFn = GX_SP_OFF;
    mgr->configs[1].lightType = 0;          // point
    mgr->configs[1].enabled = 1;
    mgr->configs[1].fadeTarget = 1.0f;

    // Disable remaining lights
    for (u8 i = 2; i < MAX_GX_LIGHTS; i++) {
        mgr->configs[i].enabled = 0;
        mgr->configs[i].color = 0;
        mgr->configs[i].fadeTarget = 0.0f;
    }

    // Initialize GX light objects
    for (u8 i = 0; i < MAX_GX_LIGHTS; i++) {
        std::memset(&sLightObjArray[i], 0, sizeof(GXLightObj));
    }

    // Set GX light count
    GXSetNumLights(2);
}

// ============================================================================
// LightMgr_SetDirectional()
// 0x80540100 (256 bytes)
// ============================================================================
// Configure a light as a directional (infinite-distance) light.
// The direction vector is normalized and used for both the light direction
// and the specular half-angle vector (identical for directional lights).
//
// @param mgr     Light manager
// @param lightId Hardware light slot (0-7)
// @param dirX/Y/Z  Light direction (will be normalized)
// @param color   RGBA light color
// ============================================================================
void LightMgr_SetDirectional(LightManager* mgr, u8 lightId,
                              f32 dirX, f32 dirY, f32 dirZ,
                              GXColor color) {
    if (lightId >= MAX_GX_LIGHTS) {
        return;
    }

    LightConfig* cfg = &mgr->configs[lightId];

    // Normalize direction
    f32 len = std::sqrt(dirX * dirX + dirY * dirY + dirZ * dirZ);
    if (len > 0.0001f) {
        f32 invLen = 1.0f / len;
        dirX *= invLen;
        dirY *= invLen;
        dirZ *= invLen;
    }

    cfg->posX = dirX;
    cfg->posY = dirY;
    cfg->posZ = dirZ;
    cfg->specX = dirX;   // specular = same as direction for directional
    cfg->specY = dirY;
    cfg->specZ = dirZ;
    cfg->color = color;
    cfg->lightType = 1;   // directional
    cfg->enabled = 1;
    cfg->fadeTarget = 1.0f;
}

// ============================================================================
// LightMgr_SetPoint()
// 0x80540200 (320 bytes)
// ============================================================================
// Configure a light as a point light with distance attenuation.
// Uses the GX_DA_GENTLE distance attenuation function.
//
// @param mgr       Light manager
// @param lightId   Hardware light slot (0-7)
// @param posX/Y/Z  Light position in world space
// @param refDist   Reference distance for attenuation
// @param refBrightness  Reference brightness at refDist
// @param color     RGBA light color
// ============================================================================
void LightMgr_SetPoint(LightManager* mgr, u8 lightId,
                        f32 posX, f32 posY, f32 posZ,
                        f32 refDist, f32 refBrightness,
                        GXColor color) {
    if (lightId >= MAX_GX_LIGHTS) {
        return;
    }

    LightConfig* cfg = &mgr->configs[lightId];

    cfg->posX = posX;
    cfg->posY = posY;
    cfg->posZ = posZ;
    cfg->specX = 0.0f;
    cfg->specY = 0.0f;
    cfg->specZ = 0.0f;
    cfg->refDist = refDist;
    cfg->refBrightness = refBrightness;
    cfg->distAttnK0 = 1.0f;
    cfg->distAttnK1 = 0.0f;
    cfg->distAttnK2 = 0.0f;
    cfg->color = color;
    cfg->lightType = 0;   // point
    cfg->enabled = 1;
    cfg->fadeTarget = 1.0f;
}

// ============================================================================
// LightMgr_SetSpotlight()
// 0x80540340 (384 bytes)
// ============================================================================
// Configure a light as a spotlight with cutoff and spot function.
//
// @param mgr       Light manager
// @param lightId   Hardware light slot (0-7)
// @param posX/Y/Z  Spotlight position
// @param dirX/Y/Z  Spotlight direction
// @param cutoff    Cosine of the half-angle cutoff
// @param spotFn    Spot function (GX_SP_*)
// @param color     RGBA light color
// ============================================================================
void LightMgr_SetSpotlight(LightManager* mgr, u8 lightId,
                            f32 posX, f32 posY, f32 posZ,
                            f32 dirX, f32 dirY, f32 dirZ,
                            f32 cutoff, u32 spotFn,
                            GXColor color) {
    if (lightId >= MAX_GX_LIGHTS) {
        return;
    }

    LightConfig* cfg = &mgr->configs[lightId];

    cfg->posX = posX;
    cfg->posY = posY;
    cfg->posZ = posZ;

    // Normalize direction for specular
    f32 len = std::sqrt(dirX * dirX + dirY * dirY + dirZ * dirZ);
    if (len > 0.0001f) {
        f32 invLen = 1.0f / len;
        cfg->specX = dirX * invLen;
        cfg->specY = dirY * invLen;
        cfg->specZ = dirZ * invLen;
    } else {
        cfg->specX = cfg->specY = cfg->specZ = 0.0f;
    }

    cfg->spotCutoff = cutoff;
    cfg->spotFn = spotFn;
    cfg->refDist = 100.0f;
    cfg->refBrightness = 1.0f;
    cfg->distAttnK0 = 1.0f;
    cfg->distAttnK1 = 0.0f;
    cfg->distAttnK2 = 0.0f;
    cfg->color = color;
    cfg->lightType = 2;   // spot
    cfg->enabled = 1;
    cfg->fadeTarget = 1.0f;
}

// ============================================================================
// LightMgr_UpdateCameraRelative()
// 0x805404C0 (256 bytes)
// ============================================================================
// Transform light positions from world space to view (camera) space.
// Directional lights use only the rotation part; point lights
// are fully transformed by the view matrix.
//
// The Wii GX hardware expects lights in view space.
//
// @param mgr  Light manager with configs in world space
// ============================================================================
void LightMgr_UpdateCameraRelative(LightManager* mgr) {
    if (!mgr->cameraRelative || mgr->viewMatrix == nullptr) {
        return;
    }

    /* WII_GX: On the Wii, light positions are transformed by the
       current view matrix. The original code reads the view matrix
       from the global scene camera and applies it:
         viewDir = M3x3 * worldDir  (for directional)
         viewPos = M4x4 * worldPos  (for point)
       Since we're using shims, we track the concept without
       performing actual matrix math. The light configs store
       world-space values that would be transformed at upload time. */
}

// ============================================================================
// LightMgr_UploadAll()
// 0x805405C0 (320 bytes)
// ============================================================================
// Build GXLightObj structures from configs and upload them to hardware.
// Initializes each light's color, position/direction, specular direction,
// attenuation, and distance attenuation, then calls GXLoadLightObjImm.
//
// @param mgr  Light manager with current configs
// ============================================================================
void LightMgr_UploadAll(const LightManager* mgr) {
    u8 count = mgr->numActiveLights;
    GXSetNumLights(count);

    for (u8 i = 0; i < count && i < MAX_GX_LIGHTS; i++) {
        if (!mgr->configs[i].enabled) {
            // Upload a black light (effectively disabled)
            GXColor black = 0;
            GXInitLightColor(&sLightObjArray[i], &black);
            GXLoadLightObjImm(&sLightObjArray[i], i);
            continue;
        }

        const LightConfig* cfg = &mgr->configs[i];

        // Initialize light color (cast away const for shim API)
        GXColor colorCopy = cfg->color;
        GXInitLightColor(&sLightObjArray[i], &colorCopy);

        // Set position or direction based on type
        if (cfg->lightType == 1) {
            // Directional light
            GXInitLightDir(&sLightObjArray[i], cfg->posX, cfg->posY, cfg->posZ);
        } else {
            // Point or spot light
            GXInitLightPos(&sLightObjArray[i], cfg->posX, cfg->posY, cfg->posZ);
        }

        // Specular half-angle
        GXInitSpecularDir(&sLightObjArray[i], cfg->specX, cfg->specY, cfg->specZ);

        // Spotlight (only for spot type)
        if (cfg->lightType == 2) {
            GXInitLightSpot(&sLightObjArray[i], cfg->spotCutoff,
                            static_cast<GXSpotFn>(cfg->spotFn));
        }

        // Distance attenuation
        if (cfg->lightType != 1) {
            // Point and spot lights use distance attenuation
            GXInitLightDistAttn(&sLightObjArray[i], cfg->refDist,
                                cfg->refBrightness, GX_DA_GENTLE);
        }

        // Upload to hardware
        GXLoadLightObjImm(&sLightObjArray[i], i);
    }
}

// ============================================================================
// LightMgr_SetAmbient()
// 0x80540700 (48 bytes)
// ============================================================================
// Set the global ambient light color.
//
// @param mgr    Light manager
// @param color  RGBA ambient color
// ============================================================================
void LightMgr_SetAmbient(LightManager* mgr, GXColor color) {
    if (mgr == nullptr) {
        return;
    }
    mgr->ambColor = color;
}

// ============================================================================
// LightMgr_TransitionTo()
// 0x80540740 (96 bytes)
// ============================================================================
// Begin a transition from the current light group to a new one.
// The blend factor starts at 0.0 and advances toward 1.0 over time.
//
// @param mgr      Light manager
// @param groupId  Target light group ID
// @param speed    Transition speed (blend units per second)
// ============================================================================
void LightMgr_TransitionTo(LightManager* mgr, u32 groupId, f32 speed) {
    if (mgr == nullptr) {
        return;
    }
    mgr->prevGroupId = mgr->activeGroupId;
    mgr->activeGroupId = groupId;
    mgr->blendFactor = 0.0f;
    mgr->blendSpeed = speed;
}

// ============================================================================
// LightMgr_UpdateTransition()
// 0x80540800 (128 bytes)
// ============================================================================
// Advance the light transition blend factor.
// Called once per frame with the delta time.
//
// @param mgr  Light manager
// @param dt   Delta time in seconds
// ============================================================================
void LightMgr_UpdateTransition(LightManager* mgr, f32 dt) {
    if (mgr == nullptr) {
        return;
    }

    if (mgr->blendFactor < 1.0f) {
        mgr->blendFactor += mgr->blendSpeed * dt;

        // Clamp to 1.0
        if (mgr->blendFactor > 1.0f) {
            mgr->blendFactor = 1.0f;
        }

        /* WII_GX: During transition, light colors are interpolated:
           finalColor = lerp(prevColor, newColor, blendFactor)
           and uploaded each frame via LightMgr_UploadAll. */
    }
}

// ============================================================================
// LightMgr_SetEnabled()
// 0x80540900 (48 bytes)
// ============================================================================
// Enable or disable a specific light.
//
// @param mgr      Light manager
// @param lightId  Light index (0-7)
// @param enabled  1 to enable, 0 to disable
// ============================================================================
void LightMgr_SetEnabled(LightManager* mgr, u8 lightId, u8 enabled) {
    if (mgr == nullptr || lightId >= MAX_GX_LIGHTS) {
        return;
    }
    mgr->configs[lightId].enabled = enabled;
}

// ============================================================================
// LightMgr_SetNumLights()
// 0x80540940 (48 bytes)
// ============================================================================
// Set the number of active lights to upload to hardware.
//
// @param mgr   Light manager
// @param count Number of lights (0-8)
// ============================================================================
void LightMgr_SetNumLights(LightManager* mgr, u8 count) {
    if (mgr == nullptr) {
        return;
    }
    if (count > MAX_GX_LIGHTS) {
        count = MAX_GX_LIGHTS;
    }
    mgr->numActiveLights = count;
}

// ============================================================================
// LightMgr_UpdateFade()
// 0x80540980 (192 bytes)
// ============================================================================
// Gradually fade a light's brightness toward its target value.
// Modifies the alpha channel of the light color.
//
// @param mgr      Light manager
// @param lightId  Light index to fade
// @param dt       Delta time in seconds
// ============================================================================
void LightMgr_UpdateFade(LightManager* mgr, u8 lightId, f32 dt) {
    if (mgr == nullptr || lightId >= MAX_GX_LIGHTS) {
        return;
    }

    LightConfig* cfg = &mgr->configs[lightId];
    if (!cfg->enabled) {
        return;
    }

    // Extract current alpha (byte 3 of GXColor)
    u8 currentAlpha = static_cast<u8>((cfg->color >> 24) & 0xFF);
    f32 current = static_cast<f32>(currentAlpha) / 255.0f;

    // Compute fade step: 2.0 alpha per second
    f32 fadeSpeed = 2.0f * dt;

    if (current < cfg->fadeTarget) {
        current += fadeSpeed;
        if (current > cfg->fadeTarget) {
            current = cfg->fadeTarget;
        }
    } else if (current > cfg->fadeTarget) {
        current -= fadeSpeed;
        if (current < cfg->fadeTarget) {
            current = cfg->fadeTarget;
        }
    }

    // Pack alpha back into color
    u8 newAlpha = static_cast<u8>(current * 255.0f);
    cfg->color = (cfg->color & 0x00FFFFFF) | (static_cast<u32>(newAlpha) << 24);
}