// Function at 0x8023cae0
// Size: 228 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023cae0: stwu     r1, -0x10(r1)
//   0x8023cae4: mflr     r0
//   0x8023cae8: stw      r0, 0x14(r1)
//   0x8023caec: stw      r31, 0xc(r1)
//   0x8023caf0: mr       r31, r3
//   0x8023caf4: lwz      r0, 4(r3)
//   0x8023caf8: cmpwi    r0, 0
//   0x8023cafc: beq      0x8023cb08
//   0x8023cb00: mr       r3, r0
//   0x8023cb04: bl       0x8022a3fc
//   0x8023cb08: lwz      r3, 8(r31)
//   0x8023cb0c: cmpwi    r3, 0
//   0x8023cb10: beq      0x8023cb20
//   0x8023cb14: lbz      r0, 4(r3)
//   0x8023cb18: rlwinm   r0, r0, 0, 0x1e, 0x1c
//   0x8023cb1c: stb      r0, 4(r3)
//   0x8023cb20: lhz      r0, 0x12(r31)
//   0x8023cb24: ori      r0, r0, 1
//   0x8023cb28: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x8023cb2c: sth      r0, 0x12(r31)
//

// TODO: Full decompilation requires Ghidra
