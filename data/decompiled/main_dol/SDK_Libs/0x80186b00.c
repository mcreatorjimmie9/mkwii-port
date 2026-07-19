// Function at 0x80186b00
// Size: 504 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80186b00: stwu     r1, -0x30(r1)
//   0x80186b04: mflr     r0
//   0x80186b08: stw      r0, 0x34(r1)
//   0x80186b0c: stw      r31, 0x2c(r1)
//   0x80186b10: mr       r31, r3
//   0x80186b14: stw      r30, 0x28(r1)
//   0x80186b18: stw      r29, 0x24(r1)
//   0x80186b1c: mr       r29, r4
//   0x80186b20: stw      r28, 0x20(r1)
//   0x80186b24: lwz      r5, 0x28(r3)
//   0x80186b28: lwz      r0, 0x50(r5)
//   0x80186b2c: lwz      r3, 0x4c(r5)
//   0x80186b30: srwi     r28, r0, 0x1c
//   0x80186b34: srwi     r0, r3, 0x1c
//   0x80186b38: cmplw    r28, r0
//   0x80186b3c: bge      0x80186c50
//   0x80186b40: rlwinm   r0, r3, 0xc, 0x1c, 0x1f
//   0x80186b44: cmplw    r28, r0
//   0x80186b48: blt      0x80186b50
//   0x80186b4c: b        0x80186c50
//

// TODO: Full decompilation requires Ghidra
