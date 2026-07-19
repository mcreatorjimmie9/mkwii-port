// Function at 0x800677c0
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800677c0: stwu     r1, -0x10(r1)
//   0x800677c4: mflr     r0
//   0x800677c8: stw      r0, 0x14(r1)
//   0x800677cc: stw      r31, 0xc(r1)
//   0x800677d0: mr       r31, r4
//   0x800677d4: stw      r30, 8(r1)
//   0x800677d8: mr       r30, r3
//   0x800677dc: bl       0x8006af20
//   0x800677e0: cntlzw   r0, r3
//   0x800677e4: rlwinm.  r0, r0, 0x1b, 5, 0x1f
//   0x800677e8: beq      0x800677fc
//   0x800677ec: cmpwi    r31, 0
//   0x800677f0: beq      0x800677fc
//   0x800677f4: mr       r3, r30
//   0x800677f8: bl       0x80199c64
//   0x800677fc: lwz      r0, 0x14(r1)
//   0x80067800: lwz      r31, 0xc(r1)
//   0x80067804: lwz      r30, 8(r1)
//   0x80067808: mtlr     r0
//   0x8006780c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
