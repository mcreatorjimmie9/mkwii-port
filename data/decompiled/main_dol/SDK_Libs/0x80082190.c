// Function at 0x80082190
// Size: 192 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80082190: stwu     r1, -0x10(r1)
//   0x80082194: mflr     r0
//   0x80082198: stw      r0, 0x14(r1)
//   0x8008219c: stw      r31, 0xc(r1)
//   0x800821a0: mr       r31, r5
//   0x800821a4: lwz      r12, 0(r3)
//   0x800821a8: lwz      r12, 0x24(r12)
//   0x800821ac: mtctr    r12
//   0x800821b0: bctrl    
//   0x800821b4: cmpwi    r3, 0
//   0x800821b8: beq      0x800821c8
//   0x800821bc: cntlzw   r0, r31
//   0x800821c0: srwi     r0, r0, 5
//   0x800821c4: stb      r0, 0xe(r3)
//   0x800821c8: lwz      r0, 0x14(r1)
//   0x800821cc: lwz      r31, 0xc(r1)
//   0x800821d0: mtlr     r0
//   0x800821d4: addi     r1, r1, 0x10
//   0x800821d8: blr      
//

// TODO: Full decompilation requires Ghidra
