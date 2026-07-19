// Function at 0x800a5980
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800a5980: stwu     r1, -0x20(r1)
//   0x800a5984: mflr     r0
//   0x800a5988: cmpwi    r3, 0
//   0x800a598c: stw      r0, 0x24(r1)
//   0x800a5990: stw      r31, 0x1c(r1)
//   0x800a5994: stw      r30, 0x18(r1)
//   0x800a5998: mr       r30, r4
//   0x800a599c: stw      r29, 0x14(r1)
//   0x800a59a0: mr       r29, r3
//   0x800a59a4: beq      0x800a5a60
//   0x800a59a8: lis      r12, -0x7fd9
//   0x800a59ac: addi     r12, r12, 0x748
//   0x800a59b0: stw      r12, 0(r3)
//   0x800a59b4: addi     r0, r12, 0x24
//   0x800a59b8: stw      r0, 0xd8(r3)
//   0x800a59bc: lwz      r12, 0x10(r12)
//   0x800a59c0: mtctr    r12
//   0x800a59c4: bctrl    
//   0x800a59c8: bl       0x800a4490
//   0x800a59cc: addi     r3, r3, 0x354
//

// TODO: Full decompilation requires Ghidra
