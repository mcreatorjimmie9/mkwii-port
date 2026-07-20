// Function at 0x8007af20
// Size: 608 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8007af20: stwu     r1, -0x30(r1)
//   0x8007af24: mflr     r0
//   0x8007af28: stw      r0, 0x34(r1)
//   0x8007af2c: stw      r31, 0x2c(r1)
//   0x8007af30: stw      r30, 0x28(r1)
//   0x8007af34: mr       r30, r3
//   0x8007af38: stw      r29, 0x24(r1)
//   0x8007af3c: stw      r28, 0x20(r1)
//   0x8007af40: mr       r28, r4
//   0x8007af44: lwz      r5, 0x28(r3)
//   0x8007af48: lwz      r0, 0x3c(r5)
//   0x8007af4c: lwz      r3, 0x38(r5)
//   0x8007af50: srwi     r31, r0, 0x1c
//   0x8007af54: srwi     r0, r3, 0x1c
//   0x8007af58: cmplw    r31, r0
//   0x8007af5c: bge      0x8007b0b4
//   0x8007af60: rlwinm   r0, r3, 0xc, 0x1c, 0x1f
//   0x8007af64: cmplw    r31, r0
//   0x8007af68: blt      0x8007af70
//   0x8007af6c: b        0x8007b0b4
//

// TODO: Full decompilation requires Ghidra
