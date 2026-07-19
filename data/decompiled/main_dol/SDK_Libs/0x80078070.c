// Function at 0x80078070
// Size: 2064 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x5b0 bytes
//
// Disassembly (first 20 instructions):
//   0x80078070: stwu     r1, -0x5b0(r1)
//   0x80078074: mflr     r0
//   0x80078078: stw      r0, 0x5b4(r1)
//   0x8007807c: stfd     f31, 0x5a0(r1)
//   0x80078080: xststdcdp cr7, f0, 0x61
//   0x80078084: addi     r11, r1, 0x5a0
//   0x80078088: bl       0x80020a0c
//   0x8007808c: mr       r26, r4
//   0x80078090: mr       r27, r5
//   0x80078094: mr       r28, r6
//   0x80078098: mr       r29, r7
//   0x8007809c: bl       0x8004e4b0
//   0x800780a0: addi     r14, r1, 0x368
//   0x800780a4: addi     r24, r1, 0x558
//   0x800780a8: subf     r4, r14, r24
//   0x800780ac: mr       r23, r3
//   0x800780b0: addi     r5, r4, 0xf
//   0x800780b4: lfs      f31, -0x7210(r2)
//   0x800780b8: srawi    r0, r5, 4
//   0x800780bc: rlwinm   r20, r4, 0, 0, 0
//

// TODO: Full decompilation requires Ghidra
