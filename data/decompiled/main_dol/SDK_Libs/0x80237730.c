// Function at 0x80237730
// Size: 372 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80237730: stwu     r1, -0x60(r1)
//   0x80237734: mflr     r0
//   0x80237738: stw      r0, 0x64(r1)
//   0x8023773c: stfd     f31, 0x50(r1)
//   0x80237740: xscmpgtdp vs31, f1, f0
//   0x80237744: stfd     f30, 0x40(r1)
//   0x80237748: xsmaddmsp f30, f1, f0
//   0x8023774c: fmr      f30, f1
//   0x80237750: fmr      f31, f2
//   0x80237754: stw      r31, 0x3c(r1)
//   0x80237758: mr       r31, r3
//   0x8023775c: lwz      r12, 0x24(r3)
//   0x80237760: lwz      r12, 0x10(r12)
//   0x80237764: mtctr    r12
//   0x80237768: bctrl    
//   0x8023776c: mr       r3, r31
//   0x80237770: bl       0x80234820
//   0x80237774: li       r3, 0
//   0x80237778: li       r4, 0xe
//   0x8023777c: li       r5, 1
//

// TODO: Full decompilation requires Ghidra
