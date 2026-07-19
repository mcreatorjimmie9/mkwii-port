// Function at 0x8005c740
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8005c740: stwu     r1, -0x40(r1)
//   0x8005c744: mflr     r0
//   0x8005c748: stw      r0, 0x44(r1)
//   0x8005c74c: stfd     f31, 0x30(r1)
//   0x8005c750: xxsel    vs31, vs1, vs0, v0
//   0x8005c754: addi     r11, r1, 0x30
//   0x8005c758: bl       0x80020a38
//   0x8005c75c: lwz      r8, 0(r5)
//   0x8005c760: mr       r29, r3
//   0x8005c764: mr       r25, r4
//   0x8005c768: mr       r30, r5
//   0x8005c76c: cmpwi    r8, 0
//   0x8005c770: mr       r27, r7
//   0x8005c774: beq      0x8005c784
//   0x8005c778: lwz      r0, 0(r6)
//   0x8005c77c: cmpwi    r0, 0
//   0x8005c780: bne      0x8005c78c
//   0x8005c784: li       r3, 0
//   0x8005c788: b        0x8005c910
//   0x8005c78c: lhz      r31, 0x22(r8)
//

// TODO: Full decompilation requires Ghidra
