#pragma once
// ============================================================================
// TexAnim — Texture Animation System
// ============================================================================
// Manages texture coordinate animation for 2D panes (J2D/J3D framework).
// Each TexAnim controls two "layers" of animation data (primary and secondary),
// each with: tex coord pairs (u16,u16), float pairs (f32,f32), and RGBA colors.
//
// Used for animated billboards, sprite effects, and UI elements.
// ============================================================================

#include <types.h>

// Forward declarations
class TexAnimPane;
struct TexAnimResource;

// ============================================================================
// TexAnimPane — A sub-pane used by TexAnim (J2DPane-like)
// Size: 0x18 bytes
// ============================================================================
// Referenced at offsets 0x94, 0x98, 0x9C within TexAnim.
// Has a vtable at offset 0, a size/count at offset 0x08, and
// a virtual method at vtable[2] (offset 0x10).
// ============================================================================
class TexAnimPane {
public:
    void* vtable;          // 0x00: vtable pointer
    u32 _04;               // 0x04: unknown
    u32 frameCount;        // 0x08: frame count / size value
    u32 _0C;               // 0x0C: unknown
    u16 _10;               // 0x10: unknown
    u16 _12;               // 0x12: unknown
    u32 _14;               // 0x14: linked list / next pointer
};
// static_assert(sizeof(TexAnimPane) == 0x18);

// ============================================================================
// TexAnimLayer — One animation layer's state (tex coords, floats, color)
// Size: 0x18 bytes
// ============================================================================
struct TexAnimLayer {
    u16 texU;              // 0x00: texture U coordinate
    u16 texV;              // 0x02: texture V coordinate
    f32 scaleX;            // 0x04: scale X
    f32 scaleY;            // 0x08: scale Y (or width)
    u8 colorR;             // 0x0C: red channel
    u8 colorG;             // 0x0D: green channel
    u8 colorB;             // 0x0E: blue channel
    u8 colorA;             // 0x0F: alpha channel
    u8 blendFlags;         // 0x10: blend/flags (bit 0 = visible/dirty)
    u8 _11;                // 0x11: padding
    u16 _12;               // 0x12: unknown
    u32 _14;               // 0x14: unknown
};
// static_assert(sizeof(TexAnimLayer) == 0x18);

// ============================================================================
// TexAnim — Texture Animation Controller
// Size: 0xCC bytes (small variant) or 0x90 bytes (minimal variant)
// ============================================================================
// Controls two layers of animation data with independent tex coords,
// scales, and colors. Used for sprite animation, particle effects, etc.
//
// Field layout:
//   0x00-0x03: vtable pointer (or flags for minimal variant)
//   0x04-0x07: pointer to TexAnimResource or flags
//   0x08-0x09: current tex U
//   0x0A-0x0B: current tex V
//   0x0C-0x0F: current scale X (f32)
//   0x10-0x13: current scale Y (f32)
//   0x14: current color R
//   0x15: current color G
//   0x16: current color B
//   0x17: current color A
//   0x18: blend flags
//   0x1C-0x33: secondary TexAnimLayer (tex coords, scales, colors)
//   0x34-0x3B: anim state flags
//   0x3C-0x53: tertiary animation data (similar layout)
//   0x54-0x8B: quaternary animation data
//   0x8C-0xBB: additional state
//   0xC0-0xCB: counters / indices
// ============================================================================

// Full TexAnim structure (0xCC bytes)
class TexAnim {
public:
    // Virtual / polymorphic access
    void* vtable;              // 0x00

    // Primary layer
    u32 _04;                   // 0x04: resource pointer or flags
    u16 texU;                  // 0x08: current texture U
    u16 texV;                  // 0x0A: current texture V
    f32 scaleX;                // 0x0C: current scale X
    f32 scaleY;                // 0x10: current scale Y
    u8 colorR;                 // 0x14: current color R
    u8 colorG;                 // 0x15: current color G
    u8 colorB;                 // 0x16: current color B
    u8 colorA;                 // 0x17: current color A
    u8 blendFlags;             // 0x18: blend/visibility flags

    // Secondary layer (offset 0x1C-0x33)
    u32 _1C;                   // 0x1C: resource pointer
    u16 texU2;                 // 0x20: secondary tex U
    u16 texV2;                 // 0x22: secondary tex V
    f32 scaleX2;               // 0x24: secondary scale X
    f32 scaleY2;               // 0x28: secondary scale Y
    u8 colorR2;                // 0x2C: secondary color R
    u8 colorG2;                // 0x2D: secondary color G
    u8 colorB2;                // 0x2E: secondary color B
    u8 colorA2;                // 0x2F: secondary color A
    u8 blendFlags2;            // 0x30: secondary blend flags

    // Tertiary layer (offset 0x34-0x53)
    u8 _34;                    // 0x34: type/category
    u8 _35;                    // 0x35: sub-type
    u16 _36;                   // 0x36: unknown
    u32 _38;                   // 0x38: animation state flags
    u32 _3C;                   // 0x3C: state
    u16 texU3;                 // 0x40: tertiary tex U
    u16 texV3;                 // 0x42: tertiary tex V
    f32 scaleX3;               // 0x44: tertiary scale X
    f32 scaleY3;               // 0x48: tertiary scale Y
    u8 colorR3;                // 0x4C: tertiary color R
    u8 colorG3;                // 0x4D: tertiary color G
    u8 colorB3;                // 0x4E: tertiary color B
    u8 colorA3;                // 0x4F: tertiary color A
    u8 _50;                    // 0x50: preserved flags
    u8 _51;                    // 0x51: unknown

    // Quaternary layer (offset 0x54-0x8B)
    // Same structure as tertiary but for second animation track
    u32 _54;                   // 0x54: animation state
    u8 _58[0x30];              // 0x58-0x87: (tex coords, scales, colors)

    // State
    u8 _88;                    // 0x88: animation type
    u32 _8C;                   // 0x8C: unknown
    u16 _90;                   // 0x90: unknown
    u16 _92;                   // 0x92: unknown

    // More layers...
    u8 _94[0x0C];              // 0x94-0x9F: pane 1 area
    u8 _A0[0x0C];              // 0xA0-0xAB: pane 2 area
    u8 _AC[0x0C];              // 0xAC-0xB7: pane 3 area
    u8 _B8;                    // 0xB8: preserved alpha/flag
    u16 _BC;                   // 0xBC-0xBD: unknown

    // Runtime state
    u16 hitCount;              // 0xC2: consecutive hit counter
    u16 matchCount;            // 0xC4: consecutive match counter
    u8 _C6;                    // 0xC6: current animation flag
    u8 _C7;                    // 0xC7: unknown
};
// static_assert(sizeof(TexAnim) == 0xCC);

// ============================================================================
// TexAnimNode — Linked list node for animation chain
// Referenced by 0x805B5278 (unlink) and 0x805B51E8 (destroy)
// ============================================================================
class TexAnimNode {
public:
    TexAnimNode* next;         // 0x00: next in chain
    TexAnimNode* prev;         // 0x04: previous in chain
    u16 count;                 // 0x08: child count
    u16 _0A;                   // 0x0A: unknown
    u32 _0C;                   // 0x0C: flags/state
    TexAnimNode* child;        // 0x10: first child
    u8 _14[0x08];              // 0x14: unknown
    u32 _1C;                   // 0x1C: animation data pointer
};

// ============================================================================
// TexAnimResource — Animation keyframe resource data
// Loaded from BRRES/NARC archives
// ============================================================================
struct TexAnimResource {
    u8 width;                  // 0x00: width (in tiles/frames)
    u8 height;                 // 0x01: height (in tiles/frames)
    u8 _02;                    // 0x02: unknown
    u8 _03;                    // 0x03: unknown
    u8 _04[0x04];              // 0x04-0x07: frame data entries
    u8 _08;                    // 0x08: flag (enable animation)
    u8 _09;                    // 0x09: flag (enable secondary)
    u8 _0A;                    // 0x0A: flag (enable tertiary)
    u8 _0B;                    // 0x0B: flag (enable quaternary)
    u8 _0C;                    // 0x0C: unknown
    u8 _0D;                    // 0x0D: unknown
};

// ============================================================================
// Function declarations
// ============================================================================

// 0x805B035C — Initialize a TexAnim (0x90-byte variant)
void TexAnim_Init_090(void* self);

// 0x805B05C4 — Reset TexAnim to defaults
void TexAnim_Reset(void* self);

// 0x805B068C — Calculate total animation duration
f32 TexAnim_CalcTotalDuration(void* self);

// 0x805B0B90 — Initialize a TexAnim (0xCC-byte variant)
void TexAnim_Init_0CC(void* self);

// 0x805B0DC4 — Advance animation by one frame
void TexAnim_AdvanceFrame(void* self, u32 param);

// 0x805B1394 — Reset animation from current frame data
void TexAnim_SetFromCurrent(void* self, u32 param);

// 0x805B15D8 — Load animation data from resource
void TexAnim_LoadFromResource(void* self, TexAnimResource* res);

// 0x805B1CBC — Virtual call: vtable[7] on sub-object
void TexAnim_CallVtable1C(void* subObj);

// 0x805B22BC — Get texture scale Y (from secondary layer)
f32 TexAnim_GetTexScaleY();

// 0x805B4AA0 — Validate/prepare animation data
void TexAnim_Validate(void* self, u32 texIdx, u8 flag1, u8 flag2);

// 0x805B51E8 — Destroy an animation node
void TexAnim_DestroyNode(void* node);

// 0x805B5278 — Unlink an animation node from chain
void TexAnim_UnlinkNode(void* node, void* child);

// 0x805B5338 — Save FPR31 register (prologue helper)
void TexAnim_SaveFPR31();