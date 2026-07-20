// Function at 0x80242fb4
// Size: 96 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80242fb4: stwu     r1, -0x10(r1)
//   0x80242fb8: mflr     r0
//   0x80242fbc: stw      r0, 0x14(r1)
//   0x80242fc0: addi     r0, r3, -1
//   0x80242fc4: cmplwi   r0, 1
//   0x80242fc8: bgt      0x80242fd4
//   0x80242fcc: lfs      f2, -0x5ec8(r2)
//   0x80242fd0: b        0x80242fd8
//   0x80242fd4: lfs      f2, -0x5ec4(r2)
//   0x80242fd8: lis      r3, -0x8000
//   0x80242fdc: lis      r0, 0x4330
//   0x80242fe0: lwz      r3, 0xf8(r3)
//   0x80242fe4: stw      r0, 8(r1)
//   0x80242fe8: srwi     r0, r3, 2
//   0x80242fec: lfd      f1, -0x5ed0(r2)
//   0x80242ff0: stw      r0, 0xc(r1)
//   0x80242ff4: lfd      f0, 8(r1)
//   0x80242ff8: fsubs    f0, f0, f1
//   0x80242ffc: fdivs    f1, f0, f2
//   0x80243000: bl       0x80020918
//

// TODO: Full decompilation requires Ghidra
