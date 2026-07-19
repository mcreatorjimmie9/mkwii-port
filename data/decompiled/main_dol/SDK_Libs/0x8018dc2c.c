// Function at 0x8018dc2c
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8018dc2c: stwu     r1, -0x20(r1)
//   0x8018dc30: mflr     r0
//   0x8018dc34: stw      r0, 0x24(r1)
//   0x8018dc38: stw      r31, 0x1c(r1)
//   0x8018dc3c: stw      r30, 0x18(r1)
//   0x8018dc40: mr       r30, r3
//   0x8018dc44: bl       0x8018b00c
//   0x8018dc48: cmpwi    r3, 0
//   0x8018dc4c: beq      0x8018dc68
//   0x8018dc50: lwz      r12, 0(r3)
//   0x8018dc54: lwz      r12, 0x34(r12)
//   0x8018dc58: mtctr    r12
//   0x8018dc5c: bctrl    
//   0x8018dc60: mr       r31, r3
//   0x8018dc64: b        0x8018dc6c
//   0x8018dc68: li       r31, 0
//   0x8018dc6c: mr       r3, r30
//   0x8018dc70: bl       0x8018bf08
//   0x8018dc74: xoris    r3, r31, 0x8000
//   0x8018dc78: lis      r0, 0x4330
//

// TODO: Full decompilation requires Ghidra
