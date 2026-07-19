// Function at 0x80058c20
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80058c20: stwu     r1, -0x20(r1)
//   0x80058c24: mflr     r0
//   0x80058c28: stw      r0, 0x24(r1)
//   0x80058c2c: stw      r31, 0x1c(r1)
//   0x80058c30: li       r31, 0
//   0x80058c34: stw      r30, 0x18(r1)
//   0x80058c38: li       r30, 0
//   0x80058c3c: stw      r29, 0x14(r1)
//   0x80058c40: mr       r29, r3
//   0x80058c44: b        0x80058c70
//   0x80058c48: lwz      r3, 0x1c(r29)
//   0x80058c4c: lwzx     r3, r3, r31
//   0x80058c50: cmpwi    r3, 0
//   0x80058c54: beq      0x80058c68
//   0x80058c58: lwz      r12, 0(r3)
//   0x80058c5c: lwz      r12, 0x24(r12)
//   0x80058c60: mtctr    r12
//   0x80058c64: bctrl    
//   0x80058c68: addi     r31, r31, 4
//   0x80058c6c: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
