// Function at 0x80186294
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80186294: stwu     r1, -0x20(r1)
//   0x80186298: mflr     r0
//   0x8018629c: stw      r0, 0x24(r1)
//   0x801862a0: stw      r31, 0x1c(r1)
//   0x801862a4: stw      r30, 0x18(r1)
//   0x801862a8: mr       r30, r3
//   0x801862ac: stw      r29, 0x14(r1)
//   0x801862b0: mr       r29, r4
//   0x801862b4: lwz      r12, 0(r3)
//   0x801862b8: lwz      r12, 0x20(r12)
//   0x801862bc: mtctr    r12
//   0x801862c0: bctrl    
//   0x801862c4: lbz      r0, 0xcf(r30)
//   0x801862c8: clrlwi.  r0, r0, 0x1f
//   0x801862cc: bne      0x801862d8
//   0x801862d0: clrlwi.  r0, r29, 0x1f
//   0x801862d4: bne      0x80186304
//   0x801862d8: lwzu     r31, 0x14(r30)
//   0x801862dc: b        0x801862fc
//   0x801862e0: lwz      r12, -4(r31)
//

// TODO: Full decompilation requires Ghidra
