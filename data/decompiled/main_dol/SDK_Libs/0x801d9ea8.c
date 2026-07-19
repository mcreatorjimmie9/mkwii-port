// Function at 0x801d9ea8
// Size: 620 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801d9ea8: stwu     r1, -0x10(r1)
//   0x801d9eac: mflr     r0
//   0x801d9eb0: stw      r0, 0x14(r1)
//   0x801d9eb4: lwz      r3, -0x5f60(r13)
//   0x801d9eb8: cmpwi    r3, 0
//   0x801d9ebc: beq      0x801d9ef0
//   0x801d9ec0: li       r4, 0
//   0x801d9ec4: b        0x801d9ed0
//   0x801d9ec8: lwz      r3, 0x20(r3)
//   0x801d9ecc: addi     r4, r4, 1
//   0x801d9ed0: cmpwi    r3, 0
//   0x801d9ed4: bne      0x801d9ec8
//   0x801d9ed8: cmpwi    r4, 0
//   0x801d9edc: beq      0x801d9ef0
//   0x801d9ee0: lis      r3, -0x7fd6
//   0x801d9ee4: addi     r3, r3, -0x2b10
//   0x801d9ee8: crclr    cr1eq
//   0x801d9eec: bl       0x80010b84
//   0x801d9ef0: li       r0, 0
//   0x801d9ef4: stw      r0, -0x5f60(r13)
//

// TODO: Full decompilation requires Ghidra
