// Function at 0x802298d8
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802298d8: stwu     r1, -0x10(r1)
//   0x802298dc: mflr     r0
//   0x802298e0: stw      r0, 0x14(r1)
//   0x802298e4: stw      r31, 0xc(r1)
//   0x802298e8: mr       r31, r3
//   0x802298ec: b        0x80229904
//   0x802298f0: lwz      r12, 0(r3)
//   0x802298f4: li       r4, -1
//   0x802298f8: lwz      r12, 8(r12)
//   0x802298fc: mtctr    r12
//   0x80229900: bctrl    
//   0x80229904: addi     r3, r31, 0x28
//   0x80229908: li       r4, 0
//   0x8022990c: bl       0x800af0e0
//   0x80229910: cmpwi    r3, 0
//   0x80229914: bne      0x802298f0
//   0x80229918: lwz      r0, 0x14(r1)
//   0x8022991c: lwz      r31, 0xc(r1)
//   0x80229920: mtlr     r0
//   0x80229924: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
