// Function at 0x800b2490
// Size: 768 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b2490: stwu     r1, -0x10(r1)
//   0x800b2494: mflr     r0
//   0x800b2498: stw      r0, 0x14(r1)
//   0x800b249c: stw      r31, 0xc(r1)
//   0x800b24a0: mr       r31, r3
//   0x800b24a4: lhz      r0, 0x18(r3)
//   0x800b24a8: cmplw    r4, r0
//   0x800b24ac: bne      0x800b24b8
//   0x800b24b0: lhz      r3, 0x1a(r3)
//   0x800b24b4: b        0x800b251c
//   0x800b24b8: sth      r4, 0x18(r3)
//   0x800b24bc: mr       r5, r4
//   0x800b24c0: lwz      r6, 0x14(r3)
//   0x800b24c4: lwz      r6, 0x10(r6)
//   0x800b24c8: b        0x800b2504
//   0x800b24cc: nop      
//   0x800b24d0: lhz      r0, 0(r6)
//   0x800b24d4: cmplw    r0, r4
//   0x800b24d8: bgt      0x800b2500
//   0x800b24dc: lhz      r0, 2(r6)
//

// TODO: Full decompilation requires Ghidra
