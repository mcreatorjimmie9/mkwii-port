#pragma once
// ============================================================================
// SceneGraph — Scene Graph / Display List Management
// ============================================================================
// Handles the hierarchical scene graph used for rendering.
// Includes tree node management, display list construction, and
// render group assignment.
//
// The scene graph uses a tree structure where each node has:
//   - Children array (pointer at offset 0x00, count at offset 0x04)
//   - Per-child node data (0x18 bytes each, with child pointer at 0x38)
//   - Color/priority fields for render ordering
//   - Linked list of "active" nodes via flags at offset 0x18 (bit 0)
// ============================================================================

#include <types.h>

// ============================================================================
// SceneNode — A node in the scene graph tree
// Size: 0x24 bytes
// ============================================================================
struct SceneNode {
    void** children;         // 0x00: array of child SceneNode pointers
    u16 childCount;          // 0x04: number of children
    u16 _06;                 // 0x06: padding
    u32 _08;                 // 0x08: unknown
    u8 colorPriority;        // 0x0C: color/priority byte (signed)
    u8 _0D[3];               // 0x0D: padding
    u16 flags;               // 0x10: flags (bit 0 = active/visible)
    u16 _12;                 // 0x12: unknown
    SceneNode* nextSibling;  // 0x14: next sibling in list
    u32 _18;                 // 0x18: linked list / tree state
    u8 _1C;                  // 0x1C: animation color byte
    f32 _20;                 // 0x20: computed value (used in calc)
};

// ============================================================================
// SceneGroup — A group node that holds a display list
// ============================================================================
struct SceneGroup {
    void** children;         // 0x00: array of child pointers
    u16 childCount;          // 0x04: number of children
    u16 _06;                 // 0x06: padding
    void* displayList;       // 0x08: display list data (may be null)
    u32 _0C;                 // 0x0C: flags/state
    u16 _10;                 // 0x10: unknown
    u16 _12;                 // 0x12: unknown
    u32 _14;                 // 0x14: callback/data pointer
    u16 _18;                 // 0x18: flags (bit 0 = dirty/active)
    u16 _1A;                 // 0x1A: unknown
    f32 _1C;                 // 0x1C: computed float
};

// ============================================================================
// DisplayListEntry — Entry in a display list
// Size: 12 bytes
// ============================================================================
struct DisplayListEntry {
    u16 texCoordX;           // 0x00: texture coordinate X
    u16 texCoordY;           // 0x02: texture coordinate Y
    u16 _04;                 // 0x04: unknown
    u16 _06;                 // 0x06: unknown
    u16 _08;                 // 0x08: width (in pixels / 8)
    u16 _0A;                 // 0x0A: height (in pixels / 8)
};

// ============================================================================
// RenderGroupData — Per-render-group setup data
// ============================================================================
struct RenderGroupData {
    u16 groupType;           // 0x00: type of render group
    u16 groupFlags;          // 0x02: flags
    u32 _04;                 // 0x04: flags/state
    u32 _08;                 // 0x08: callback
    // Extended data follows
};

// ============================================================================
// Function declarations — Scene Graph
// ============================================================================

// 0x805A00F0 — Destroy a scene node and its display list
void SceneNode_Destroy(void* node, void* displayList);

// 0x805A0188 — Allocate and initialize a scene group
void* SceneGroup_Create(u32 size);

// 0x805A0230 — Copy display list data from global to node
void SceneNode_CopyDisplayList(void* node, void* src, u32 count);

// 0x805A0390 — Get display list dimensions for a child
void DisplayList_GetDimensions(SceneGroup* group, u32 childIdx, u16* outHeight, s32* outTileRows);

// 0x805A03D0 — Copy display list entries from source to destination
void DisplayList_CopyEntries(void* dst, u32 dstIdx, void* src, u32 count);

// 0x805A04F0 — Create a render group entry
void RenderGroup_CreateEntry(u16 index, void* dst);

// 0x805A05AC — Build display list with color/priority data
void DisplayList_BuildWithColor(void* dst, u32 count, void* src, void* colorData, u32 flags);

// 0x805A1A2C — Reset all children's color priorities
void SceneNode_ResetChildren(SceneGroup* group);

// 0x805A1F9C — Save FPR31 for display list operations
void SceneGraph_SaveFPR31();

// 0x805A5250 — Save FPR31 for node operations
void SceneNode_SaveFPR31();

// 0x805A5698 — Propagate color priority through tree (recursive)
void SceneNode_PropagateColor(SceneNode* node, u8 newColor);

// 0x805A5850 — Get child node by index from a scene group
void* SceneGroup_GetChild(SceneGroup* group, u32 index);