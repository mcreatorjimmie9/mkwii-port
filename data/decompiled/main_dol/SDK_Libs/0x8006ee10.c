// Function at 0x8006ee10
// Size: 336 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006ee10: stwu     r1, -0x10(r1)
//   0x8006ee14: mflr     r0
//   0x8006ee18: cmpwi    r3, 0
//   0x8006ee1c: stw      r0, 0x14(r1)
//   0x8006ee20: stw      r31, 0xc(r1)
//   0x8006ee24: mr       r31, r3
//   0x8006ee28: beq      0x8006eeb0
//   0x8006ee2c: lis      r4, -0x7fd9
//   0x8006ee30: addi     r4, r4, -0x1268
//   0x8006ee34: stw      r4, 0(r3)
//   0x8006ee38: b        0x8006ee54
//   0x8006ee3c: lwz      r12, 0(r31)
//   0x8006ee40: mr       r3, r31
//   0x8006ee44: addi     r4, r4, -1
//   0x8006ee48: lwz      r12, 0x38(r12)
//   0x8006ee4c: mtctr    r12
//   0x8006ee50: bctrl    
//   0x8006ee54: lwz      r4, 0xe4(r31)
//   0x8006ee58: cmpwi    r4, 0
//   0x8006ee5c: bne      0x8006ee3c
//

// TODO: Full decompilation requires Ghidra
