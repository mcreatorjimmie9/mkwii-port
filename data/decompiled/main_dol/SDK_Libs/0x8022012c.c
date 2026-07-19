// Function at 0x8022012c
// Size: 1036 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x80 bytes
//
// Disassembly (first 20 instructions):
//   0x8022012c: stwu     r1, -0x80(r1)
//   0x80220130: mflr     r0
//   0x80220134: lis      r4, 0x4330
//   0x80220138: stw      r0, 0x84(r1)
//   0x8022013c: stw      r31, 0x7c(r1)
//   0x80220140: stw      r30, 0x78(r1)
//   0x80220144: mr       r30, r3
//   0x80220148: lhz      r0, 0x18(r3)
//   0x8022014c: stw      r4, 0x50(r1)
//   0x80220150: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x80220154: stw      r4, 0x58(r1)
//   0x80220158: beq      0x80220334
//   0x8022015c: lfs      f1, 0x60(r3)
//   0x80220160: lfs      f0, 0x64(r3)
//   0x80220164: lfs      f2, -0x6350(r2)
//   0x80220168: fmuls    f0, f1, f0
//   0x8022016c: fcmpu    cr0, f2, f0
//   0x80220170: beq      0x80220334
//   0x80220174: lwz      r31, -0x5d80(r13)
//   0x80220178: li       r4, 1
//

// TODO: Full decompilation requires Ghidra
