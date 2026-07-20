// Function at 0x80020684
// Size: 60 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80020684: stwu     r1, -0x10(r1)
//   0x80020688: mflr     r0
//   0x8002068c: stw      r0, 0x14(r1)
//   0x80020690: lwz      r0, -0x7fc0(r13)
//   0x80020694: cmpwi    r0, -2
//   0x80020698: bne      0x800206b0
//   0x8002069c: lis      r3, -0x8000
//   0x800206a0: mr       r4, r2
//   0x800206a4: addi     r3, r3, 0x7290
//   0x800206a8: bl       0x80020278
//   0x800206ac: stw      r3, -0x7fc0(r13)
//   0x800206b0: lwz      r0, 0x14(r1)
//   0x800206b4: mtlr     r0
//   0x800206b8: addi     r1, r1, 0x10
//   0x800206bc: blr      
//

// TODO: Full decompilation requires Ghidra
