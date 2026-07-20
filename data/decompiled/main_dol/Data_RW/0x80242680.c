// Function at 0x80242680
// Size: 104 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242680: stwu     r1, -0x10(r1)
//   0x80242684: mflr     r0
//   0x80242688: stw      r0, 0x14(r1)
//   0x8024268c: stw      r31, 0xc(r1)
//   0x80242690: lis      r31, -0x7fc8
//   0x80242694: stw      r30, 8(r1)
//   0x80242698: li       r30, 0
//   0x8024269c: b        0x802426b8
//   0x802426a0: bl       0x801a9810
//   0x802426a4: lwz      r0, 8(r30)
//   0x802426a8: cmplw    r3, r0
//   0x802426ac: beq      0x802426b8
//   0x802426b0: mr       r3, r0
//   0x802426b4: bl       0x801aa134
//   0x802426b8: mr       r4, r30
//   0x802426bc: addi     r3, r31, 0x760
//   0x802426c0: bl       0x800af0e0
//   0x802426c4: cmpwi    r3, 0
//   0x802426c8: mr       r30, r3
//   0x802426cc: bne      0x802426a0
//

// TODO: Full decompilation requires Ghidra
