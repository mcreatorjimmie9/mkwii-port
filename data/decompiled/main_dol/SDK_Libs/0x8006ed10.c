// Function at 0x8006ed10
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006ed10: stwu     r1, -0x10(r1)
//   0x8006ed14: mflr     r0
//   0x8006ed18: stw      r0, 0x14(r1)
//   0x8006ed1c: lwz      r0, 0xe4(r3)
//   0x8006ed20: lwz      r6, 0xdc(r3)
//   0x8006ed24: slwi     r0, r0, 2
//   0x8006ed28: mr       r5, r6
//   0x8006ed2c: add      r7, r6, r0
//   0x8006ed30: b        0x8006ed3c
//   0x8006ed34: nop      
//   0x8006ed38: addi     r5, r5, 4
//   0x8006ed3c: cmplw    r5, r7
//   0x8006ed40: beq      0x8006ed50
//   0x8006ed44: lwz      r0, 0(r5)
//   0x8006ed48: cmplw    r0, r4
//   0x8006ed4c: bne      0x8006ed38
//   0x8006ed50: cmplw    r5, r7
//   0x8006ed54: beq      0x8006ed84
//   0x8006ed58: lwz      r12, 0(r3)
//   0x8006ed5c: subf     r0, r6, r5
//

// TODO: Full decompilation requires Ghidra
