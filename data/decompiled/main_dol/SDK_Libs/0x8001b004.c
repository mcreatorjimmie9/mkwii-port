// Function at 0x8001b004
// Size: 516 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b004: stwu     r1, -0x20(r1)
//   0x8001b008: mflr     r0
//   0x8001b00c: lis      r3, 0x3fe9
//   0x8001b010: lfd      f2, -0x79e0(r2)
//   0x8001b014: stfd     f1, 8(r1)
//   0x8001b018: stw      r0, 0x24(r1)
//   0x8001b01c: addi     r0, r3, 0x21fb
//   0x8001b020: lwz      r3, 8(r1)
//   0x8001b024: clrlwi   r3, r3, 1
//   0x8001b028: cmpw     r3, r0
//   0x8001b02c: bgt      0x8001b03c
//   0x8001b030: li       r3, 1
//   0x8001b034: bl       0x8001a430
//   0x8001b038: b        0x8001b06c
//   0x8001b03c: lis      r0, 0x7ff0
//   0x8001b040: cmpw     r3, r0
//   0x8001b044: blt      0x8001b050
//   0x8001b048: fsub     f1, f1, f1
//   0x8001b04c: b        0x8001b06c
//   0x8001b050: addi     r3, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
