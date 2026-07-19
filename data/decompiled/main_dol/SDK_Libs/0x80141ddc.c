// Function at 0x80141ddc
// Size: 284 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80141ddc: stwu     r1, -0x10(r1)
//   0x80141de0: mflr     r0
//   0x80141de4: li       r6, 0
//   0x80141de8: stw      r0, 0x14(r1)
//   0x80141dec: stw      r31, 0xc(r1)
//   0x80141df0: stw      r30, 8(r1)
//   0x80141df4: mr       r30, r3
//   0x80141df8: lbz      r0, 0x76(r3)
//   0x80141dfc: rlwinm.  r0, r0, 0, 0x1c, 0x1c
//   0x80141e00: bne      0x80141e10
//   0x80141e04: lhz      r0, 0x18(r3)
//   0x80141e08: cmplwi   r0, 0xffff
//   0x80141e0c: bne      0x80141ea8
//   0x80141e10: lis      r4, -0x7fcd
//   0x80141e14: addi     r4, r4, 0x1ef8
//   0x80141e18: lwz      r0, 0x190c(r4)
//   0x80141e1c: cmpwi    r0, 0
//   0x80141e20: bne      0x80141e2c
//   0x80141e24: li       r3, 4
//   0x80141e28: b        0x80141ee0
//

// TODO: Full decompilation requires Ghidra
