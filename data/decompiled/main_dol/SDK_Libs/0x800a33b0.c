// Function at 0x800a33b0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a33b0: stwu     r1, -0x20(r1)
//   0x800a33b4: mflr     r0
//   0x800a33b8: stw      r0, 0x24(r1)
//   0x800a33bc: stw      r31, 0x1c(r1)
//   0x800a33c0: stw      r30, 0x18(r1)
//   0x800a33c4: stw      r29, 0x14(r1)
//   0x800a33c8: mr       r29, r3
//   0x800a33cc: bl       0x800a4490
//   0x800a33d0: addi     r3, r3, 0x354
//   0x800a33d4: bl       0x801a7e44
//   0x800a33d8: lwz      r31, 4(r29)
//   0x800a33dc: addi     r30, r29, 4
//   0x800a33e0: b        0x800a33f4
//   0x800a33e4: mr       r3, r31
//   0x800a33e8: lwz      r31, 0(r31)
//   0x800a33ec: addi     r3, r3, -0xe8
//   0x800a33f0: bl       0x8008e830
//   0x800a33f4: cmplw    r31, r30
//   0x800a33f8: bne      0x800a33e4
//   0x800a33fc: mr       r3, r29
//

// TODO: Full decompilation requires Ghidra
