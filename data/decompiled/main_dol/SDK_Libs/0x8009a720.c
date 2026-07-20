// Function at 0x8009a720
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8009a720: stwu     r1, -0x20(r1)
//   0x8009a724: mflr     r0
//   0x8009a728: stw      r0, 0x24(r1)
//   0x8009a72c: stw      r31, 0x1c(r1)
//   0x8009a730: stw      r30, 0x18(r1)
//   0x8009a734: stw      r29, 0x14(r1)
//   0x8009a738: mr       r29, r3
//   0x8009a73c: lbz      r0, 0x28c(r3)
//   0x8009a740: cmpwi    r0, 0
//   0x8009a744: beq      0x8009a754
//   0x8009a748: bl       0x800a8ed0
//   0x8009a74c: addi     r4, r29, 0x494
//   0x8009a750: bl       0x800a93d0
//   0x8009a754: lwz      r3, 0x290(r29)
//   0x8009a758: cmpwi    r3, 0
//   0x8009a75c: beq      0x8009a778
//   0x8009a760: lwz      r12, 0(r3)
//   0x8009a764: lwz      r12, 0x10(r12)
//   0x8009a768: mtctr    r12
//   0x8009a76c: bctrl    
//

// TODO: Full decompilation requires Ghidra
