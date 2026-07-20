// Function at 0x80180498
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80180498: stwu     r1, -0x20(r1)
//   0x8018049c: mflr     r0
//   0x801804a0: stw      r0, 0x24(r1)
//   0x801804a4: stw      r31, 0x1c(r1)
//   0x801804a8: stw      r30, 0x18(r1)
//   0x801804ac: addi     r30, r3, 0x28
//   0x801804b0: stw      r29, 0x14(r1)
//   0x801804b4: mr       r29, r4
//   0x801804b8: lwz      r31, 0x28(r3)
//   0x801804bc: b        0x801804e0
//   0x801804c0: mr       r3, r29
//   0x801804c4: addi     r4, r31, 8
//   0x801804c8: bl       0x8001273c
//   0x801804cc: cmpwi    r3, 0
//   0x801804d0: bne      0x801804dc
//   0x801804d4: lwz      r3, 0x88(r31)
//   0x801804d8: b        0x801804ec
//   0x801804dc: lwz      r31, 0(r31)
//   0x801804e0: cmplw    r31, r30
//   0x801804e4: bne      0x801804c0
//

// TODO: Full decompilation requires Ghidra
