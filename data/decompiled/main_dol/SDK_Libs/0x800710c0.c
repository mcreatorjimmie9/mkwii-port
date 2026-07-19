// Function at 0x800710c0
// Size: 848 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800710c0: stwu     r1, -0x30(r1)
//   0x800710c4: mflr     r0
//   0x800710c8: stw      r0, 0x34(r1)
//   0x800710cc: stw      r31, 0x2c(r1)
//   0x800710d0: mr       r31, r5
//   0x800710d4: stw      r30, 0x28(r1)
//   0x800710d8: mr       r30, r4
//   0x800710dc: stw      r29, 0x24(r1)
//   0x800710e0: mr       r29, r3
//   0x800710e4: lbz      r7, 0x101(r3)
//   0x800710e8: lbz      r6, 0x100(r3)
//   0x800710ec: addi     r4, r7, 1
//   0x800710f0: lwz      r7, 0xd4(r3)
//   0x800710f4: divw     r0, r4, r6
//   0x800710f8: cmpwi    r7, 0
//   0x800710fc: mullw    r0, r0, r6
//   0x80071100: subf     r0, r0, r4
//   0x80071104: stb      r0, 0x101(r3)
//   0x80071108: beq      0x80071148
//   0x8007110c: lhz      r0, 0xda(r3)
//

// TODO: Full decompilation requires Ghidra
