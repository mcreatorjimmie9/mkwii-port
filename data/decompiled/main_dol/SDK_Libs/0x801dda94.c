// Function at 0x801dda94
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801dda94: stwu     r1, -0x10(r1)
//   0x801dda98: mflr     r0
//   0x801dda9c: stw      r0, 0x14(r1)
//   0x801ddaa0: lwz      r6, 4(r3)
//   0x801ddaa4: rlwinm.  r0, r6, 0, 0x17, 0x17
//   0x801ddaa8: beq      0x801ddab4
//   0x801ddaac: rlwinm.  r0, r6, 0, 0x16, 0x16
//   0x801ddab0: beq      0x801ddabc
//   0x801ddab4: li       r3, -7
//   0x801ddab8: b        0x801ddaf4
//   0x801ddabc: cmpwi    r4, 0
//   0x801ddac0: beq      0x801ddad0
//   0x801ddac4: lbz      r0, 0(r4)
//   0x801ddac8: extsb.   r0, r0
//   0x801ddacc: bne      0x801ddad8
//   0x801ddad0: li       r3, -5
//   0x801ddad4: b        0x801ddaf4
//   0x801ddad8: cmplwi   r5, 0x3f4
//   0x801ddadc: blt      0x801ddae8
//   0x801ddae0: li       r3, -8
//

// TODO: Full decompilation requires Ghidra
