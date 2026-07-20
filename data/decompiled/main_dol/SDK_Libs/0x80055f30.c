// Function at 0x80055f30
// Size: 784 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80055f30: stwu     r1, -0x40(r1)
//   0x80055f34: mflr     r0
//   0x80055f38: stw      r0, 0x44(r1)
//   0x80055f3c: stfd     f31, 0x30(r1)
//   0x80055f40: xxsel    vs31, vs1, vs0, v0
//   0x80055f44: addi     r11, r1, 0x30
//   0x80055f48: bl       0x80020a30
//   0x80055f4c: lwz      r31, 0(r3)
//   0x80055f50: fmr      f31, f1
//   0x80055f54: mr       r27, r4
//   0x80055f58: lwz      r30, 0x18(r31)
//   0x80055f5c: clrlwi   r0, r30, 0x1e
//   0x80055f60: stw      r0, 0(r4)
//   0x80055f64: rlwinm.  r0, r30, 0, 0xe, 0xe
//   0x80055f68: rlwinm   r26, r30, 0xe, 0x1f, 0x1f
//   0x80055f6c: lwz      r0, 0x14(r31)
//   0x80055f70: rlwinm   r25, r30, 0xd, 0x1f, 0x1f
//   0x80055f74: stw      r0, 4(r4)
//   0x80055f78: rlwinm   r24, r30, 0xc, 0x1f, 0x1f
//   0x80055f7c: rlwinm   r23, r30, 0xb, 0x1f, 0x1f
//

// TODO: Full decompilation requires Ghidra
