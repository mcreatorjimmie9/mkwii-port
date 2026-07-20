// Function at 0x80097b70
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80097b70: stwu     r1, -0x20(r1)
//   0x80097b74: mflr     r0
//   0x80097b78: stw      r0, 0x24(r1)
//   0x80097b7c: stw      r31, 0x1c(r1)
//   0x80097b80: stw      r30, 0x18(r1)
//   0x80097b84: mr       r30, r5
//   0x80097b88: stw      r29, 0x14(r1)
//   0x80097b8c: mr       r29, r4
//   0x80097b90: lwz      r7, 0x18(r3)
//   0x80097b94: lwz      r6, 0x170(r3)
//   0x80097b98: lwz      r4, 0x174(r3)
//   0x80097b9c: add      r0, r7, r5
//   0x80097ba0: add      r4, r6, r4
//   0x80097ba4: cmplw    r0, r4
//   0x80097ba8: ble      0x80097bb8
//   0x80097bac: subf     r4, r7, r4
//   0x80097bb0: addi     r0, r4, 0x1f
//   0x80097bb4: rlwinm   r30, r0, 0, 0, 0x1a
//   0x80097bb8: mr       r4, r29
//   0x80097bbc: mr       r5, r30
//

// TODO: Full decompilation requires Ghidra
