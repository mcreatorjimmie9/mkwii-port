#pragma once
// ============================================================================
// RenderUtil — Common Rendering Utilities and Forward Declarations
// ============================================================================
// Shared types, forward declarations, and helper functions used across
// the Rendering module subsystems.
// ============================================================================

#include <types.h>

// ============================================================================
// Global singleton access patterns used throughout rendering code
// ============================================================================

// Global system manager (accessed via "lis r3, 0; r3 = *(0 + r3)")
// This is typically the OS context / global heap pointer
extern void* sGlobalInstance;

// Rendering settings global (accessed via "lis r31, 0; r31 = r31 + 0")
// Contains rendering parameters such as animation speed tables
struct RenderSettings {
    u8 _000[0x240];
    f32 animSpeedFactor;       // 0x240: animation speed multiplier
    s16 animDuration;          // 0x258: animation duration
    u8 _25A[0xE2];
    f32 defaultScale;          // 0x33C: default object scale
    f32 minScale;              // 0x340: minimum scale threshold
    f32 scaleRange;            // 0x344: scale range for LOD
    u8 _348[0x58];
    // Animation entry table at 0x3A0+
    // Per-object animation entries (0x248 bytes each) at 0x2E0+
};

// ============================================================================
// External functions (in other modules / system libs)
// ============================================================================

// Memory allocation/deallocation
extern "C" void* operator new(size_t size);
extern "C" void operator delete(void* ptr);

// EGG/JSystem memory allocators used throughout
namespace EGG {
    void* Heap_alloc(u32 size, int alignment);
    void Heap_free(void* ptr);
}

//memset/memcpy equivalents from 0x805E3430
extern "C" void memfill(void* dst, int value, u32 size);  // 0x805E3430

// Audio / animation callbacks
extern "C" void anim3D_Init(void* manager, void* res, u8 type, u32 arg);   // 0x808237A0
extern "C" void anim3D_SetFrame(void* anim, f32 frame);                     // 0x80823AC4
extern "C" void audio_Play3D(void* actor, u8 param);                       // 0x80733560
extern "C" void audio_Play3DEx(void* actor, u16 param);                    // 0x807336DC
extern "C" void audio_Stop3D(void* actor);                                 // 0x80739DE0
extern "C" void audio_Kill3D(void* actor);                                 // 0x8073A0E4
extern "C" void audio_4257C(void* actor);                                  // 0x8074257C
extern "C" void effectMgr_962A8(void* obj);                                // 0x807962A8
extern "C" void effectMgr_65E0(void* obj, u8 param);                       // 0x807965E0
extern "C" void effectMgr_378A4(void* actor);                              // 0x807378A4
extern "C" void fx_F726C(void* obj);                                       // 0x805F726C
extern "C" void fx_FA010(void* obj);                                       // 0x805FA010
extern "C" void courseObj_E908(void* obj);                                 // 0x8061E908
extern "C" void courseObj_859398(void* obj);                               // 0x80859398
extern "C" void drawUtil_6FF604(void* obj);                                // 0x806FF604
extern "C" void scene_F47FC(void* obj);                                    // 0x805F47FC
extern "C" void scene_2AB58(void* obj);                                    // 0x8062AB58
extern "C" void scene_98A98(void* obj, void* arg);                         // 0x80698A98
extern "C" void courseObj_F070(void* obj, u32 param);                      // 0x8061F070
extern "C" void courseObj_E8C0(void* obj, s32 a, s32 b, s32 c);            // 0x8061E8C0
extern "C" void courseObj_DC98(void* obj, s32 type, u32 flag);             // 0x8061DC98
extern "C" void scene_B351C(void* obj);                                    // 0x805B351C
extern "C" void scene_ADD40(void* obj, void* arg);                         // 0x805ADD40
extern "C" void texAnim_B9838(void);                                       // 0x805B9838

// Fixed-point to float double conversion magic
// Uses the 0x43300000 bias trick: store as double, subtract 0x43300000.0
inline f32 intToFloat(u32 intValue) {
    /* INLINE_ASM: int-to-float conversion via double bias trick */
    // Original uses: lis r0, 0x4330; stw r0,8(r1); stw intVal,0xc(r1);
    //   lfd f2,8(r1); lfs f1,0.0f; fsubs f1,f2,f1; fdivs f1,f1,f0
    // where f0 = 0.0f loaded from a global. This converts a 32-bit integer
    // to float using the 1023.0 bias trick.
    return static_cast<f32>(intValue);
}

// Bit manipulation helpers
inline bool testBit(u32 val, u32 bit) {
    return (val & (1u << bit)) != 0;
}

inline u32 setBit(u32 val, u32 bit) {
    return val | (1u << bit);
}

inline u32 clearBit(u32 val, u32 bit) {
    return val & ~(1u << bit);
}

inline u32 clearBitsMasked(u32 val, u32 mask) {
    return val & ~mask;
}

// Count leading zeros (from cntlzw)
inline u32 countLeadingZeros(u32 val) {
    if (val == 0) return 32;
    u32 n = 0;
    if (val <= 0x0000FFFFu) { n += 16; val <<= 16; }
    if (val <= 0x00FFFFFFu) { n += 8;  val <<= 8;  }
    if (val <= 0x0FFFFFFFu) { n += 4;  val <<= 4;  }
    if (val <= 0x3FFFFFFFu) { n += 2;  val <<= 2;  }
    if (val <= 0x7FFFFFFFu) { n += 1; }
    return n;
}

// Sign-extend byte to int
inline s32 signExtendByte(u8 val) {
    return static_cast<s8>(val);
}

// Sign-extend halfword to int
inline s32 signExtendHalf(u16 val) {
    return static_cast<s16>(val);
}