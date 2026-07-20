// Function at 0x8010f214
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8010f214: stwu     r1, -0x10(r1)
//   0x8010f218: mflr     r0
//   0x8010f21c: cmpwi    r3, 0
//   0x8010f220: stw      r0, 0x14(r1)
//   0x8010f224: stw      r31, 0xc(r1)
//   0x8010f228: mr       r31, r3
//   0x8010f22c: bne      0x8010f234
//   0x8010f230: lwz      r31, -0x76e0(r13)
//   0x8010f234: lwz      r0, 0xbc(r31)
//   0x8010f238: cmpwi    r0, 0
//   0x8010f23c: beq      0x8010f24c
//   0x8010f240: mr       r3, r31
//   0x8010f244: li       r4, 2
//   0x8010f248: bl       0x80110d8c
//   0x8010f24c: lwz      r3, 0(r31)
//   0x8010f250: cmpwi    r3, -1
//   0x8010f254: beq      0x8010f268
//   0x8010f258: lwz      r0, 0xc4(r31)
//   0x8010f25c: cmpwi    r0, 0
//   0x8010f260: beq      0x8010f268
//

// TODO: Full decompilation requires Ghidra
