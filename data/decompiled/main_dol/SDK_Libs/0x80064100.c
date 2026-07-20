// Function at 0x80064100
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80064100: stwu     r1, -0x10(r1)
//   0x80064104: mflr     r0
//   0x80064108: stw      r0, 0x14(r1)
//   0x8006410c: stw      r31, 0xc(r1)
//   0x80064110: lis      r31, -0x7fd5
//   0x80064114: lhz      r0, 0x7734(r31)
//   0x80064118: clrlwi.  r0, r0, 0x1f
//   0x8006411c: bne      0x80064148
//   0x80064120: addi     r3, r31, 0x7734
//   0x80064124: lhz      r0, 2(r3)
//   0x80064128: addi     r4, r3, 4
//   0x8006412c: mulli    r0, r0, 0x30
//   0x80064130: add      r3, r3, r0
//   0x80064134: addi     r3, r3, 0x34
//   0x80064138: bl       0x80199f28
//   0x8006413c: lhz      r0, 0x7734(r31)
//   0x80064140: ori      r0, r0, 1
//   0x80064144: sth      r0, 0x7734(r31)
//   0x80064148: lis      r3, -0x7fd5
//   0x8006414c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
