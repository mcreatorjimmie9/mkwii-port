// sub_805a20ac
// Address: 0x805a20ac
// Total size: 120 bytes (code: 48, data: 72)
// Instructions: 12
// Stack frame: 0x20

#include "types.h"

// Pseudocode:
void func_805a20ac(void) {
    // stack: 0x20
    // 2 FP ops

    // prologue: sp -= 0x20
    // save lr
    *(u32*)(0x24(r1)) = r0
    // SIMD: xscmpeqdp vs31, f1, f0
    /* fmr f31, f1 */
    cmp(r4, 0x2c)
    *(u32*)(0xc(r1)) = r31
    r31 = r4
    if (==) goto LOC_805A210C
    /* lis r4, 0 */
    f0 = *(f32*)(0(r4))
}

// === Raw Disassembly ===
    /* 0x805a20ac */ stwu r1, -0x20(r1)
    /* 0x805a20b0 */ mflr r0
    /* 0x805a20b4 */ stw r0, 0x24(r1)
    /* 0x805a20b8 */ stfd f31, 0x10(r1)
    /* 0x805a20bc */ xscmpeqdp vs31, f1, f0
    /* 0x805a20c0 */ fmr f31, f1
    /* 0x805a20c4 */ cmpwi r4, 0x2c
    /* 0x805a20c8 */ stw r31, 0xc(r1)
    /* 0x805a20cc */ mr r31, r4
    /* 0x805a20d0 */ beq 0x805a2108
    /* 0x805a20d4 */ lis r4, 0
    /* 0x805a20d8 */ lfs f0, 0(r4)

// === Embedded Data (72 bytes at 0x805a20dc) ===
    /* 0x805a20dc */ 0xfc010040  // -2.67925e+36f
    /* 0x805a20e0 */ 0x40810028  // 4.03127f
    /* 0x805a20e4 */ 0x8883009c  // -7.88442e-34f
    /* 0x805a20e8 */ 0x3c600000  // 0.0136719f
    /* 0x805a20ec */ 0x80630000  // -9.09171e-39f
    /* 0x805a20f0 */ 0x7c840774  // 5.48427e+36f
    /* 0x805a20f4 */ 0x4bfee04d  // 3.34071e+07f
    /* 0x805a20f8 */ 0xfc20f890  // -3.34324e+36f
    /* 0x805a20fc */ 0x7fe4fb78  // nanf
    /* 0x805a2100 */ 0x38a00001  // 7.6294e-05f
    /* 0x805a2104 */ 0x4bfee359  // 3.34087e+07f
    /* 0x805a2108 */ 0xe3e10018  // -8.30105e+21f
    /* 0x805a210c */ 0x80010024  // -9.18859e-41f
    /* 0x805a2110 */ 0xcbe10010  // -2.94912e+07f
    /* 0x805a2114 */ 0x83e1000c  // -1.32243e-36f
    /* 0x805a2118 */ 0x7c0803a6  // 2.82491e+36f
    /* 0x805a211c */ 0x38210020  // 3.83855e-05f
    /* 0x805a2120 */ 0x4e800020  // 1.07375e+09f
