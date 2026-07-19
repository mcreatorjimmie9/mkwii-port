// Function at 0x80056300
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80056300: stwu     r1, -0x10(r1)
//   0x80056304: mflr     r0
//   0x80056308: lwz      r3, 0(r3)
//   0x8005630c: stw      r0, 0x14(r1)
//   0x80056310: lwz      r0, 0x10(r3)
//   0x80056314: cmpwi    r0, 0
//   0x80056318: beq      0x80056324
//   0x8005631c: add      r0, r3, r0
//   0x80056320: b        0x80056328
//   0x80056324: li       r0, 0
//   0x80056328: lis      r3, -0x7fd9
//   0x8005632c: stw      r0, 0xc(r1)
//   0x80056330: addi     r3, r3, -0x1ac0
//   0x80056334: addi     r4, r1, 8
//   0x80056338: stw      r3, 8(r1)
//   0x8005633c: addi     r3, r1, 0xc
//   0x80056340: bl       0x8004c030
//   0x80056344: cmpwi    r3, 0
//   0x80056348: beq      0x8005636c
//   0x8005634c: neg      r0, r3
//

// TODO: Full decompilation requires Ghidra
