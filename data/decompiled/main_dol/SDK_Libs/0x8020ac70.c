// Function at 0x8020ac70
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020ac70: stwu     r1, -0x20(r1)
//   0x8020ac74: mflr     r0
//   0x8020ac78: stw      r0, 0x24(r1)
//   0x8020ac7c: stw      r31, 0x1c(r1)
//   0x8020ac80: lwz      r0, -0x5ea0(r13)
//   0x8020ac84: cmplw    r3, r0
//   0x8020ac88: bge      0x8020aca4
//   0x8020ac8c: lwz      r4, -0x5e90(r13)
//   0x8020ac90: cmpwi    r4, 0
//   0x8020ac94: beq      0x8020aca4
//   0x8020ac98: mulli    r0, r3, 0x140
//   0x8020ac9c: add      r31, r4, r0
//   0x8020aca0: b        0x8020aca8
//   0x8020aca4: li       r31, 0
//   0x8020aca8: cmpwi    cr1, r31, 0
//   0x8020acac: beq      cr1, 0x8020acbc
//   0x8020acb0: lwz      r0, 0(r31)
//   0x8020acb4: cmpwi    r0, 0
//   0x8020acb8: bne      0x8020acd0
//   0x8020acbc: lis      r4, 1
//

// TODO: Full decompilation requires Ghidra
