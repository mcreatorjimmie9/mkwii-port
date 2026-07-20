// Function at 0x8004cdf0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004cdf0: stwu     r1, -0x10(r1)
//   0x8004cdf4: mflr     r0
//   0x8004cdf8: lwz      r4, 0(r3)
//   0x8004cdfc: lis      r3, -0x7fd9
//   0x8004ce00: stw      r0, 0x14(r1)
//   0x8004ce04: addi     r3, r3, -0x1ba0
//   0x8004ce08: addi     r0, r4, 0x18
//   0x8004ce0c: addi     r4, r1, 8
//   0x8004ce10: stw      r3, 8(r1)
//   0x8004ce14: addi     r3, r1, 0xc
//   0x8004ce18: stw      r0, 0xc(r1)
//   0x8004ce1c: bl       0x8004c030
//   0x8004ce20: cmpwi    r3, 0
//   0x8004ce24: beq      0x8004ce48
//   0x8004ce28: neg      r0, r3
//   0x8004ce2c: or       r0, r0, r3
//   0x8004ce30: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004ce34: beq      0x8004ce40
//   0x8004ce38: lwz      r3, 4(r3)
//   0x8004ce3c: b        0x8004ce4c
//

// TODO: Full decompilation requires Ghidra
