// Function at 0x802432a4
// Size: 264 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802432a4: stwu     r1, -0x10(r1)
//   0x802432a8: mflr     r0
//   0x802432ac: stw      r0, 0x14(r1)
//   0x802432b0: stw      r31, 0xc(r1)
//   0x802432b4: mr       r31, r4
//   0x802432b8: stw      r30, 8(r1)
//   0x802432bc: mr       r30, r3
//   0x802432c0: lwz      r3, -0x5ca8(r13)
//   0x802432c4: lwz      r12, 0(r3)
//   0x802432c8: lwz      r12, 8(r12)
//   0x802432cc: mtctr    r12
//   0x802432d0: bctrl    
//   0x802432d4: lwz      r3, 0(r3)
//   0x802432d8: lhz      r4, 8(r3)
//   0x802432dc: lhz      r3, 4(r3)
//   0x802432e0: sth      r3, 0(r30)
//   0x802432e4: sth      r4, 2(r30)
//   0x802432e8: bl       0x80243330
//   0x802432ec: cmpwi    r31, 0
//   0x802432f0: bne      0x802432f8
//

// TODO: Full decompilation requires Ghidra
