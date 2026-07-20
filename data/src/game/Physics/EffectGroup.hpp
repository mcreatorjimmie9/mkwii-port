#pragma once
// EffectGroup.hpp — Reconstructed from Ghidra decompilation (0x8056731c - 0x805685b4)
// Manages visual/effect entries (particles, physics effects) via global singleton + linked lists.
// Confidence: guess — struct layouts inferred from code patterns; vtable offsets need verification.

#include <types.h>

class EffectGroup;

// Forward declarations for external allocator / list helpers
// These are EGG or nw4r framework functions that operate on intrusive linked lists.
// sub_0x00053358 — likely EGG::TList::getNext() or similar list traversal
// sub_0x000565a0, sub_0x00056338, sub_0x0005646c — list search variants
// sub_0x0004eecc — some kind of allocator or pool init function

// Effect list node — vtable layout inferred from code patterns.
// Nodes are managed via intrusive linked lists with vtable dispatch.
// Vtable method indices inferred from dispatch patterns in EffectGroup.cpp
class EffectNode {
public:
    virtual ~EffectNode();

    // vtable offsets (word-indexed):
    //  [0x00] destructor
    //  [0x0C] some init/reset method (called in EffectEntry_init)
    //  [0x10] another method (called in cleanup loop)
    //  [0x14] destructor-like cleanup (called in EffectGroup_cleanup)
    //  [0x18] update/activate method (called in EffectGroup_update, spawn)

    u8 _00[0x04];       // 0x00 - vtable ptr (included in class layout)
    // Additional fields unknown
    u8 _44[0x01];       // 0x44 — flags byte checked during cleanup
    // ...
};
// EffectNode size varies by subclass; minimum ~0x6C based on field access patterns

// Effect entry data — stored in arrays within the global EffectGroup state.
// Each entry tracks an active effect instance.
// Layout: 0x0C stride per entry (3x f32 or equivalent packed data)
struct EffectEntry {
    u8 _00[0x0C];       // 0x00 — unknown, stride is 0xC for indexed arrays
};

// Effect template data — read from global at offsets 0x48-0x58
// Contains float values used to compute effect positions with +/- offset adjustments.
struct EffectTemplate {
    f64 _48;            // 0x48 — float pair (loaded via lfd)
    f32 _50;            // 0x50 — offset value
    f32 _54;            // 0x54 — another parameter
    f32 _58;            // 0x58 — another parameter
    u32 _5c[4];         // 0x5C-0x68 — template matrix/data (copied to stack in createFromTemplate)
    // Total readable region: 0x48 - 0x6C (estimated from code reads)
};

// Effect spawn info — per-effect instance data created by spawnEffect (0x80567d00)
// Estimated size ~0x10C based on highest offset accessed (0x108)
struct EffectSpawnInfo {
    u32 _00[4];         // 0x00 — entry/allocator fields
    void* entryPtr;     // 0x10 — ptr to created entry
    u32 _14;            // 0x14 — index
    u16 _34;            // 0x34 — flags (bit 0 set on creation)
    f32 _38;            // 0x38 — some initial float (from global table)
    f32 _40;            // 0x40 — position offset X
    f32 _44;            // 0x44 — position offset Z
    f32 _08;            // 0x08 — position X (from KCL data)
    f32 _0C;            // 0x0C — position Z (from KCL data)
    u32 _68;            // 0x68 — index/param
    u32 _6C;            // 0x6C — 0
    EffectNode* node;   // 0x70 — EffectNode pointer (vtable dispatch target)
    u32 _100;           // 0x100 — position X (from target object)
    f32 _104;           // 0x104 — position Z (from target object)
    u32 _108;           // 0x108 — variant selector (0 or 1, selects position branch)
};

// Global EffectGroup manager — singleton managing all active effects.
// The global is referenced at a fixed address loaded via lis+addi pattern.
class EffectGroup {
public:
    // --- Core management (0x8056731c - 0x805678b4) ---

    // 0x8056731c — Traverse linked list, call vtable[5]/[3]/[4] on nodes,
    // check flag at offset 0x44, remove nodes from lists.
    // Confidence: guess
    static void cleanup();

    // 0x80567514 — Clear 2 list entries (loop count=2), zero slots at 0x18/0x20,
    // set flag bit 3 at 0x44.
    // Confidence: guess
    static void reset();

    // 0x80567594 — Check global update flag, call two sub-functions,
    // then call vtable[6] on result, set global flag to 1.
    // Confidence: guess
    static void update();

    // 0x805675f8 — Set entry by index: compute index*0xC offset,
    // look up entry via list function, store index at offset 0x14.
    // Confidence: guess
    static void setEntryByIndex(s32 index);

    // 0x80567648 — Bounds-check count at offset 0x68, validate against array capacity,
    // call vtable[6] on both sides, store to array via indexed write.
    // Confidence: guess
    static void tryInsert(void* entry);

    // 0x8056774c — Look up entry from list, set field at offset 0x14 to 1 (active flag).
    // Confidence: guess
    static void setActive();

    // 0x805677cc — Store effect group ptr into global at 0x28, bounds-check 0x68,
    // insert into array via vtable[6], set bit 1 at offset 0x40 on success.
    // Confidence: guess
    static void addToList(void* group, s32 param);

    // 0x805678b4 — Search for free slot: loop up to 3 times calling search function,
    // iterate through global list via allocator.
    // Confidence: guess
    // Returns: pointer to found slot or null
    static void* findFreeSlot();

    // 0x80567920 — Find entry by type: iterate calling search variant sub_0x00056338.
    // Confidence: guess
    static void* findByType();

    // 0x80567978 — Find entry by index: iterate calling search variant sub_0x0005646c.
    // Confidence: guess
    static void* findByIndex();

    // --- Entry creation (0x805679d0 - 0x80567d00) ---

    // 0x805679d0 — Create entry from template: read 0x50-byte template from global
    // (offsets 0x48-0x58), adjust 12 floats by +/- offset, create structured data.
    // Confidence: guess
    static void createFromTemplate(s32 type);

    // 0x80567b58 — Initialize entry: store param at offset 4, allocate via param*4 index,
    // store result at offset 8, call vtable[5] (init-like method).
    // Confidence: guess
    static void initEntry(void* entry, s32 param);

    // 0x80567bac — Global init: clear global struct fields at 0x38/0x2C/0x44,
    // call external sub_0x0004eecc (allocator init).
    // Confidence: guess
    static void globalInit();

    // 0x80567c10 — Try to add entry: conditional list insertion — check ptr != null,
    // param > 0, clear entry and call allocator.
    // Confidence: guess
    static void tryAddEntry(void* entry, s32 count);

    // 0x80567c88 — Add entry with callback: store param at offset 4, check callback != null,
    // allocate via param*4, call vtable[5] with 5 args.
    // Confidence: guess
    static void addEntryWithCallback(void* entry, s32 param, void* callback);

    // 0x80567d00 — Spawn effect (large, 684 bytes): create physics effect objects with
    // position data, manage two sub-allocations, read KCL-style data with 0xC stride.
    // Confidence: guess
    static void spawnEffect(void* entry, u32 param, s32 variant);

    // --- Destructor stubs (0x80567fac - 0x8056806c) ---
    // These are virtual destructor patterns (check ptr!=null, count>=0, call allocator).
    // Likely destructors for different EffectNode subclasses.
    // Confidence: uncertain — identical structure, class assignment unclear.

    // 0x80567fac
    static void dtorStub1(void* obj, s32 count);
    // 0x80567fec
    static void dtorStub2(void* obj, s32 count);
    // 0x8056802c
    static void dtorStub3(void* obj, s32 count);
    // 0x8056806c
    static void dtorStub4(void* obj, s32 count);

    // --- Spawn type variants (0x805680ac - 0x805685b4) ---
    // All follow the same pattern:
    //   - Call createFromTemplate with type param
    //   - Save/restore position at 0x18/0x1C
    //   - Load target from 0x100/0x104
    //   - Call vtable[3] (0x0C offset) on effect node
    //   - Call vtable[6] (0x18 offset) on sub-object at 0x70
    // The "withObj" variants (type 3, 5) also set object ptr at offset 0x00
    // and call vtable[6] on object at 0x6C instead of 0x70.

    // 0x805680ac — Spawn with param type (r5).
    // Confidence: guess
    static void spawnTypeParam(void* entry, s32 index, s32 type, s32 param);

    // 0x8056819c — Spawn type 1 (basic stunt effect).
    // Confidence: guess
    static void spawnType1(void* entry, s32 index, s32 type);

    // 0x80568284 — Spawn type 4.
    // Confidence: guess
    static void spawnType4(void* entry, s32 index, s32 type);

    // 0x8056836c — Spawn type 6.
    // Confidence: guess
    static void spawnType6(void* entry, s32 index, s32 type);

    // 0x80568454 — Spawn with object reference, type from r6 param.
    // Sets object ptr at offset 0x00, dual vtable dispatch (0x0C + 0x6C).
    // Confidence: guess
    static void spawnTypeWithObj(void* entry, void* obj, s32 index, s32 type);

    // 0x80568504 — Spawn type 3 (with object reference).
    // Confidence: guess
    static void spawnType3(void* entry, void* obj, s32 index, s32 type);

    // 0x805685b4 — Spawn type 5 (with object reference).
    // Confidence: guess
    static void spawnType5(void* entry, void* obj, s32 index, s32 type);
};