// Function at 0x801b0b18
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801b0b18: stwu     r1, -0x30(r1)
//   0x801b0b1c: mflr     r0
//   0x801b0b20: stw      r0, 0x34(r1)
//   0x801b0b24: addi     r11, r1, 0x30
//   0x801b0b28: bl       0x80020a34
//   0x801b0b2c: lwz      r0, -0x622c(r13)
//   0x801b0b30: lis      r31, -0x7fcc
//   0x801b0b34: addi     r31, r31, 0x4080
//   0x801b0b38: cmplw    r3, r0
//   0x801b0b3c: bge      0x801b0c90
//   0x801b0b40: lwz      r4, -0x6228(r13)
//   0x801b0b44: cmpwi    r4, 0
//   0x801b0b48: beq      0x801b0c90
//   0x801b0b4c: neg      r0, r3
//   0x801b0b50: add      r28, r31, r4
//   0x801b0b54: slwi     r0, r0, 1
//   0x801b0b58: lhzx     r30, r28, r0
//   0x801b0b5c: cmpwi    r30, 0
//   0x801b0b60: beq      0x801b0c90
//   0x801b0b64: lwz      r0, -0x6230(r13)
//

// TODO: Full decompilation requires Ghidra
