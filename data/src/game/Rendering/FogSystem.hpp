#pragma once
// ============================================================================
// FogSystem — GX Fog Configuration and Management
// ============================================================================
// Manages the GX fog system used for atmospheric distance effects.
// Mario Kart Wii uses fog to:
//   - Hide the course draw distance limit (objects pop in behind fog)
//   - Create mood/atmosphere for different course themes
//   - Smoothly blend distant objects into the sky color
//   - Provide depth cueing for the player
//
// The fog system supports:
//   - Linear, exponential, and squared-exponential fog types
//   - Range-adjusted fog for correct perspective projection fog
//   - Color animation for weather effects (e.g., red-tinted fog during lightning)
//   - Per-camera fog settings
//
// Address range: 0x80560000 - 0x80562FFF
// ============================================================================

#include <types.h>
#include <gx.hpp>

// Maximum width of the fog range adjustment table
static const u16 FOG_RANGE_TABLE_WIDTH = 640;

// ============================================================================
// FogType — Fog function type enumeration
// ============================================================================
enum FogType {
    FOG_TYPE_NONE   = 0,
    FOG_TYPE_LINEAR = 2,   // GX_FOG_PERSP_LIN
    FOG_TYPE_EXP    = 4,   // GX_FOG_PERSP_EXP
    FOG_TYPE_EXP2   = 5,   // GX_FOG_PERSP_EXP2
};

// ============================================================================
// FogStateFlags — Fog state flags
// ============================================================================
enum FogStateFlags {
    FOG_FLAG_ENABLED       = (1 << 0),  // Fog is active
    FOG_FLAG_RANGE_ADJ     = (1 << 1),  // Fog range adjustment is active
    FOG_FLAG_COLOR_ANIM    = (1 << 2),  // Fog color is being animated
    FOG_FLAG_Z_FOG         = (1 << 3),  // Using z-based fog
    FOG_FLAG_INDOOR_OVERRIDE = (1 << 4), // Indoor section overrides fog
};

// ============================================================================
// FogConfig — Complete fog configuration
// ============================================================================
// Stores all parameters needed to configure GX fog.
// The range adjustment table is allocated separately (0x500 bytes).
//
// Size: 0x38 bytes (excluding the range table pointer)
// ============================================================================
struct FogConfig {
    // Fog equation parameters
    u8   fogType;           // 0x00: GX_FOG_* type
    u8   _01;               // 0x01: padding
    u8   _02;               // 0x02: padding
    u8   _03;               // 0x03: padding
    f32  startZ;            // 0x04: fog start distance (near, fully clear)
    f32  endZ;              // 0x08: fog end distance (far, fully fogged)
    f32  nearZ;             // 0x0C: near plane depth (for projection)
    f32  farZ;              // 0x10: far plane depth (for projection)

    // Fog color
    GXColor color;          // 0x14: RGBA fog color (0x00RRGGBB)
    GXColor targetColor;    // 0x18: target color for animation

    // Range adjustment
    u16* rangeAdjTable;     // 0x1C: pointer to range adjustment table (640 entries)
    u16  rangeAdjCenter;    // 0x20: range adjustment center

    // State
    u32  flags;             // 0x24: FogStateFlags

    // Color animation
    f32  colorLerpSpeed;    // 0x28: color interpolation speed
    f32  _2C;               // 0x2C: unknown
    u32  _30;               // 0x30: padding
    u32  _34;               // 0x34: padding
};

// ============================================================================
// FogSystem — Global fog manager
// ============================================================================
// Central manager for all fog state. One instance exists per scene.
//
// Size: 0x60 bytes
// ============================================================================
struct FogSystem {
    FogConfig config;        // 0x00: current fog configuration (0x38)

    // Default (outdoor) fog settings
    f32  defaultStartZ;     // 0x38: default fog start
    f32  defaultEndZ;       // 0x3C: default fog end
    GXColor defaultColor;   // 0x40: default fog color
    u8   defaultType;       // 0x44: default fog type
    u8   _45[3];           // 0x45: padding

    // Indoor override settings
    f32  indoorStartZ;      // 0x48: indoor fog start
    f32  indoorEndZ;        // 0x4C: indoor fog end
    GXColor indoorColor;    // 0x50: indoor fog color
    u8   indoorEnabled;     // 0x54: indoor override active
    u8   _55[3];           // 0x55: padding

    u32  _58;              // 0x58: unknown
    u32  _5C;              // 0x5C: padding
};

// ============================================================================
// Function declarations — Fog System
// ============================================================================

// 0x80560000 — Initialize the fog system with defaults
// @addr 0x80560000
void FogSys_Init(FogSystem* fog);

// 0x805600C0 — Set fog parameters (type, start, end, color)
// @addr 0x805600C0
void FogSys_SetFog(FogSystem* fog, u8 type, f32 startZ, f32 endZ, GXColor color);

// 0x80560180 — Enable or disable fog rendering
// @addr 0x80560180
void FogSys_SetEnabled(FogSystem* fog, u8 enabled);

// 0x805601C0 — Update the fog range adjustment table from the projection matrix
// @addr 0x805601C0
void FogSys_UpdateRangeAdj(FogSystem* fog, u16 viewportWidth, const f32 projMtx[4][4]);

// 0x80560300 — Upload fog settings to GX hardware
// @addr 0x80560300
void FogSys_Upload(const FogSystem* fog);

// 0x80560400 — Set fog color (immediate, no animation)
// @addr 0x80560400
void FogSys_SetColor(FogSystem* fog, GXColor color);

// 0x80560460 — Set fog color target for animated transition
// @addr 0x80560460
void FogSys_SetColorTarget(FogSystem* fog, GXColor color, f32 speed);

// 0x80560500 — Update animated fog color
// @addr 0x80560500
void FogSys_UpdateColorAnim(FogSystem* fog, f32 dt);

// 0x80560600 — Enter an indoor section (override fog settings)
// @addr 0x80560600
void FogSys_EnterIndoor(FogSystem* fog);

// 0x80560680 — Exit an indoor section (restore outdoor fog)
// @addr 0x80560680
void FogSys_ExitIndoor(FogSystem* fog);

// 0x80560700 — Get the current fog color (for skybox matching)
// @addr 0x80560700
GXColor FogSys_GetColor(const FogSystem* fog);

// 0x80560720 — Reset fog to default settings
// @addr 0x80560720
void FogSys_ResetToDefaults(FogSystem* fog);