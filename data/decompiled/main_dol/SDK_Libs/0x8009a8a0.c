// Function at 0x8009a8a0
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8009a8a0: stwu     r1, -0x20(r1)
//   0x8009a8a4: mflr     r0
//   0x8009a8a8: stw      r0, 0x24(r1)
//   0x8009a8ac: stw      r31, 0x1c(r1)
//   0x8009a8b0: stw      r30, 0x18(r1)
//   0x8009a8b4: stw      r29, 0x14(r1)
//   0x8009a8b8: stw      r28, 0x10(r1)
//   0x8009a8bc: mr       r28, r3
//   0x8009a8c0: lbz      r4, 0x8c(r3)
//   0x8009a8c4: lwz      r0, 0x48(r3)
//   0x8009a8c8: add      r4, r4, r0
//   0x8009a8cc: cmpwi    r4, 0x7f
//   0x8009a8d0: ble      0x8009a8dc
//   0x8009a8d4: li       r29, 0x7f
//   0x8009a8d8: b        0x8009a8e4
//   0x8009a8dc: srawi    r0, r4, 0x1f
//   0x8009a8e0: andc     r29, r4, r0
//   0x8009a8e4: lwz      r30, 0x27c(r3)
//   0x8009a8e8: addi     r31, r30, 0x10
//   0x8009a8ec: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
