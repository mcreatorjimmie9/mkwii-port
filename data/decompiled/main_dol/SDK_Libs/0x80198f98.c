// Function at 0x80198f98
// Size: 204 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80198f98: stwu     r1, -0x20(r1)
//   0x80198f9c: mflr     r0
//   0x80198fa0: cmpwi    r4, 0
//   0x80198fa4: stw      r0, 0x24(r1)
//   0x80198fa8: stw      r31, 0x1c(r1)
//   0x80198fac: stw      r30, 0x18(r1)
//   0x80198fb0: stw      r29, 0x14(r1)
//   0x80198fb4: mr       r29, r3
//   0x80198fb8: beq      0x80199048
//   0x80198fbc: lwz      r0, 0x38(r3)
//   0x80198fc0: addi     r31, r3, 0x3c
//   0x80198fc4: addi     r30, r4, -0x10
//   0x80198fc8: rlwinm.  r0, r0, 0, 0x1d, 0x1d
//   0x80198fcc: beq      0x80198fd8
//   0x80198fd0: addi     r3, r3, 0x20
//   0x80198fd4: bl       0x801a7e44
//   0x80198fd8: lhz      r0, 2(r30)
//   0x80198fdc: rlwinm   r0, r0, 0x18, 0x19, 0x1f
//   0x80198fe0: subf     r0, r0, r30
//   0x80198fe4: stw      r0, 8(r1)
//

// TODO: Full decompilation requires Ghidra
