// Function at 0x80095000
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80095000: stwu     r1, -0x10(r1)
//   0x80095004: mflr     r0
//   0x80095008: cmpwi    r3, 0
//   0x8009500c: stw      r0, 0x14(r1)
//   0x80095010: stw      r31, 0xc(r1)
//   0x80095014: mr       r31, r4
//   0x80095018: stw      r30, 8(r1)
//   0x8009501c: mr       r30, r3
//   0x80095020: beq      0x80095060
//   0x80095024: lis      r12, -0x7fd9
//   0x80095028: addi     r12, r12, 0xe8
//   0x8009502c: stw      r12, 0(r3)
//   0x80095030: lwz      r12, 0x10(r12)
//   0x80095034: mtctr    r12
//   0x80095038: bctrl    
//   0x8009503c: lwz      r12, 0(r30)
//   0x80095040: mr       r3, r30
//   0x80095044: lwz      r12, 0x20(r12)
//   0x80095048: mtctr    r12
//   0x8009504c: bctrl    
//

// TODO: Full decompilation requires Ghidra
