// Function at 0x80055910
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80055910: stwu     r1, -0x20(r1)
//   0x80055914: mflr     r0
//   0x80055918: lwz      r5, 0(r3)
//   0x8005591c: stw      r0, 0x24(r1)
//   0x80055920: stw      r31, 0x1c(r1)
//   0x80055924: mr       r31, r4
//   0x80055928: lwz      r0, 4(r5)
//   0x8005592c: lwz      r6, 0x14(r5)
//   0x80055930: cmpwi    r0, 0
//   0x80055934: srwi     r7, r6, 0x1f
//   0x80055938: beq      0x80055944
//   0x8005593c: add      r3, r5, r0
//   0x80055940: b        0x80055948
//   0x80055944: li       r3, 0
//   0x80055948: lfs      f0, -0x7440(r2)
//

// TODO: Full decompilation requires Ghidra
