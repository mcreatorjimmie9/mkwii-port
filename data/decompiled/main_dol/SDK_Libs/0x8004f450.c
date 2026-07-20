// Function at 0x8004f450
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004f450: stwu     r1, -0x10(r1)
//   0x8004f454: mflr     r0
//   0x8004f458: lwz      r4, 0(r3)
//   0x8004f45c: stw      r0, 0x14(r1)
//   0x8004f460: lha      r0, 0x62(r4)
//   0x8004f464: cmpwi    r0, -1
//   0x8004f468: beq      0x8004f498
//   0x8004f46c: lwz      r0, 4(r4)
//   0x8004f470: cmpwi    r0, 0
//   0x8004f474: beq      0x8004f480
//   0x8004f478: add      r0, r4, r0
//   0x8004f47c: b        0x8004f484
//   0x8004f480: li       r0, 0
//   0x8004f484: stw      r0, 8(r1)
//   0x8004f488: addi     r3, r1, 8
//   0x8004f48c: lha      r4, 0x62(r4)
//   0x8004f490: bl       0x8004e7f0
//   0x8004f494: b        0x8004f49c
//   0x8004f498: li       r3, 0
//   0x8004f49c: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
