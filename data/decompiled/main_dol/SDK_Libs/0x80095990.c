// Function at 0x80095990
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80095990: stwu     r1, -0x10(r1)
//   0x80095994: mflr     r0
//   0x80095998: stw      r0, 0x14(r1)
//   0x8009599c: stw      r31, 0xc(r1)
//   0x800959a0: mr       r31, r3
//   0x800959a4: bl       0x801a650c
//   0x800959a8: lwz      r4, 0(r31)
//   0x800959ac: li       r31, 0
//   0x800959b0: b        0x800959c0
//   0x800959b4: nop      
//   0x800959b8: lwz      r4, 0(r4)
//   0x800959bc: addi     r31, r31, 1
//   0x800959c0: cmpwi    r4, 0
//   0x800959c4: bne      0x800959b8
//   0x800959c8: bl       0x801a6534
//   0x800959cc: mr       r3, r31
//   0x800959d0: lwz      r31, 0xc(r1)
//   0x800959d4: lwz      r0, 0x14(r1)
//   0x800959d8: mtlr     r0
//   0x800959dc: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
