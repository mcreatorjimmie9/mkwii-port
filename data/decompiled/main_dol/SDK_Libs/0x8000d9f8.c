// Function at 0x8000d9f8
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000d9f8: stwu     r1, -0x10(r1)
//   0x8000d9fc: mflr     r0
//   0x8000da00: stw      r0, 0x14(r1)
//   0x8000da04: stw      r31, 0xc(r1)
//   0x8000da08: mr       r31, r4
//   0x8000da0c: stw      r30, 8(r1)
//   0x8000da10: mr       r30, r3
//   0x8000da14: lwz      r5, 0x1c(r3)
//   0x8000da18: lwz      r0, 0x24(r3)
//   0x8000da1c: subf.    r0, r5, r0
//   0x8000da20: beq      0x8000da70
//   0x8000da24: lwz      r12, 0x40(r30)
//   0x8000da28: mr       r4, r5
//   0x8000da2c: stw      r0, 0x28(r3)
//   0x8000da30: addi     r5, r30, 0x28
//   0x8000da34: lwz      r3, 0(r3)
//   0x8000da38: lwz      r6, 0x48(r30)
//   0x8000da3c: mtctr    r12
//   0x8000da40: bctrl    
//   0x8000da44: cmpwi    r31, 0
//

// TODO: Full decompilation requires Ghidra
