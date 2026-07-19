// Function at 0x80186218
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80186218: stwu     r1, -0x20(r1)
//   0x8018621c: mflr     r0
//   0x80186220: stw      r0, 0x24(r1)
//   0x80186224: stw      r31, 0x1c(r1)
//   0x80186228: mr       r31, r3
//   0x8018622c: lwz      r0, 0xc(r3)
//   0x80186230: cmpwi    r0, 0
//   0x80186234: beq      0x80186280
//   0x80186238: lbz      r0, 0x50(r4)
//   0x8018623c: rlwinm.  r0, r0, 0x1d, 0x1f, 0x1f
//   0x80186240: beq      0x80186280
//   0x80186244: lwz      r12, 0(r3)
//   0x80186248: lwz      r12, 0x60(r12)
//   0x8018624c: mtctr    r12
//   0x80186250: bctrl    
//   0x80186254: lis      r4, 0xff
//   0x80186258: mr       r3, r31
//   0x8018625c: addi     r0, r4, 0xff
//   0x80186260: stw      r0, 8(r1)
//   0x80186264: bl       0x801867a4
//

// TODO: Full decompilation requires Ghidra
