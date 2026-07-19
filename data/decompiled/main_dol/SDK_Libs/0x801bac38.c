// Function at 0x801bac38
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801bac38: stwu     r1, -0x10(r1)
//   0x801bac3c: mflr     r0
//   0x801bac40: stw      r0, 0x14(r1)
//   0x801bac44: stw      r31, 0xc(r1)
//   0x801bac48: bl       0x801a650c
//   0x801bac4c: lwz      r31, -0x6058(r13)
//   0x801bac50: cmplwi   r31, 8
//   0x801bac54: bgt      0x801bac7c
//   0x801bac58: lis      r4, -0x7fd6
//   0x801bac5c: slwi     r0, r31, 2
//   0x801bac60: addi     r4, r4, -0x6718
//   0x801bac64: lwzx     r4, r4, r0
//   0x801bac68: mtctr    r4
//   0x801bac6c: bctr     
//   0x801bac70: li       r31, 0
//   0x801bac74: b        0x801bac7c
//   0x801bac78: li       r31, 1
//   0x801bac7c: bl       0x801a6534
//   0x801bac80: mr       r3, r31
//   0x801bac84: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
