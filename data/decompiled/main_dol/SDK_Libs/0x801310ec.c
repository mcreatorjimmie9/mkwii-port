// Function at 0x801310ec
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801310ec: stwu     r1, -0x20(r1)
//   0x801310f0: mflr     r0
//   0x801310f4: stw      r0, 0x24(r1)
//   0x801310f8: stw      r31, 0x1c(r1)
//   0x801310fc: stw      r30, 0x18(r1)
//   0x80131100: lis      r30, -0x7fcd
//   0x80131104: addi     r31, r30, -0x1ea0
//   0x80131108: stw      r29, 0x14(r1)
//   0x8013110c: stw      r28, 0x10(r1)
//   0x80131110: mr       r28, r4
//   0x80131114: lbz      r0, 0x29(r31)
//   0x80131118: cmplwi   r0, 4
//   0x8013111c: bne      0x801311d4
//   0x80131120: lbz      r0, 0x1c(r31)
//   0x80131124: cmplwi   r0, 0xff
//   0x80131128: beq      0x801311d4
//   0x8013112c: lbz      r0, 0x1d(r31)
//   0x80131130: cmplwi   r0, 0xff
//   0x80131134: bne      0x8013113c
//   0x80131138: b        0x801311d4
//

// TODO: Full decompilation requires Ghidra
