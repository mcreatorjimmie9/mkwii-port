// Function at 0x80191128
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80191128: stwu     r1, -0x10(r1)
//   0x8019112c: mflr     r0
//   0x80191130: lis      r3, -0x7fcc
//   0x80191134: stw      r0, 0x14(r1)
//   0x80191138: stw      r31, 0xc(r1)
//   0x8019113c: lwz      r0, 0x1220(r3)
//   0x80191140: cmpwi    r0, 0
//   0x80191144: beq      0x80191180
//   0x80191148: li       r31, 0
//   0x8019114c: mr       r3, r31
//   0x80191150: bl       0x80192544
//   0x80191154: addi     r31, r31, 1
//   0x80191158: cmpwi    r31, 0x10
//   0x8019115c: blt      0x8019114c
//   0x80191160: lis      r3, -0x7fcc
//   0x80191164: lwz      r31, 0xd58(r3)
//   0x80191168: b        0x80191178
//   0x8019116c: mr       r3, r31
//   0x80191170: bl       0x80191850
//   0x80191174: lwz      r31, 0(r31)
//

// TODO: Full decompilation requires Ghidra
