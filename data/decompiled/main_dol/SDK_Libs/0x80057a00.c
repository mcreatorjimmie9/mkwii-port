// Function at 0x80057a00
// Size: 496 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80057a00: stwu     r1, -0x40(r1)
//   0x80057a04: mflr     r0
//   0x80057a08: stw      r0, 0x44(r1)
//   0x80057a0c: stfd     f31, 0x30(r1)
//   0x80057a10: xxsel    vs31, vs1, vs0, v0
//   0x80057a14: addi     r11, r1, 0x30
//   0x80057a18: bl       0x80020a38
//   0x80057a1c: lwz      r8, 0(r5)
//   0x80057a20: mr       r29, r3
//   0x80057a24: mr       r25, r4
//   0x80057a28: mr       r30, r5
//   0x80057a2c: cmpwi    r8, 0
//   0x80057a30: mr       r27, r7
//   0x80057a34: beq      0x80057a44
//   0x80057a38: lwz      r0, 0(r6)
//   0x80057a3c: cmpwi    r0, 0
//   0x80057a40: bne      0x80057a4c
//   0x80057a44: li       r3, 0
//   0x80057a48: b        0x80057bd0
//   0x80057a4c: lhz      r31, 0x22(r8)
//

// TODO: Full decompilation requires Ghidra
