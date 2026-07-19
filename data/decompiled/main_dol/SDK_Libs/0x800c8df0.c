// Function at 0x800c8df0
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x70 bytes
//
// Disassembly (first 20 instructions):
//   0x800c8df0: stwu     r1, -0x70(r1)
//   0x800c8df4: mflr     r0
//   0x800c8df8: stw      r0, 0x74(r1)
//   0x800c8dfc: stw      r31, 0x6c(r1)
//   0x800c8e00: li       r31, 1
//   0x800c8e04: stw      r30, 0x68(r1)
//   0x800c8e08: stw      r29, 0x64(r1)
//   0x800c8e0c: mr       r29, r3
//   0x800c8e10: stw      r28, 0x60(r1)
//   0x800c8e14: b        0x800c8ee4
//   0x800c8e18: lhz      r0, 0x10(r29)
//   0x800c8e1c: lwz      r5, 8(r29)
//   0x800c8e20: slwi     r0, r0, 6
//   0x800c8e24: lwzx     r30, r5, r0
//   0x800c8e28: cmpwi    r30, 0
//   0x800c8e2c: beq      0x800c8ee0
//   0x800c8e30: lhz      r3, 0xe(r29)
//   0x800c8e34: addi     r0, r30, -1
//   0x800c8e38: clrlwi   r4, r0, 0x10
//   0x800c8e3c: slwi     r0, r3, 6
//

// TODO: Full decompilation requires Ghidra
