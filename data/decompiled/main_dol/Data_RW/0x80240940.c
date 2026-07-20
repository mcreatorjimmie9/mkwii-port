// Function at 0x80240940
// Size: 212 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80240940: stwu     r1, -0x30(r1)
//   0x80240944: mflr     r0
//   0x80240948: stw      r0, 0x34(r1)
//   0x8024094c: stw      r31, 0x2c(r1)
//   0x80240950: mr       r31, r3
//   0x80240954: addi     r3, r1, 8
//   0x80240958: bl       0x8017302c
//   0x8024095c: lis      r3, -0x7fc8
//   0x80240960: lwz      r0, 0x120(r3)
//   0x80240964: clrlwi.  r0, r0, 0x1f
//   0x80240968: beq      0x802409dc
//   0x8024096c: lfs      f1, 0(r31)
//   0x80240970: lfs      f0, 8(r1)
//   0x80240974: fcmpu    cr0, f1, f0
//   0x80240978: bne      0x802409dc
//   0x8024097c: lfs      f1, 4(r31)
//   0x80240980: lfs      f0, 0xc(r1)
//   0x80240984: fcmpu    cr0, f1, f0
//   0x80240988: bne      0x802409dc
//   0x8024098c: lfs      f1, 8(r31)
//

// TODO: Full decompilation requires Ghidra
