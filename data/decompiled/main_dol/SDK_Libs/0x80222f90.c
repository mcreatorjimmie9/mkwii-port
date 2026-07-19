// Function at 0x80222f90
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80222f90: stwu     r1, -0x10(r1)
//   0x80222f94: mflr     r0
//   0x80222f98: stw      r0, 0x14(r1)
//   0x80222f9c: stw      r31, 0xc(r1)
//   0x80222fa0: mr       r31, r4
//   0x80222fa4: stw      r30, 8(r1)
//   0x80222fa8: mr       r30, r3
//   0x80222fac: addi     r3, r3, 0x74
//   0x80222fb0: bl       0x80037520
//   0x80222fb4: cmpwi    r3, 0
//   0x80222fb8: beq      0x80223014
//   0x80222fbc: addi     r3, r30, 0x74
//   0x80222fc0: bl       0x80037550
//   0x80222fc4: cmpwi    r31, 0
//   0x80222fc8: beq      0x80222fdc
//   0x80222fcc: lwz      r0, 0x50(r3)
//   0x80222fd0: ori      r0, r0, 1
//   0x80222fd4: stw      r0, 0x50(r3)
//   0x80222fd8: b        0x80222fe8
//   0x80222fdc: lwz      r0, 0x50(r3)
//

// TODO: Full decompilation requires Ghidra
