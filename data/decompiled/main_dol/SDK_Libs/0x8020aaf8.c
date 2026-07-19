// Function at 0x8020aaf8
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020aaf8: stwu     r1, -0x10(r1)
//   0x8020aafc: mflr     r0
//   0x8020ab00: stw      r0, 0x14(r1)
//   0x8020ab04: stw      r31, 0xc(r1)
//   0x8020ab08: mr       r31, r4
//   0x8020ab0c: stw      r30, 8(r1)
//   0x8020ab10: mr       r30, r3
//   0x8020ab14: lwz      r0, -0x5ea0(r13)
//   0x8020ab18: cmplw    r3, r0
//   0x8020ab1c: bge      0x8020ab38
//   0x8020ab20: lwz      r4, -0x5e90(r13)
//   0x8020ab24: cmpwi    r4, 0
//   0x8020ab28: beq      0x8020ab38
//   0x8020ab2c: mulli    r0, r3, 0x140
//   0x8020ab30: add      r3, r4, r0
//   0x8020ab34: b        0x8020ab3c
//   0x8020ab38: li       r3, 0
//   0x8020ab3c: cmpwi    r3, 0
//   0x8020ab40: beq      0x8020ab7c
//   0x8020ab44: lbz      r0, 0x14(r3)
//

// TODO: Full decompilation requires Ghidra
