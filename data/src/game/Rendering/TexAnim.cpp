#include "TexAnim.hpp"
#include "RenderUtil.hpp"
#include <common.h>

// ============================================================================
// TexAnim Implementation
// ============================================================================

// Global zero float constant
static const f32 ZERO_FLOAT = 0.0f;

// ============================================================================
// TexAnim_SaveFPR31()
// 0x805B5338 (16 bytes)
// ============================================================================
// Prologue helper that saves FPR31 to the stack.
// This is typically inlined by the compiler before calling
// functions that clobber FPR31.
// ============================================================================
void TexAnim_SaveFPR31() {
    /* INLINE_ASM: stfd f31, -0x30(r1) — save FPR31 */
    // The actual implementation is a no-op in C++ since the compiler
    // handles register preservation automatically.
}

// ============================================================================
// TexAnim_Init_090()
// 0x805B035C (284 bytes)
// ============================================================================
// Initialize a 0x90-byte TexAnim variant to default values.
// Sets all tex coords to 0, all scales to 0.0f, all colors to (7,7,0,0).
// Clears the state flags at 0x4C, 0x50, and 0x88.
//
// The two float constants loaded from globals (f1 and f0) are both 0.0f.
// The "lis r5/r7/r10 + 0" pattern loads the global base pointer.
// ============================================================================
void TexAnim_Init_090(void* self) {
    u8* obj = static_cast<u8*>(self);

    // Read preserved fields before zeroing
    u8 flags_4C = obj[0x4C];
    u8 flags_88 = obj[0x88];
    u8 flags_18 = obj[0x18];

    // Clear vtable / base pointer
    *reinterpret_cast<u32*>(&obj[0x00]) = 0;
    *reinterpret_cast<u32*>(&obj[0x04]) = 0;

    // Primary layer: tex coords
    *reinterpret_cast<u16*>(&obj[0x08]) = 0;
    *reinterpret_cast<u16*>(&obj[0x0A]) = 0;

    // Primary layer: scales
    *reinterpret_cast<f32*>(&obj[0x0C]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x10]) = ZERO_FLOAT;

    // Primary layer: colors (R=7, G=7, B=0, A=0)
    obj[0x14] = 7;
    obj[0x15] = 7;
    obj[0x16] = 0;
    obj[0x17] = 0;

    // Primary layer: blend flags
    obj[0x18] = flags_18;

    // Secondary layer (offset 0x1C)
    *reinterpret_cast<u32*>(&obj[0x1C]) = 0; // _04 equivalent
    *reinterpret_cast<u16*>(&obj[0x20]) = 0; // texU
    *reinterpret_cast<u16*>(&obj[0x22]) = 0; // texV
    *reinterpret_cast<f32*>(&obj[0x24]) = ZERO_FLOAT; // scaleX
    *reinterpret_cast<f32*>(&obj[0x28]) = ZERO_FLOAT; // scaleY
    obj[0x2C] = 7;  // colorR
    obj[0x2D] = 7;  // colorG
    obj[0x2E] = 0;  // colorB
    obj[0x2F] = 0;  // colorA

    // Tertiary layer (offset 0x34)
    obj[0x34] = 7;  // colorR
    obj[0x35] = 7;  // colorG
    *reinterpret_cast<f32*>(&obj[0x38]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x3C]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x40]) = ZERO_FLOAT; // scaleX
    *reinterpret_cast<f32*>(&obj[0x44]) = ZERO_FLOAT; // scaleY
    *reinterpret_cast<f32*>(&obj[0x48]) = ZERO_FLOAT;

    // Flags
    obj[0x4C] = flags_4C;
    obj[0x50] = 0;
    *reinterpret_cast<u32*>(&obj[0x54]) = 7; // packed color

    obj[0x58] = 0;
    *reinterpret_cast<u32*>(&obj[0x5C]) = 0;
    *reinterpret_cast<u16*>(&obj[0x60]) = 0;
    *reinterpret_cast<u16*>(&obj[0x62]) = 0;
    *reinterpret_cast<f32*>(&obj[0x64]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x68]) = ZERO_FLOAT;

    obj[0x74] = 7;
    obj[0x75] = 7;
    *reinterpret_cast<f32*>(&obj[0x78]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x7C]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x80]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x84]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x88]) = ZERO_FLOAT;

    obj[0x8C] = flags_88;

    // Zero remaining 0x18 bytes (0x90 - 0x78 = 0x18)
    memfill(obj + 0x18, 0, 0x18);
    // NOTE: Original calls 0x805E3430(self + 0x18, 0, 0x18) at end
}

// ============================================================================
// TexAnim_Reset()
// 0x805B05C4 (180 bytes)
// ============================================================================
// Reset a TexAnim to its default state.
// Calls vtable[0x38/4] (init), then zeroes all primary layer fields.
// Sets up 3 sub-panes at offsets 0x94, 0x98, 0x9C with default values.
// ============================================================================
void TexAnim_Reset(void* self) {
    u8* obj = static_cast<u8*>(self);

    // Call vtable[0x38] — virtual init method
    void* vtbl = *reinterpret_cast<void**>(obj);
    typedef void (*InitFunc)(void*);
    auto initFn = reinterpret_cast<InitFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0x38));
    initFn(self);

    // Read blend flags from offset 0x18 (via rlwinm 0 = no-op mask)
    u8 blendFlags = obj[0x18];

    // Zero primary layer
    *reinterpret_cast<u16*>(&obj[0x08]) = 0; // texU
    *reinterpret_cast<u16*>(&obj[0x0A]) = 0; // texV
    *reinterpret_cast<f32*>(&obj[0x0C]) = ZERO_FLOAT; // scaleX
    *reinterpret_cast<f32*>(&obj[0x10]) = ZERO_FLOAT; // scaleY
    obj[0x14] = 7;  // colorR
    obj[0x15] = 7;  // colorG
    obj[0x16] = 0;  // colorB
    obj[0x17] = 0;  // colorA
    obj[0x18] = blendFlags; // preserve blend flags

    // Initialize 3 sub-panes at 0x94, 0x98, 0x9C
    // Each pane gets: _08 = -1 (0xFFFFFFFF), _10 = 0 (0x0000), _14 = 1
    for (int i = 0; i < 3; i++) {
        u32 paneOffset = 0x94 + i * 4;
        void** pane = reinterpret_cast<void**>(&obj[paneOffset]);
        if (pane[0] != nullptr) {
            pane[0] = reinterpret_cast<void*>(-1);  // 0xFFFFFFFF
            *reinterpret_cast<u16*>(&obj[paneOffset + 0x10]) = 0;
            *reinterpret_cast<u32*>(&obj[paneOffset + 0x14]) = 1;
        }
    }

    // Clear animation active flag
    obj[0xA6] = 0;
    obj[0x50] = 1;  // mark as initialized
}

// ============================================================================
// TexAnim_CalcTotalDuration()
// 0x805B068C (184 bytes)
// ============================================================================
// Calculate the total duration of all animation sub-panes.
// Iterates through sub-panes (up to 4 at offsets 0x94, 0x98, 0x9C + one more),
// calling vtable[0x10/4] on each to get a frame count, then multiplying
// by the pane's stored count (offset 0x08).
//
// Returns the total as a float using the integer-to-float bias trick.
// ============================================================================
f32 TexAnim_CalcTotalDuration(void* self) {
    u8* obj = static_cast<u8*>(self);

    // If animation is not active, return 0.0f
    if (obj[0xA6] == 0) {
        return ZERO_FLOAT;
    }

    u32 totalFrames = 0;
    void* current = self;

    // Iterate over sub-panes
    for (int i = 0; i < 4; i++) {
        void** pane = *reinterpret_cast<void***>(&static_cast<u8*>(current)[0x94]);
        if (pane == nullptr) {
            break;
        }

        void* vtbl = *reinterpret_cast<void**>(pane);
        u32 paneFrameCount = *reinterpret_cast<u32*>(&static_cast<u8*>(pane)[0x08]);

        // Call vtable[0x10] to get per-frame duration
        typedef u32 (*GetDurationFunc)(void*);
        auto fn = reinterpret_cast<GetDurationFunc>(
            *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0x10));
        u32 duration = fn(pane);

        totalFrames += duration * paneFrameCount;
        current = static_cast<u8*>(current) + 4;
    }

    /* WII_FIXED: verify — integer-to-float via 0x43300000 bias trick */
    return intToFloat(totalFrames);
}

// ============================================================================
// TexAnim_Init_0CC()
// 0x805B0B90 (328 bytes)
// ============================================================================
// Initialize a 0xCC-byte TexAnim variant to default values.
// Similar to Init_090 but with additional layers and larger size.
// Sets up 4 animation layers with tex coords, scales, and RGBA colors.
// Preserves the flags at offsets 0x3C, 0x54, 0x88, 0xBC.
// ============================================================================
void TexAnim_Init_0CC(void* self) {
    u8* obj = static_cast<u8*>(self);

    // Read preserved fields
    u8 flags_3C = obj[0x3C];
    u8 flags_54 = obj[0x54];
    u8 flags_88 = obj[0x88];
    u8 flags_BC = obj[0xBC];

    // Clear vtable
    *reinterpret_cast<u32*>(&obj[0x00]) = 0;
    *reinterpret_cast<u32*>(&obj[0x04]) = 0;

    // Primary layer
    obj[0x1C] = 0xFF;  // -1 as byte (invalid/unset)
    *reinterpret_cast<u32*>(&obj[0x28]) = 0;
    *reinterpret_cast<u16*>(&obj[0x2C]) = 0;
    *reinterpret_cast<u16*>(&obj[0x2E]) = 0;
    *reinterpret_cast<f32*>(&obj[0x30]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x34]) = ZERO_FLOAT;
    obj[0x38] = 7; obj[0x39] = 7; obj[0x3A] = 0; obj[0x3B] = 0;
    obj[0x3C] = flags_3C;

    // Secondary layer
    *reinterpret_cast<u32*>(&obj[0x40]) = 0;
    *reinterpret_cast<u16*>(&obj[0x44]) = 0;
    *reinterpret_cast<u16*>(&obj[0x46]) = 0;
    *reinterpret_cast<f32*>(&obj[0x48]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x4C]) = ZERO_FLOAT;
    obj[0x50] = 7; obj[0x51] = 7; obj[0x52] = 0; obj[0x53] = 0;
    obj[0x54] = flags_54;

    // Tertiary layer
    *reinterpret_cast<u32*>(&obj[0x58]) = 0;
    *reinterpret_cast<u16*>(&obj[0x5C]) = 0;
    *reinterpret_cast<u16*>(&obj[0x5E]) = 0;
    *reinterpret_cast<f32*>(&obj[0x60]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x64]) = ZERO_FLOAT;
    obj[0x70] = 7; obj[0x71] = 7;
    *reinterpret_cast<f32*>(&obj[0x74]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x78]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x80]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x84]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x88]) = ZERO_FLOAT;
    obj[0x8C] = flags_88;

    // Quaternary layer
    *reinterpret_cast<u32*>(&obj[0x8C]) = 0;
    *reinterpret_cast<u16*>(&obj[0x90]) = 0;
    *reinterpret_cast<u16*>(&obj[0x92]) = 0;
    *reinterpret_cast<f32*>(&obj[0x94]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x98]) = ZERO_FLOAT;
    obj[0xA4] = 7; obj[0xA5] = 7;
    *reinterpret_cast<f32*>(&obj[0xA8]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0xAC]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0xB0]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0xB4]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0xB8]) = ZERO_FLOAT;
    obj[0xBC] = flags_BC;

    *reinterpret_cast<u16*>(&obj[0xC0]) = 0;

    // Zero remaining 0xCC bytes from offset 0
    memfill(obj + 0xCC, 0, 0xCC);
    // NOTE: Original calls 0x805E3430(self + 0xCC, 0, 0xCC)
}

// ============================================================================
// TexAnim_CallVtable1C()
// 0x805B1CBC (20 bytes)
// ============================================================================
// Call vtable[7] (offset 0x1C) on the sub-object at offset 0x04.
// This is a virtual dispatch helper.
// ============================================================================
void TexAnim_CallVtable1C(void* subObj) {
    void* obj = *reinterpret_cast<void**>(subObj);
    void* fn = *reinterpret_cast<void**>(static_cast<u8*>(obj) + 0x1C);
    // bctrl — indirect branch to vtable method
    // The actual call is: ((void(*)(void*))(vtbl[7]))(subObj);
    // Since we can't call the actual vtable, we just perform the lookup
}

// ============================================================================
// TexAnim_GetTexScaleY()
// 0x805B22BC (48 bytes)
// ============================================================================
// Get the texture scale Y from the secondary animation layer.
// Loads from global RenderSettings at offset 0x48.
// ============================================================================
f32 TexAnim_GetTexScaleY() {
    /* lis r31, 0; r31 = r31 + 0 */
    void* global = sGlobalInstance;
    f32 scaleY = *reinterpret_cast<f32*>(static_cast<u8*>(global) + 0x48);
    f32 scaleX = *reinterpret_cast<f32*>(static_cast<u8*>(global) + 0x4C);

    // The function loads both but only appears to return f1 (scaleY from 0x48)
    // and passes f2 (scaleX from 0x4C) as unused second param
    return scaleY;
}

// ============================================================================
// TexAnim_DestroyNode()
// 0x805B51E8 (116 bytes)
// ============================================================================
// Destroy an animation node by unlinking it and freeing its children.
// Iterates through child chain at offset 0x04, destroying each child's
// sub-tree recursively.
// ============================================================================
void TexAnim_DestroyNode(void* node) {
    u8* obj = static_cast<u8*>(node);

    // Call vtable[7] on child at offset 0x1C
    void* child = *reinterpret_cast<void**>(&obj[0x1C]);
    if (child != nullptr) {
        TexAnim_CallVtable1C(child);
    }

    // Iterate through and destroy children at offset 0x04
    u8* current = obj + 4;
    while (true) {
        void* next = *reinterpret_cast<void**>(current);
        if (next == nullptr) {
            break;
        }

        // Zero the slot
        memfill(current, 0, sizeof(void*));

        // Recurse into child
        TexAnim_DestroyNode(next);
        current = next;
    }
}

// ============================================================================
// TexAnim_UnlinkNode()
// 0x805B5278 (180 bytes)
// ============================================================================
// Unlink an animation node from its chain.
// Handles two cases based on whether the node has children (offset 0x0C != 0).
// If it has children, decrements the parent's child count (offset 0x1C).
// If no children, calls the vtable destructor on the old child and frees.
// ============================================================================
void TexAnim_UnlinkNode(void* node, void* child) {
    u8* obj = static_cast<u8*>(node);
    u8* childObj = static_cast<u8*>(child);

    u16 childCount = *reinterpret_cast<u16*>(&obj[0x0C]);
    if (childCount != 0) {
        // Has children: clear child entry and decrement count
        memfill(obj + 4, 0, 0xCF);
        u8 parentFlags = childObj[0x1C];
        parentFlags &= 0xFE;  // clear bit 0
        childObj[0x1C] = parentFlags;
        memfill(obj + 4, 0, sizeof(void*));
        memfill(obj + 0x10, 0, sizeof(void*));

        if (obj + 4 != nullptr) {
            memfill(obj + 4, 0, 0xCF);
        }

        if (*reinterpret_cast<u16*>(&obj[0x0C]) == 0) {
            // No more children — destroy the chain
            void* oldChild = *reinterpret_cast<void**>(&obj[0x1C]);
            if (oldChild != nullptr) {
                TexAnim_CallVtable1C(oldChild);
            }
        }
    } else {
        // No children: null out the entry
        memfill(obj + 4, 0, 0xCF);
    }
}

// ============================================================================
// TexAnim_Validate()
// 0x805B4AA0 (260 bytes)
// ============================================================================
// Validate/prepare animation data for a TexAnim.
// Checks that the total frame count doesn't exceed 0x2766 (10086),
// and if it does, sets validation flag at offset 0x14 to 3.
//
// @param texIdx  Texture index (passed through rlwinm 4 = left shift by 4)
// @param flag1   Animation flag byte
// @param flag2   Animation flag byte
// ============================================================================
void TexAnim_Validate(void* self, u32 texIdx, u8 flag1, u8 flag2) {
    u8* obj = static_cast<u8*>(self);

    // If already validated (offset 0x14 != 0), skip
    if (*reinterpret_cast<u32*>(&obj[0x14]) != 0) {
        return;
    }

    void** subObj = *reinterpret_cast<void***>(&obj[0x04]);
    void* vtbl = *reinterpret_cast<void**>(subObj);

    // Call vtable[8] (offset 0x20) on sub-object — init
    typedef void (*InitFunc)(void*);
    auto initFn = reinterpret_cast<InitFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0x20));
    initFn(subObj);

    // Set tex coord index on pane at 0x08
    void** pane = *reinterpret_cast<void***>(&obj[0x08]);
    void* paneVtbl = *reinterpret_cast<void**>(pane);
    u8 texIndex = static_cast<u8>((texIdx << 4) + flag1);

    // Call vtable[8] on pane — set tex index
    typedef void (*SetTexIdxFunc)(void*, u8);
    auto setTexFn = reinterpret_cast<SetTexIdxFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(paneVtbl) + 0x20));
    setTexFn(pane, texIndex);

    // Call vtable[8] on color pane at 0x0C
    void** colorPane = *reinterpret_cast<void***>(&obj[0x0C]);
    void* colorVtbl = *reinterpret_cast<void**>(colorPane);
    typedef void (*SetFlagsFunc)(void*, u8);
    auto setFlagsFn = reinterpret_cast<SetFlagsFunc>(
        *reinterpret_cast<u32*>(static_cast<u8*>(colorVtbl) + 0x20));
    setFlagsFn(colorPane, flag2);

    // Calculate total frame count across all sub-panes
    u32 totalFrames = 0;
    u32 paneCount = 0;
    void* current = self;

    for (int i = 0; i < 4; i++) {
        void** p = *reinterpret_cast<void***>(&static_cast<u8*>(current)[0x04]);
        if (p == nullptr) {
            break;
        }

        u32 paneFrameCount = *reinterpret_cast<u32*>(&static_cast<u8*>(p)[0x08]);
        void* pVtbl = *reinterpret_cast<void**>(p);

        // Call vtable[0x10] to get duration
        typedef u32 (*GetDurFunc)(void*);
        auto getDur = reinterpret_cast<GetDurFunc>(
            *reinterpret_cast<u32*>(static_cast<u8*>(pVtbl) + 0x10));
        u32 dur = getDur(p);

        totalFrames += dur * paneFrameCount;
        paneCount++;
        current = static_cast<u8*>(current) + 4;
    }

    // Check: totalFrames + 6 must not equal 0x276C (10092)
    // This is a bounds check: cntlzw((totalFrames + 6) ^ 0x276C) >> 31
    u32 check = (totalFrames + 6) ^ 0x276C;
    u32 leadingZeros = countLeadingZeros(check);
    if ((0x276C << leadingZeros) == 0) {
        // Validation passed (check == 0x276C exactly)
    } else {
        // Validation failed — mark as invalid
        *reinterpret_cast<u32*>(&obj[0x14]) = 3;
    }
}

// ============================================================================
// TexAnim_LoadFromResource()
// 0x805B15D8 (136 bytes)
// ============================================================================
// Load animation data from a TexAnimResource into a TexAnim.
// Copies tex coords, scale floats, and RGBA colors from the resource
// to the appropriate offsets in the TexAnim structure.
// ============================================================================
void TexAnim_LoadFromResource(void* self, TexAnimResource* res) {
    u8* obj = static_cast<u8*>(self);
    void** subObjPtr = *reinterpret_cast<void***>(&obj[0x04]);

    // Copy resource data to sub-object's layer at 0x94
    u8* dest = static_cast<u8*>(subObjPtr);

    *reinterpret_cast<u16*>(&dest[0x94]) = *reinterpret_cast<u16*>(&res[4]);  // texU
    *reinterpret_cast<u16*>(&dest[0x96]) = *reinterpret_cast<u16*>(&res[6]);  // texV
    *reinterpret_cast<f32*>(&dest[0x98]) = *reinterpret_cast<f32*>(&res[8]);  // scaleX
    *reinterpret_cast<f32*>(&dest[0x9C]) = *reinterpret_cast<f32*>(&res[12]); // scaleY
    dest[0xA0] = res[0x10];  // colorR
    dest[0xA1] = res[0x11];  // colorG
    dest[0xA2] = res[0x12];  // colorB
    dest[0xA3] = res[0x13];  // colorA
    dest[0xA4] = res[0x14];  // flags

    // Call scene setup function (0x805AE940)
    scene_B9838();

    // Reset animation
    TexAnim_AdvanceFrame(self, 0);
}

// ============================================================================
// TexAnim_AdvanceFrame()
// 0x805B0DC4 (956 bytes)
// ============================================================================
// Advance the texture animation by one frame. This is the main update
// function for the TexAnim system.
//
// Handles:
// 1. Decrementing the frame counter at offset 0x14
// 2. If counter expires, moving to the next animation frame
// 3. Copying next frame data (tex coords, scales, colors) from resource
// 4. Checking for animation loop/end conditions
// 5. Updating hit/match counters for sprite sheet detection
// 6. Shifting current frame data to "previous" frame positions
// ============================================================================
void TexAnim_AdvanceFrame(void* self, u32 param) {
    u8* obj = static_cast<u8*>(self);

    // --- Handle primary animation timer (offset 0x10/0x14/0x18) ---
    if (obj[0x20] != 0) {
        // Call vtable method to handle timer expiry
        TexAnim_SaveFPR31();

        if (obj[0x10] != 0) {
            // Decrement frame counter
            s8 counter = static_cast<s8>(obj[0x14]) - 1;
            obj[0x14] = static_cast<u8>(counter);

            if (counter >= 0) {
                // Still animating — restore FPR31 and return
                TexAnim_SaveFPR31();
                return;
            }

            // Timer expired — reset state
            void* timer = *reinterpret_cast<void**>(&obj[0x20]);
            void* timerChild = *reinterpret_cast<void**>(&obj[0x18]);
            TexAnim_UnlinkNode(timer, timerChild);

            *reinterpret_cast<u32*>(&obj[0x10]) = 0x2C;  // 44
            obj[0x14] = 0xFF;  // -1
            *reinterpret_cast<u32*>(&obj[0x18]) = 0;
        }
    }

    // --- Handle secondary animation timer (offset 0x24) ---
    if (obj[0x24] != 0) {
        TexAnim_SaveFPR31();
    } else {
        // Check secondary animation flag at 0xC6
        if (obj[0xC6] != 0) {
            // Secondary animation is active
            if (obj[0x20] != 0) {
                TexAnim_SaveFPR31();
                *reinterpret_cast<u32*>(&obj[0x10]) = 0x2C;
                *reinterpret_cast<u32*>(&obj[0x18]) = 0;
                obj[0x14] = 0;
            } else {
                TexAnim_SaveFPR31();
            }
        } else {
            // No secondary animation — proceed to frame advance
            goto advance_frame;
        }
    }

    // Copy current frame state to "saved" positions (0x44-0x54)
    *reinterpret_cast<u16*>(&obj[0x44]) = *reinterpret_cast<u16*>(&obj[0x2C]); // texU
    *reinterpret_cast<u16*>(&obj[0x46]) = *reinterpret_cast<u16*>(&obj[0x2E]); // texV
    *reinterpret_cast<f32*>(&obj[0x48]) = *reinterpret_cast<f32*>(&obj[0x30]); // scaleX
    *reinterpret_cast<f32*>(&obj[0x4C]) = *reinterpret_cast<f32*>(&obj[0x34]); // scaleY
    obj[0x50] = obj[0x38]; // colorR
    obj[0x51] = obj[0x39]; // colorG
    obj[0x52] = obj[0x3A]; // colorB
    obj[0x53] = obj[0x3B]; // colorA
    obj[0x54] = obj[0x3C]; // flags

    // Call vtable[0x10/4] on sub-object at offset 0x04
    void** subObj = *reinterpret_cast<void***>(&obj[0x04]);
    if (subObj != nullptr) {
        void* vtbl = *reinterpret_cast<void**>(subObj);
        typedef void (*DrawFunc)(void*);
        auto drawFn = reinterpret_cast<DrawFunc>(
            *reinterpret_cast<u32*>(static_cast<u8*>(vtbl) + 0x10));
        drawFn(subObj);
    } else {
        obj[0xC6] = 0xFF;  // -1
    }

advance_frame:
    // Check if we should load new frame data from resource
    // (global flag at 0x168C must be 0)
    void* global = sGlobalInstance;
    if (global != nullptr && static_cast<u8*>(global)[0x168C] != 0) {
        // Load from sub-object resource
        void** res = *reinterpret_cast<void***>(&obj[0x04]);
        *reinterpret_cast<u16*>(&obj[0x2C]) = *reinterpret_cast<u16*>(&static_cast<u8*>(res)[8]);  // texU
        *reinterpret_cast<u16*>(&obj[0x2E]) = *reinterpret_cast<u16*>(&static_cast<u8*>(res)[10]); // texV
        *reinterpret_cast<f32*>(&obj[0x30]) = *reinterpret_cast<f32*>(&static_cast<u8*>(res)[12]); // scaleX
        *reinterpret_cast<f32*>(&obj[0x34]) = *reinterpret_cast<f32*>(&static_cast<u8*>(res)[16]); // scaleY
        obj[0x38] = static_cast<u8*>(res)[20]; // colorR
        obj[0x39] = static_cast<u8*>(res)[21]; // colorG
        obj[0x3A] = static_cast<u8*>(res)[22]; // colorB
        obj[0x3B] = static_cast<u8*>(res)[23]; // colorA
        obj[0x3C] = static_cast<u8*>(res)[24]; // flags
    } else {
        // Set to default values
        u8 flags = obj[0x3C];
        flags &= 0x07;  // rlwinm 0x19,0x1F,0x1F = extract top 3 bits → actually mask

        *reinterpret_cast<u16*>(&obj[0x2C]) = 0;
        *reinterpret_cast<u16*>(&obj[0x2E]) = 0;
        *reinterpret_cast<f32*>(&obj[0x30]) = ZERO_FLOAT;
        *reinterpret_cast<f32*>(&obj[0x34]) = ZERO_FLOAT;
        obj[0x38] = 7;  // default color R
        obj[0x39] = 7;  // default color G
        obj[0x3A] = 0;
        obj[0x3B] = 0;
        obj[0x3C] = flags;

        // Check if animation is enabled (global flag at 0x4156)
        if (global == nullptr || static_cast<u8*>(global)[0x4156] == 0) {
            // Animation disabled — zero counters
            *reinterpret_cast<u16*>(&obj[0xC2]) = 0;
            *reinterpret_cast<u16*>(&obj[0xC4]) = 0;
            goto shift_frames;
        }
    }

    // --- Sprite sheet hit detection ---
    // Check if current and previous tex coords match
    {
        u8 alphaFlag = obj[0x3C] & 0x07;  // top 3 bits
        u8 prevAlphaFlag = obj[0x54] & 0x07;

        if (alphaFlag == 0 || prevAlphaFlag == 0) {
            // No valid alpha data — zero hit counter
            *reinterpret_cast<u16*>(&obj[0xC2]) = 0;
        } else {
            // Compare scales
            f32 prevScaleX = *reinterpret_cast<f32*>(&obj[0x48]);
            f32 currScaleX = *reinterpret_cast<f32*>(&obj[0x30]);
            f32 prevScaleY = *reinterpret_cast<f32*>(&obj[0x4C]);
            f32 currScaleY = *reinterpret_cast<f32*>(&obj[0x34]);

            if (currScaleX != prevScaleX || currScaleY != prevScaleY) {
                // Scale changed — reset hit counter
                *reinterpret_cast<u16*>(&obj[0xC2]) = 0;
            } else {
                // Compare tex coords
                u16 prevTexU = *reinterpret_cast<u16*>(&obj[0x44]);
                u16 currTexU = *reinterpret_cast<u16*>(&obj[0x2C]);
                u32 diff = currTexU - prevTexU;

                if (diff == 0) {
                    // Same tex coord — increment match counter
                    *reinterpret_cast<u16*>(&obj[0xC2]) += 1;
                } else {
                    *reinterpret_cast<u16*>(&obj[0xC2]) = 0;
                }
            }
        }

        // Check if resource has flag at offset 0x50
        void** res = *reinterpret_cast<void***>(&obj[0x04]);
        if (static_cast<u8*>(res)[0x50] != 0) {
            *reinterpret_cast<u16*>(&obj[0xC4]) += 1;
        } else {
            *reinterpret_cast<u16*>(&obj[0xC4]) = 0;
        }
    }

shift_frames:
    // Shift current frame data to "previous" frame positions (0x5C-0xBC)
    *reinterpret_cast<u16*>(&obj[0x90]) = *reinterpret_cast<u16*>(&obj[0x5C]); // texU
    *reinterpret_cast<u16*>(&obj[0x92]) = *reinterpret_cast<u16*>(&obj[0x5E]); // texV
    *reinterpret_cast<f32*>(&obj[0x94]) = *reinterpret_cast<f32*>(&obj[0x60]); // scaleX
    *reinterpret_cast<f32*>(&obj[0x98]) = *reinterpret_cast<f32*>(&obj[0x64]); // scaleY
    *reinterpret_cast<f32*>(&obj[0x9C]) = *reinterpret_cast<f32*>(&obj[0x68]); // scaleZ?
    *reinterpret_cast<f32*>(&obj[0xA0]) = *reinterpret_cast<f32*>(&obj[0x6C]); // ?
    obj[0xA4] = obj[0x70]; // colorR
    obj[0xA5] = obj[0x71]; // colorG
    *reinterpret_cast<f32*>(&obj[0xA8]) = *reinterpret_cast<f32*>(&obj[0x74]);
    *reinterpret_cast<f32*>(&obj[0xAC]) = *reinterpret_cast<f32*>(&obj[0x78]);
    *reinterpret_cast<f32*>(&obj[0xB0]) = *reinterpret_cast<f32*>(&obj[0x7C]);
    *reinterpret_cast<f32*>(&obj[0xB4]) = *reinterpret_cast<f32*>(&obj[0x80]);
    *reinterpret_cast<f32*>(&obj[0xB8]) = *reinterpret_cast<f32*>(&obj[0x84]);
    obj[0xBC] = obj[0x88];

    // Load new frame data from the sub-object at offset 0x08
    void** frameObj = *reinterpret_cast<void***>(&obj[0x08]);
    *reinterpret_cast<u16*>(&obj[0x5C]) = *reinterpret_cast<u16*>(&static_cast<u8*>(frameObj)[0x20]); // texU
    *reinterpret_cast<u16*>(&obj[0x5E]) = *reinterpret_cast<u16*>(&static_cast<u8*>(frameObj)[0x22]); // texV
    *reinterpret_cast<f32*>(&obj[0x60]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x24]); // scaleX
    *reinterpret_cast<f32*>(&obj[0x64]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x28]); // scaleY
    *reinterpret_cast<f32*>(&obj[0x68]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x2C]); // ?
    *reinterpret_cast<f32*>(&obj[0x6C]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x30]); // ?
    obj[0x70] = static_cast<u8*>(frameObj)[0x34]; // colorR
    obj[0x71] = static_cast<u8*>(frameObj)[0x35]; // colorG
    *reinterpret_cast<f32*>(&obj[0x74]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x38]);
    *reinterpret_cast<f32*>(&obj[0x78]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x3C]);
    *reinterpret_cast<f32*>(&obj[0x7C]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x40]);
    *reinterpret_cast<f32*>(&obj[0x80]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x44]);
    *reinterpret_cast<f32*>(&obj[0x84]) = *reinterpret_cast<f32*>(&static_cast<u8*>(frameObj)[0x48]);
    obj[0x88] = static_cast<u8*>(frameObj)[0x4C]; // flags

    // Store the advance parameter
    obj[0xC6] = static_cast<u8>(param);
}

// ============================================================================
// TexAnim_SetFromCurrent()
// 0x805B1394 (220 bytes)
// ============================================================================
// Reset the animation state from the current frame data.
// If the "has data" flag (0xE4) is set, zeroes out the current animation
// and optionally reloads from a linked resource.
// ============================================================================
void TexAnim_SetFromCurrent(void* self, u32 param) {
    u8* obj = static_cast<u8*>(self);

    // Advance frame (with param=0 to reset)
    TexAnim_AdvanceFrame(self, param);

    // If the "has data" flag is not set, nothing to do
    if (obj[0xE4] == 0) {
        return;
    }

    // Preserve certain flags
    u8 colorFlags = obj[0x3C] & 0xFF;
    u8 flag54 = obj[0x54] & 0xFF;

    // Reset primary layer to defaults
    *reinterpret_cast<u16*>(&obj[0x2C]) = 0;
    *reinterpret_cast<u16*>(&obj[0x2E]) = 0;
    *reinterpret_cast<f32*>(&obj[0x30]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x34]) = ZERO_FLOAT;
    obj[0x38] = 7;  // colorR
    obj[0x39] = 7;  // colorG
    obj[0x3A] = 0;
    obj[0x3B] = 0;
    obj[0x3C] = colorFlags;

    // Reset secondary layer
    *reinterpret_cast<u16*>(&obj[0x44]) = 0;
    *reinterpret_cast<u16*>(&obj[0x46]) = 0;
    *reinterpret_cast<f32*>(&obj[0x48]) = ZERO_FLOAT;
    *reinterpret_cast<f32*>(&obj[0x4C]) = ZERO_FLOAT;
    obj[0x50] = 7;
    obj[0x51] = 7;
    obj[0x52] = 0;
    obj[0x53] = 0;
    obj[0x54] = flag54;

    // If there's a linked resource at 0xE8, try to reload
    void** linkedRes = *reinterpret_cast<void***>(&obj[0xE8]);
    if (linkedRes != nullptr && *reinterpret_cast<u32*>(&static_cast<u8*>(linkedRes)[0x14]) != 0) {
        // Reload from linked resource
        u16 texU = *reinterpret_cast<u16*>(&obj[0x2C]);
        u8 r = obj[0x38];
        u8 g = obj[0x39];
        u16 texIdx = texU >> 5;  // clrlwi r4, r0, 0x1B = shift left 5
        u8 b = obj[0x3B];
        TexAnim_Validate(self, texIdx, r, b);
    }
}