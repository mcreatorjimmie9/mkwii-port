// Function at 0x80213e3c
// Size: 172 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80213e3c: stwu     r1, -0x10(r1)
//   0x80213e40: mflr     r0
//   0x80213e44: stw      r0, 0x14(r1)
//   0x80213e48: lwz      r0, 0xc(r3)
//   0x80213e4c: cmpwi    r0, 0
//   0x80213e50: beq      0x80213ea0
//   0x80213e54: addic.   r0, r0, -1
//   0x80213e58: stw      r0, 0xc(r3)
//   0x80213e5c: beq      0x80213e74
//   0x80213e60: lfs      f1, 0x14(r3)
//   0x80213e64: lfs      f0, 0x18(r3)
//   0x80213e68: fsubs    f0, f1, f0
//   0x80213e6c: stfs     f0, 0x14(r3)
//   0x80213e70: b        0x80213e7c
//   0x80213e74: lfs      f0, 0x10(r3)
//   0x80213e78: stfs     f0, 0x14(r3)
//   0x80213e7c: lwz      r12, 0(r3)
//   0x80213e80: cmpwi    r12, 0
//   0x80213e84: beq      0x80213e98
//   0x80213e88: lfs      f1, 0x14(r3)
//

// TODO: Full decompilation requires Ghidra
