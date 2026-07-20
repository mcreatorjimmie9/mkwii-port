// Function at 0x8023397c
// Size: 308 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8023397c: stwu     r1, -0x40(r1)
//   0x80233980: mflr     r0
//   0x80233984: stw      r0, 0x44(r1)
//   0x80233988: stmw     r20, 0x10(r1)
//   0x8023398c: mr       r24, r3
//   0x80233990: mr       r25, r4
//   0x80233994: mr       r26, r5
//   0x80233998: mr       r27, r6
//   0x8023399c: lhz      r0, 0(r4)
//   0x802339a0: clrlwi.  r0, r0, 0x1f
//   0x802339a4: bne      0x802339b4
//   0x802339a8: lhz      r0, 2(r4)
//   0x802339ac: clrlwi.  r0, r0, 0x1f
//   0x802339b0: beq      0x802339bc
//   0x802339b4: li       r3, 1
//   0x802339b8: b        0x80233a9c
//   0x802339bc: lhz      r3, 0(r4)
//   0x802339c0: clrlwi.  r5, r3, 0x1d
//   0x802339c4: beq      0x802339d8
//   0x802339c8: addi     r3, r3, 8
//

// TODO: Full decompilation requires Ghidra
