// Function at 0x8004caf0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004caf0: stwu     r1, -0x10(r1)
//   0x8004caf4: mflr     r0
//   0x8004caf8: lwz      r4, 0(r3)
//   0x8004cafc: lis      r3, -0x7fd9
//   0x8004cb00: stw      r0, 0x14(r1)
//   0x8004cb04: addi     r3, r3, -0x1be0
//   0x8004cb08: addi     r0, r4, 0x18
//   0x8004cb0c: addi     r4, r1, 8
//   0x8004cb10: stw      r3, 8(r1)
//   0x8004cb14: addi     r3, r1, 0xc
//   0x8004cb18: stw      r0, 0xc(r1)
//   0x8004cb1c: bl       0x8004c030
//   0x8004cb20: cmpwi    r3, 0
//   0x8004cb24: beq      0x8004cb48
//   0x8004cb28: neg      r0, r3
//   0x8004cb2c: or       r0, r0, r3
//   0x8004cb30: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004cb34: beq      0x8004cb40
//   0x8004cb38: lwz      r3, 4(r3)
//   0x8004cb3c: b        0x8004cb4c
//

// TODO: Full decompilation requires Ghidra
