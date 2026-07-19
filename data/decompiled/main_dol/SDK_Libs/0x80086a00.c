// Function at 0x80086a00
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80086a00: stwu     r1, -0x10(r1)
//   0x80086a04: mflr     r0
//   0x80086a08: cmpwi    r3, 0
//   0x80086a0c: stw      r0, 0x14(r1)
//   0x80086a10: stw      r31, 0xc(r1)
//   0x80086a14: mr       r31, r4
//   0x80086a18: stw      r30, 8(r1)
//   0x80086a1c: mr       r30, r3
//   0x80086a20: beq      0x80086a60
//   0x80086a24: lis      r12, -0x7fd9
//   0x80086a28: addi     r12, r12, 0x70
//   0x80086a2c: stw      r12, 0(r3)
//   0x80086a30: lwz      r12, 0x10(r12)
//   0x80086a34: mtctr    r12
//   0x80086a38: bctrl    
//   0x80086a3c: lwz      r12, 0(r30)
//   0x80086a40: mr       r3, r30
//   0x80086a44: lwz      r12, 0x20(r12)
//   0x80086a48: mtctr    r12
//   0x80086a4c: bctrl    
//

// TODO: Full decompilation requires Ghidra
