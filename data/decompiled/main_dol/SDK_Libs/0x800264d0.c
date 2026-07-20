// Function at 0x800264d0
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800264d0: stwu     r1, -0x10(r1)
//   0x800264d4: mflr     r0
//   0x800264d8: stw      r0, 0x14(r1)
//   0x800264dc: stw      r31, 0xc(r1)
//   0x800264e0: mr       r31, r4
//   0x800264e4: stw      r30, 8(r1)
//   0x800264e8: mr       r30, r3
//   0x800264ec: lwz      r5, 0xf4(r4)
//   0x800264f0: cmpwi    r5, 0
//   0x800264f4: beq      0x80026528
//   0x800264f8: lwz      r0, 0x10(r5)
//   0x800264fc: addic.   r0, r0, -1
//   0x80026500: stw      r0, 0x10(r5)
//   0x80026504: bne      0x80026528
//   0x80026508: lwz      r0, 0xc(r5)
//   0x8002650c: cmpwi    r0, 2
//   0x80026510: bne      0x80026528
//   0x80026514: lwz      r12, 0x1c(r5)
//   0x80026518: mr       r3, r5
//   0x8002651c: lwz      r12, 8(r12)
//

// TODO: Full decompilation requires Ghidra
