// Function at 0x80059830
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80059830: stwu     r1, -0x10(r1)
//   0x80059834: mflr     r0
//   0x80059838: stw      r0, 0x14(r1)
//   0x8005983c: slwi     r0, r5, 1
//   0x80059840: stw      r31, 0xc(r1)
//   0x80059844: mr       r31, r4
//   0x80059848: lwz      r6, 0x14(r3)
//   0x8005984c: lhzx     r5, r6, r0
//   0x80059850: rlwinm.  r0, r5, 0, 0x10, 0x11
//   0x80059854: beq      0x8005986c
//   0x80059858: li       r0, 0
//   0x8005985c: stb      r0, 0(r4)
//   0x80059860: mr       r3, r31
//   0x80059864: stb      r0, 1(r4)
//   0x80059868: b        0x80059894
//   0x8005986c: lwz      r6, 0x30(r3)
//   0x80059870: cmpwi    r6, 0
//   0x80059874: beq      0x80059884
//   0x80059878: mulli    r0, r5, 0x44
//   0x8005987c: add      r3, r6, r0
//

// TODO: Full decompilation requires Ghidra
