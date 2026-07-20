// Function at 0x8005d090
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d090: stwu     r1, -0x10(r1)
//   0x8005d094: mflr     r0
//   0x8005d098: stw      r0, 0x14(r1)
//   0x8005d09c: slwi     r0, r5, 1
//   0x8005d0a0: stw      r31, 0xc(r1)
//   0x8005d0a4: mr       r31, r4
//   0x8005d0a8: lwz      r6, 0x14(r3)
//   0x8005d0ac: lhzx     r5, r6, r0
//   0x8005d0b0: rlwinm.  r0, r5, 0, 0x10, 0x11
//   0x8005d0b4: beq      0x8005d0c8
//   0x8005d0b8: li       r0, 0
//   0x8005d0bc: stw      r0, 0(r4)
//   0x8005d0c0: mr       r3, r31
//   0x8005d0c4: b        0x8005d0f0
//   0x8005d0c8: lwz      r6, 0x30(r3)
//   0x8005d0cc: cmpwi    r6, 0
//   0x8005d0d0: beq      0x8005d0e0
//   0x8005d0d4: mulli    r0, r5, 0x4c
//   0x8005d0d8: add      r3, r6, r0
//   0x8005d0dc: b        0x8005d0f0
//

// TODO: Full decompilation requires Ghidra
