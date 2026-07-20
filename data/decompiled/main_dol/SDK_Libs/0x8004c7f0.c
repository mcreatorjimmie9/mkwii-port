// Function at 0x8004c7f0
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004c7f0: stwu     r1, -0x10(r1)
//   0x8004c7f4: mflr     r0
//   0x8004c7f8: lwz      r4, 0(r3)
//   0x8004c7fc: lis      r3, -0x7fd9
//   0x8004c800: stw      r0, 0x14(r1)
//   0x8004c804: addi     r3, r3, -0x1c40
//   0x8004c808: addi     r0, r4, 0x18
//   0x8004c80c: addi     r4, r1, 8
//   0x8004c810: stw      r3, 8(r1)
//   0x8004c814: addi     r3, r1, 0xc
//   0x8004c818: stw      r0, 0xc(r1)
//   0x8004c81c: bl       0x8004c030
//   0x8004c820: cmpwi    r3, 0
//   0x8004c824: beq      0x8004c848
//   0x8004c828: neg      r0, r3
//   0x8004c82c: or       r0, r0, r3
//   0x8004c830: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004c834: beq      0x8004c840
//   0x8004c838: lwz      r3, 4(r3)
//   0x8004c83c: b        0x8004c84c
//

// TODO: Full decompilation requires Ghidra
