// Function at 0x8005a580
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a580: stwu     r1, -0x20(r1)
//   0x8005a584: mflr     r0
//   0x8005a588: stw      r0, 0x24(r1)
//   0x8005a58c: stw      r31, 0x1c(r1)
//   0x8005a590: li       r31, 0
//   0x8005a594: stw      r30, 0x18(r1)
//   0x8005a598: li       r30, 0
//   0x8005a59c: stw      r29, 0x14(r1)
//   0x8005a5a0: mr       r29, r3
//   0x8005a5a4: b        0x8005a5d0
//   0x8005a5a8: lwz      r3, 0x1c(r29)
//   0x8005a5ac: lwzx     r3, r3, r31
//   0x8005a5b0: cmpwi    r3, 0
//   0x8005a5b4: beq      0x8005a5c8
//   0x8005a5b8: lwz      r12, 0(r3)
//   0x8005a5bc: lwz      r12, 0x34(r12)
//   0x8005a5c0: mtctr    r12
//   0x8005a5c4: bctrl    
//   0x8005a5c8: addi     r31, r31, 4
//   0x8005a5cc: addi     r30, r30, 1
//

// TODO: Full decompilation requires Ghidra
