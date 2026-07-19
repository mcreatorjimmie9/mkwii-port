// Function at 0x8023e108
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8023e108: stwu     r1, -0x20(r1)
//   0x8023e10c: mflr     r0
//   0x8023e110: stw      r0, 0x24(r1)
//   0x8023e114: lwz      r6, -0x5cec(r13)
//   0x8023e118: stw      r3, -0x5cf0(r13)
//   0x8023e11c: cmpwi    r6, 0
//   0x8023e120: beq      0x8023e190
//   0x8023e124: mulli    r4, r3, 0xc
//   0x8023e128: lis      r3, 0x4330
//   0x8023e12c: lis      r5, -0x7fd6
//   0x8023e130: lhz      r0, 0x34(r6)
//   0x8023e134: stw      r3, 8(r1)
//   0x8023e138: addi     r5, r5, -0x480
//   0x8023e13c: lhzx     r4, r5, r4
//   0x8023e140: ori      r0, r0, 1
//   0x8023e144: stw      r4, 0xc(r1)
//   0x8023e148: lfd      f1, -0x5f80(r2)
//   0x8023e14c: lfd      f0, 8(r1)
//   0x8023e150: sth      r0, 0x34(r6)
//   0x8023e154: fsubs    f0, f0, f1
//

// TODO: Full decompilation requires Ghidra
