// Function at 0x801accf8
// Size: 1084 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801accf8: stwu     r1, -0x10(r1)
//   0x801accfc: mflr     r0
//   0x801acd00: stw      r0, 0x14(r1)
//   0x801acd04: stw      r31, 0xc(r1)
//   0x801acd08: lwz      r0, -0x6280(r13)
//   0x801acd0c: cmpwi    r0, 0
//   0x801acd10: beq      0x801acd9c
//   0x801acd14: lis      r3, -0x8000
//   0x801acd18: lwz      r31, 0xdc(r3)
//   0x801acd1c: b        0x801acd38
//   0x801acd20: lwz      r0, -0x6280(r13)
//   0x801acd24: cmplw    r31, r0
//   0x801acd28: beq      0x801acd34
//   0x801acd2c: mr       r3, r31
//   0x801acd30: bl       0x801aa784
//   0x801acd34: lwz      r31, 0x2fc(r31)
//   0x801acd38: cmpwi    r31, 0
//   0x801acd3c: bne      0x801acd20
//   0x801acd40: lis      r31, -0x7fcc
//   0x801acd44: addi     r3, r31, 0x3e00
//

// TODO: Full decompilation requires Ghidra
