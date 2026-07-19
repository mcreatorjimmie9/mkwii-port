// Function at 0x8002fc20
// Size: 1424 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8002fc20: stwu     r1, -0x20(r1)
//   0x8002fc24: mflr     r0
//   0x8002fc28: stw      r0, 0x24(r1)
//   0x8002fc2c: stfd     f31, 0x10(r1)
//   0x8002fc30: xscmpeqdp vs31, f1, f0
//   0x8002fc34: lbz      r0, 0x2a(r4)
//   0x8002fc38: lwz      r7, 0x28(r1)
//   0x8002fc3c: cmpwi    r0, 0
//   0x8002fc40: beq      0x8002fc58
//   0x8002fc44: cmpwi    r0, 1
//   0x8002fc48: beq      0x8002fe14
//   0x8002fc4c: cmpwi    r0, 2
//   0x8002fc50: beq      0x8002ffd0
//   0x8002fc54: b        0x8003018c
//   0x8002fc58: lfs      f1, 4(r6)
//   0x8002fc5c: lfs      f0, -0x7928(r2)
//   0x8002fc60: fabs     f1, f1
//

// TODO: Full decompilation requires Ghidra
