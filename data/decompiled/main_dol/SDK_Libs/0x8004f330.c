// Function at 0x8004f330
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004f330: stwu     r1, -0x10(r1)
//   0x8004f334: mflr     r0
//   0x8004f338: lwz      r4, 0(r3)
//   0x8004f33c: stw      r0, 0x14(r1)
//   0x8004f340: lwz      r0, 4(r4)
//   0x8004f344: cmpwi    r0, 0
//   0x8004f348: beq      0x8004f354
//   0x8004f34c: add      r0, r4, r0
//   0x8004f350: b        0x8004f358
//   0x8004f354: li       r0, 0
//   0x8004f358: stw      r0, 8(r1)
//   0x8004f35c: addi     r3, r1, 8
//   0x8004f360: lha      r4, 0x48(r4)
//   0x8004f364: bl       0x8004e3f0
//   0x8004f368: lwz      r0, 0x14(r1)
//   0x8004f36c: mtlr     r0
//   0x8004f370: addi     r1, r1, 0x10
//   0x8004f374: blr      
//

// TODO: Full decompilation requires Ghidra
