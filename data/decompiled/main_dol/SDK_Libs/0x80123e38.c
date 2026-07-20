// Function at 0x80123e38
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80123e38: stwu     r1, -0x20(r1)
//   0x80123e3c: mflr     r0
//   0x80123e40: stw      r0, 0x24(r1)
//   0x80123e44: stw      r31, 0x1c(r1)
//   0x80123e48: stw      r30, 0x18(r1)
//   0x80123e4c: stw      r29, 0x14(r1)
//   0x80123e50: stw      r28, 0x10(r1)
//   0x80123e54: lwz      r4, 0xc(r3)
//   0x80123e58: lwz      r3, 8(r3)
//   0x80123e5c: cmpwi    r4, 0
//   0x80123e60: beq      0x80123ec8
//   0x80123e64: lwz      r30, 0(r4)
//   0x80123e68: lwz      r31, 8(r3)
//   0x80123e6c: cmpwi    r30, 0
//   0x80123e70: beq      0x80123ec8
//   0x80123e74: mr       r28, r30
//   0x80123e78: li       r29, 0
//   0x80123e7c: b        0x80123eb8
//   0x80123e80: lwz      r0, 4(r28)
//   0x80123e84: cmpwi    r0, 8
//

// TODO: Full decompilation requires Ghidra
