// Function at 0x800469c0
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800469c0: stwu     r1, -0x10(r1)
//   0x800469c4: mflr     r0
//   0x800469c8: stw      r0, 0x14(r1)
//   0x800469cc: stw      r31, 0xc(r1)
//   0x800469d0: mr       r31, r4
//   0x800469d4: stw      r30, 8(r1)
//   0x800469d8: mr       r30, r3
//   0x800469dc: lwz      r6, 0(r4)
//   0x800469e0: lhz      r7, 0x42(r6)
//   0x800469e4: add      r6, r5, r7
//   0x800469e8: lwz      r6, 4(r6)
//   0x800469ec: b        0x800469f8
//   0x800469f0: add      r6, r6, r7
//   0x800469f4: lwz      r6, 4(r6)
//   0x800469f8: cmpwi    r6, 0
//   0x800469fc: beq      0x80046a0c
//   0x80046a00: lwz      r0, 0xc(r6)
//   0x80046a04: cmpwi    r0, 1
//   0x80046a08: bne      0x800469f0
//   0x80046a0c: cmpwi    r6, 0
//

// TODO: Full decompilation requires Ghidra
