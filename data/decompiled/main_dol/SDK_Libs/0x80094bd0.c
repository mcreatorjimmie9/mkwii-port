// Function at 0x80094bd0
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80094bd0: stwu     r1, -0x20(r1)
//   0x80094bd4: mflr     r0
//   0x80094bd8: stw      r0, 0x24(r1)
//   0x80094bdc: stw      r31, 0x1c(r1)
//   0x80094be0: stw      r30, 0x18(r1)
//   0x80094be4: mr       r30, r3
//   0x80094be8: addi     r3, r3, 0x40
//   0x80094bec: bl       0x8012b3dc
//   0x80094bf0: lwz      r4, 0x10(r30)
//   0x80094bf4: addi     r0, r3, 0x87
//   0x80094bf8: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80094bfc: cmpwi    r4, 0
//   0x80094c00: bne      0x80094c0c
//   0x80094c04: li       r0, 0
//   0x80094c08: b        0x80094c14
//   0x80094c0c: lwz      r0, 0x1c(r4)
//   0x80094c10: subf     r0, r4, r0
//   0x80094c14: cmplw    r3, r0
//   0x80094c18: ble      0x80094c24
//   0x80094c1c: li       r3, 0
//

// TODO: Full decompilation requires Ghidra
