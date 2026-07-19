// Function at 0x80094490
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80094490: stwu     r1, -0x20(r1)
//   0x80094494: mflr     r0
//   0x80094498: stw      r0, 0x24(r1)
//   0x8009449c: stw      r31, 0x1c(r1)
//   0x800944a0: stw      r30, 0x18(r1)
//   0x800944a4: mr       r30, r3
//   0x800944a8: addi     r3, r3, 0x48
//   0x800944ac: bl       0x80128018
//   0x800944b0: addi     r0, r3, 0x87
//   0x800944b4: addi     r3, r30, 0x190
//   0x800944b8: rlwinm   r31, r0, 0, 0, 0x1a
//   0x800944bc: bl       0x80129000
//   0x800944c0: addi     r0, r3, 0x87
//   0x800944c4: rlwinm   r3, r0, 0, 0, 0x1a
//   0x800944c8: cmplw    r3, r31
//   0x800944cc: bge      0x800944d4
//   0x800944d0: mr       r3, r31
//   0x800944d4: lwz      r4, 0x14(r30)
//   0x800944d8: cmpwi    r4, 0
//   0x800944dc: bne      0x800944e8
//

// TODO: Full decompilation requires Ghidra
