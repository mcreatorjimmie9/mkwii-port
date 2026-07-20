// Function at 0x8010a488
// Size: 252 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010a488: stwu     r1, -0x20(r1)
//   0x8010a48c: mflr     r0
//   0x8010a490: stw      r0, 0x24(r1)
//   0x8010a494: stw      r31, 0x1c(r1)
//   0x8010a498: mr       r31, r3
//   0x8010a49c: lwz      r5, 0xc(r3)
//   0x8010a4a0: cmpwi    r5, 5
//   0x8010a4a4: bge      0x8010a56c
//   0x8010a4a8: lwz      r0, 0x10(r3)
//   0x8010a4ac: li       r6, 0
//   0x8010a4b0: cmpwi    r0, 0
//   0x8010a4b4: beq      0x8010a4dc
//   0x8010a4b8: lwz      r5, 0x20(r3)
//   0x8010a4bc: cmpwi    r5, 0
//   0x8010a4c0: beq      0x8010a4f8
//   0x8010a4c4: lwz      r0, 0x1c(r3)
//   0x8010a4c8: subf     r0, r0, r4
//   0x8010a4cc: cmplw    r0, r5
//   0x8010a4d0: ble      0x8010a4f8
//   0x8010a4d4: li       r6, 1
//

// TODO: Full decompilation requires Ghidra
