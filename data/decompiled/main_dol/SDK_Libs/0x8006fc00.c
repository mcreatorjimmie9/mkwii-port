// Function at 0x8006fc00
// Size: 176 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006fc00: stwu     r1, -0x10(r1)
//   0x8006fc04: mflr     r0
//   0x8006fc08: stw      r0, 0x14(r1)
//   0x8006fc0c: stw      r31, 0xc(r1)
//   0x8006fc10: mr       r31, r3
//   0x8006fc14: bl       0x8006f560
//   0x8006fc18: lwz      r0, 0xf0(r31)
//   0x8006fc1c: clrlwi.  r0, r0, 0x1f
//   0x8006fc20: beq      0x8006fc40
//   0x8006fc24: lwz      r3, 0xe8(r31)
//   0x8006fc28: addi     r4, r31, 0xec
//   0x8006fc2c: lwz      r12, 0(r3)
//   0x8006fc30: lwz      r12, 0x24(r12)
//   0x8006fc34: mtctr    r12
//   0x8006fc38: bctrl    
//   0x8006fc3c: b        0x8006fc58
//   0x8006fc40: lwz      r3, 0xe8(r31)
//   0x8006fc44: li       r4, 0
//   0x8006fc48: lwz      r12, 0(r3)
//   0x8006fc4c: lwz      r12, 0x24(r12)
//

// TODO: Full decompilation requires Ghidra
