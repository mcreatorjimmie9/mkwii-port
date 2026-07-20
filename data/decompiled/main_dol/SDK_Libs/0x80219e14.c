// Function at 0x80219e14
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80219e14: stwu     r1, -0x20(r1)
//   0x80219e18: mflr     r0
//   0x80219e1c: stw      r0, 0x24(r1)
//   0x80219e20: stmw     r27, 0xc(r1)
//   0x80219e24: mr       r28, r3
//   0x80219e28: lbz      r31, 8(r3)
//   0x80219e2c: bl       0x801bab04
//   0x80219e30: lwz      r0, 0xc(r28)
//   0x80219e34: addi     r29, r31, -1
//   0x80219e38: subf     r30, r0, r3
//   0x80219e3c: cmplw    r30, r29
//   0x80219e40: blt      0x80219ec8
//   0x80219e44: lbz      r0, 9(r28)
//   0x80219e48: clrlwi.  r0, r0, 0x1f
//   0x80219e4c: beq      0x80219eb0
//   0x80219e50: lwz      r3, -0x5ca8(r13)
//   0x80219e54: lwz      r12, 0(r3)
//   0x80219e58: lwz      r12, 8(r12)
//   0x80219e5c: mtctr    r12
//   0x80219e60: bctrl    
//

// TODO: Full decompilation requires Ghidra
