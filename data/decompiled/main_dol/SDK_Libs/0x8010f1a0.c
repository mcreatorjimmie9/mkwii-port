// Function at 0x8010f1a0
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8010f1a0: stwu     r1, -0x10(r1)
//   0x8010f1a4: mflr     r0
//   0x8010f1a8: cmpwi    r3, 0
//   0x8010f1ac: stw      r0, 0x14(r1)
//   0x8010f1b0: stw      r31, 0xc(r1)
//   0x8010f1b4: mr       r31, r3
//   0x8010f1b8: bne      0x8010f1c0
//   0x8010f1bc: lwz      r31, -0x76e0(r13)
//   0x8010f1c0: lwz      r0, 0xbc(r31)
//   0x8010f1c4: cmpwi    r0, 0
//   0x8010f1c8: beq      0x8010f200
//   0x8010f1cc: bl       0x800f2428
//   0x8010f1d0: lwz      r0, 0xac(r31)
//   0x8010f1d4: subf     r0, r0, r3
//   0x8010f1d8: cmplwi   r0, 0x2710
//   0x8010f1dc: bge      0x8010f1ec
//   0x8010f1e0: li       r0, 1
//   0x8010f1e4: stw      r0, 0xb4(r31)
//   0x8010f1e8: b        0x8010f200
//   0x8010f1ec: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
