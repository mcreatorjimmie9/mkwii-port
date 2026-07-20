// Function at 0x8013cc9c
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8013cc9c: stwu     r1, -0x20(r1)
//   0x8013cca0: mflr     r0
//   0x8013cca4: stw      r0, 0x24(r1)
//   0x8013cca8: stw      r31, 0x1c(r1)
//   0x8013ccac: lis      r31, -0x7fcd
//   0x8013ccb0: addi     r31, r31, 0x1ef8
//   0x8013ccb4: stw      r30, 0x18(r1)
//   0x8013ccb8: stw      r29, 0x14(r1)
//   0x8013ccbc: lbz      r4, 0x1845(r31)
//   0x8013ccc0: lwz      r29, 0x16b8(r31)
//   0x8013ccc4: cmpwi    r4, 0
//   0x8013ccc8: beq      0x8013ccd8
//   0x8013cccc: addi     r0, r4, -1
//   0x8013ccd0: stb      r0, 0x1845(r31)
//   0x8013ccd4: b        0x8013cea0
//   0x8013ccd8: lbz      r0, 0x1844(r31)
//   0x8013ccdc: cmplwi   r0, 1
//   0x8013cce0: bne      0x8013cea0
//   0x8013cce4: lbz      r5, 0(r3)
//   0x8013cce8: cmpwi    r5, 0
//

// TODO: Full decompilation requires Ghidra
