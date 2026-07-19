// Function at 0x8016ec2c
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x2e0 bytes
//
// Disassembly (first 20 instructions):
//   0x8016ec2c: stwu     r1, -0x2e0(r1)
//   0x8016ec30: mflr     r0
//   0x8016ec34: stw      r0, 0x2e4(r1)
//   0x8016ec38: stw      r31, 0x2dc(r1)
//   0x8016ec3c: stw      r30, 0x2d8(r1)
//   0x8016ec40: mr       r30, r4
//   0x8016ec44: lwz      r0, -0x6420(r13)
//   0x8016ec48: lwz      r3, -0x6470(r13)
//   0x8016ec4c: cmpwi    r0, 0
//   0x8016ec50: lhz      r31, 0xe(r3)
//   0x8016ec54: beq      0x8016ec88
//   0x8016ec58: addi     r3, r1, 8
//   0x8016ec5c: bl       0x801a1ff8
//   0x8016ec60: addi     r3, r1, 8
//   0x8016ec64: bl       0x801a1dd0
//   0x8016ec68: lwz      r12, -0x6420(r13)
//   0x8016ec6c: mr       r3, r31
//   0x8016ec70: mtctr    r12
//   0x8016ec74: bctrl    
//   0x8016ec78: addi     r3, r1, 8
//

// TODO: Full decompilation requires Ghidra
