// Function at 0x8015d4dc
// Size: 268 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8015d4dc: stwu     r1, -0x10(r1)
//   0x8015d4e0: mflr     r0
//   0x8015d4e4: stw      r0, 0x14(r1)
//   0x8015d4e8: stw      r31, 0xc(r1)
//   0x8015d4ec: stw      r30, 8(r1)
//   0x8015d4f0: mr       r30, r3
//   0x8015d4f4: bl       0x801a650c
//   0x8015d4f8: lwz      r5, -0x65dc(r13)
//   0x8015d4fc: mr       r31, r3
//   0x8015d500: cmplw    r5, r30
//   0x8015d504: bne      0x8015d520
//   0x8015d508: li       r0, 1
//   0x8015d50c: stw      r30, -0x65ec(r13)
//   0x8015d510: stw      r0, -0x65f0(r13)
//   0x8015d514: bl       0x801a6534
//   0x8015d518: mr       r3, r30
//   0x8015d51c: b        0x8015d580
//   0x8015d520: lwz      r4, 4(r30)
//   0x8015d524: lwz      r0, 4(r5)
//   0x8015d528: cmplw    r4, r0
//

// TODO: Full decompilation requires Ghidra
