// Function at 0x8004c350
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c350: stwu     r1, -0x10(r1)
//   0x8004c354: mflr     r0
//   0x8004c358: lwz      r4, 0(r3)
//   0x8004c35c: lis      r3, -0x7fd9
//   0x8004c360: stw      r0, 0x14(r1)
//   0x8004c364: addi     r3, r3, -0x1ca0
//   0x8004c368: addi     r0, r4, 0x18
//   0x8004c36c: addi     r4, r1, 8
//   0x8004c370: stw      r3, 8(r1)
//   0x8004c374: addi     r3, r1, 0xc
//   0x8004c378: stw      r0, 0xc(r1)
//   0x8004c37c: bl       0x8004c030
//   0x8004c380: cmpwi    r3, 0
//   0x8004c384: beq      0x8004c3a8
//   0x8004c388: neg      r0, r3
//   0x8004c38c: or       r0, r0, r3
//   0x8004c390: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c394: beq      0x8004c3a0
//   0x8004c398: lwz      r3, 4(r3)
//   0x8004c39c: b        0x8004c3ac
//

// TODO: Full decompilation requires Ghidra
