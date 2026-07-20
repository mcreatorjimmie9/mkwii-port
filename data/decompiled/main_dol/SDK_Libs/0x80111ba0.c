// Function at 0x80111ba0
// Size: 312 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80111ba0: stwu     r1, -0x20(r1)
//   0x80111ba4: mflr     r0
//   0x80111ba8: cmpwi    cr1, r3, 0
//   0x80111bac: stw      r0, 0x24(r1)
//   0x80111bb0: stw      r31, 0x1c(r1)
//   0x80111bb4: mr       r31, r3
//   0x80111bb8: stw      r30, 0x18(r1)
//   0x80111bbc: stw      r29, 0x14(r1)
//   0x80111bc0: mr       r29, r4
//   0x80111bc4: bne      cr1, 0x80111bd0
//   0x80111bc8: li       r3, 0
//   0x80111bcc: b        0x80111cbc
//   0x80111bd0: lwz      r0, 0x20(r3)
//   0x80111bd4: cmpwi    r0, 0
//   0x80111bd8: beq      0x80111be4
//   0x80111bdc: li       r3, 0
//   0x80111be0: b        0x80111cbc
//   0x80111be4: lwz      r4, 0xc(r3)
//   0x80111be8: lwz      r5, 8(r3)
//   0x80111bec: addi     r0, r4, 1
//

// TODO: Full decompilation requires Ghidra
