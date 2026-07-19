// Function at 0x8010f394
// Size: 152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8010f394: stwu     r1, -0x20(r1)
//   0x8010f398: mflr     r0
//   0x8010f39c: stw      r0, 0x24(r1)
//   0x8010f3a0: stw      r31, 0x1c(r1)
//   0x8010f3a4: stw      r30, 0x18(r1)
//   0x8010f3a8: mr       r30, r4
//   0x8010f3ac: stw      r29, 0x14(r1)
//   0x8010f3b0: mr       r29, r3
//   0x8010f3b4: mr       r3, r30
//   0x8010f3b8: bl       0x800206f4
//   0x8010f3bc: lwz      r0, 0x578(r29)
//   0x8010f3c0: addi     r31, r3, 1
//   0x8010f3c4: subfic   r3, r0, 0x578
//   0x8010f3c8: cmpw     r31, r3
//   0x8010f3cc: ble      0x8010f3d4
//   0x8010f3d0: mr       r31, r3
//   0x8010f3d4: cmpwi    r31, 0
//   0x8010f3d8: bgt      0x8010f3e4
//   0x8010f3dc: li       r3, 0
//   0x8010f3e0: b        0x8010f410
//

// TODO: Full decompilation requires Ghidra
