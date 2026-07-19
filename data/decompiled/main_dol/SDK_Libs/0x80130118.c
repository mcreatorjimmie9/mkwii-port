// Function at 0x80130118
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80130118: stwu     r1, -0x10(r1)
//   0x8013011c: mflr     r0
//   0x80130120: cmplwi   r3, 8
//   0x80130124: stw      r0, 0x14(r1)
//   0x80130128: stw      r31, 0xc(r1)
//   0x8013012c: mr       r31, r4
//   0x80130130: stw      r30, 8(r1)
//   0x80130134: mr       r30, r3
//   0x80130138: blt      0x80130144
//   0x8013013c: li       r3, 1
//   0x80130140: b        0x801301a4
//   0x80130144: bl       0x801a650c
//   0x80130148: lis      r7, -0x7fd0
//   0x8013014c: rlwinm   r0, r30, 1, 0x17, 0x1e
//   0x80130150: lbz      r5, 0x5640(r7)
//   0x80130154: addi     r6, r7, 0x5640
//   0x80130158: addis    r4, r6, 3
//   0x8013015c: slwi     r5, r5, 2
//   0x80130160: add      r5, r6, r5
//   0x80130164: add      r4, r4, r0
//

// TODO: Full decompilation requires Ghidra
