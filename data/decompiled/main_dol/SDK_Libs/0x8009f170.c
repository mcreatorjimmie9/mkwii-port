// Function at 0x8009f170
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8009f170: stwu     r1, -0x10(r1)
//   0x8009f174: mflr     r0
//   0x8009f178: lwz      r5, 0x28(r3)
//   0x8009f17c: stw      r0, 0x14(r1)
//   0x8009f180: lbz      r3, 0x20(r5)
//   0x8009f184: lwz      r4, 0x24(r5)
//   0x8009f188: bl       0x800ad010
//   0x8009f18c: cmpwi    r3, 0
//   0x8009f190: bne      0x8009f19c
//   0x8009f194: li       r3, 0
//   0x8009f198: b        0x8009f1a4
//   0x8009f19c: lwz      r3, 0(r3)
//   0x8009f1a0: addi     r3, r3, -1
//   0x8009f1a4: lwz      r0, 0x14(r1)
//   0x8009f1a8: mtlr     r0
//   0x8009f1ac: addi     r1, r1, 0x10
//   0x8009f1b0: blr      
//

// TODO: Full decompilation requires Ghidra
