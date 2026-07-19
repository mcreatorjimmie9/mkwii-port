// Function at 0x8006a6c0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006a6c0: stwu     r1, -0x10(r1)
//   0x8006a6c4: mflr     r0
//   0x8006a6c8: cmpwi    r4, 0
//   0x8006a6cc: stw      r0, 0x14(r1)
//   0x8006a6d0: stw      r31, 0xc(r1)
//   0x8006a6d4: stw      r30, 8(r1)
//   0x8006a6d8: mr       r30, r4
//   0x8006a6dc: beq      0x8006a708
//   0x8006a6e0: lwz      r31, 0(r3)
//   0x8006a6e4: cmpwi    r31, 0
//   0x8006a6e8: beq      0x8006a708
//   0x8006a6ec: lwz      r0, 0x70(r31)
//   0x8006a6f0: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x8006a6f4: bne      0x8006a6fc
//   0x8006a6f8: bl       0x8006ab00
//   0x8006a6fc: mr       r3, r31
//   0x8006a700: mr       r4, r30
//   0x8006a704: bl       0x80199c90
//   0x8006a708: lwz      r0, 0x14(r1)
//   0x8006a70c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
