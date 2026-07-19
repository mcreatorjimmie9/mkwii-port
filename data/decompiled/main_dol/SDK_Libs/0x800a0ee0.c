// Function at 0x800a0ee0
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a0ee0: stwu     r1, -0x20(r1)
//   0x800a0ee4: mflr     r0
//   0x800a0ee8: stw      r0, 0x24(r1)
//   0x800a0eec: stw      r31, 0x1c(r1)
//   0x800a0ef0: stw      r30, 0x18(r1)
//   0x800a0ef4: mr       r30, r6
//   0x800a0ef8: stw      r29, 0x14(r1)
//   0x800a0efc: mr       r29, r5
//   0x800a0f00: stw      r28, 0x10(r1)
//   0x800a0f04: mr       r28, r4
//   0x800a0f08: lwz      r31, 0(r4)
//   0x800a0f0c: addi     r0, r31, 0x23
//   0x800a0f10: rlwinm   r3, r0, 0, 0, 0x1d
//   0x800a0f14: subf.    r0, r5, r3
//   0x800a0f18: ble      0x800a0f24
//   0x800a0f1c: li       r3, 0
//   0x800a0f20: b        0x800a0f8c
//   0x800a0f24: cmpwi    r31, 0
//   0x800a0f28: stw      r3, 0(r4)
//   0x800a0f2c: beq      0x800a0f3c
//

// TODO: Full decompilation requires Ghidra
