// Function at 0x80186cf8
// Size: 252 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80186cf8: stwu     r1, -0x20(r1)
//   0x80186cfc: mflr     r0
//   0x80186d00: stw      r0, 0x24(r1)
//   0x80186d04: stw      r31, 0x1c(r1)
//   0x80186d08: stw      r30, 0x18(r1)
//   0x80186d0c: stw      r29, 0x14(r1)
//   0x80186d10: stw      r28, 0x10(r1)
//   0x80186d14: mr       r28, r3
//   0x80186d18: lwz      r0, 0x28(r3)
//   0x80186d1c: cmpwi    r0, 0
//   0x80186d20: beq      0x80186db4
//   0x80186d24: lwz      r12, 0(r3)
//   0x80186d28: lwz      r12, 0x60(r12)
//   0x80186d2c: mtctr    r12
//   0x80186d30: bctrl    
//   0x80186d34: lbz      r29, 0xce(r28)
//   0x80186d38: addi     r3, r28, 0xd4
//   0x80186d3c: mr       r4, r29
//   0x80186d40: bl       0x80180998
//   0x80186d44: mr       r4, r3
//

// TODO: Full decompilation requires Ghidra
