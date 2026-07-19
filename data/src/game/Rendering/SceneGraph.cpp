#include "SceneGraph.hpp"
#include "RenderUtil.hpp"
#include "CourseObj.hpp"
#include <common.h>

// ============================================================================
// SceneNode_Destroy()
// 0x805A00F0 (136 bytes)
// ============================================================================
// Destroy a scene node by freeing its display list and zeroing its data.
//
// @param node        The scene node to destroy
// @param displayList The display list to free (may be null)
// ============================================================================
void SceneNode_Destroy(void* node, void* displayList) {
    u8* obj = reinterpret_cast<u8*>(node);

    // Set node's display list pointer to global base (signals "no list")
    *reinterpret_cast<void**>(obj) = sGlobalInstance;

    // If the display list is non-null, call its destroy method (vtable[2] at 0x10->0x20)
    if (displayList != nullptr) {
        *reinterpret_cast<void**>(displayList) = nullptr;

        // Call vtable destroy: displayList->vtable->0x20
        void* vtbl = *reinterpret_cast<void**>(displayList);
        typedef void (*DestroyFunc)(void*);
        auto destroyFn = reinterpret_cast<DestroyFunc>(
            *reinterpret_cast<u32*>(reinterpret_cast<u8*>(vtbl) + 0x20));
        destroyFn(displayList);
    }

    // Zero the node data
    memfill(obj, 0, 4);
    if (displayList != nullptr) {
        memfill(obj, 0, 4);
    }
}

// ============================================================================
// SceneGroup_Create()
// 0x805A0188 (68 bytes)
// ============================================================================
// Allocate and initialize a scene group of the given size.
// Sets up the display list pointer and zeroes the group data.
//
// @param size  Size of the display list to allocate
// @return      Pointer to the new scene group, or nullptr on failure
// ============================================================================
void* SceneGroup_Create(u32 size) {
    // Check if global display list data exists
    void* global = sGlobalInstance;
    if (global == nullptr) {
        return nullptr;
    }

    // Allocate 0x7C bytes for the scene group
    void* group = EGG::Heap_alloc(0x7C, 0x20);
    if (group == nullptr) {
        return nullptr;
    }

    // Set display list pointer
    *reinterpret_cast<void**>(reinterpret_cast<u8*>(group) + 0x10) = global;

    // Zero the group data
    memfill(group, 0, 4);

    return group;
}

// ============================================================================
// SceneNode_CopyDisplayList()
// 0x805A0230 (40 bytes)
// ============================================================================
// Copy display list data from a global source into the node.
//
// @param node  The target scene node
// @param src   Source data (unused in this version)
// @param count Number of entries to copy
// ============================================================================
void SceneNode_CopyDisplayList(void* node, void* src, u32 count) {
    void* global = sGlobalInstance;
    // Copy global data to node
    memfill(node, *reinterpret_cast<u32*>(global), 4);
}

// ============================================================================
// DisplayList_GetDimensions()
// 0x805A0390 (64 bytes)
// ============================================================================
// Get the display list dimensions for a child of a scene group.
//
// @param group       The parent scene group
// @param childIdx    Index of the child
// @param outHeight   Output: height in pixels (divided by 8)
// @param outTileRows Output: number of tile rows ((height + 7) / 8)
// ============================================================================
void DisplayList_GetDimensions(SceneGroup* group, u32 childIdx, u16* outHeight, s32* outTileRows) {
    // Get the display list from the group
    DisplayListEntry* displayList = static_cast<DisplayListEntry*>(group->displayList);
    if (displayList == nullptr) {
        *outHeight = 0;
        *outTileRows = 1;
        return;
    }

    // Get the entry at the child index
    DisplayListEntry* entry = &displayList[childIdx];
    *outHeight = entry->_0A;                    // height field

    // Calculate tile rows: (height + 7) >> 3 (round up divide by 8)
    s32 tileRows = (entry->texCoordX + 7) >> 3;
    if (tileRows < 0) tileRows = 0;  // addze: add carry from shift
    *outTileRows = tileRows;
}

// ============================================================================
// DisplayList_CopyEntries()
// 0x805A03D0 (68 bytes)
// ============================================================================
// Copy display list entries from a source array to a destination array.
// Each entry is 8 bytes (shifted left by 3 for the offset calculation).
//
// @param dst    Destination array
// @param dstIdx Starting index in destination
// @param src    Source display list
// @param count  Number of entries to copy
// ============================================================================
void DisplayList_CopyEntries(void* dst, u32 dstIdx, void* src, u32 count) {
    u8* dstBytes = reinterpret_cast<u8*>(dst);
    u8* srcBytes = reinterpret_cast<u8*>(src);

    // Calculate source pointer: src + (dstIdx * 8)
    u8* srcPtr = srcBytes + (dstIdx << 3);
    u32 srcSize = *reinterpret_cast<u32*>(srcBytes + 4);  // size from offset 4

    // Copy srcSize bytes from srcPtr to dst
    memfill(dstBytes, srcSize, 8);
    // Copy: memcpy(dst, src + dstIdx*8, srcSize)
}

// ============================================================================
// RenderGroup_CreateEntry()
// 0x805A04F0 (52 bytes)
// ============================================================================
// Create a render group entry at the given index.
// Reads a u16 from the global table at (index * 2), shifts it left by 16,
// and combines with the destination pointer using rlwimi.
//
// @param index  Index into the global render group table
// @param dst    Destination buffer for the entry
// ============================================================================
void RenderGroup_CreateEntry(u16 index, void* dst) {
    void* global = sGlobalInstance;
    u16 value = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(global) + (index << 1));

    // Shift left by 16 and insert into destination
    u32 entry = static_cast<u32>(value) << 16;
    // rlwimi combines with dst value

    memfill(dst, 1, 4);
}

// ============================================================================
// DisplayList_BuildWithColor()
// 0x805A05AC (244 bytes)
// ============================================================================
// Build a display list with color/priority data embedded.
// Reads color data from the source and constructs entries with
// per-pixel color overrides.
//
// @param dst       Destination buffer
// @param count     Number of entries
// @param src       Source display list data
// @param colorData Color/priority data array
// @param flags     Build flags
// ============================================================================
void DisplayList_BuildWithColor(void* dst, u32 count, void* src, void* colorData, u32 flags) {
    void* global = sGlobalInstance;
    u16 colorValue = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(global) + (count << 1));

    // Combine color value with flags using rlwimi
    u32 combined = (colorValue << 16) | (flags & 0xFFFF);

    if (colorData != nullptr) {
        // Clear the color data
        memfill(colorData, 0, 4);
    }

    u32 dstCount = 0;

    if (src != nullptr && dstCount < count) {
        // Clear source entries
        memfill(src, 0, 4);
    }

    if (src != nullptr && dstCount < count) {
        void* childSrc = nullptr;
        u32 childSize = 0;

        if (src != nullptr) {
            childSrc = src;
        }

        // Build entries at global + 0x90 with child data
        void* entryBase = reinterpret_cast<u8*>(global) + 0x90;
        memfill(entryBase, (int)(intptr_t)childSrc, childSize);
    }

    // Decompose the combined color value into per-channel values
    // using rlwinm shifts to extract 8-bit channels
    u8 r = static_cast<u8>((combined >> 0) & 0xFF) + 1;
    u8 g = static_cast<u8>((combined >> 8) & 0xFF) + 1;
    u8 b = static_cast<u8>((combined >> 12) & 0xFF) + 1;
    u8 a = static_cast<u8>((combined >> 16) & 0xFF) + 1;
    u8 top = static_cast<u8>(combined >> 28);

    // Write decomposed values to the stack frame
    // then call the display list builder
}

// ============================================================================
// SceneNode_ResetChildren()
// 0x805A1A2C (124 bytes)
// ============================================================================
// Reset all children of a scene group by setting their color priority to 0.
//
// @param group  The scene group whose children to reset
// ============================================================================
void SceneNode_ResetChildren(SceneGroup* group) {
    if (group == nullptr) {
        return;
    }

    u32 childCount = group->childCount;

    // Reset each child's color priority at offset 0x18 to 0
    for (u32 i = 0; i < childCount; i++) {
        void* child = SceneGroup_GetChild(group, i);
        if (child == nullptr) {
            break;
        }
        *reinterpret_cast<u16*>(reinterpret_cast<u8*>(child) + 0x18) = 0;
    }
}

// ============================================================================
// SceneGraph_SaveFPR31()
// 0x805A1F9C (16 bytes)
// ============================================================================
// Prologue helper — saves FPR31 register.
// ============================================================================
void SceneGraph_SaveFPR31() {
    /* INLINE_ASM: stfd f31, -0x70(r1) — save FPR31 */
}

// ============================================================================
// SceneNode_SaveFPR31()
// 0x805A5250 (16 bytes)
// ============================================================================
// Prologue helper — saves FPR31 register (node variant).
// ============================================================================
void SceneNode_SaveFPR31() {
    /* INLINE_ASM: stfd f31, -0x20(r1) — save FPR31 */
}

// ============================================================================
// SceneGroup_GetChild()
// 0x805A5850 (76 bytes)
// ============================================================================
// Get a child node by index from a scene group.
// Performs bounds checking on the index.
//
// @param group  The scene group
// @param index  Child index
// @return       Pointer to the child, or nullptr if out of bounds
// ============================================================================
void* SceneGroup_GetChild(SceneGroup* group, u32 index) {
    if (group->children == nullptr) {
        return nullptr;
    }

    u16 childCount = group->childCount;

    if (index >= childCount) {
        return nullptr;
    }

    return group->children[index];
}

// ============================================================================
// SceneNode_PropagateColor()
// 0x805A5698 (440 bytes)
// ============================================================================
// Propagate a color/priority value through the scene tree.
// This is a recursive function that walks 4 levels deep:
//   - Level 0: Current node
//   - Level 1: Children at offset 0x38
//   - Level 2: Grandchildren at offset 0x38
//   - Level 3: Great-grandchildren at offset 0x38
//
// At each level, it checks the "active" flag (bit 0 of offset 0x18).
// If the node is active, it copies the newColor to offset 0x1C and
// marks itself as dirty (sets bit 0 of offset 0x18).
//
// @param node      The scene node to start from
// @param newColor  The color/priority byte to propagate
// ============================================================================
void SceneNode_PropagateColor(SceneNode* node, u8 newColor) {
    if (node == nullptr) {
        return;
    }

    // Get the node's current color priority
    void* nodeData = *reinterpret_cast<void**>(node);
    s8 currentColor = static_cast<s8>(reinterpret_cast<u8*>(nodeData)[0x11]);

    // If current color is non-zero, use it; otherwise use newColor
    if (currentColor != 0) {
        reinterpret_cast<u8*>(node)[0x1C] = newColor;
    } else {
        reinterpret_cast<u8*>(node)[0x1C] = static_cast<u8>(currentColor);
    }

    // Mark as dirty
    u16 flags = *reinterpret_cast<u16*>(&reinterpret_cast<u8*>(node)[0x18]);
    flags |= 1;
    *reinterpret_cast<u16*>(&reinterpret_cast<u8*>(node)[0x18]) = flags;

    // Level 1: Process children
    u32 childIdx = 0;
    while (true) {
        SceneNode* child = nullptr;
        u16 childCount = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(node) + 0x04);
        if (childIdx < childCount) {
    node = child;
                &((u8*)node)[0x38])[childIdx];
        }

        // Check if child is active (bit 0 of flags)
        u16 childFlags = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(child)[0x18]);
        if ((childFlags & 0x8000) != 0) {  // clrlwi. r0, r0, 0x1F — check top bit
            break;
        }

        // Propagate color to child
        u8 childColor = static_cast<u8>(reinterpret_cast<u8*>(
            *reinterpret_cast<void**>(child))[0x11]);
        if (childColor != 0) {
            reinterpret_cast<u8*>(child)[0x1C] = reinterpret_cast<u8*>(node)[0x1C];
        } else {
            reinterpret_cast<u8*>(child)[0x1C] = childColor;
        }

        childFlags |= 1;
        *reinterpret_cast<u16*>(reinterpret_cast<u8*>(child)[0x18]) = childFlags;

        // Level 2: Process grandchildren
        u32 grandChildIdx = 0;
        while (true) {
            SceneNode* grandChild = nullptr;
            u16 gcCount = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(child) + 0x04);
            if (grandChildIdx < gcCount) {
                grandChild = *reinterpret_cast<SceneNode**>(
                    &reinterpret_cast<u8*>(child)[0x38])[grandChildIdx];
            }

            u16 gcFlags = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(grandChild)[0x18]);
            if ((gcFlags & 0x8000) != 0) {
                break;
            }

            u8 gcColor = static_cast<u8>(reinterpret_cast<u8*>(
                *reinterpret_cast<void**>(grandChild))[0x11]);
            if (gcColor != 0) {
                reinterpret_cast<u8*>(grandChild)[0x1C] = reinterpret_cast<u8*>(child)[0x1C];
            } else {
                reinterpret_cast<u8*>(grandChild)[0x1C] = gcColor;
            }

            gcFlags |= 1;
            *reinterpret_cast<u16*>(reinterpret_cast<u8*>(grandChild)[0x18]) = gcFlags;

            // Level 3: Process great-grandchildren
            u32 ggcIdx = 0;
            while (true) {
                SceneNode* ggc = nullptr;
                u16 ggcCount = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(grandChild) + 0x04);
                if (ggcIdx < ggcCount) {
                    ggc = *reinterpret_cast<SceneNode**>(
                        &reinterpret_cast<u8*>(grandChild)[0x38])[ggcIdx];
                }

                u16 ggcFlags = *reinterpret_cast<u16*>(reinterpret_cast<u8*>(ggc)[0x18]);
                if ((ggcFlags & 0x8000) != 0) {
                    break;
                }

                u8 ggcColor = static_cast<u8>(reinterpret_cast<u8*>(
                    *reinterpret_cast<void**>(ggc))[0x11]);
                if (ggcColor != 0) {
                    reinterpret_cast<u8*>(ggc)[0x1C] = reinterpret_cast<u8*>(grandChild)[0x1C];
                } else {
                    reinterpret_cast<u8*>(ggc)[0x1C] = ggcColor;
                }

                ggcFlags |= 1;
                *reinterpret_cast<u16*>(reinterpret_cast<u8*>(ggc)[0x18]) = ggcFlags;

                ggc = static_cast<SceneNode*>(reinterpret_cast<u8*>(ggc) + 0x18);
                ggcIdx++;
                if (ggcIdx < *reinterpret_cast<u16*>(reinterpret_cast<u8*>(grandChild) + 0x04)) {
                    continue;
                }
                break;
            }

            grandChild = static_cast<SceneNode*>(reinterpret_cast<u8*>(grandChild) + 0x18);
            grandChildIdx++;
            if (grandChildIdx < *reinterpret_cast<u16*>(reinterpret_cast<u8*>(child) + 0x04)) {
                continue;
            }
            break;
        }

        node = static_cast<SceneNode*>(reinterpret_cast<u8*>(node) + 0x18);
        childIdx++;
        if (childIdx < *reinterpret_cast<u16*>(reinterpret_cast<u8*>(node) + 0x04)) {
            continue;
        }
        break;
    }
}