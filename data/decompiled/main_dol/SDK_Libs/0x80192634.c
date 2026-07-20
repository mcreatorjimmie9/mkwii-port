// Function at 0x80192634
// Size: 740 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80192634: stwu     r1, -0x30(r1)
//   0x80192638: mflr     r0
//   0x8019263c: lis      r8, -0x7fdb
//   0x80192640: stw      r0, 0x34(r1)
//   0x80192644: addi     r8, r8, 0x2938
//   0x80192648: stw      r31, 0x2c(r1)
//   0x8019264c: mr       r31, r4
//   0x80192650: lwz      r5, 0xc(r4)
//   0x80192654: lbz      r6, 0(r5)
//   0x80192658: cmplwi   r6, 0x80
//   0x8019265c: blt      0x8019266c
//   0x80192660: addi     r0, r5, 1
//   0x80192664: stb      r6, 0x10(r4)
//   0x80192668: stw      r0, 0xc(r4)
//   0x8019266c: lbz      r0, 0x10(r4)
//   0x80192670: cmpwi    r0, 0xf7
//   0x80192674: beq      0x80192694
//   0x80192678: bge      0x80192688
//   0x8019267c: cmpwi    r0, 0xf0
//   0x80192680: beq      0x80192694
//

// TODO: Full decompilation requires Ghidra
