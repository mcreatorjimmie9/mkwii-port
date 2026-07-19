// Function at 0x8000a3b8
// Size: 72 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000a3b8: stwu     r1, -0x10(r1)
//   0x8000a3bc: mflr     r0
//   0x8000a3c0: stw      r0, 0x14(r1)
//   0x8000a3c4: slwi     r0, r4, 2
//   0x8000a3c8: add      r3, r3, r0
//   0x8000a3cc: lwz      r3, 0x1c(r3)
//   0x8000a3d0: cmpwi    r3, 0
//   0x8000a3d4: bne      0x8000a3e0
//   0x8000a3d8: li       r3, 1
//   0x8000a3dc: b        0x8000a3f0
//   0x8000a3e0: lwz      r12, 0x34(r3)
//   0x8000a3e4: mtctr    r12
//   0x8000a3e8: bctrl    
//   0x8000a3ec: li       r3, 0
//   0x8000a3f0: lwz      r0, 0x14(r1)
//   0x8000a3f4: mtlr     r0
//   0x8000a3f8: addi     r1, r1, 0x10
//   0x8000a3fc: blr      
//

// TODO: Full decompilation requires Ghidra
