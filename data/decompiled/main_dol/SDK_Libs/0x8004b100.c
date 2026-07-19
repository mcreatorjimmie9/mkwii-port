// Function at 0x8004b100
// Size: 544 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8004b100: stwu     r1, -0x20(r1)
//   0x8004b104: mflr     r0
//   0x8004b108: stw      r0, 0x24(r1)
//   0x8004b10c: lbz      r0, 0xb2(r5)
//   0x8004b110: stw      r31, 0x1c(r1)
//   0x8004b114: mr       r31, r6
//   0x8004b118: rlwinm   r0, r0, 0, 0x1a, 0x1c
//   0x8004b11c: stw      r30, 0x18(r1)
//   0x8004b120: cmpwi    r0, 8
//   0x8004b124: mr       r30, r3
//   0x8004b128: beq      0x8004b140
//   0x8004b12c: cmpwi    r0, 0x10
//   0x8004b130: beq      0x8004b180
//   0x8004b134: cmpwi    r0, 0x18
//   0x8004b138: beq      0x8004b1a4
//   0x8004b13c: b        0x8004b164
//   0x8004b140: lis      r5, -0x7fd5
//   0x8004b144: addi     r4, r6, 8
//   0x8004b148: addi     r5, r5, 0x37e0
//   0x8004b14c: bl       0x80085a10
//

// TODO: Full decompilation requires Ghidra
