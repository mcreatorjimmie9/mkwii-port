// Function at 0x8006f030
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006f030: stwu     r1, -0x10(r1)
//   0x8006f034: mflr     r0
//   0x8006f038: cmpwi    r3, 0
//   0x8006f03c: stw      r0, 0x14(r1)
//   0x8006f040: stw      r31, 0xc(r1)
//   0x8006f044: mr       r31, r3
//   0x8006f048: beq      0x8006f09c
//   0x8006f04c: beq      0x8006f09c
//   0x8006f050: lwz      r5, 0xd4(r3)
//   0x8006f054: lis      r4, -0x7fd9
//   0x8006f058: addi     r4, r4, -0x11f4
//   0x8006f05c: stw      r4, 0(r3)
//   0x8006f060: cmpwi    cr1, r5, 0
//   0x8006f064: beq      cr1, 0x8006f090
//   0x8006f068: lbz      r0, 0xd9(r3)
//   0x8006f06c: cmpwi    r0, 1
//   0x8006f070: bne      0x8006f090
//   0x8006f074: beq      cr1, 0x8006f090
//   0x8006f078: lwz      r12, 0(r5)
//   0x8006f07c: mr       r3, r5
//

// TODO: Full decompilation requires Ghidra
