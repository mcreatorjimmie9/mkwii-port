// Function at 0x80070890
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80070890: stwu     r1, -0x20(r1)
//   0x80070894: mflr     r0
//   0x80070898: stw      r0, 0x24(r1)
//   0x8007089c: stfd     f31, 0x18(r1)
//   0x800708a0: stw      r31, 0x14(r1)
//   0x800708a4: mr       r31, r3
//   0x800708a8: lbz      r0, 0xd0(r3)
//   0x800708ac: lbz      r5, 0xd0(r4)
//   0x800708b0: cmpw     r0, r5
//   0x800708b4: bne      0x800708f4
//   0x800708b8: lwz      r12, 0(r4)
//   0x800708bc: mr       r3, r4
//   0x800708c0: lwz      r12, 0x28(r12)
//   0x800708c4: mtctr    r12
//   0x800708c8: bctrl    
//   0x800708cc: lwz      r12, 0(r31)
//   0x800708d0: fmr      f31, f1
//   0x800708d4: mr       r3, r31
//   0x800708d8: lwz      r12, 0x28(r12)
//   0x800708dc: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
