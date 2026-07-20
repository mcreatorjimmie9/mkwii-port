// Function at 0x8004eca0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004eca0: stwu     r1, -0x20(r1)
//   0x8004eca4: mflr     r0
//   0x8004eca8: stw      r0, 0x24(r1)
//   0x8004ecac: stw      r31, 0x1c(r1)
//   0x8004ecb0: stw      r30, 0x18(r1)
//   0x8004ecb4: stw      r29, 0x14(r1)
//   0x8004ecb8: stw      r28, 0x10(r1)
//   0x8004ecbc: mr       r28, r3
//   0x8004ecc0: lwz      r4, 0(r3)
//   0x8004ecc4: lwz      r0, 0x30(r4)
//   0x8004ecc8: cmpwi    r0, 0
//   0x8004eccc: beq      0x8004ecd8
//   0x8004ecd0: add      r3, r4, r0
//   0x8004ecd4: b        0x8004ecdc
//   0x8004ecd8: li       r3, 0
//   0x8004ecdc: cmpwi    r3, 0
//   0x8004ece0: beq      0x8004ecec
//   0x8004ece4: lwz      r30, 4(r3)
//   0x8004ece8: b        0x8004ecf0
//   0x8004ecec: li       r30, 0
//

// TODO: Full decompilation requires Ghidra
