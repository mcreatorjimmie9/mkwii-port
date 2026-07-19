// Function at 0x8023ab94
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8023ab94: stwu     r1, -0x10(r1)
//   0x8023ab98: mflr     r0
//   0x8023ab9c: stw      r0, 0x14(r1)
//   0x8023aba0: stw      r31, 0xc(r1)
//   0x8023aba4: li       r31, 0
//   0x8023aba8: stw      r30, 8(r1)
//   0x8023abac: mr       r30, r3
//   0x8023abb0: lwz      r0, 0x20(r3)
//   0x8023abb4: cmpwi    r0, -1
//   0x8023abb8: bne      0x8023abe4
//   0x8023abbc: lwz      r3, 0x24(r3)
//   0x8023abc0: lwz      r12, 0(r3)
//   0x8023abc4: lwz      r12, 0x14(r12)
//   0x8023abc8: mtctr    r12
//   0x8023abcc: bctrl    
//   0x8023abd0: cmpwi    r3, 0
//   0x8023abd4: beq      0x8023abe4
//   0x8023abd8: li       r0, 3
//   0x8023abdc: stw      r0, 0x20(r30)
//   0x8023abe0: li       r31, 1
//

// TODO: Full decompilation requires Ghidra
