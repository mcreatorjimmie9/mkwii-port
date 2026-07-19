// Function at 0x80244760
// Size: 124 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80244760: stwu     r1, -0x20(r1)
//   0x80244764: mflr     r0
//   0x80244768: stw      r0, 0x24(r1)
//   0x8024476c: stw      r31, 0x1c(r1)
//   0x80244770: stw      r30, 0x18(r1)
//   0x80244774: lis      r30, -0x7fc8
//   0x80244778: addi     r30, r30, 0x7f8
//   0x8024477c: stw      r29, 0x14(r1)
//   0x80244780: mulli    r29, r3, 0xc
//   0x80244784: lwzx     r3, r30, r29
//   0x80244788: cmpwi    r3, 0
//   0x8024478c: beq      0x802447bc
//   0x80244790: add      r31, r30, r29
//   0x80244794: lwz      r0, 4(r31)
//   0x80244798: cmplw    r4, r0
//   0x8024479c: bne      0x802447bc
//   0x802447a0: bl       0x802420d4
//   0x802447a4: li       r0, 0
//   0x802447a8: stwx     r0, r30, r29
//   0x802447ac: li       r3, 1
//

// TODO: Full decompilation requires Ghidra
