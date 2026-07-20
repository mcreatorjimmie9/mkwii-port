// Function at 0x80058ca0
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80058ca0: stwu     r1, -0x20(r1)
//   0x80058ca4: mflr     r0
//   0x80058ca8: stw      r0, 0x24(r1)
//   0x80058cac: stfd     f31, 0x18(r1)
//   0x80058cb0: fmr      f31, f1
//   0x80058cb4: stw      r31, 0x14(r1)
//   0x80058cb8: li       r31, 0
//   0x80058cbc: stw      r30, 0x10(r1)
//   0x80058cc0: li       r30, 0
//   0x80058cc4: stw      r29, 0xc(r1)
//   0x80058cc8: mr       r29, r3
//   0x80058ccc: b        0x80058cfc
//   0x80058cd0: lwz      r3, 0x1c(r29)
//   0x80058cd4: lwzx     r3, r3, r31
//   0x80058cd8: cmpwi    r3, 0
//   0x80058cdc: beq      0x80058cf4
//   0x80058ce0: lwz      r12, 0(r3)
//   0x80058ce4: fmr      f1, f31
//   0x80058ce8: lwz      r12, 0x1c(r12)
//   0x80058cec: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
