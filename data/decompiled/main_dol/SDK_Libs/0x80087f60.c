// Function at 0x80087f60
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80087f60: stwu     r1, -0x20(r1)
//   0x80087f64: mflr     r0
//   0x80087f68: stw      r0, 0x24(r1)
//   0x80087f6c: addi     r11, r1, 0x20
//   0x80087f70: bl       0x80020a3c
//   0x80087f74: cmpwi    r3, 0
//   0x80087f78: mr       r26, r4
//   0x80087f7c: beq      0x8008803c
//   0x80087f80: lwz      r4, 0(r3)
//   0x80087f84: addis    r0, r4, -0x5241
//   0x80087f88: cmplwi   r0, 0x5344
//   0x80087f8c: beq      0x80087f98
//   0x80087f90: li       r0, 0
//   0x80087f94: b        0x80087fc4
//   0x80087f98: lhz      r5, 6(r3)
//   0x80087f9c: cmplwi   r5, 0x100
//   0x80087fa0: bge      0x80087fac
//   0x80087fa4: li       r0, 0
//   0x80087fa8: b        0x80087fc4
//   0x80087fac: subfic   r0, r5, 0x100
//

// TODO: Full decompilation requires Ghidra
