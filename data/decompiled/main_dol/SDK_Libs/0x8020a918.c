// Function at 0x8020a918
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020a918: stwu     r1, -0x10(r1)
//   0x8020a91c: mflr     r0
//   0x8020a920: stw      r0, 0x14(r1)
//   0x8020a924: stw      r31, 0xc(r1)
//   0x8020a928: mr       r31, r4
//   0x8020a92c: stw      r30, 8(r1)
//   0x8020a930: mr       r30, r3
//   0x8020a934: lwz      r0, -0x5ea0(r13)
//   0x8020a938: cmplw    r3, r0
//   0x8020a93c: bge      0x8020a958
//   0x8020a940: lwz      r4, -0x5e90(r13)
//   0x8020a944: cmpwi    r4, 0
//   0x8020a948: beq      0x8020a958
//   0x8020a94c: mulli    r0, r3, 0x140
//   0x8020a950: add      r3, r4, r0
//   0x8020a954: b        0x8020a95c
//   0x8020a958: li       r3, 0
//   0x8020a95c: cmpwi    r3, 0
//   0x8020a960: beq      0x8020a99c
//   0x8020a964: lbz      r0, 0x14(r3)
//

// TODO: Full decompilation requires Ghidra
