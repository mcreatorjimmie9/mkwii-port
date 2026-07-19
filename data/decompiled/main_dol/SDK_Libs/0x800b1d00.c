// Function at 0x800b1d00
// Size: 592 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800b1d00: stwu     r1, -0x30(r1)
//   0x800b1d04: mflr     r0
//   0x800b1d08: stw      r0, 0x34(r1)
//   0x800b1d0c: stw      r31, 0x2c(r1)
//   0x800b1d10: mr       r31, r5
//   0x800b1d14: stw      r30, 0x28(r1)
//   0x800b1d18: mr       r30, r4
//   0x800b1d1c: mr       r4, r31
//   0x800b1d20: stw      r29, 0x24(r1)
//   0x800b1d24: mr       r29, r3
//   0x800b1d28: lwz      r12, 0(r3)
//   0x800b1d2c: lwz      r12, 0x54(r12)
//   0x800b1d30: mtctr    r12
//   0x800b1d34: bctrl    
//   0x800b1d38: cmpwi    r3, 0
//   0x800b1d3c: beq      0x800b1d44
//   0x800b1d40: b        0x800b1d48
//   0x800b1d44: lhz      r31, 0x18(r29)
//   0x800b1d48: rlwinm.  r3, r31, 0x18, 0x18, 0x1f
//   0x800b1d4c: bne      0x800b1d60
//

// TODO: Full decompilation requires Ghidra
