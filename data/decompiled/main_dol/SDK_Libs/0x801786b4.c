// Function at 0x801786b4
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x801786b4: stwu     r1, -0x60(r1)
//   0x801786b8: mflr     r0
//   0x801786bc: stw      r0, 0x64(r1)
//   0x801786c0: stfd     f31, 0x50(r1)
//   0x801786c4: xscmpgtdp vs31, f1, f0
//   0x801786c8: stfd     f30, 0x40(r1)
//   0x801786cc: xsmaddmsp f30, f1, f0
//   0x801786d0: addi     r11, r1, 0x40
//   0x801786d4: bl       0x80020a38
//   0x801786d8: lis      r31, -0x7fdb
//   0x801786dc: mr       r29, r3
//   0x801786e0: addi     r31, r31, 0x2468
//   0x801786e4: bl       0x801c2dac
//   0x801786e8: clrlwi   r0, r3, 0x18
//   0x801786ec: lis      r26, 0x4330
//   0x801786f0: stw      r0, 0xc(r1)
//   0x801786f4: li       r3, 0x7f
//   0x801786f8: lfd      f3, 0x2f0(r31)
//   0x801786fc: stw      r26, 8(r1)
//   0x80178700: lfs      f1, 0x30c(r31)
//

// TODO: Full decompilation requires Ghidra
