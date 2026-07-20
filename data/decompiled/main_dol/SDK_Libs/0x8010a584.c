// Function at 0x8010a584
// Size: 332 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010a584: stwu     r1, -0x20(r1)
//   0x8010a588: mflr     r0
//   0x8010a58c: stw      r0, 0x24(r1)
//   0x8010a590: stw      r31, 0x1c(r1)
//   0x8010a594: stw      r30, 0x18(r1)
//   0x8010a598: stw      r29, 0x14(r1)
//   0x8010a59c: mr       r29, r4
//   0x8010a5a0: stw      r28, 0x10(r1)
//   0x8010a5a4: mr       r28, r3
//   0x8010a5a8: bl       0x8010a488
//   0x8010a5ac: cmpwi    r3, 0
//   0x8010a5b0: bne      0x8010a5bc
//   0x8010a5b4: li       r3, 0
//   0x8010a5b8: b        0x8010a6b0
//   0x8010a5bc: lwz      r0, 0x88(r28)
//   0x8010a5c0: subf     r0, r0, r29
//   0x8010a5c4: cmplwi   r0, 0x7530
//   0x8010a5c8: ble      0x8010a5e4
//   0x8010a5cc: mr       r3, r28
//   0x8010a5d0: bl       0x8010d780
//

// TODO: Full decompilation requires Ghidra
