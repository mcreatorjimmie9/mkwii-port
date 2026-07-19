// Function at 0x8020ae5c
// Size: 952 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8020ae5c: stwu     r1, -0x20(r1)
//   0x8020ae60: mflr     r0
//   0x8020ae64: stw      r0, 0x24(r1)
//   0x8020ae68: stw      r31, 0x1c(r1)
//   0x8020ae6c: stw      r30, 0x18(r1)
//   0x8020ae70: mr       r30, r3
//   0x8020ae74: stw      r29, 0x14(r1)
//   0x8020ae78: lwz      r0, -0x5ea0(r13)
//   0x8020ae7c: cmplw    r3, r0
//   0x8020ae80: bge      0x8020ae9c
//   0x8020ae84: lwz      r4, -0x5e90(r13)
//   0x8020ae88: cmpwi    r4, 0
//   0x8020ae8c: beq      0x8020ae9c
//   0x8020ae90: mulli    r0, r3, 0x140
//   0x8020ae94: add      r29, r4, r0
//   0x8020ae98: b        0x8020aea0
//   0x8020ae9c: li       r29, 0
//   0x8020aea0: cmpwi    cr1, r29, 0
//   0x8020aea4: beq      cr1, 0x8020aeb4
//   0x8020aea8: lwz      r0, 0(r29)
//

// TODO: Full decompilation requires Ghidra
