// Function at 0x801aa784
// Size: 404 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801aa784: stwu     r1, -0x20(r1)
//   0x801aa788: mflr     r0
//   0x801aa78c: stw      r0, 0x24(r1)
//   0x801aa790: stw      r31, 0x1c(r1)
//   0x801aa794: stw      r30, 0x18(r1)
//   0x801aa798: stw      r29, 0x14(r1)
//   0x801aa79c: mr       r29, r3
//   0x801aa7a0: bl       0x801a650c
//   0x801aa7a4: lwz      r30, 0x2cc(r29)
//   0x801aa7a8: mr       r31, r3
//   0x801aa7ac: addi     r0, r30, 1
//   0x801aa7b0: cmpwi    r30, 0
//   0x801aa7b4: stw      r0, 0x2cc(r29)
//   0x801aa7b8: bne      0x801aa8f0
//   0x801aa7bc: lhz      r0, 0x2c8(r29)
//   0x801aa7c0: cmpwi    r0, 3
//   0x801aa7c4: beq      0x801aa8dc
//   0x801aa7c8: bge      0x801aa7dc
//   0x801aa7cc: cmpwi    r0, 1
//   0x801aa7d0: beq      0x801aa7f8
//

// TODO: Full decompilation requires Ghidra
