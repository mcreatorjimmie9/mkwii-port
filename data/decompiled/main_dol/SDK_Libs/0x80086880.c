// Function at 0x80086880
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80086880: stwu     r1, -0x10(r1)
//   0x80086884: mflr     r0
//   0x80086888: cmpwi    r3, 0
//   0x8008688c: stw      r0, 0x14(r1)
//   0x80086890: stw      r31, 0xc(r1)
//   0x80086894: mr       r31, r4
//   0x80086898: stw      r30, 8(r1)
//   0x8008689c: mr       r30, r3
//   0x800868a0: beq      0x800868e0
//   0x800868a4: lis      r12, -0x7fd9
//   0x800868a8: addi     r12, r12, 0xc0
//   0x800868ac: stw      r12, 0(r3)
//   0x800868b0: lwz      r12, 0x10(r12)
//   0x800868b4: mtctr    r12
//   0x800868b8: bctrl    
//   0x800868bc: lwz      r12, 0(r30)
//   0x800868c0: mr       r3, r30
//   0x800868c4: lwz      r12, 0x20(r12)
//   0x800868c8: mtctr    r12
//   0x800868cc: bctrl    
//

// TODO: Full decompilation requires Ghidra
