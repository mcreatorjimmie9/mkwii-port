// Function at 0x800502a0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800502a0: stwu     r1, -0x10(r1)
//   0x800502a4: mflr     r0
//   0x800502a8: cmpwi    r4, 0
//   0x800502ac: stw      r0, 0x14(r1)
//   0x800502b0: stw      r31, 0xc(r1)
//   0x800502b4: mr       r31, r3
//   0x800502b8: beq      0x800502c0
//   0x800502bc: bl       0x8012e4fc
//   0x800502c0: lwz      r3, 0(r31)
//   0x800502c4: lis      r4, -0x7fdc
//   0x800502c8: addi     r4, r4, 0x7148
//   0x800502cc: lbz      r5, 0xc(r3)
//   0x800502d0: addi     r3, r3, 0x20
//   0x800502d4: addi     r0, r5, -1
//   0x800502d8: slwi     r0, r0, 2
//   0x800502dc: lwzx     r4, r4, r0
//   0x800502e0: bl       0x80172ec4
//   0x800502e4: lwz      r0, 0x14(r1)
//   0x800502e8: lwz      r31, 0xc(r1)
//   0x800502ec: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
