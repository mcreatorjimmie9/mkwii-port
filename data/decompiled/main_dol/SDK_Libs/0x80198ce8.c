// Function at 0x80198ce8
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80198ce8: stwu     r1, -0x20(r1)
//   0x80198cec: mflr     r0
//   0x80198cf0: cmpwi    r4, 0
//   0x80198cf4: stw      r0, 0x24(r1)
//   0x80198cf8: stw      r31, 0x1c(r1)
//   0x80198cfc: mr       r31, r5
//   0x80198d00: stw      r30, 0x18(r1)
//   0x80198d04: mr       r30, r4
//   0x80198d08: stw      r29, 0x14(r1)
//   0x80198d0c: mr       r29, r3
//   0x80198d10: bne      0x80198d18
//   0x80198d14: li       r30, 1
//   0x80198d18: lwz      r0, 0x38(r3)
//   0x80198d1c: addi     r4, r30, 3
//   0x80198d20: rlwinm   r30, r4, 0, 0, 0x1d
//   0x80198d24: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80198d28: beq      0x80198d34
//   0x80198d2c: addi     r3, r3, 0x20
//   0x80198d30: bl       0x801a7e44
//   0x80198d34: cmpwi    r31, 0
//

// TODO: Full decompilation requires Ghidra
