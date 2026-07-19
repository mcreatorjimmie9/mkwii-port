// Function at 0x8006b230
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8006b230: stwu     r1, -0x20(r1)
//   0x8006b234: mflr     r0
//   0x8006b238: lfs      f1, 8(r4)
//   0x8006b23c: lfs      f0, -0x72a8(r2)
//   0x8006b240: addi     r4, r1, 8
//   0x8006b244: stw      r0, 0x24(r1)
//   0x8006b248: fmuls    f1, f0, f1
//   0x8006b24c: stw      r31, 0x1c(r1)
//   0x8006b250: mr       r31, r3
//   0x8006b254: addi     r3, r1, 0xc
//   0x8006b258: bl       0x80085140
//   0x8006b25c: lfs      f4, -0x72a4(r2)
//   0x8006b260: lfs      f1, 8(r1)
//   0x8006b264: lfs      f3, 0xc(r1)
//   0x8006b268: fmuls    f0, f4, f1
//   0x8006b26c: lfs      f2, -0x72b0(r2)
//   0x8006b270: fmuls    f3, f4, f3
//   0x8006b274: stfs     f1, 0(r31)
//   0x8006b278: fsubs    f4, f4, f0
//   0x8006b27c: lfs      f0, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
