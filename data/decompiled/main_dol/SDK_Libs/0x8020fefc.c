// Function at 0x8020fefc
// Size: 136 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020fefc: stwu     r1, -0x10(r1)
//   0x8020ff00: mflr     r0
//   0x8020ff04: stw      r0, 0x14(r1)
//   0x8020ff08: stw      r31, 0xc(r1)
//   0x8020ff0c: mr       r31, r3
//   0x8020ff10: lwz      r3, -0x5ca8(r13)
//   0x8020ff14: lwz      r12, 0(r3)
//   0x8020ff18: lwz      r12, 0x14(r12)
//   0x8020ff1c: mtctr    r12
//   0x8020ff20: bctrl    
//   0x8020ff24: lwz      r5, 4(r3)
//   0x8020ff28: li       r4, 0
//   0x8020ff2c: lwz      r0, 0xc(r3)
//   0x8020ff30: cmplw    r5, r0
//   0x8020ff34: beq      0x8020ff48
//   0x8020ff38: lwz      r0, 0(r3)
//   0x8020ff3c: cmplw    r5, r0
//   0x8020ff40: beq      0x8020ff48
//   0x8020ff44: li       r4, 1
//   0x8020ff48: cmpwi    r4, 0
//

// TODO: Full decompilation requires Ghidra
