// Function at 0x8006a720
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006a720: stwu     r1, -0x10(r1)
//   0x8006a724: mflr     r0
//   0x8006a728: cmpwi    r4, 0
//   0x8006a72c: stw      r0, 0x14(r1)
//   0x8006a730: stw      r31, 0xc(r1)
//   0x8006a734: stw      r30, 8(r1)
//   0x8006a738: mr       r30, r4
//   0x8006a73c: beq      0x8006a7e4
//   0x8006a740: lwz      r31, 0(r3)
//   0x8006a744: cmpwi    r31, 0
//   0x8006a748: beq      0x8006a7e4
//   0x8006a74c: lwz      r0, 0x70(r31)
//   0x8006a750: rlwinm.  r0, r0, 0, 0x18, 0x18
//   0x8006a754: bne      0x8006a7d8
//   0x8006a758: lwz      r3, 0x70(r31)
//   0x8006a75c: rlwinm.  r0, r3, 0, 0x19, 0x19
//   0x8006a760: beq      0x8006a788
//   0x8006a764: lfs      f1, 0xbc(r31)
//   0x8006a768: addi     r3, r31, 0x30
//   0x8006a76c: lfs      f2, 0xc0(r31)
//

// TODO: Full decompilation requires Ghidra
