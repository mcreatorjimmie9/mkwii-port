// Function at 0x80225534
// Size: 148 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80225534: stwu     r1, -0x10(r1)
//   0x80225538: mflr     r0
//   0x8022553c: stw      r0, 0x14(r1)
//   0x80225540: stw      r31, 0xc(r1)
//   0x80225544: stw      r30, 8(r1)
//   0x80225548: lwz      r30, 0xc(r3)
//   0x8022554c: cmpwi    r30, 0
//   0x80225550: bne      0x8022555c
//   0x80225554: li       r3, 0
//   0x80225558: b        0x802255b0
//   0x8022555c: addi     r3, r30, 4
//   0x80225560: li       r4, 0
//   0x80225564: bl       0x800af0e0
//   0x80225568: cmpwi    r3, 0
//   0x8022556c: mr       r31, r3
//   0x80225570: bne      0x8022557c
//   0x80225574: li       r31, 0
//   0x80225578: b        0x802255ac
//   0x8022557c: lwz      r12, 0x20(r30)
//   0x80225580: mr       r3, r30
//

// TODO: Full decompilation requires Ghidra
