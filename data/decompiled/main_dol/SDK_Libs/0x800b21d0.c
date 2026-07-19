// Function at 0x800b21d0
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b21d0: stwu     r1, -0x10(r1)
//   0x800b21d4: mflr     r0
//   0x800b21d8: stw      r0, 0x14(r1)
//   0x800b21dc: stw      r31, 0xc(r1)
//   0x800b21e0: mr       r31, r3
//   0x800b21e4: lhz      r0, 0x18(r3)
//   0x800b21e8: cmplw    r4, r0
//   0x800b21ec: bne      0x800b21f8
//   0x800b21f0: lhz      r0, 0x1a(r3)
//   0x800b21f4: b        0x800b225c
//   0x800b21f8: sth      r4, 0x18(r3)
//   0x800b21fc: mr       r5, r4
//   0x800b2200: lwz      r6, 0x14(r3)
//   0x800b2204: lwz      r6, 0x10(r6)
//   0x800b2208: b        0x800b2244
//   0x800b220c: nop      
//   0x800b2210: lhz      r0, 0(r6)
//   0x800b2214: cmplw    r0, r4
//   0x800b2218: bgt      0x800b2240
//   0x800b221c: lhz      r0, 2(r6)
//

// TODO: Full decompilation requires Ghidra
