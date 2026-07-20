// Function at 0x800f587c
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800f587c: stwu     r1, -0x10(r1)
//   0x800f5880: mflr     r0
//   0x800f5884: lis      r3, -0x7fd1
//   0x800f5888: addi     r3, r3, -0x1f40
//   0x800f588c: stw      r0, 0x14(r1)
//   0x800f5890: lwz      r0, 0xc(r3)
//   0x800f5894: cmpwi    r0, 0
//   0x800f5898: bne      0x800f58a4
//   0x800f589c: li       r3, 1
//   0x800f58a0: b        0x800f58b4
//   0x800f58a4: lwz      r3, 8(r3)
//   0x800f58a8: bl       0x800ef408
//   0x800f58ac: cntlzw   r0, r3
//   0x800f58b0: srwi     r3, r0, 5
//   0x800f58b4: lwz      r0, 0x14(r1)
//   0x800f58b8: mtlr     r0
//   0x800f58bc: addi     r1, r1, 0x10
//   0x800f58c0: blr      
//   0x800f58c4: lis      r3, -0x7fd1
//   0x800f58c8: addi     r3, r3, -0x1f40
//

// TODO: Full decompilation requires Ghidra
