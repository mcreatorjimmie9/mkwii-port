// Function at 0x8008fbe0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008fbe0: stwu     r1, -0x10(r1)
//   0x8008fbe4: mflr     r0
//   0x8008fbe8: stw      r0, 0x14(r1)
//   0x8008fbec: stw      r31, 0xc(r1)
//   0x8008fbf0: stw      r30, 8(r1)
//   0x8008fbf4: addi     r30, r3, 8
//   0x8008fbf8: lwz      r31, 8(r3)
//   0x8008fbfc: b        0x8008fc14
//   0x8008fc00: mr       r3, r31
//   0x8008fc04: lwz      r31, 0(r31)
//   0x8008fc08: addi     r3, r3, -0xf4
//   0x8008fc0c: li       r4, 1
//   0x8008fc10: bl       0x8008fd70
//   0x8008fc14: cmplw    r31, r30
//   0x8008fc18: bne      0x8008fc00
//   0x8008fc1c: lwz      r0, 0x14(r1)
//   0x8008fc20: lwz      r31, 0xc(r1)
//   0x8008fc24: lwz      r30, 8(r1)
//   0x8008fc28: mtlr     r0
//   0x8008fc2c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
