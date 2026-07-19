// Function at 0x800a8bd0
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a8bd0: stwu     r1, -0x20(r1)
//   0x800a8bd4: mflr     r0
//   0x800a8bd8: stw      r0, 0x24(r1)
//   0x800a8bdc: stw      r31, 0x1c(r1)
//   0x800a8be0: stw      r30, 0x18(r1)
//   0x800a8be4: stw      r29, 0x14(r1)
//   0x800a8be8: stw      r28, 0x10(r1)
//   0x800a8bec: mr       r28, r3
//   0x800a8bf0: lbz      r4, 0x8c(r3)
//   0x800a8bf4: lwz      r0, 0x48(r3)
//   0x800a8bf8: add      r4, r4, r0
//   0x800a8bfc: cmpwi    r4, 0x7f
//   0x800a8c00: ble      0x800a8c0c
//   0x800a8c04: li       r29, 0x7f
//   0x800a8c08: b        0x800a8c14
//   0x800a8c0c: srawi    r0, r4, 0x1f
//   0x800a8c10: andc     r29, r4, r0
//   0x800a8c14: lwz      r30, 0xe38(r3)
//   0x800a8c18: addi     r31, r30, 0x10
//   0x800a8c1c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
