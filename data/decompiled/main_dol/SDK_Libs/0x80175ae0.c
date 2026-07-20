// Function at 0x80175ae0
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80175ae0: stwu     r1, -0x20(r1)
//   0x80175ae4: mflr     r0
//   0x80175ae8: stw      r0, 0x24(r1)
//   0x80175aec: stw      r31, 0x1c(r1)
//   0x80175af0: mr       r31, r3
//   0x80175af4: lbz      r0, 0x41(r3)
//   0x80175af8: cmpwi    r0, 0
//   0x80175afc: bne      0x80175b68
//   0x80175b00: lis      r5, -0x7fdb
//   0x80175b04: lfs      f1, 4(r3)
//   0x80175b08: lfs      f0, 0x2428(r5)
//   0x80175b0c: mr       r5, r4
//   0x80175b10: lwz      r3, 0x20(r3)
//   0x80175b14: fmuls    f0, f0, f1
//   0x80175b18: lwz      r4, 0(r31)
//   0x80175b1c: fctiwz   f0, f0
//   0x80175b20: stfd     f0, 8(r1)
//   0x80175b24: lwz      r6, 0xc(r1)
//   0x80175b28: extsb    r6, r6
//   0x80175b2c: bl       0x80176784
//

// TODO: Full decompilation requires Ghidra
