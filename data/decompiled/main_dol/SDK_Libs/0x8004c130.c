// Function at 0x8004c130
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c130: stwu     r1, -0x20(r1)
//   0x8004c134: mflr     r0
//   0x8004c138: stw      r0, 0x24(r1)
//   0x8004c13c: stw      r31, 0x1c(r1)
//   0x8004c140: mr       r31, r3
//   0x8004c144: lwz      r0, 0(r3)
//   0x8004c148: cmpwi    r0, 0
//   0x8004c14c: beq      0x8004c188
//   0x8004c150: lwz      r0, 0(r4)
//   0x8004c154: cmpwi    r0, 0
//   0x8004c158: beq      0x8004c188
//   0x8004c15c: stw      r0, 8(r1)
//   0x8004c160: addi     r4, r1, 8
//   0x8004c164: bl       0x8004bdf0
//   0x8004c168: cmpwi    r3, 0
//   0x8004c16c: beq      0x8004c188
//   0x8004c170: lwz      r4, 0(r31)
//   0x8004c174: addi     r0, r4, 0x18
//   0x8004c178: subf     r0, r0, r3
//   0x8004c17c: srawi    r0, r0, 4
//

// TODO: Full decompilation requires Ghidra
