// Function at 0x80092ea0
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80092ea0: stwu     r1, -0x20(r1)
//   0x80092ea4: mflr     r0
//   0x80092ea8: stw      r0, 0x24(r1)
//   0x80092eac: stw      r31, 0x1c(r1)
//   0x80092eb0: mr       r31, r3
//   0x80092eb4: lbz      r0, 0xc(r3)
//   0x80092eb8: cmpwi    r0, 0
//   0x80092ebc: beq      0x80092f08
//   0x80092ec0: li       r0, 0
//   0x80092ec4: stb      r0, 0xc(r3)
//   0x80092ec8: addi     r3, r3, 0x14
//   0x80092ecc: addi     r4, r1, 0xc
//   0x80092ed0: addi     r5, r1, 8
//   0x80092ed4: bl       0x8008d140
//   0x80092ed8: lwz      r0, 0x10(r31)
//   0x80092edc: cmpwi    r0, 1
//   0x80092ee0: bne      0x80092ef0
//   0x80092ee4: addi     r3, r31, 0xd0
//   0x80092ee8: bl       0x8012dd4c
//   0x80092eec: b        0x80092ef8
//

// TODO: Full decompilation requires Ghidra
