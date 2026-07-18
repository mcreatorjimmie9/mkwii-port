// sub_805a1df0
// Address: 0x805a1df0
// Total size: 52 bytes (code: 32, data: 20)
// Instructions: 8

#include "types.h"

// Pseudocode:
void func_805a1df0(void) {

    r3 = 0 << 16
    r3 = *(int*)( 0(r3))
    r0 = *(int*)( 0xb68(r3))
    cmp(r0, 0x1f)
    // bnelr 
    r3 = 0 << 16
    f1 = *(float*)(4(r4))
    f0 = *(float*)(0(r3))
}

// === Raw Disassembly ===
    /* 0x805a1df0 */ lis r3, 0
    /* 0x805a1df4 */ lwz r3, 0(r3)
    /* 0x805a1df8 */ lwz r0, 0xb68(r3)
    /* 0x805a1dfc */ cmpwi r0, 0x1f
    /* 0x805a1e00 */ bnelr
    /* 0x805a1e04 */ lis r3, 0
    /* 0x805a1e08 */ lfs f1, 4(r4)
    /* 0x805a1e0c */ lfs f0, 0(r3)

// === Embedded Data (20 bytes at 0x805a1e10) ===
    /* 0x805a1e10 */ 0xfc010040  // -2.67925e+36f
    /* 0x805a1e14 */ 0x4c800020  // 6.71091e+07f
    /* 0x805a1e18 */ 0xd004003c  // -8.85843e+09f
    /* 0x805a1e1c */ 0xd0040004  // -8.85837e+09f
    /* 0x805a1e20 */ 0x4e800020  // 1.07375e+09f
