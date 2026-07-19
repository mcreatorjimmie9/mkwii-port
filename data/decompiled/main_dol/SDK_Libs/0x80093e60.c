// Function at 0x80093e60
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80093e60: stwu     r1, -0x20(r1)
//   0x80093e64: mflr     r0
//   0x80093e68: stw      r0, 0x24(r1)
//   0x80093e6c: stw      r31, 0x1c(r1)
//   0x80093e70: stw      r30, 0x18(r1)
//   0x80093e74: mr       r30, r3
//   0x80093e78: addi     r3, r3, 0x44
//   0x80093e7c: bl       0x80128018
//   0x80093e80: lwz      r4, 0x10(r30)
//   0x80093e84: addi     r0, r3, 0x87
//   0x80093e88: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80093e8c: cmpwi    r4, 0
//   0x80093e90: bne      0x80093e9c
//   0x80093e94: li       r0, 0
//   0x80093e98: b        0x80093ea4
//   0x80093e9c: lwz      r0, 0x1c(r4)
//   0x80093ea0: subf     r0, r4, r0
//   0x80093ea4: cmplw    r3, r0
//   0x80093ea8: ble      0x80093eb4
//   0x80093eac: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
