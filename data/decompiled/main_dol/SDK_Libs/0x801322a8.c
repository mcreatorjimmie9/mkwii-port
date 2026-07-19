// Function at 0x801322a8
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801322a8: stwu     r1, -0x10(r1)
//   0x801322ac: mflr     r0
//   0x801322b0: stw      r0, 0x14(r1)
//   0x801322b4: stw      r31, 0xc(r1)
//   0x801322b8: stw      r30, 8(r1)
//   0x801322bc: mr       r30, r3
//   0x801322c0: lwz      r4, 0xc(r3)
//   0x801322c4: bl       0x8012fd34
//   0x801322c8: b        0x8013231c
//   0x801322cc: mr       r3, r30
//   0x801322d0: mr       r4, r31
//   0x801322d4: bl       0x8012feac
//   0x801322d8: lwz      r12, 8(r31)
//   0x801322dc: cmpwi    r12, 0
//   0x801322e0: beq      0x801322f4
//   0x801322e4: mr       r3, r31
//   0x801322e8: mtctr    r12
//   0x801322ec: bctrl    
//   0x801322f0: b        0x8013231c
//   0x801322f4: lhz      r0, 0x14(r31)
//

// TODO: Full decompilation requires Ghidra
