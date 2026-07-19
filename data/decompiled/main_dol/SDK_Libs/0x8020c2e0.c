// Function at 0x8020c2e0
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c2e0: stwu     r1, -0x10(r1)
//   0x8020c2e4: mflr     r0
//   0x8020c2e8: stw      r0, 0x14(r1)
//   0x8020c2ec: stw      r31, 0xc(r1)
//   0x8020c2f0: mr       r31, r4
//   0x8020c2f4: bl       0x80208f38
//   0x8020c2f8: cmplwi   r3, 0x1a
//   0x8020c2fc: bge      0x8020c314
//   0x8020c300: mulli    r0, r3, 0x14
//   0x8020c304: lis      r3, -0x7fc8
//   0x8020c308: addi     r3, r3, -0x1450
//   0x8020c30c: add      r3, r3, r0
//   0x8020c310: b        0x8020c318
//   0x8020c314: li       r3, 0
//   0x8020c318: cmpwi    r3, 0
//   0x8020c31c: beq      0x8020c324
//   0x8020c320: stw      r31, 4(r3)
//   0x8020c324: lwz      r0, 0x14(r1)
//   0x8020c328: lwz      r31, 0xc(r1)
//   0x8020c32c: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
