// Function at 0x8001b208
// Size: 264 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b208: stwu     r1, -0x20(r1)
//   0x8001b20c: mflr     r0
//   0x8001b210: stw      r0, 0x24(r1)
//   0x8001b214: stw      r31, 0x1c(r1)
//   0x8001b218: mr       r31, r5
//   0x8001b21c: stw      r30, 0x18(r1)
//   0x8001b220: mr       r30, r3
//   0x8001b224: stw      r29, 0x14(r1)
//   0x8001b228: stw      r28, 0x10(r1)
//   0x8001b22c: mr       r28, r4
//   0x8001b230: lwz      r0, 0x14(r3)
//   0x8001b234: cmplw    r5, r0
//   0x8001b238: ble      0x8001b244
//   0x8001b23c: li       r3, -1
//   0x8001b240: b        0x8001b2f0
//   0x8001b244: addi     r3, r3, 0x18
//   0x8001b248: bl       0x8001b41c
//   0x8001b24c: lwz      r3, 4(r30)
//   0x8001b250: lwz      r4, 8(r30)
//   0x8001b254: lwz      r0, 0xc(r30)
//

// TODO: Full decompilation requires Ghidra
