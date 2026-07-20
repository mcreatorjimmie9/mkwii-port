#include "FogSystem.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cstring>
#include <cmath>

// ============================================================================
// Global fog system instance
// ============================================================================
static FogSystem sFogSystem;  // @addr 0x80561000

// Allocated range adjustment table (640 u16 entries = 1280 bytes)
static u16 sFogRangeTable[FOG_RANGE_TABLE_WIDTH];  // @addr 0x80561060

// ============================================================================
// FogSys_Init()
// 0x80560000 (192 bytes)
// ============================================================================
// Initialize the fog system to default values.
// Disables fog, sets default sky-blue color, and allocates the
// range adjustment table.
//
// @param fog  Fog system to initialize
// ============================================================================
void FogSys_Init(FogSystem* fog) {
    std::memset(fog, 0, sizeof(FogSystem));

    // Default fog parameters
    fog->config.fogType = FOG_TYPE_NONE;
    fog->config.startZ = 800.0f;
    fog->config.endZ = 5000.0f;
    fog->config.nearZ = 10.0f;
    fog->config.farZ = 100000.0f;

    // Default fog color: light sky blue (0x8090C0FF)
    fog->config.color = 0x8090C0FF;
    fog->config.targetColor = 0x8090C0FF;

    // Range adjustment
    fog->config.rangeAdjTable = sFogRangeTable;
    fog->config.rangeAdjCenter = FOG_RANGE_TABLE_WIDTH / 2;

    // Flags: disabled by default
    fog->config.flags = 0;

    // Default outdoor settings
    fog->defaultStartZ = 800.0f;
    fog->defaultEndZ = 5000.0f;
    fog->defaultColor = 0x8090C0FF;
    fog->defaultType = FOG_TYPE_LINEAR;

    // Indoor override: disable by default
    fog->indoorStartZ = 200.0f;
    fog->indoorEndZ = 1500.0f;
    fog->indoorColor = 0x606060FF;
    fog->indoorEnabled = 0;

    // Clear the range table
    std::memset(sFogRangeTable, 0, sizeof(sFogRangeTable));
}

// ============================================================================
// FogSys_SetFog()
// 0x805600C0 (192 bytes)
// ============================================================================
// Set the main fog parameters. This updates the config and
// also stores the values as the new defaults.
//
// @param fog     Fog system
// @param type    GX_FOG_* type constant
// @param startZ  Distance at which fog begins
// @param endZ    Distance at which fog is fully opaque
// @param color   RGBA fog color
// ============================================================================
void FogSys_SetFog(FogSystem* fog, u8 type, f32 startZ, f32 endZ, GXColor color) {
    if (fog == nullptr) {
        return;
    }

    FogConfig* cfg = &fog->config;
    cfg->fogType = type;
    cfg->startZ = startZ;
    cfg->endZ = endZ;
    cfg->color = color;
    cfg->targetColor = color;

    // Enable fog if type is non-zero
    if (type != FOG_TYPE_NONE) {
        cfg->flags |= FOG_FLAG_ENABLED;
    } else {
        cfg->flags &= ~FOG_FLAG_ENABLED;
    }

    // Update default settings
    fog->defaultStartZ = startZ;
    fog->defaultEndZ = endZ;
    fog->defaultColor = color;
    fog->defaultType = type;
}

// ============================================================================
// FogSys_SetEnabled()
// 0x80560180 (64 bytes)
// ============================================================================
// Enable or disable fog without changing other parameters.
// When disabled, GXSetFog is called with GX_FOG_NONE.
//
// @param fog      Fog system
// @param enabled  1 to enable, 0 to disable
// ============================================================================
void FogSys_SetEnabled(FogSystem* fog, u8 enabled) {
    if (fog == nullptr) {
        return;
    }

    if (enabled) {
        fog->config.flags |= FOG_FLAG_ENABLED;
        if (fog->config.fogType == FOG_TYPE_NONE) {
            fog->config.fogType = FOG_TYPE_LINEAR;
        }
    } else {
        fog->config.flags &= ~FOG_FLAG_ENABLED;
    }
}

// ============================================================================
// FogSys_UpdateRangeAdj()
// 0x805601C0 (320 bytes)
// ============================================================================
// Recompute the fog range adjustment table from the projection matrix.
// This table corrects the fog density across the viewport width to
// account for perspective projection distortion.
//
// Uses GXInitFogAdjTable internally, then stores the result
// for GXSetFogRangeAdj.
//
// @param fog           Fog system
// @param viewportWidth Viewport width in pixels
// @param projMtx       Current 4x4 projection matrix
// ============================================================================
void FogSys_UpdateRangeAdj(FogSystem* fog, u16 viewportWidth, const f32 projMtx[4][4]) {
    if (fog == nullptr || projMtx == nullptr) {
        return;
    }

    u16* table = fog->config.rangeAdjTable;
    if (table == nullptr) {
        return;
    }

    /* WII_GX: GXInitFogAdjTable(table, viewportWidth, projMtx);
       On the Wii, this function computes the correct fog density
       for each column of the viewport, compensating for the
       non-linear z distribution in perspective projection.
       The result is a 640-entry table of u16 values. */

    u16 center = viewportWidth / 2;
    fog->config.rangeAdjCenter = center;

    // Mark range adjustment as active
    fog->config.flags |= FOG_FLAG_RANGE_ADJ;

    /* On PC shims, GXInitFogAdjTable is a no-op, so we fill
       the table with identity values (no adjustment) */
    for (u32 i = 0; i < FOG_RANGE_TABLE_WIDTH; i++) {
        table[i] = 0;  // identity: no fog adjustment
    }
}

// ============================================================================
// FogSys_Upload()
// 0x80560300 (256 bytes)
// ============================================================================
// Upload the current fog configuration to GX hardware.
// Called once per frame before rendering the 3D scene.
//
// @param fog  Fog system with current configuration
// ============================================================================
void FogSys_Upload(const FogSystem* fog) {
    if (fog == nullptr) {
        return;
    }

    const FogConfig* cfg = &fog->config;

    if (!(cfg->flags & FOG_FLAG_ENABLED)) {
        // Disable fog
        GXSetFog(GX_FOG_NONE, 0.0f, 0.0f, 0.0f, 0.0f, 0);
        return;
    }

    // Upload fog equation
    GXSetFog(cfg->fogType,
             cfg->startZ,
             cfg->endZ,
             cfg->nearZ,
             cfg->farZ,
             cfg->color);

    // Upload range adjustment if active
    if (cfg->flags & FOG_FLAG_RANGE_ADJ && cfg->rangeAdjTable != nullptr) {
        GXSetFogRangeAdj(GX_ENABLE, cfg->rangeAdjCenter, cfg->rangeAdjTable);
    } else {
        GXSetFogRangeAdj(GX_DISABLE, 0, nullptr);
    }
}

// ============================================================================
// FogSys_SetColor()
// 0x80560400 (64 bytes)
// ============================================================================
// Set the fog color immediately (no animation).
//
// @param fog    Fog system
// @param color  New RGBA fog color
// ============================================================================
void FogSys_SetColor(FogSystem* fog, GXColor color) {
    if (fog == nullptr) {
        return;
    }
    fog->config.color = color;
    fog->config.targetColor = color;
    fog->config.flags &= ~FOG_FLAG_COLOR_ANIM;
}

// ============================================================================
// FogSys_SetColorTarget()
// 0x80560460 (96 bytes)
// ============================================================================
// Begin animating the fog color toward a target.
// The color transitions smoothly each frame via FogSys_UpdateColorAnim.
//
// @param fog    Fog system
// @param color  Target RGBA fog color
// @param speed  Interpolation speed (0.0-1.0+ per second)
// ============================================================================
void FogSys_SetColorTarget(FogSystem* fog, GXColor color, f32 speed) {
    if (fog == nullptr) {
        return;
    }
    fog->config.targetColor = color;
    fog->config.colorLerpSpeed = speed;
    fog->config.flags |= FOG_FLAG_COLOR_ANIM;
}

// ============================================================================
// FogSys_UpdateColorAnim()
// 0x80560500 (256 bytes)
// ============================================================================
// Advance the fog color animation by interpolating each channel
// toward the target color at the configured speed.
//
// When the current color matches the target (within tolerance),
// the animation flag is cleared.
//
// @param fog  Fog system
// @param dt   Delta time in seconds
// ============================================================================
void FogSys_UpdateColorAnim(FogSystem* fog, f32 dt) {
    if (fog == nullptr) {
        return;
    }

    if (!(fog->config.flags & FOG_FLAG_COLOR_ANIM)) {
        return;
    }

    FogConfig* cfg = &fog->config;
    f32 speed = cfg->colorLerpSpeed * dt;
    if (speed > 1.0f) {
        speed = 1.0f;
    }

    // Interpolate each channel (R at byte 1, G at byte 2, B at byte 3, A at byte 0)
    // GXColor is packed as 0x00RRGGBB on Wii
    u8 curR = static_cast<u8>((cfg->color >> 24) & 0xFF);
    u8 curG = static_cast<u8>((cfg->color >> 16) & 0xFF);
    u8 curB = static_cast<u8>((cfg->color >> 8) & 0xFF);
    u8 curA = static_cast<u8>(cfg->color & 0xFF);

    u8 tgtR = static_cast<u8>((cfg->targetColor >> 24) & 0xFF);
    u8 tgtG = static_cast<u8>((cfg->targetColor >> 16) & 0xFF);
    u8 tgtB = static_cast<u8>((cfg->targetColor >> 8) & 0xFF);
    u8 tgtA = static_cast<u8>(cfg->targetColor & 0xFF);

    // Lerp each channel
    auto lerpU8 = [](u8 from, u8 to, f32 t) -> u8 {
        s32 diff = static_cast<s32>(to) - static_cast<s32>(from);
        s32 step = static_cast<s32>(diff * t + 0.5f);
        if (step == 0 && diff != 0) {
            step = diff > 0 ? 1 : -1;
        }
        return static_cast<u8>(from + step);
    };

    curR = lerpU8(curR, tgtR, speed);
    curG = lerpU8(curG, tgtG, speed);
    curB = lerpU8(curB, tgtB, speed);
    curA = lerpU8(curA, tgtA, speed);

    cfg->color = (static_cast<u32>(curR) << 24) |
                 (static_cast<u32>(curG) << 16) |
                 (static_cast<u32>(curB) << 8) |
                 static_cast<u32>(curA);

    // Check if animation is complete
    if (cfg->color == cfg->targetColor) {
        cfg->flags &= ~FOG_FLAG_COLOR_ANIM;
    }
}

// ============================================================================
// FogSys_EnterIndoor()
// 0x80560600 (96 bytes)
// ============================================================================
// Override fog settings for an indoor section of the course.
// Indoor areas typically have shorter fog distances and different colors
// to create a distinct atmosphere.
//
// @param fog  Fog system
// ============================================================================
void FogSys_EnterIndoor(FogSystem* fog) {
    if (fog == nullptr) {
        return;
    }

    fog->indoorEnabled = 1;
    fog->config.flags |= FOG_FLAG_INDOOR_OVERRIDE;

    // Apply indoor settings
    fog->config.startZ = fog->indoorStartZ;
    fog->config.endZ = fog->indoorEndZ;
    fog->config.color = fog->indoorColor;
    fog->config.targetColor = fog->indoorColor;
}

// ============================================================================
// FogSys_ExitIndoor()
// 0x80560680 (80 bytes)
// ============================================================================
// Restore outdoor fog settings after leaving an indoor section.
//
// @param fog  Fog system
// ============================================================================
void FogSys_ExitIndoor(FogSystem* fog) {
    if (fog == nullptr) {
        return;
    }

    fog->indoorEnabled = 0;
    fog->config.flags &= ~FOG_FLAG_INDOOR_OVERRIDE;

    // Restore outdoor defaults
    fog->config.startZ = fog->defaultStartZ;
    fog->config.endZ = fog->defaultEndZ;
    fog->config.color = fog->defaultColor;
    fog->config.targetColor = fog->defaultColor;
    fog->config.fogType = fog->defaultType;
}

// ============================================================================
// FogSys_GetColor()
// 0x80560700 (32 bytes)
// ============================================================================
// Get the current fog color. Used by the skybox renderer to match
// the horizon color.
//
// @param fog  Fog system
// @return     Current fog color
// ============================================================================
GXColor FogSys_GetColor(const FogSystem* fog) {
    if (fog == nullptr) {
        return 0xFFFFFFFF;
    }
    return fog->config.color;
}

// ============================================================================
// FogSys_ResetToDefaults()
// 0x80560720 (80 bytes)
// ============================================================================
// Reset fog to the stored default outdoor settings.
// Also disables any color animation and indoor override.
//
// @param fog  Fog system
// ============================================================================
void FogSys_ResetToDefaults(FogSystem* fog) {
    if (fog == nullptr) {
        return;
    }

    FogConfig* cfg = &fog->config;
    cfg->fogType = fog->defaultType;
    cfg->startZ = fog->defaultStartZ;
    cfg->endZ = fog->defaultEndZ;
    cfg->color = fog->defaultColor;
    cfg->targetColor = fog->defaultColor;
    cfg->flags &= ~(FOG_FLAG_COLOR_ANIM | FOG_FLAG_INDOOR_OVERRIDE);
    cfg->flags |= FOG_FLAG_ENABLED;

    fog->indoorEnabled = 0;
}