// Function at 0x80072bf0
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80072bf0: stwu     r1, -0x10(r1)
//   0x80072bf4: mflr     r0
//   0x80072bf8: cmpwi    r3, 0
//   0x80072bfc: stw      r0, 0x14(r1)
//   0x80072c00: stw      r31, 0xc(r1)
//   0x80072c04: mr       r31, r3
//   0x80072c08: beq      0x80072cf8
//   0x80072c0c: lbz      r0, 0x121(r3)
//   0x80072c10: lis      r4, -0x7fd9
//   0x80072c14: addi     r4, r4, -0x1140
//   0x80072c18: stw      r4, 0(r3)
//   0x80072c1c: cmpwi    r0, 1
//   0x80072c20: bne      0x80072c44
//   0x80072c24: lwz      r3, 0x11c(r3)
//   0x80072c28: cmpwi    r3, 0
//   0x80072c2c: beq      0x80072c44
//   0x80072c30: lwz      r12, 0(r3)
//   0x80072c34: li       r4, 1
//   0x80072c38: lwz      r12, 8(r12)
//   0x80072c3c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
