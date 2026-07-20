// Function at 0x80073290
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80073290: stwu     r1, -0x10(r1)
//   0x80073294: mflr     r0
//   0x80073298: lwz      r4, 0(r3)
//   0x8007329c: mr       r5, r3
//   0x800732a0: stw      r0, 0x14(r1)
//   0x800732a4: cmpwi    r4, 0
//   0x800732a8: beq      0x800732fc
//   0x800732ac: lwz      r3, 8(r3)
//   0x800732b0: cmpwi    r3, 0
//   0x800732b4: beq      0x800732cc
//   0x800732b8: lbz      r3, 0(r3)
//   0x800732bc: neg      r0, r3
//   0x800732c0: or       r0, r0, r3
//   0x800732c4: srwi     r3, r0, 0x1f
//   0x800732c8: b        0x80073300
//   0x800732cc: lwz      r0, 0xe8(r4)
//   0x800732d0: addi     r3, r1, 8
//   0x800732d4: stw      r0, 8(r1)
//   0x800732d8: lwz      r4, 4(r5)
//   0x800732dc: bl       0x8004e300
//

// TODO: Full decompilation requires Ghidra
