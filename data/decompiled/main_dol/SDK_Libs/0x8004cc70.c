// Function at 0x8004cc70
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004cc70: stwu     r1, -0x10(r1)
//   0x8004cc74: mflr     r0
//   0x8004cc78: lwz      r4, 0(r3)
//   0x8004cc7c: lis      r3, -0x7fd9
//   0x8004cc80: stw      r0, 0x14(r1)
//   0x8004cc84: addi     r3, r3, -0x1bc0
//   0x8004cc88: addi     r0, r4, 0x18
//   0x8004cc8c: addi     r4, r1, 8
//   0x8004cc90: stw      r3, 8(r1)
//   0x8004cc94: addi     r3, r1, 0xc
//   0x8004cc98: stw      r0, 0xc(r1)
//   0x8004cc9c: bl       0x8004c030
//   0x8004cca0: cmpwi    r3, 0
//   0x8004cca4: beq      0x8004ccc8
//   0x8004cca8: neg      r0, r3
//   0x8004ccac: or       r0, r0, r3
//   0x8004ccb0: rlwinm.  r0, r0, 1, 0x1f, 0x1f
//   0x8004ccb4: beq      0x8004ccc0
//   0x8004ccb8: lwz      r3, 4(r3)
//   0x8004ccbc: b        0x8004cccc
//

// TODO: Full decompilation requires Ghidra
