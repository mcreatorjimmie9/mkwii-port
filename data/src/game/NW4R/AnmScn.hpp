#pragma once
// ============================================================================
// AnmScn — NW4R Animation Scene Container
// ============================================================================
// An AnmScn is a container that groups multiple typed animation objects
// (AnmObjTexPat, AnmObjTexSrt, AnmObjMatClr, AnmObjChr, AnmObjShp, etc.)
// and manages their collective lifecycle. The scene is attached to a G3dObj
// and updates/applies all child animations in sequence.
//
// The scene maps animation names/indices to the correct material and
// property within the target model.
//
// NW4R namespace: nw4r::g3d::AnmScn
// Address range: 0x80601E00 - 0x806029FF
// Function count: 18
// ============================================================================

#include <types.h>
#include "ResTex.hpp"

// Forward declarations
struct AnmObjTexPatData;
struct AnmObjTexSrtData;
struct AnmObjMatClrData;
struct AnmObjChrData;
struct ResAnmScn;
struct G3dObjData;

// Maximum animation objects per type in a scene
static const u8 ANMSCN_MAX_TEXPAT  = 16;
static const u8 ANMSCN_MAX_TEXSRT  = 16;
static const u8 ANMSCN_MAX_MATCLR  = 16;
static const u8 ANMSCN_MAX_CHR     = 8;
static const u8 ANMSCN_MAX_SHP     = 8;

// Play mode constants and state flags are defined in ResTex.hpp

// ============================================================================
// AnmScnData — Animation scene runtime data
// ============================================================================
// The top-level container for all animation objects associated with a model.
// Manages child animation objects and orchestrates calc/draw passes.
//
// Size: 0x100 bytes
// ============================================================================
struct AnmScnData {
    void* vtable;               // 0x00: vtable pointer
    ResAnmScn* resource;        // 0x04: scene resource data
    G3dObjData* targetModel;    // 0x08: model this scene is attached to
    u32 flags;                  // 0x0C: scene flags
    f32 globalFrame;            // 0x10: global frame counter
    f32 globalFrameRate;        // 0x14: global playback speed
    f32 globalDuration;         // 0x18: total scene duration
    u8  globalPlayMode;         // 0x1C: play mode for all children
    u8  _1D[3];                // 0x1D: padding
    u32 _20;                    // 0x20: flags/state

    // Child animation object counts
    u8  texPatCount;            // 0x24: number of TexPat anims
    u8  texSrtCount;            // 0x25: number of TexSrt anims
    u8  matClrCount;            // 0x26: number of MatClr anims
    u8  chrCount;               // 0x27: number of Chr anims
    u8  shpCount;               // 0x28: number of Shp anims
    u8  _29[3];                // 0x29: padding

    // Child animation object pointers (allocated separately)
    AnmObjTexPatData* texPatAnims[ANMSCN_MAX_TEXPAT]; // 0x2C
    AnmObjTexSrtData* texSrtAnims[ANMSCN_MAX_TEXSRT]; // 0x6C
    AnmObjMatClrData* matClrAnims[ANMSCN_MAX_MATCLR]; // 0xAC
    AnmObjChrData* chrAnims[ANMSCN_MAX_CHR];           // 0xEC
    // Additional space for Shp anims would follow
    u32 _10C;                   // 0x10C: additional state
    u32 _110;                   // 0x110: additional state
    u8  _114[0x20];            // 0x114: reserved (padding to 0x134)
};

// ============================================================================
// AnmScnInfo — Parsed animation scene metadata
// ============================================================================
struct AnmScnInfo {
    u16 texPatCount;            // 0x00: number of texture pattern anims
    u16 texSrtCount;            // 0x02: number of texture SRT anims
    u16 matClrCount;            // 0x04: number of material color anims
    u16 chrCount;               // 0x06: number of character visibility anims
    u16 shpCount;               // 0x08: number of shape deformation anims
    u16 _0A;                    // 0x0A: padding
    f32 duration;               // 0x0C: total scene duration
};

// ============================================================================
// Function declarations — AnmScn
// ============================================================================

// @addr 0x80601E00 — Create AnmScn from resource, binding to a model
AnmScnData* AnmScn_Create(AnmScnData* obj, ResAnmScn* res, G3dObjData* model);

// @addr 0x80601EC0 — Destroy AnmScn and all child animation objects
void AnmScn_Destroy(AnmScnData* obj);

// @addr 0x80601F60 — Calculate / advance all child animations
void AnmScn_Calc(AnmScnData* obj, f32 deltaTime);

// @addr 0x80602060 — Apply all child animations to the model
void AnmScn_Apply(AnmScnData* obj);

// @addr 0x80602140 — Set frame for all child animations
void AnmScn_SetFrame(AnmScnData* obj, f32 frame);

// @addr 0x806021E0 — Get current global frame
f32 AnmScn_GetFrame(const AnmScnData* obj);

// @addr 0x80602200 — Get total scene duration
f32 AnmScn_GetDuration(const AnmScnData* obj);

// @addr 0x80602220 — Set global frame rate for all children
void AnmScn_SetFrameRate(AnmScnData* obj, f32 rate);

// @addr 0x80602260 — Set global play mode for all children
void AnmScn_SetPlayMode(AnmScnData* obj, u8 mode);

// @addr 0x806022A0 — Check if all animations have finished
BOOL AnmScn_IsFinished(const AnmScnData* obj);

// @addr 0x806022E0 — Pause all animations
void AnmScn_Pause(AnmScnData* obj);

// @addr 0x80602300 — Resume all animations
void AnmScn_Resume(AnmScnData* obj);

// @addr 0x80602320 — Reset all animations to frame 0
void AnmScn_Reset(AnmScnData* obj);

// @addr 0x80602380 — Attach an additional TexPat animation
BOOL AnmScn_AttachTexPat(AnmScnData* obj, AnmObjTexPatData* anm);

// @addr 0x806023E0 — Attach an additional TexSrt animation
BOOL AnmScn_AttachTexSrt(AnmScnData* obj, AnmObjTexSrtData* anm);

// @addr 0x80602440 — Attach an additional MatClr animation
BOOL AnmScn_AttachMatClr(AnmScnData* obj, AnmObjMatClrData* anm);

// @addr 0x806024A0 — Get child TexPat animation by index
AnmObjTexPatData* AnmScn_GetTexPat(AnmScnData* obj, u8 idx);

// @addr 0x806024E0 — Get child TexSrt animation by index
AnmObjTexSrtData* AnmScn_GetTexSrt(AnmScnData* obj, u8 idx);

// @addr 0x80602520 — Parse scene info from resource
void AnmScn_GetScnInfo(ResAnmScn* res, AnmScnInfo* out);