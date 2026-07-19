// Function at 0x8004cbd0
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004cbd0: stwu     r1, -0x20(r1)
//   0x8004cbd4: mflr     r0
//   0x8004cbd8: lwz      r5, 0(r3)
//   0x8004cbdc: lis      r3, -0x7fd9
//   0x8004cbe0: stw      r0, 0x24(r1)
//   0x8004cbe4: addi     r3, r3, -0x1bc0
//   0x8004cbe8: addi     r0, r5, 0x18
//   0x8004cbec: stw      r31, 0x1c(r1)
//   0x8004cbf0: mr       r31, r4
//   0x8004cbf4: addi     r4, r1, 0xc
//   0x8004cbf8: stw      r3, 0xc(r1)
//   0x8004cbfc: addi     r3, r1, 8
//   0x8004cc00: stw      r0, 8(r1)
//   0x8004cc04: bl       0x8004c030
//   0x8004cc08: cmpwi    r3, 0
//   0x8004cc0c: beq      0x8004cc50
//   0x8004cc10: neg      r0, r3
//   0x8004cc14: or       r0, r0, r3
//   0x8004cc18: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004cc1c: beq      0x8004cc48
//

// TODO: Full decompilation requires Ghidra
