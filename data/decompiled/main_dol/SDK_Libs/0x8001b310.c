// Function at 0x8001b310
// Size: 268 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b310: stwu     r1, -0x20(r1)
//   0x8001b314: mflr     r0
//   0x8001b318: stw      r0, 0x24(r1)
//   0x8001b31c: stw      r31, 0x1c(r1)
//   0x8001b320: mr       r31, r5
//   0x8001b324: stw      r30, 0x18(r1)
//   0x8001b328: mr       r30, r3
//   0x8001b32c: stw      r29, 0x14(r1)
//   0x8001b330: stw      r28, 0x10(r1)
//   0x8001b334: mr       r28, r4
//   0x8001b338: lwz      r0, 0x10(r3)
//   0x8001b33c: cmplw    r5, r0
//   0x8001b340: ble      0x8001b34c
//   0x8001b344: li       r3, -1
//   0x8001b348: b        0x8001b3f8
//   0x8001b34c: addi     r3, r3, 0x18
//   0x8001b350: bl       0x8001b41c
//   0x8001b354: lwz      r4, 0(r30)
//   0x8001b358: lwz      r3, 8(r30)
//   0x8001b35c: lwz      r0, 0xc(r30)
//

// TODO: Full decompilation requires Ghidra
