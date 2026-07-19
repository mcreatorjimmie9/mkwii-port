// Function at 0x801962f8
// Size: 1484 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801962f8: stwu     r1, -0x20(r1)
//   0x801962fc: mflr     r0
//   0x80196300: stw      r0, 0x24(r1)
//   0x80196304: extsb.   r0, r4
//   0x80196308: stw      r31, 0x1c(r1)
//   0x8019630c: mr       r31, r4
//   0x80196310: stw      r30, 0x18(r1)
//   0x80196314: mr       r30, r3
//   0x80196318: bne      0x80196328
//   0x8019631c: li       r0, 0
//   0x80196320: stb      r0, 0x5e(r3)
//   0x80196324: b        0x801968ac
//   0x80196328: lfs      f4, 0xb0(r3)
//   0x8019632c: lfs      f1, 0x494(r3)
//   0x80196330: lfs      f2, 0xb4(r3)
//   0x80196334: fmuls    f3, f4, f1
//   0x80196338: lfs      f0, 0x498(r3)
//   0x8019633c: fmuls    f1, f2, f1
//   0x80196340: lbz      r0, 0x5e(r3)
//   0x80196344: fmuls    f2, f2, f0
//

// TODO: Full decompilation requires Ghidra
