// EffectGroup.cpp — Reconstructed from Ghidra decompilation (0x8056731c - 0x805685b4)
// All functions are static methods operating on a global singleton.
// The global address is loaded via lis+addi (relocated at load time).
// Ghidra pseudo-code shows this as: rN = 0x0 << 16; rN = rN + 0;
// which resolves to the module-relative base of the global EffectGroup instance.

#include "EffectGroup.hpp"
#include <decomp.h>

// Global EffectGroup singleton instance address.
// In the original binary, this is accessed via lis+addi with relocation.
// The exact address is module-relative and patched at load time.
// TODO: determine the actual global address from the relocated binary
extern "C" void* sEffectGroup_global; // placeholder — actual type is the global state struct

// The global state struct layout (inferred from code access patterns):
// Offset  Size  Description
// 0x00    4     Update flag (set to 1 in update())
// 0x04    4     List head ptr (list A)
// 0x08    4     List head ptr (list B) — or entry count
// 0x0C    4     List head ptr (list C — used in setActive, findFreeSlot)
// 0x10    4     Array entry (part of 2-element array at 0x10, stride 0xC)
// 0x18    4     Array A head (zeroed in reset, indexed by i*0xC)
// 0x1C    4     (cont.)
// 0x20    4     Array B head (zeroed in reset, indexed by i*0xC)
// 0x24    4     (cont.)
// 0x28    4     EffectGroup ptr (stored in addToList)
// 0x2C    4     Zeroed in globalInit
// 0x34    4     Some count/index
// 0x38    4     Array head (zeroed in globalInit, used in addToList)
// 0x3C    4     (cont.)
// 0x40    2     Flags (u16, bit 1 set in addToList on success)
// 0x44    4     Flags (u32, bit 3 set in reset, bit 2 checked in cleanup, bit 0 checked)
// 0x48    8     Template data (f64 pair)
// 0x50    4     Template offset float (loaded via lfs)
// 0x58    4     Template parameter float
// 0x68    4     Count/capacity (bounds-checked in tryInsert, addToList)
// 0x88    1     Effect type byte (stored in createFromTemplate)

// Helper macro to access the global singleton.
// The lis+addi pattern resolves to the actual global address at runtime.
#define EG_GLOBAL() reinterpret_cast<u8*>(0x80000000) // TODO: replace with actual global symbol

// External functions (framework / EGG library):
// These are called but not part of this module.
extern "C" {
    // List traversal — returns next node in intrusive list
    // Called with (listHead, currentNode) pattern
    void* sub_53358(void* listHead, void* current);  // likely EGG::TList traversal

    // List search variants (used in findFreeSlot, findByType, findByIndex)
    void* sub_565a0(void* listHead, void* current, s32 param);
    void* sub_56338(void* listHead, void* current, s32 param);
    void* sub_5646c(void* listHead, void* current, s32 param);

    // Allocator / pool functions
    void sub_4eecc(void* param);           // allocator init (called in globalInit)
    void sub_52114(void* list, void* node); // list remove/destroy (called in cleanup)
    void sub_52168(void* list, void* node); // another list operation (called in cleanup)
    void sub_524d0(void* node);            // node destroy (called in cleanup)
    void sub_5322c(void* node);            // node release (called in cleanup)
    void sub_56a80(void* info);            // position calc helper (called in spawnEffect)

    // Sub-functions called in update()
    void sub_53544(void* param);
    void sub_536c0(void* param);
}

// ============================================================
// 0x8056731c — EffectGroup_cleanup
// Traverse linked lists, call vtable methods on nodes,
// check flags at offset 0x44, remove nodes as needed.
// ============================================================
void EffectGroup::cleanup() {
    u8* g = EG_GLOBAL();

    // Set global flag
    *reinterpret_cast<u32*>(g + 0x00) = 1;

    // First pass: traverse list A (at offset 0x04)
    EffectNode* node = *reinterpret_cast<EffectNode**>(g + 0x04);
    if (node != nullptr) {
        // Call vtable[5] (offset 0x14) — cleanup method
        void (*vt_cleanup)(EffectNode*) = reinterpret_cast<void (*)(EffectNode*)>(
            *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x14));
        vt_cleanup(node);

        // Call sub_524d0 — likely a destruction/release helper
        sub_524d0(node);

        // Clear list head
        *reinterpret_cast<u32*>(g + 0x18) = 0;

        // Second traversal loop
        EffectNode* curr = *reinterpret_cast<EffectNode**>(g + 0x18);
        while ((curr = reinterpret_cast<EffectNode*>(
                    sub_53358(reinterpret_cast<void*>(g + 0x0C), curr))) != nullptr) {
            u8 flag = *reinterpret_cast<u8*>(curr + 0x69);
            // Check if flag byte is zero (both -flag and flag are 0)
            if (((s8)(-flag) | flag) >> 31 == 0) {
                // flag is non-zero — skip removal
                continue;
            }

            u32 flags44 = *reinterpret_cast<u32*>(g + 0x44);
            if ((flags44 & 0x02) == 0) {
                continue;
            }

            // Check if list at 0x20 has entries
            if (*reinterpret_cast<u32*>(g + 0x20) == nullptr) {
                sub_52114(reinterpret_cast<void*>(g + 0x0C), nullptr);
                // Clear list at 0x18
                *reinterpret_cast<u32*>(g + 0x18) = 0;
                break;
            }

            // Call vtable[4] (offset 0x10) on current node
            void (*vt_release)(EffectNode*) = reinterpret_cast<void (*)(EffectNode*)>(
                *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(curr) + 0x10));
            vt_release(curr);

            // Continue traversal
            while ((curr = reinterpret_cast<EffectNode*>(
                        sub_53358(reinterpret_cast<void*>(g + 0x0C), curr))) != nullptr) {
                flags44 = *reinterpret_cast<u32*>(g + 0x44);
                if ((flags44 & 0x02) == 0) {
                    continue;
                }

                if (*reinterpret_cast<u32*>(g + 0x20) == nullptr) {
                    sub_52168(reinterpret_cast<void*>(g + 0x0C), nullptr);

                    if ((*reinterpret_cast<u32*>(g + 0x44)) & 0x01) {
                        // Release node with count 0
                        sub_5322c(node, 0);
                        return;
                    }
                }
            }
        }
    }
    // TODO: The Ghidra decompilation has significant control flow issues here.
    // The actual cleanup logic likely involves:
    //   1. For each node in list A: check flag, call vtable cleanup, remove if needed
    //   2. For each node in list B: same pattern
    //   3. Clear appropriate list heads and flags
}

// ============================================================
// 0x80567514 — EffectGroup_reset
// Clear 2 list entries, zero slots at 0x18/0x20, set flag bit 3.
// ============================================================
void EffectGroup::reset() {
    u8* g = EG_GLOBAL();

    // Loop 2 times (clear both list slots)
    for (s32 i = 0; i < 2; i++) {
        s32 offset = i * 0xC; // ROTATE_AND_MASK(i, 2) = i & 3, used as byte offset
        // Zero out entries at 0x18 + offset and 0x20 + offset
        *reinterpret_cast<u32*>(g + 0x18 + offset) = 0;
        *reinterpret_cast<u32*>(g + 0x20 + offset) = 0;

        // Traverse list at offset 0x00 + i*0xC
        sub_53358(reinterpret_cast<void*>(g + 0x00), reinterpret_cast<void*>(g + i * 0xC));
    }

    // Clear pointer at 0x28
    *reinterpret_cast<u32*>(g + 0x28) = 0;

    // Set flag bit 3 at 0x44
    *reinterpret_cast<u32*>(g + 0x44) |= 0x08;
}

// ============================================================
// 0x80567594 — EffectGroup_update
// Check global update flag, call sub-functions, dispatch vtable update.
// ============================================================
void EffectGroup::update() {
    u8* g = EG_GLOBAL();

    if (*reinterpret_cast<u32*>(g + 0x00) != 0) {
        // Call two sub-functions
        sub_53544(nullptr);
        sub_536c0(nullptr);

        // Get object from global, then call vtable[6] (offset 0x18) on its sub-object
        u32* obj = *reinterpret_cast<u32**>(g + 0x00);
        u32* subObj = *reinterpret_cast<u32**>(obj + 0x34 / 4);
        void (*vt_update)(void*) = reinterpret_cast<void (*)(void*)>(
            *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(subObj) + 0x18));
        vt_update(subObj);

        // Set global flag to 1
        *reinterpret_cast<u32*>(g + 0x00) = 1;
    }
}

// ============================================================
// 0x805675f8 — EffectGroup_setEntryByIndex
// Look up entry via index*0xC, store index at offset 0x14.
// ============================================================
void EffectGroup::setEntryByIndex(s32 index) {
    u8* g = EG_GLOBAL();
    s32 offset = index * 0xC;

    // Look up entry in list starting at global + 0x00 + offset
    void* entry = sub_53358(reinterpret_cast<void*>(g + 0x00 + offset), nullptr);

    // Store index at entry + 0x14
    // TODO: the "entry" here may actually be the list head, and 0x14 is on the global
    // The Ghidra output shows: *(uint32_t*)(0x14(r30)) = r31 where r30 = r3 (the arg)
    // This suggests r3 is the EffectGroup instance ptr, not the list result
}

// ============================================================
// 0x80567648 — EffectGroup_tryInsert
// Bounds-check count, validate against array capacity, insert via vtable.
// ============================================================
void EffectGroup::tryInsert(void* entry) {
    u8* g = EG_GLOBAL();
    // TODO: this function's parameter is the EffectGroup-derived object, not entry
    // The code reads offset 0x10 and 0x68 from it

    u32* obj = static_cast<u32*>(entry);
    s32 count = static_cast<s32>(*reinterpret_cast<u32*>(obj + 0x68 / 4));

    if (count >= 0) {
        // Check against array capacity
        s32 capacity = static_cast<s32>(*reinterpret_cast<u32*>(g + 0x00));
        if (count < capacity) {
            // Call vtable[6] (offset 0x18) on global's first node
            void* node = *reinterpret_cast<void**>(g + 0x00);
            if (node != nullptr) {
                void (*vt_insert)(void*) = reinterpret_cast<void (*)(void*)>(
                    *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x18));
                vt_insert(node);
            }

            // Store into array at g+0x08 via indexed write
            s32 arrayIdx = count << 2;
            u32* array = *reinterpret_cast<u32**>(g + 0x08);
            if (array == nullptr || *array == 0) {
                return;
            }

            // Bounds-check against second array
            s32 capacity2 = static_cast<s32>(*reinterpret_cast<u32*>(g + 0x04));
            if (count < capacity2) {
                void* node2 = *reinterpret_cast<void**>(g + 0x00);
                void (*vt_insert2)(void*) = reinterpret_cast<void (*)(void*)>(
                    *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node2) + 0x18));
                vt_insert2(node2);

                // Write to array
                u32* targetArray = *reinterpret_cast<u32**>(g + 0x08);
                targetArray[count] = *reinterpret_cast<u32*>(obj + 0x10 / 4);

                // Clear active flag
                *reinterpret_cast<u32*>(obj + 0x14 / 4) = 0;
            }
        }
    }
}

// ============================================================
// 0x8056774c — EffectGroup_setActive
// Look up entry from list, set active flag to 1.
// ============================================================
void EffectGroup::setActive() {
    u8* g = EG_GLOBAL();

    // Traverse list at g + 0x0C
    void* entry = sub_53358(reinterpret_cast<void*>(g + 0x0C), nullptr);

    // Set active flag at offset 0x14
    // TODO: the actual target of the stw 0x14 is ambiguous from Ghidra
}

// ============================================================
// 0x805677cc — EffectGroup_addToList
// Store ptr into global, bounds-check, insert, set flag bit 1.
// ============================================================
void EffectGroup::addToList(void* group, s32 param) {
    u8* g = EG_GLOBAL();

    // Store group pointer
    *reinterpret_cast<void**>(g + 0x28) = group;

    // Traverse list
    sub_53358(reinterpret_cast<void*>(g + 0x00), nullptr);

    if (param != 0) {
        // Read count from offset 0x68 of group
        u32* obj = static_cast<u32*>(group);
        s32 count = static_cast<s32>(*reinterpret_cast<u32*>(obj + 0x68 / 4));

        if (count >= 0) {
            // Check capacity from global
            s32 capacity = static_cast<s32>(*reinterpret_cast<u32*>(g + 0x38 + 0x04));

            if (count < capacity) {
                // Call vtable[6] (offset 0x18) on list at g+0x38
                void* node = *reinterpret_cast<void**>(g + 0x38);
                if (node != nullptr) {
                    void (*vt_insert)(void*) = reinterpret_cast<void (*)(void*)>(
                        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x18));
                    vt_insert(node);
                }

                // Write to array
                s32 idx = count << 2;
                u32* array = *reinterpret_cast<u32**>(g + 0x38 + 0x08);
                array[count] = *reinterpret_cast<u32*>(obj + 0x10 / 4);

                // Set bit 1 at offset 0x40 (u16)
                u16 flags = *reinterpret_cast<u16*>(obj + 0x40);
                flags |= 0x0002;
                *reinterpret_cast<u16*>(obj + 0x40) = flags;
            }
        }
    }
}

// ============================================================
// 0x805678b4 — EffectGroup_findFreeSlot
// Loop up to 3 times, search via sub_565a0.
// ============================================================
void* EffectGroup::findFreeSlot() {
    u8* g = EG_GLOBAL();
    void* result = nullptr;

    for (s32 i = 0; i < 3; i++) {
        result = sub_565a0(reinterpret_cast<void*>(g + 0x00), nullptr, 0);

        // Try to get next in list
        void* next = sub_53358(reinterpret_cast<void*>(g + 0x00), result);
        if (next == nullptr) {
            break;
        }
        result = next;
    }

    return result;
}

// ============================================================
// 0x80567920 — EffectGroup_findByType
// Search via sub_56338 variant.
// ============================================================
void* EffectGroup::findByType() {
    u8* g = EG_GLOBAL();
    void* result = nullptr;

    for (s32 i = 0; i < 1; i++) { // TODO: determine actual loop count
        result = sub_56338(reinterpret_cast<void*>(g + 0x00), nullptr, 0);
        void* next = sub_53358(reinterpret_cast<void*>(g + 0x00), result);
        if (next == nullptr) {
            break;
        }
        result = next;
    }

    return result;
}

// ============================================================
// 0x80567978 — EffectGroup_findByIndex
// Search via sub_5646c variant.
// ============================================================
void* EffectGroup::findByIndex() {
    u8* g = EG_GLOBAL();
    void* result = nullptr;

    for (s32 i = 0; i < 1; i++) { // TODO: determine actual loop count
        result = sub_5646c(reinterpret_cast<void*>(g + 0x00), nullptr, 0);
        void* next = sub_53358(reinterpret_cast<void*>(g + 0x00), result);
        if (next == nullptr) {
            break;
        }
        result = next;
    }

    return result;
}

// ============================================================
// 0x805679d0 — EffectEntry_createFromTemplate
// Read template data from global (0x48-0x58), adjust 12 floats.
// ============================================================
void EffectGroup::createFromTemplate(s32 type) {
    u8* g = EG_GLOBAL();
    // TODO: verify float conversion
    f64 templateVal = *reinterpret_cast<f64*>(g + 0x48);   // lfd
    f32 offset = *reinterpret_cast<f32*>(g + 0x50);         // lfs
    f32 param2 = *reinterpret_cast<f32*>(g + 0x4C);         // lfs
    f32 param3 = *reinterpret_cast<f32*>(g + 0x58);         // lfs

    // The function creates a stack-local structure with 12 adjusted float values
    // and passes it to the list insertion function.
    // The template data at g+0x08 through g+0x3C is copied and adjusted by +/- offset.

    // Stack frame is 0x60 bytes with computed float values at offsets 0x08-0x44.
    // The computation pattern:
    //   f2 = templateVal + offset (frsp to single)
    //   f4 = param2 - offset
    //   f5 = param2 + offset
    //   f2_neg = param3 - offset
    //   f1_plus = param3 + offset
    //   f0_neg = offset - offset  (from g+0x00)

    // Build the 12-float template on stack and call insertion
    f32 floats[12];
    floats[0] = offset;
    floats[1] = offset;
    floats[2] = offset;
    floats[3] = param2 + offset;  // TODO: verify
    floats[4] = param2 - offset;  // TODO: verify
    floats[5] = templateVal + offset; // TODO: verify float conversion from f64
    floats[6] = offset;
    floats[7] = param2 + offset;
    floats[8] = param2 - offset;
    floats[9] = param3 + offset;
    floats[10] = param3 - offset;
    floats[11] = offset;

    // Call list insertion
    sub_53358(reinterpret_cast<void*>(g + 0x00), floats);
}

// ============================================================
// 0x80567b58 — EffectEntry_init
// Store param at offset 4, allocate, call vtable init.
// ============================================================
void EffectGroup::initEntry(void* entry, s32 param) {
    *reinterpret_cast<u32*>(static_cast<u8*>(entry) + 0x04) = param;

    // Allocate via param*4 index
    void* allocated = sub_53358(nullptr, reinterpret_cast<void*>(param << 2));
    *reinterpret_cast<void**>(static_cast<u8*>(entry) + 0x08) = allocated;

    // Call vtable[5] (offset 0x14) — init method
    u32 vtable = *reinterpret_cast<u32*>(entry);
    void (*vt_init)(void*, s32) = reinterpret_cast<void (*)(void*, s32)>(
        *reinterpret_cast<u32*>(vtable + 0x14));
    vt_init(entry, 0);
}

// ============================================================
// 0x80567bac — EffectGroup_globalInit
// Clear global struct fields, call allocator init.
// ============================================================
void EffectGroup::globalInit() {
    u8* g = EG_GLOBAL();

    // Clear fields
    *reinterpret_cast<u32*>(g + 0x38) = 0;
    *reinterpret_cast<u32*>(g + 0x38 + 0x04) = 0;
    *reinterpret_cast<u32*>(g + 0x38 + 0x08) = 0;
    *reinterpret_cast<u32*>(g + 0x2C) = 0;
    *reinterpret_cast<u32*>(g + 0x44) = 0;

    // Call allocator init
    sub_4eecc(nullptr);
}

// ============================================================
// 0x80567c10 — EffectGroup_tryAddEntry
// Conditional list insertion.
// ============================================================
void EffectGroup::tryAddEntry(void* entry, s32 count) {
    if (entry == nullptr || count <= 0) {
        return;
    }

    u8* e = static_cast<u8*>(entry);
    void* prev = *reinterpret_cast<void**>(e + 0x00);
    *reinterpret_cast<void**>(e + 0x00) = EG_GLOBAL();

    if (prev != nullptr) {
        sub_53358(prev, nullptr);
        *reinterpret_cast<void**>(e + 0x08) = nullptr;
    }

    sub_53358(entry, nullptr);
}

// ============================================================
// 0x80567c88 — EffectGroup_addEntryWithCallback
// Store param, check callback, allocate, call vtable with 5 args.
// ============================================================
void EffectGroup::addEntryWithCallback(void* entry, s32 param, void* callback) {
    u8* e = static_cast<u8*>(entry);
    *reinterpret_cast<u32*>(e + 0x04) = param;

    if (callback == nullptr) {
        return;
    }

    // Get global node
    void* node = *reinterpret_cast<void**>(EG_GLOBAL());

    // Allocate via param*4
    u32 allocOffset = *reinterpret_cast<u32*>(e + 0x04) << 2;
    void* allocated = sub_53358(node, reinterpret_cast<void*>(allocOffset));
    *reinterpret_cast<void**>(e + 0x08) = allocated;

    // Call vtable[5] (offset 0x14) with 5 args
    u32 vtable = *reinterpret_cast<u32*>(e);
    void (*vt_init)(void*, void*, s32, s32, s32) = reinterpret_cast<void (*)(void*, void*, s32, s32, s32)>(
        *reinterpret_cast<u32*>(vtable + 0x14));
    vt_init(e, node, 0, 0, 4); // TODO: verify arg count and values
}

// ============================================================
// 0x80567d00 — EffectGroup_spawnEffect
// Large function (684 bytes) creating physics effect objects.
// ============================================================
void EffectGroup::spawnEffect(void* entry, u32 param, s32 variant) {
    u8* e = static_cast<u8*>(entry);
    u8* g = EG_GLOBAL();

    // First allocation
    void* alloc1 = sub_53358(e, nullptr);
    *reinterpret_cast<void**>(e + 0x38) = alloc1;
    *reinterpret_cast<u32*>(e + 0x68) = param;
    *reinterpret_cast<u32*>(e + 0x6C) = 0;

    // Second allocation
    void* alloc2 = sub_53358(e + 0x70, nullptr);

    // Load position from globals (two floats)
    f32 posX = *reinterpret_cast<f32*>(g + 0x00);
    f32 posZ = *reinterpret_cast<f32*>(g + 0x00); // TODO: likely different global
    *reinterpret_cast<f32*>(e + 0x100) = posX;
    *reinterpret_cast<f32*>(e + 0x104) = posZ;
    *reinterpret_cast<u32*>(e + 0x108) = variant;

    // Call vtable[5] (offset 0x14) on node at 0x70
    EffectNode* node = *reinterpret_cast<EffectNode**>(e + 0x70);
    void (*vt_create)(EffectNode*) = reinterpret_cast<void (*)(EffectNode*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x14));
    vt_create(node);

    // Check global flag at offset 0x58
    u32 globalFlag = *reinterpret_cast<u32*>(g + 0x58);
    if (globalFlag == 0) {
        // Third allocation
        sub_53358(e, nullptr);

        u32 spawnVariant = *reinterpret_cast<u32*>(e + 0x108);
        if (spawnVariant == 0) {
            // Load KCL-style data (stride 0xC)
            // Read position from table, adjust by global offset
            f64 globalOffset = *reinterpret_cast<f64*>(g + 0x48);
            f32 offset = *reinterpret_cast<f32*>(g + 0x50);

            // Load table entry (r5 * 0xC indexed)
            u32 tableIdx = *reinterpret_cast<u32*>(g + 0x00);
            // Load u16 pair from table
            // ... position calculation ...

            // Set bit 0 of flags at 0x34
            u16 flags = *reinterpret_cast<u16*>(e + 0x34);
            flags |= 0x0001;
            *reinterpret_cast<u16*>(e + 0x34) = flags;

            // Store computed positions
            *reinterpret_cast<f32*>(e + 0x40) = offset;
            *reinterpret_cast<f32*>(e + 0x44) = offset;
        } else if (spawnVariant == 1) {
            // Similar with different table entries
            // ...
        } else {
            // Call position helper
            sub_56a80(e);
        }
    }
    // The function continues with similar logic for variant 1...
    // TODO: Full reconstruction requires understanding the KCL data table format
}

// ============================================================
// 0x80567fac - 0x8056806c — Destructor stubs
// Virtual destructor pattern: check ptr != null, count >= 0, call allocator.
// ============================================================
void EffectGroup::dtorStub1(void* obj, s32 count) {
    if (obj == nullptr || count < 0) return;
    sub_53358(obj, nullptr);
}

void EffectGroup::dtorStub2(void* obj, s32 count) {
    if (obj == nullptr || count < 0) return;
    sub_53358(obj, nullptr);
}

void EffectGroup::dtorStub3(void* obj, s32 count) {
    if (obj == nullptr || count < 0) return;
    sub_53358(obj, nullptr);
}

void EffectGroup::dtorStub4(void* obj, s32 count) {
    if (obj == nullptr || count < 0) return;
    sub_53358(obj, nullptr);
}

// ============================================================
// Spawn type variants — common pattern:
//   1. Call createFromTemplate(type)
//   2. Save current position at 0x18/0x1C
//   3. Load global zero float
//   4. If index matches, set fields and dispatch vtable calls
// ============================================================

// Common spawn helper used by types 1, 4, 6 (no object ptr variant)
static void spawnTypeCommon(void* entry, s32 index, s32 type, s32 templateType) {
    u8* e = static_cast<u8*>(entry);
    u8* g = EG_GLOBAL();

    // Create from template
    EffectGroup::createFromTemplate(templateType);

    // Load global zero float
    f32 zero = *reinterpret_cast<f32*>(g + 0x00);

    // Check index
    u32 currentIdx = *reinterpret_cast<u32*>(e + 0x04);
    if (currentIdx != index) {
        return;
    }

    // Save/restore position
    f32 savedX = *reinterpret_cast<f32*>(e + 0x18);
    f32 savedZ = *reinterpret_cast<f32*>(e + 0x1C);

    // Zero out position fields
    *reinterpret_cast<f32*>(e + 0x28) = zero;
    *reinterpret_cast<f32*>(e + 0x2C) = zero;
    *reinterpret_cast<f32*>(e + 0x30) = zero;

    // Set index and flags
    *reinterpret_cast<u32*>(e + 0x04) = index;
    u16 flags = *reinterpret_cast<u16*>(e + 0x34);
    flags |= 0x0001;
    *reinterpret_cast<u16*>(e + 0x34) = flags;

    // Load target position from 0x100/0x104
    *reinterpret_cast<f32*>(e + 0x18) = *reinterpret_cast<f32*>(e + 0x100);
    *reinterpret_cast<f32*>(e + 0x1C) = *reinterpret_cast<f32*>(e + 0x104);
    *reinterpret_cast<u32*>(e + 0x00) = 0;

    // Call vtable[3] (offset 0x0C) on node at 0x38
    void* node = *reinterpret_cast<void**>(e + 0x38);
    void (*vt_method)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x0C));
    vt_method(node);

    // Restore position
    *reinterpret_cast<f32*>(e + 0x18) = savedX;
    *reinterpret_cast<f32*>(e + 0x1C) = savedZ;

    // Call vtable[6] (offset 0x18) on sub-object at 0x70
    void* subObj = *reinterpret_cast<void**>(e + 0x70);
    void (*vt_update)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(subObj) + 0x18));
    vt_update(subObj);
}

// Common spawn helper for "withObj" variants (types 3, 5)
static void spawnTypeWithObjCommon(void* entry, void* obj, s32 index, s32 type, s32 templateType) {
    u8* e = static_cast<u8*>(entry);
    u8* g = EG_GLOBAL();

    EffectGroup::createFromTemplate(templateType);

    f32 zero = *reinterpret_cast<f32*>(g + 0x00);

    u32 currentIdx = *reinterpret_cast<u32*>(e + 0x04);
    if (currentIdx != index) {
        return;
    }

    // Store object ptr at offset 0x00
    *reinterpret_cast<void**>(e + 0x00) = obj;

    // Zero fields
    *reinterpret_cast<f32*>(e + 0x28) = zero;
    *reinterpret_cast<f32*>(e + 0x2C) = zero;
    *reinterpret_cast<f32*>(e + 0x30) = zero;

    // Set index and flags
    *reinterpret_cast<u32*>(e + 0x04) = index;
    u16 flags = *reinterpret_cast<u16*>(e + 0x34);
    flags |= 0x0001;
    *reinterpret_cast<u16*>(e + 0x34) = flags;

    // Call vtable[3] (offset 0x0C) on node at 0x38
    void* node = *reinterpret_cast<void**>(e + 0x38);
    void (*vt_method)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x0C));
    vt_method(node);

    // Call vtable[6] (offset 0x18) on object at 0x6C (different from non-obj variant!)
    void* obj6c = *reinterpret_cast<void**>(e + 0x6C);
    void (*vt_obj_update)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(obj6c) + 0x18));
    vt_obj_update(obj6c);
}

// 0x805680ac — EffectGroup_spawnTypeParam
void EffectGroup::spawnTypeParam(void* entry, s32 index, s32 type, s32 param) {
    // When param (r6) is 0, behaves like spawnTypeCommon with r5 as template type
    // TODO: verify the conditional on r6
    u8* e = static_cast<u8*>(entry);
    u8* g = EG_GLOBAL();

    if (param == 0) {
        EffectGroup::createFromTemplate(type);
    }

    f32 zero = *reinterpret_cast<f32*>(g + 0x00);
    f32 savedX = *reinterpret_cast<f32*>(e + 0x18);
    f32 savedZ = *reinterpret_cast<f32*>(e + 0x1C);

    u32 currentIdx = *reinterpret_cast<u32*>(e + 0x04);
    if (currentIdx != index) {
        return;
    }

    *reinterpret_cast<f32*>(e + 0x28) = zero;
    *reinterpret_cast<f32*>(e + 0x2C) = zero;
    *reinterpret_cast<f32*>(e + 0x30) = zero;

    *reinterpret_cast<u32*>(e + 0x04) = index;
    u16 flags = *reinterpret_cast<u16*>(e + 0x34);
    flags |= 0x0001;
    *reinterpret_cast<u16*>(e + 0x34) = flags;

    *reinterpret_cast<f32*>(e + 0x18) = *reinterpret_cast<f32*>(e + 0x100);
    *reinterpret_cast<f32*>(e + 0x1C) = *reinterpret_cast<f32*>(e + 0x104);
    *reinterpret_cast<u32*>(e + 0x00) = 0;

    void* node = *reinterpret_cast<void**>(e + 0x38);
    void (*vt_method)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(node) + 0x0C));
    vt_method(node);

    *reinterpret_cast<f32*>(e + 0x18) = savedX;
    *reinterpret_cast<f32*>(e + 0x1C) = savedZ;

    void* subObj = *reinterpret_cast<void**>(e + 0x70);
    void (*vt_update)(void*) = reinterpret_cast<void (*)(void*)>(
        *reinterpret_cast<u32*>(*reinterpret_cast<u32*>(subObj) + 0x18));
    vt_update(subObj);
}

// 0x8056819c — EffectGroup_spawnType1
void EffectGroup::spawnType1(void* entry, s32 index, s32 type) {
    spawnTypeCommon(entry, index, type, 1);
}

// 0x80568284 — EffectGroup_spawnType4
void EffectGroup::spawnType4(void* entry, s32 index, s32 type) {
    spawnTypeCommon(entry, index, type, 4);
}

// 0x8056836c — EffectGroup_spawnType6
void EffectGroup::spawnType6(void* entry, s32 index, s32 type) {
    spawnTypeCommon(entry, index, type, 6);
}

// 0x80568454 — EffectGroup_spawnTypeWithObj
void EffectGroup::spawnTypeWithObj(void* entry, void* obj, s32 index, s32 type) {
    spawnTypeWithObjCommon(entry, obj, index, type, type);
}

// 0x80568504 — EffectGroup_spawnType3
void EffectGroup::spawnType3(void* entry, void* obj, s32 index, s32 type) {
    spawnTypeWithObjCommon(entry, obj, index, type, 3);
}

// 0x805685b4 — EffectGroup_spawnType5
void EffectGroup::spawnType5(void* entry, void* obj, s32 index, s32 type) {
    spawnTypeWithObjCommon(entry, obj, index, type, 5);
}