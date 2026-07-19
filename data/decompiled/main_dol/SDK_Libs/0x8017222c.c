// Function at 0x8017222c
// Size: 556 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8017222c: stwu     r1, -0x40(r1)
//   0x80172230: mflr     r0
//   0x80172234: stw      r0, 0x44(r1)
//   0x80172238: stfd     f31, 0x30(r1)
//   0x8017223c: xxsel    vs31, vs1, vs0, v0
//   0x80172240: li       r8, 0
//   0x80172244: li       r9, 0
//   0x80172248: stw      r31, 0x2c(r1)
//   0x8017224c: clrlwi   r31, r3, 0x1d
//   0x80172250: stw      r30, 0x28(r1)
//   0x80172254: rlwinm.  r30, r3, 0x1d, 0x1f, 0x1f
//   0x80172258: stw      r29, 0x24(r1)
//   0x8017225c: mr       r29, r4
//   0x80172260: stw      r28, 0x20(r1)
//   0x80172264: beq      0x801722b0
//   0x80172268: fcmpu    cr0, f4, f3
//   0x8017226c: beq      0x80172278
//   0x80172270: fcmpu    cr0, f2, f1
//   0x80172274: bne      0x80172288
//   0x80172278: lfs      f0, -0x6828(r2)
//

// TODO: Full decompilation requires Ghidra
