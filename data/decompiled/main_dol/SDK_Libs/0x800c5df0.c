// Function at 0x800c5df0
// Size: 384 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x100 bytes
//
// Disassembly (first 20 instructions):
//   0x800c5df0: stwu     r1, -0x100(r1)
//   0x800c5df4: mflr     r0
//   0x800c5df8: stw      r0, 0x104(r1)
//   0x800c5dfc: addi     r11, r1, 0x100
//   0x800c5e00: bl       0x80020a34
//   0x800c5e04: mr       r25, r3
//   0x800c5e08: li       r27, 0
//   0x800c5e0c: bl       0x800bc360
//   0x800c5e10: mr       r29, r3
//   0x800c5e14: li       r26, 0
//   0x800c5e18: li       r31, 1
//   0x800c5e1c: b        0x800c5f40
//   0x800c5e20: lhz      r0, 2(r25)
//   0x800c5e24: clrlwi   r4, r26, 0x10
//   0x800c5e28: cmplw    r4, r0
//   0x800c5e2c: beq      0x800c5f3c
//   0x800c5e30: lwz      r3, 8(r25)
//   0x800c5e34: slw      r0, r31, r4
//   0x800c5e38: and.     r0, r3, r0
//   0x800c5e3c: bne      0x800c5f3c
//

// TODO: Full decompilation requires Ghidra
