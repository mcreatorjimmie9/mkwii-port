// Function at 0x8024261c
// Size: 100 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8024261c: stwu     r1, -0x10(r1)
//   0x80242620: mflr     r0
//   0x80242624: stw      r0, 0x14(r1)
//   0x80242628: stw      r31, 0xc(r1)
//   0x8024262c: lis      r31, -0x7fc8
//   0x80242630: stw      r30, 8(r1)
//   0x80242634: mr       r30, r3
//   0x80242638: li       r3, 0
//   0x8024263c: b        0x80242650
//   0x80242640: lwz      r0, 8(r3)
//   0x80242644: cmplw    r0, r30
//   0x80242648: bne      0x80242650
//   0x8024264c: b        0x80242668
//   0x80242650: mr       r4, r3
//   0x80242654: addi     r3, r31, 0x760
//   0x80242658: bl       0x800af0e0
//   0x8024265c: cmpwi    r3, 0
//   0x80242660: bne      0x80242640
//   0x80242664: li       r3, 0
//   0x80242668: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
