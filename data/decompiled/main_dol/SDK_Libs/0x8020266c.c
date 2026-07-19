// Function at 0x8020266c
// Size: 700 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020266c: stwu     r1, -0x20(r1)
//   0x80202670: mflr     r0
//   0x80202674: stw      r0, 0x24(r1)
//   0x80202678: stw      r31, 0x1c(r1)
//   0x8020267c: mr       r31, r4
//   0x80202680: stw      r30, 0x18(r1)
//   0x80202684: mr       r30, r3
//   0x80202688: lwz      r0, 8(r3)
//   0x8020268c: cmplwi   r0, 1
//   0x80202690: bne      0x80202750
//   0x80202694: lwz      r5, 0(r3)
//   0x80202698: li       r0, 0
//   0x8020269c: addi     r4, r5, 1
//   0x802026a0: stw      r4, 0(r3)
//   0x802026a4: lbz      r4, 0(r5)
//   0x802026a8: extsb.   r6, r4
//   0x802026ac: stb      r4, 0x10(r1)
//   0x802026b0: stb      r0, 0x11(r1)
//   0x802026b4: beq      0x802026c8
//   0x802026b8: lwz      r4, 4(r3)
//

// TODO: Full decompilation requires Ghidra
