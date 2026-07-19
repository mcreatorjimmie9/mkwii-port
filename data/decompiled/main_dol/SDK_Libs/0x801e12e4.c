// Function at 0x801e12e4
// Size: 268 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801e12e4: stwu     r1, -0x10(r1)
//   0x801e12e8: mflr     r0
//   0x801e12ec: stw      r0, 0x14(r1)
//   0x801e12f0: stw      r31, 0xc(r1)
//   0x801e12f4: mr       r31, r3
//   0x801e12f8: stw      r30, 8(r1)
//   0x801e12fc: lwz      r4, 0x14(r3)
//   0x801e1300: lwz      r0, 0x18(r3)
//   0x801e1304: cmplw    r4, r0
//   0x801e1308: blt      0x801e1314
//   0x801e130c: li       r3, 0
//   0x801e1310: b        0x801e13b8
//   0x801e1314: lwz      r0, 0x10(r3)
//   0x801e1318: lwz      r5, 0xc(r3)
//   0x801e131c: add      r30, r4, r0
//   0x801e1320: cmplw    r5, r30
//   0x801e1324: bgt      0x801e1338
//   0x801e1328: lwz      r0, 8(r3)
//   0x801e132c: add      r0, r5, r0
//   0x801e1330: cmplw    r0, r30
//

// TODO: Full decompilation requires Ghidra
