// Function at 0x80185838
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x80185838: stwu     r1, -0x60(r1)
//   0x8018583c: mflr     r0
//   0x80185840: stw      r0, 0x64(r1)
//   0x80185844: stfd     f31, 0x50(r1)
//   0x80185848: xscmpgtdp vs31, f1, f0
//   0x8018584c: stw      r31, 0x4c(r1)
//   0x80185850: mr       r31, r3
//   0x80185854: stw      r30, 0x48(r1)
//   0x80185858: stw      r29, 0x44(r1)
//   0x8018585c: lwz      r0, 0x50(r4)
//   0x80185860: srwi     r0, r0, 0x1c
//   0x80185864: cmplw    r5, r0
//   0x80185868: blt      0x80185880
//   0x8018586c: lis      r4, -0x7fdb
//   0x80185870: lfs      f0, 0x2828(r4)
//   0x80185874: stfs     f0, 0(r3)
//   0x80185878: stfs     f0, 4(r3)
//   0x8018587c: b        0x80185924
//   0x80185880: rlwinm   r0, r5, 5, 0x13, 0x1a
//   0x80185884: lwz      r6, 0x58(r4)
//

// TODO: Full decompilation requires Ghidra
