// Function at 0x80244274
// Size: 1260 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x90 bytes
//
// Disassembly (first 20 instructions):
//   0x80244274: stwu     r1, -0x90(r1)
//   0x80244278: mflr     r0
//   0x8024427c: stw      r0, 0x94(r1)
//   0x80244280: stfd     f31, 0x80(r1)
//   0x80244284: xsmsubasp f31, f1, f0
//   0x80244288: stfd     f30, 0x70(r1)
//   0x8024428c: xxsel    vs30, vs1, vs0, v1
//   0x80244290: addi     r11, r1, 0x70
//   0x80244294: bl       0x80020a2c
//   0x80244298: lis      r0, 0x4330
//   0x8024429c: mr       r22, r3
//   0x802442a0: lis      r30, -0x7fc8
//   0x802442a4: stw      r0, 0x10(r1)
//   0x802442a8: lwz      r3, -0x5d80(r13)
//   0x802442ac: mr       r24, r4
//   0x802442b0: stw      r0, 0x18(r1)
//   0x802442b4: mr       r25, r5
//   0x802442b8: addi     r30, r30, 0x7f8
//   0x802442bc: bl       0x8023d854
//   0x802442c0: mulli    r28, r22, 0xc
//

// TODO: Full decompilation requires Ghidra
