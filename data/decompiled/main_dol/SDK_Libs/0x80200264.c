// Function at 0x80200264
// Size: 456 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80200264: stwu     r1, -0x20(r1)
//   0x80200268: mflr     r0
//   0x8020026c: cmpwi    r3, 0
//   0x80200270: stw      r0, 0x24(r1)
//   0x80200274: stw      r31, 0x1c(r1)
//   0x80200278: mr       r31, r3
//   0x8020027c: stw      r30, 0x18(r1)
//   0x80200280: bne      0x8020028c
//   0x80200284: li       r30, 0
//   0x80200288: b        0x80200294
//   0x8020028c: lwz      r5, 8(r3)
//   0x80200290: lwz      r30, 0x264(r5)
//   0x80200294: lwz      r3, 8(r3)
//   0x80200298: addi     r5, r1, 8
//   0x8020029c: addi     r3, r3, 4
//   0x802002a0: bl       0x801fc4ec
//   0x802002a4: lbz      r4, 0x20(r30)
//   0x802002a8: li       r0, -1
//   0x802002ac: lbz      r3, 0x21(r30)
//   0x802002b0: lwz      r5, 8(r1)
//

// TODO: Full decompilation requires Ghidra
