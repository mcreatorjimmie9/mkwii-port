// Function at 0x800fb810
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800fb810: stwu     r1, -0x10(r1)
//   0x800fb814: mflr     r0
//   0x800fb818: cmpwi    r3, 0
//   0x800fb81c: stw      r0, 0x14(r1)
//   0x800fb820: beq      0x800fb830
//   0x800fb824: lwz      r0, 0(r3)
//   0x800fb828: cmpwi    r0, 0
//   0x800fb82c: bne      0x800fb838
//   0x800fb830: li       r3, 2
//   0x800fb834: b        0x800fb870
//   0x800fb838: cmpwi    r4, 0
//   0x800fb83c: blt      0x800fb848
//   0x800fb840: cmpwi    r4, 9
//   0x800fb844: blt      0x800fb85c
//   0x800fb848: lis      r4, -0x7fd9
//   0x800fb84c: addi     r4, r4, 0x6bd8
//   0x800fb850: bl       0x801092e0
//   0x800fb854: li       r3, 2
//   0x800fb858: b        0x800fb870
//   0x800fb85c: slwi     r4, r4, 3
//

// TODO: Full decompilation requires Ghidra
