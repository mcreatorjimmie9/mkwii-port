// Function at 0x800b0560
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b0560: stwu     r1, -0x10(r1)
//   0x800b0564: mflr     r0
//   0x800b0568: stw      r0, 0x14(r1)
//   0x800b056c: stw      r31, 0xc(r1)
//   0x800b0570: mr       r31, r3
//   0x800b0574: stw      r4, 0x1c(r3)
//   0x800b0578: lis      r4, -0x7ff5
//   0x800b057c: addi     r4, r4, 0
//   0x800b0580: stw      r5, 0x20(r3)
//   0x800b0584: addi     r3, r3, 0x28
//   0x800b0588: bl       0x80162be8
//   0x800b058c: cmpwi    r3, 0
//   0x800b0590: beq      0x800b059c
//   0x800b0594: li       r0, 1
//   0x800b0598: stb      r0, 0x24(r31)
//   0x800b059c: neg      r0, r3
//   0x800b05a0: lwz      r31, 0xc(r1)
//   0x800b05a4: or       r0, r0, r3
//   0x800b05a8: srwi     r3, r0, 0x1f
//   0x800b05ac: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
