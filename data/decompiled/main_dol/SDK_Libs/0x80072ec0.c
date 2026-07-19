// Function at 0x80072ec0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80072ec0: stwu     r1, -0x10(r1)
//   0x80072ec4: mflr     r0
//   0x80072ec8: mr       r5, r3
//   0x80072ecc: stw      r0, 0x14(r1)
//   0x80072ed0: lwz      r4, 0(r3)
//   0x80072ed4: cmpwi    r4, 0
//   0x80072ed8: beq      0x80072f0c
//   0x80072edc: lwz      r0, 0x1c(r3)
//   0x80072ee0: cmpwi    r0, 0
//   0x80072ee4: beq      0x80072ef0
//   0x80072ee8: lwz      r3, 0x1c(r3)
//   0x80072eec: b        0x80072f10
//   0x80072ef0: lwz      r0, 0xe8(r4)
//   0x80072ef4: addi     r3, r1, 8
//   0x80072ef8: stw      r0, 8(r1)
//   0x80072efc: lwz      r4, 4(r5)
//   0x80072f00: bl       0x8004e950
//   0x80072f04: addi     r3, r3, 0x1c
//   0x80072f08: b        0x80072f10
//   0x80072f0c: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
