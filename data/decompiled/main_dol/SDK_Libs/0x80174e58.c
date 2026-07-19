// Function at 0x80174e58
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80174e58: stwu     r1, -0x20(r1)
//   0x80174e5c: mflr     r0
//   0x80174e60: stw      r0, 0x24(r1)
//   0x80174e64: stw      r31, 0x1c(r1)
//   0x80174e68: li       r31, 0
//   0x80174e6c: stw      r30, 0x18(r1)
//   0x80174e70: mr       r30, r4
//   0x80174e74: stw      r29, 0x14(r1)
//   0x80174e78: mr       r29, r3
//   0x80174e7c: b        0x80174ea4
//   0x80174e80: addi     r3, r29, 0x18
//   0x80174e84: clrlwi   r4, r31, 0x10
//   0x80174e88: bl       0x8018cb3c
//   0x80174e8c: lwz      r0, 0(r3)
//   0x80174e90: cmplw    r0, r30
//   0x80174e94: bne      0x80174ea0
//   0x80174e98: lwz      r3, 4(r3)
//   0x80174e9c: b        0x80174eb4
//   0x80174ea0: addi     r31, r31, 1
//   0x80174ea4: lhz      r0, 0x10(r29)
//

// TODO: Full decompilation requires Ghidra
