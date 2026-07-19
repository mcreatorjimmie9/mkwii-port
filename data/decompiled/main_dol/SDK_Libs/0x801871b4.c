// Function at 0x801871b4
// Size: 452 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801871b4: stwu     r1, -0x30(r1)
//   0x801871b8: mflr     r0
//   0x801871bc: cmpwi    r3, 0
//   0x801871c0: stw      r0, 0x34(r1)
//   0x801871c4: stw      r31, 0x2c(r1)
//   0x801871c8: mr       r31, r4
//   0x801871cc: stw      r30, 0x28(r1)
//   0x801871d0: mr       r30, r3
//   0x801871d4: beq      0x80187328
//   0x801871d8: lbz      r0, 0xfd(r3)
//   0x801871dc: lis      r4, -0x7fd8
//   0x801871e0: addi     r4, r4, 0x7bc4
//   0x801871e4: rlwinm.  r0, r0, 0x19, 0x1f, 0x1f
//   0x801871e8: stw      r4, 0(r3)
//   0x801871ec: beq      0x80187224
//   0x801871f0: lwz      r3, 0xe0(r3)
//   0x801871f4: li       r4, -1
//   0x801871f8: lwz      r12, 0(r3)
//   0x801871fc: lwz      r12, 8(r12)
//   0x80187200: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
