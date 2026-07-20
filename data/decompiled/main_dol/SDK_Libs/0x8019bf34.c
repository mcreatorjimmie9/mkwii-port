// Function at 0x8019bf34
// Size: 116 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8019bf34: stwu     r1, -0x10(r1)
//   0x8019bf38: mflr     r0
//   0x8019bf3c: cmpwi    r3, 0
//   0x8019bf40: stw      r0, 0x14(r1)
//   0x8019bf44: addi     r0, r4, 0x53
//   0x8019bf48: rlwinm   r6, r0, 0, 0, 0x1a
//   0x8019bf4c: stw      r31, 0xc(r1)
//   0x8019bf50: mr       r31, r4
//   0x8019bf54: bne      0x8019bf80
//   0x8019bf58: lwz      r5, 0x74(r4)
//   0x8019bf5c: cmpwi    r5, 0
//   0x8019bf60: beq      0x8019bf6c
//   0x8019bf64: lwz      r0, 0(r6)
//   0x8019bf68: stw      r0, 0(r5)
//   0x8019bf6c: lwz      r4, 0x78(r4)
//   0x8019bf70: cmpwi    r4, 0
//   0x8019bf74: beq      0x8019bf80
//   0x8019bf78: lwz      r0, 4(r6)
//   0x8019bf7c: stw      r0, 0(r4)
//   0x8019bf80: bl       0x8019de20
//

// TODO: Full decompilation requires Ghidra
