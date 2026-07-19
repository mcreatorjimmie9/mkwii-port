// Function at 0x800562a0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800562a0: stwu     r1, -0x10(r1)
//   0x800562a4: mflr     r0
//   0x800562a8: lwz      r3, 0(r3)
//   0x800562ac: stw      r0, 0x14(r1)
//   0x800562b0: lwz      r0, 0x10(r3)
//   0x800562b4: cmpwi    r0, 0
//   0x800562b8: beq      0x800562c4
//   0x800562bc: add      r0, r3, r0
//   0x800562c0: b        0x800562c8
//   0x800562c4: li       r0, 0
//   0x800562c8: lis      r3, -0x7fd9
//   0x800562cc: stw      r0, 0xc(r1)
//   0x800562d0: addi     r3, r3, -0x1a80
//   0x800562d4: addi     r4, r1, 8
//   0x800562d8: stw      r3, 8(r1)
//   0x800562dc: addi     r3, r1, 0xc
//   0x800562e0: bl       0x8004c030
//   0x800562e4: neg      r0, r3
//   0x800562e8: or       r0, r0, r3
//   0x800562ec: srwi     r3, r0, 0x1f
//

// TODO: Full decompilation requires Ghidra
