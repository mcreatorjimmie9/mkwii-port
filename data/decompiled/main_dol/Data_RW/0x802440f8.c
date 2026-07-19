// Function at 0x802440f8
// Size: 380 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x802440f8: stwu     r1, -0x10(r1)
//   0x802440fc: mflr     r0
//   0x80244100: stw      r0, 0x14(r1)
//   0x80244104: stw      r31, 0xc(r1)
//   0x80244108: mr       r31, r3
//   0x8024410c: lwz      r0, 8(r3)
//   0x80244110: clrlwi.  r0, r0, 0x1f
//   0x80244114: beq      0x80244198
//   0x80244118: lwz      r3, 4(r3)
//   0x8024411c: cmpwi    r3, 0
//   0x80244120: beq      0x80244198
//   0x80244124: addi     r3, r3, 0x74
//   0x80244128: bl       0x80037520
//   0x8024412c: cmpwi    r3, 0
//   0x80244130: beq      0x80244198
//   0x80244134: lwz      r3, 4(r31)
//   0x80244138: addi     r3, r3, 0x74
//   0x8024413c: bl       0x80037550
//   0x80244140: bl       0x80026cf0
//   0x80244144: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
