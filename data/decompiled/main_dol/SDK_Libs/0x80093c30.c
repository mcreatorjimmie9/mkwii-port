// Function at 0x80093c30
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80093c30: stwu     r1, -0x30(r1)
//   0x80093c34: mflr     r0
//   0x80093c38: mr       r4, r3
//   0x80093c3c: stw      r0, 0x34(r1)
//   0x80093c40: lbz      r0, 0xc(r3)
//   0x80093c44: cmpwi    r0, 0
//   0x80093c48: beq      0x80093cc0
//   0x80093c4c: addi     r0, r8, -2
//   0x80093c50: lwz      r3, 0x10(r3)
//   0x80093c54: cntlzw   r0, r0
//   0x80093c58: srwi     r0, r0, 5
//   0x80093c5c: cmpw     r0, r3
//   0x80093c60: bne      0x80093cc0
//   0x80093c64: cmpwi    r3, 1
//   0x80093c68: bne      0x80093c9c
//   0x80093c6c: lwz      r0, 0(r5)
//   0x80093c70: addi     r3, r1, 0x18
//   0x80093c74: stw      r0, 0x18(r1)
//   0x80093c78: addi     r4, r4, 0x88
//   0x80093c7c: lwz      r0, 4(r5)
//

// TODO: Full decompilation requires Ghidra
