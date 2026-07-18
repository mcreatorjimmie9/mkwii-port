// sub_805a1e24
// Address: 0x805a1e24
// Total size: 48 bytes (code: 32, data: 16)
// Instructions: 8

#include "types.h"

// Pseudocode:
void func_805a1e24(void) {

    r4 = 0 << 16
    r4 = *(int*)( 0(r4))
    r0 = *(int*)( 0xb68(r4))
    cmp(r0, 0x1f)
    // bnelr 
    r4 = 0 << 16
    f1 = *(float*)(0x68(r3))
    f0 = *(float*)(0(r4))
}

// === Raw Disassembly ===
    /* 0x805a1e24 */ lis r4, 0
    /* 0x805a1e28 */ lwz r4, 0(r4)
    /* 0x805a1e2c */ lwz r0, 0xb68(r4)
    /* 0x805a1e30 */ cmpwi r0, 0x1f
    /* 0x805a1e34 */ bnelr
    /* 0x805a1e38 */ lis r4, 0
    /* 0x805a1e3c */ lfs f1, 0x68(r3)
    /* 0x805a1e40 */ lfs f0, 0(r4)

// === Embedded Data (16 bytes at 0x805a1e44) ===
    /* 0x805a1e44 */ 0xfc010040  // -2.67925e+36f
    /* 0x805a1e48 */ 0x4c800020  // 6.71091e+07f
    /* 0x805a1e4c */ 0xd0030068  // -8.79137e+09f
    /* 0x805a1e50 */ 0x4e800020  // 1.07375e+09f
