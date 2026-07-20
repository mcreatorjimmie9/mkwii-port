// Function at 0x80068bb0
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x80068bb0: stwu     r1, -0x50(r1)
//   0x80068bb4: mflr     r0
//   0x80068bb8: stw      r0, 0x54(r1)
//   0x80068bbc: addi     r11, r1, 0x50
//   0x80068bc0: bl       0x80020a24
//   0x80068bc4: rlwinm.  r0, r6, 0, 0x1c, 0x1c
//   0x80068bc8: mr       r20, r3
//   0x80068bcc: mr       r21, r5
//   0x80068bd0: li       r31, 0
//   0x80068bd4: li       r22, 1
//   0x80068bd8: beq      0x80068be0
//   0x80068bdc: ori      r22, r22, 8
//   0x80068be0: rlwinm.  r0, r6, 0, 0x1d, 0x1d
//   0x80068be4: beq      0x80068bec
//   0x80068be8: ori      r22, r22, 0x10
//   0x80068bec: mr       r25, r4
//   0x80068bf0: ori      r24, r22, 0x10
//   0x80068bf4: addi     r28, r1, 8
//   0x80068bf8: addi     r27, r1, 0xc
//   0x80068bfc: addi     r26, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
