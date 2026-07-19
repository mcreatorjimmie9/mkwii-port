// Function at 0x80027c80
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x1020 bytes
//
// Disassembly (first 20 instructions):
//   0x80027c80: stwu     r1, -0x1020(r1)
//   0x80027c84: mflr     r0
//   0x80027c88: stw      r0, 0x1024(r1)
//   0x80027c8c: addi     r11, r1, 0x1020
//   0x80027c90: bl       0x80020a40
//   0x80027c94: lwz      r0, 0xf0(r3)
//   0x80027c98: mr       r27, r3
//   0x80027c9c: cmpwi    r0, 0
//   0x80027ca0: beq      0x80027cac
//   0x80027ca4: li       r0, 0
//   0x80027ca8: stw      r0, 0xf0(r3)
//   0x80027cac: lwz      r0, 0x20(r3)
//   0x80027cb0: clrlwi.  r0, r0, 0x1f
//   0x80027cb4: beq      0x80027cc0
//   0x80027cb8: mr       r3, r27
//   0x80027cbc: bl       0x80027be0
//   0x80027cc0: mr       r3, r27
//   0x80027cc4: bl       0x80027e20
//   0x80027cc8: lwz      r0, 0x20(r27)
//   0x80027ccc: clrlwi.  r0, r0, 0x1f
//

// TODO: Full decompilation requires Ghidra
