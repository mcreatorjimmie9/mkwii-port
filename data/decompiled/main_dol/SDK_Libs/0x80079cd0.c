// Function at 0x80079cd0
// Size: 448 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80079cd0: stwu     r1, -0x30(r1)
//   0x80079cd4: mflr     r0
//   0x80079cd8: stw      r0, 0x34(r1)
//   0x80079cdc: addi     r11, r1, 0x30
//   0x80079ce0: bl       0x80020a30
//   0x80079ce4: cmpwi    r3, 0
//   0x80079ce8: mr       r23, r3
//   0x80079cec: mr       r31, r4
//   0x80079cf0: addi     r25, r13, -0x6a80
//   0x80079cf4: beq      0x80079d40
//   0x80079cf8: lwz      r12, 0(r3)
//   0x80079cfc: lwz      r12, 0xc(r12)
//   0x80079d00: mtctr    r12
//   0x80079d04: bctrl    
//   0x80079d08: b        0x80079d24
//   0x80079d0c: nop      
//   0x80079d10: cmplw    r3, r25
//   0x80079d14: bne      0x80079d20
//   0x80079d18: li       r0, 1
//   0x80079d1c: b        0x80079d30
//

// TODO: Full decompilation requires Ghidra
