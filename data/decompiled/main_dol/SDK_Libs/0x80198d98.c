// Function at 0x80198d98
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80198d98: stwu     r1, -0x30(r1)
//   0x80198d9c: mflr     r0
//   0x80198da0: stw      r0, 0x34(r1)
//   0x80198da4: addi     r11, r1, 0x30
//   0x80198da8: bl       0x80020a3c
//   0x80198dac: addi     r5, r5, 3
//   0x80198db0: lwz      r0, -0xc(r4)
//   0x80198db4: rlwinm   r29, r5, 0, 0, 0x1d
//   0x80198db8: addi     r30, r4, -0x10
//   0x80198dbc: cmplw    r29, r0
//   0x80198dc0: mr       r27, r3
//   0x80198dc4: mr       r28, r4
//   0x80198dc8: addi     r31, r3, 0x3c
//   0x80198dcc: bne      0x80198dd8
//   0x80198dd0: mr       r3, r29
//   0x80198dd4: b        0x80198f80
//   0x80198dd8: lwz      r0, 0x38(r3)
//   0x80198ddc: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80198de0: beq      0x80198dec
//   0x80198de4: addi     r3, r3, 0x20
//

// TODO: Full decompilation requires Ghidra
