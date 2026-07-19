// Function at 0x8005e890
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005e890: stwu     r1, -0x10(r1)
//   0x8005e894: mflr     r0
//   0x8005e898: stw      r0, 0x14(r1)
//   0x8005e89c: slwi     r0, r5, 1
//   0x8005e8a0: stw      r31, 0xc(r1)
//   0x8005e8a4: mr       r31, r4
//   0x8005e8a8: lwz      r6, 0x14(r3)
//   0x8005e8ac: lhzx     r5, r6, r0
//   0x8005e8b0: rlwinm.  r0, r5, 0, 0x10, 0x11
//   0x8005e8b4: beq      0x8005e8c8
//   0x8005e8b8: li       r0, 0
//   0x8005e8bc: stw      r0, 0(r4)
//   0x8005e8c0: mr       r3, r31
//   0x8005e8c4: b        0x8005e8f4
//   0x8005e8c8: lwz      r6, 0x34(r3)
//   0x8005e8cc: cmpwi    r6, 0
//   0x8005e8d0: beq      0x8005e8e0
//   0x8005e8d4: mulli    r0, r5, 0x218
//   0x8005e8d8: add      r3, r6, r0
//   0x8005e8dc: b        0x8005e8f4
//

// TODO: Full decompilation requires Ghidra
