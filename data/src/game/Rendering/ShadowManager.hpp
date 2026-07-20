#pragma once
// ============================================================================
// ShadowManager — Shadow Rendering Pipeline
// ============================================================================
// Manages shadow rendering for karts, items, and course objects.
// Mario Kart Wii uses a simplified shadow system with projected shadow
// circles/ellipses rendered as textured quads on the ground plane.
//
// The shadow system works in two passes:
//   1. Shadow projection pass: For each shadow caster, project a shadow
//      shape onto the ground plane using a simple vertical projection
//   2. Shadow render pass: Draw the shadow quads with alpha blending
//      before drawing the actual objects
//
// Shadow types:
//   - Circle: Simple circular shadow (for karts at normal height)
//   - Squash: Squashed ellipse (for karts close to ground)
//   - Blob: Soft blob shadow (for items and small objects)
//   - None: No shadow (e.g., when jumping very high)
//
// Address range: 0x80563000 - 0x80564FFF
// ============================================================================

#include <types.h>
#include <EGG/math.h>
#include <gx.hpp>

// Maximum number of shadow casters
static const u8 MAX_SHADOW_CASTERS = 12;

// ============================================================================
// ShadowType — Shadow shape type
// ============================================================================
enum ShadowType {
    SHADOW_NONE    = 0,  // No shadow rendered
    SHADOW_CIRCLE  = 1,  // Full circular shadow
    SHADOW_SQUASH  = 2,  // Squashed ellipse (low to ground)
    SHADOW_BLOB    = 3,  // Soft blob shadow
};

// ============================================================================
// ShadowEntry — Per-caster shadow state
// ============================================================================
// Stores the computed shadow parameters for one shadow caster.
// Updated each frame based on the caster's position and ground distance.
//
// Size: 0x30 bytes
// ============================================================================
struct ShadowEntry {
    Vec3f position;         // 0x00: shadow center position on ground
    f32  radiusX;           // 0x0C: shadow ellipse X radius
    f32  radiusZ;           // 0x10: shadow ellipse Z radius
    f32  alpha;             // 0x14: shadow opacity (0.0 - 1.0)
    u8   shadowType;        // 0x18: ShadowType
    u8   casterId;          // 0x19: ID of the caster (player index, etc.)
    u8   _1A;               // 0x1A: padding
    u8   _1B;               // 0x1B: padding
    f32  groundY;           // 0x1C: Y position of the ground under caster
    f32  heightAboveGround; // 0x20: caster height above ground
    f32  maxVisibleHeight;  // 0x24: max height before shadow fades out
    f32  _28;               // 0x28: unknown
    f32  _2C;               // 0x2C: unknown
};

// ============================================================================
// ShadowParams — Tunable parameters for shadow rendering
// ============================================================================
// Controls shadow size, opacity, and distance behavior.
//
// Size: 0x30 bytes
// ============================================================================
struct ShadowParams {
    f32  baseRadiusX;       // 0x00: base X radius for circle shadow
    f32  baseRadiusZ;       // 0x04: base Z radius for circle shadow
    f32  squashRadiusX;     // 0x08: X radius when squashed
    f32  squashRadiusZ;     // 0x0C: Z radius when squashed
    f32  blobRadius;        // 0x10: radius for blob shadow
    f32  baseAlpha;         // 0x14: base opacity
    f32  heightAlphaScale;  // 0x18: alpha scale factor per unit height
    f32  maxHeight;         // 0x1C: max height before shadow disappears
    f32  squashThreshold;   // 0x20: height below which squash kicks in
    f32  fadeStartHeight;   // 0x24: height at which fade begins
    f32  fadeEndHeight;     // 0x28: height at which fade completes
    f32  groundOffset;      // 0x2C: vertical offset from ground
};

// ============================================================================
// ShadowManager — Global shadow rendering manager
// ============================================================================
// Central manager that collects shadow entries from all casters
// and renders them in a single batch.
//
// Size: 0x80 bytes
// ============================================================================
struct ShadowManager {
    ShadowEntry entries[MAX_SHADOW_CASTERS];  // 0x00: shadow entries
    u32  activeCount;        // 0x240: number of active entries
    ShadowParams params;     // 0x244: rendering parameters
    u32  _274;               // 0x274: unknown
    u32  flags;              // 0x278: flags (bit 0 = shadows enabled)
    u32  _27C;               // 0x27C: padding
};

// ============================================================================
// Function declarations — Shadow Manager
// ============================================================================

// 0x80563000 — Initialize the shadow manager
// @addr 0x80563000
void ShadowMgr_Init(ShadowManager* mgr);

// 0x80563100 — Set shadow rendering parameters
// @addr 0x80563100
void ShadowMgr_SetParams(ShadowManager* mgr, const ShadowParams* params);

// 0x80563180 — Enable or disable shadow rendering
// @addr 0x80563180
void ShadowMgr_SetEnabled(ShadowManager* mgr, u8 enabled);

// 0x805631C0 — Update a shadow entry for a given caster
// @addr 0x805631C0
void ShadowMgr_UpdateEntry(ShadowManager* mgr, u8 casterId,
                            const Vec3f* casterPos, f32 groundY);

// 0x80563400 — Compute shadow shape and position for an entry
// @addr 0x80563400
void ShadowMgr_ComputeShadow(ShadowManager* mgr, ShadowEntry* entry);

// 0x80563600 — Render all active shadows
// @addr 0x80563600
void ShadowMgr_RenderAll(ShadowManager* mgr);

// 0x80563800 — Render a single shadow as a textured quad
// @addr 0x80563800
void ShadowMgr_RenderEntry(const ShadowEntry* entry);

// 0x80563900 — Begin shadow rendering pass (set up GX state)
// @addr 0x80563900
void ShadowMgr_BeginPass(void);

// 0x80563980 — End shadow rendering pass (restore GX state)
// @addr 0x80563980
void ShadowMgr_EndPass(void);

// 0x80563A00 — Clear all shadow entries for a new frame
// @addr 0x80563A00
void ShadowMgr_ClearEntries(ShadowManager* mgr);

// 0x80563A40 — Get the number of active shadow entries
// @addr 0x80563A40
u32  ShadowMgr_GetActiveCount(const ShadowManager* mgr);