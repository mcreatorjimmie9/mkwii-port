// Function at 0x800cc744
// Size: 1180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800cc744: stwu     r1, -0x30(r1)
//   0x800cc748: mflr     r0
//   0x800cc74c: stw      r0, 0x34(r1)
//   0x800cc750: addi     r11, r1, 0x30
//   0x800cc754: bl       0x80020a34
//   0x800cc758: lis      r7, -0x5555
//   0x800cc75c: cmpwi    r5, 0
//   0x800cc760: addi     r30, r7, -0x5555
//   0x800cc764: mr       r25, r5
//   0x800cc768: mulhwu   r7, r30, r4
//   0x800cc76c: srwi     r0, r7, 1
//   0x800cc770: rlwinm   r7, r7, 1, 0, 0x1d
//   0x800cc774: mulli    r0, r0, 3
//   0x800cc778: subf     r5, r0, r4
//   0x800cc77c: neg      r0, r5
//   0x800cc780: or       r0, r0, r5
//   0x800cc784: srawi    r0, r0, 0x1f
//   0x800cc788: rlwinm   r0, r0, 0, 0x1d, 0x1d
//   0x800cc78c: add      r0, r7, r0
//   0x800cc790: bne      0x800cc79c
//

// TODO: Full decompilation requires Ghidra
