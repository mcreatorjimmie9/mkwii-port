// Function at 0x800d2a84
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800d2a84: stwu     r1, -0x20(r1)
//   0x800d2a88: mflr     r0
//   0x800d2a8c: stw      r0, 0x24(r1)
//   0x800d2a90: stw      r31, 0x1c(r1)
//   0x800d2a94: lis      r31, -0x7fd1
//   0x800d2a98: addi     r31, r31, -0x3020
//   0x800d2a9c: stw      r30, 0x18(r1)
//   0x800d2aa0: li       r30, 0
//   0x800d2aa4: stw      r29, 0x14(r1)
//   0x800d2aa8: mr       r29, r3
//   0x800d2aac: lwz      r3, 0(r31)
//   0x800d2ab0: cmpwi    r3, 0
//   0x800d2ab4: beq      0x800d2ad0
//   0x800d2ab8: bl       0x8010ac6c
//   0x800d2abc: lbz      r0, 1(r3)
//   0x800d2ac0: cmplw    r29, r0
//   0x800d2ac4: bne      0x800d2ad0
//   0x800d2ac8: li       r3, 1
//   0x800d2acc: b        0x800d2ae4
//   0x800d2ad0: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
