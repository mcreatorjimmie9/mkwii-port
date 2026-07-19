// Function at 0x800b23c0
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b23c0: stwu     r1, -0x10(r1)
//   0x800b23c4: mflr     r0
//   0x800b23c8: stw      r0, 0x14(r1)
//   0x800b23cc: stw      r31, 0xc(r1)
//   0x800b23d0: mr       r31, r3
//   0x800b23d4: lhz      r0, 0x18(r3)
//   0x800b23d8: cmplw    r4, r0
//   0x800b23dc: bne      0x800b23e8
//   0x800b23e0: lhz      r4, 0x1a(r3)
//   0x800b23e4: b        0x800b244c
//   0x800b23e8: sth      r4, 0x18(r3)
//   0x800b23ec: mr       r5, r4
//   0x800b23f0: lwz      r6, 0x14(r3)
//   0x800b23f4: lwz      r6, 0x10(r6)
//   0x800b23f8: b        0x800b2434
//   0x800b23fc: nop      
//   0x800b2400: lhz      r0, 0(r6)
//   0x800b2404: cmplw    r0, r4
//   0x800b2408: bgt      0x800b2430
//   0x800b240c: lhz      r0, 2(r6)
//

// TODO: Full decompilation requires Ghidra
