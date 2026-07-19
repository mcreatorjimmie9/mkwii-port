// Function at 0x8008b900
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8008b900: stwu     r1, -0x30(r1)
//   0x8008b904: mflr     r0
//   0x8008b908: stw      r0, 0x34(r1)
//   0x8008b90c: stw      r31, 0x2c(r1)
//   0x8008b910: mr       r31, r3
//   0x8008b914: stw      r30, 0x28(r1)
//   0x8008b918: stw      r29, 0x24(r1)
//   0x8008b91c: stw      r28, 0x20(r1)
//   0x8008b920: mr       r28, r4
//   0x8008b924: bl       0x801a650c
//   0x8008b928: lwz      r4, 0(r31)
//   0x8008b92c: mr       r30, r3
//   0x8008b930: cmpwi    cr1, r4, 0
//   0x8008b934: bne      cr1, 0x8008b940
//   0x8008b938: bl       0x801a6534
//   0x8008b93c: b        0x8008ba70
//   0x8008b940: cmplwi   r28, 0x3e80
//   0x8008b944: blt      0x8008b998
//   0x8008b948: li       r0, 0
//   0x8008b94c: sth      r0, 0x18(r1)
//

// TODO: Full decompilation requires Ghidra
