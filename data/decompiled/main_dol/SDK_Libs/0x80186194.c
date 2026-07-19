// Function at 0x80186194
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80186194: stwu     r1, -0x20(r1)
//   0x80186198: mflr     r0
//   0x8018619c: stw      r0, 0x24(r1)
//   0x801861a0: stw      r31, 0x1c(r1)
//   0x801861a4: stw      r30, 0x18(r1)
//   0x801861a8: mr       r30, r3
//   0x801861ac: stw      r29, 0x14(r1)
//   0x801861b0: mr       r29, r4
//   0x801861b4: lbz      r0, 0xcf(r3)
//   0x801861b8: clrlwi.  r0, r0, 0x1f
//   0x801861bc: beq      0x801861fc
//   0x801861c0: lwz      r12, 0(r3)
//   0x801861c4: lwz      r12, 0x18(r12)
//   0x801861c8: mtctr    r12
//   0x801861cc: bctrl    
//   0x801861d0: lwzu     r31, 0x14(r30)
//   0x801861d4: b        0x801861f4
//   0x801861d8: lwz      r12, -4(r31)
//   0x801861dc: addi     r3, r31, -4
//   0x801861e0: mr       r4, r29
//

// TODO: Full decompilation requires Ghidra
