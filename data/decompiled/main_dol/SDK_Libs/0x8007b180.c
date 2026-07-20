// Function at 0x8007b180
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8007b180: stwu     r1, -0x20(r1)
//   0x8007b184: mflr     r0
//   0x8007b188: stw      r0, 0x24(r1)
//   0x8007b18c: stw      r31, 0x1c(r1)
//   0x8007b190: stw      r30, 0x18(r1)
//   0x8007b194: stw      r29, 0x14(r1)
//   0x8007b198: stw      r28, 0x10(r1)
//   0x8007b19c: mr       r28, r3
//   0x8007b1a0: lwz      r0, 0x28(r3)
//   0x8007b1a4: cmpwi    r0, 0
//   0x8007b1a8: beq      0x8007b23c
//   0x8007b1ac: lwz      r12, 0(r3)
//   0x8007b1b0: lwz      r12, 0x70(r12)
//   0x8007b1b4: mtctr    r12
//   0x8007b1b8: bctrl    
//   0x8007b1bc: lbz      r29, 0xb9(r28)
//   0x8007b1c0: addi     r3, r28, 0xd8
//   0x8007b1c4: mr       r4, r29
//   0x8007b1c8: bl       0x80084570
//   0x8007b1cc: mr       r4, r3
//

// TODO: Full decompilation requires Ghidra
