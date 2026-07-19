// Function at 0x80093120
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80093120: stwu     r1, -0x30(r1)
//   0x80093124: mflr     r0
//   0x80093128: mr       r4, r3
//   0x8009312c: stw      r0, 0x34(r1)
//   0x80093130: lbz      r0, 0xc(r3)
//   0x80093134: cmpwi    r0, 0
//   0x80093138: beq      0x800931b0
//   0x8009313c: addi     r0, r8, -2
//   0x80093140: lwz      r3, 0x10(r3)
//   0x80093144: cntlzw   r0, r0
//   0x80093148: srwi     r0, r0, 5
//   0x8009314c: cmpw     r0, r3
//   0x80093150: bne      0x800931b0
//   0x80093154: cmpwi    r3, 1
//   0x80093158: bne      0x8009318c
//   0x8009315c: lwz      r0, 0(r5)
//   0x80093160: addi     r3, r1, 0x18
//   0x80093164: stw      r0, 0x18(r1)
//   0x80093168: addi     r4, r4, 0xd0
//   0x8009316c: lwz      r0, 4(r5)
//

// TODO: Full decompilation requires Ghidra
