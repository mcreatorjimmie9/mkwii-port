// Function at 0x8006d800
// Size: 752 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006d800: stwu     r1, -0x10(r1)
//   0x8006d804: mflr     r0
//   0x8006d808: cmpwi    r3, 0
//   0x8006d80c: stw      r0, 0x14(r1)
//   0x8006d810: stw      r31, 0xc(r1)
//   0x8006d814: mr       r31, r3
//   0x8006d818: beq      0x8006d868
//   0x8006d81c: lwz      r5, 0xd4(r3)
//   0x8006d820: lis      r4, -0x7fd9
//   0x8006d824: addi     r4, r4, -0x11f4
//   0x8006d828: stw      r4, 0(r3)
//   0x8006d82c: cmpwi    cr1, r5, 0
//   0x8006d830: beq      cr1, 0x8006d85c
//   0x8006d834: lbz      r0, 0xd9(r3)
//   0x8006d838: cmpwi    r0, 1
//   0x8006d83c: bne      0x8006d85c
//   0x8006d840: beq      cr1, 0x8006d85c
//   0x8006d844: lwz      r12, 0(r5)
//   0x8006d848: mr       r3, r5
//   0x8006d84c: li       r4, 1
//

// TODO: Full decompilation requires Ghidra
