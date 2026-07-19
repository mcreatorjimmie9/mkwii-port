// Function at 0x800ac8a0
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800ac8a0: stwu     r1, -0x20(r1)
//   0x800ac8a4: mflr     r0
//   0x800ac8a8: stw      r0, 0x24(r1)
//   0x800ac8ac: stw      r31, 0x1c(r1)
//   0x800ac8b0: stw      r30, 0x18(r1)
//   0x800ac8b4: addi     r30, r3, 8
//   0x800ac8b8: stw      r29, 0x14(r1)
//   0x800ac8bc: mr       r29, r3
//   0x800ac8c0: lwz      r31, 8(r3)
//   0x800ac8c4: b        0x800ac8d8
//   0x800ac8c8: mr       r3, r31
//   0x800ac8cc: lwz      r31, 0(r31)
//   0x800ac8d0: addi     r3, r3, -0x114
//   0x800ac8d4: bl       0x800a9c80
//   0x800ac8d8: cmplw    r31, r30
//   0x800ac8dc: bne      0x800ac8c8
//   0x800ac8e0: lwz      r30, 8(r29)
//   0x800ac8e4: addi     r31, r29, 8
//   0x800ac8e8: b        0x800ac8fc
//   0x800ac8ec: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
