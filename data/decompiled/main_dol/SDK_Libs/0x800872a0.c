// Function at 0x800872a0
// Size: 640 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800872a0: stwu     r1, -0x30(r1)
//   0x800872a4: mflr     r0
//   0x800872a8: stw      r0, 0x34(r1)
//   0x800872ac: addi     r11, r1, 0x30
//   0x800872b0: bl       0x80020a30
//   0x800872b4: mr       r28, r3
//   0x800872b8: mr       r29, r4
//   0x800872bc: mr       r30, r5
//   0x800872c0: mr       r23, r6
//   0x800872c4: addi     r3, r3, 4
//   0x800872c8: bl       0x800881a0
//   0x800872cc: cmpwi    r3, 0
//   0x800872d0: mr       r31, r3
//   0x800872d4: beq      0x800874fc
//   0x800872d8: lbz      r3, 8(r29)
//   0x800872dc: rlwinm.  r0, r3, 0, 0x1d, 0x1d
//   0x800872e0: bne      0x800874fc
//   0x800872e4: rlwinm.  r0, r3, 0, 0x1e, 0x1e
//   0x800872e8: beq      0x80087398
//   0x800872ec: lwz      r0, 0(r29)
//

// TODO: Full decompilation requires Ghidra
