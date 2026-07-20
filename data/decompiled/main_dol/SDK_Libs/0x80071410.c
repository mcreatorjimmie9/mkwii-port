// Function at 0x80071410
// Size: 2320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80071410: stwu     r1, -0x40(r1)
//   0x80071414: mflr     r0
//   0x80071418: cmplwi   r4, 9
//   0x8007141c: stw      r0, 0x44(r1)
//   0x80071420: stw      r31, 0x3c(r1)
//   0x80071424: mr       r31, r6
//   0x80071428: stw      r30, 0x38(r1)
//   0x8007142c: mr       r30, r5
//   0x80071430: stw      r29, 0x34(r1)
//   0x80071434: mr       r29, r3
//   0x80071438: bge      0x8007145c
//   0x8007143c: addi     r5, r4, -1
//   0x80071440: li       r6, 1
//   0x80071444: lwz      r0, 0xcc(r3)
//   0x80071448: slw      r5, r6, r5
//   0x8007144c: and.     r0, r5, r0
//   0x80071450: beq      0x8007145c
//   0x80071454: li       r0, 1
//   0x80071458: b        0x80071460
//   0x8007145c: li       r0, 0
//

// TODO: Full decompilation requires Ghidra
