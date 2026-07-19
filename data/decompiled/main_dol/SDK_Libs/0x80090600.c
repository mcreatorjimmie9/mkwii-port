// Function at 0x80090600
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80090600: stwu     r1, -0x10(r1)
//   0x80090604: mflr     r0
//   0x80090608: stw      r0, 0x14(r1)
//   0x8009060c: stw      r31, 0xc(r1)
//   0x80090610: mr       r31, r3
//   0x80090614: lbz      r0, 0x3a(r3)
//   0x80090618: cmpwi    r0, 0
//   0x8009061c: bne      0x80090660
//   0x80090620: lwz      r0, 0(r3)
//   0x80090624: cmpwi    r0, 4
//   0x80090628: beq      0x80090658
//   0x8009062c: lwz      r4, 0xec(r3)
//   0x80090630: cmpwi    r4, 0
//   0x80090634: beq      0x80090650
//   0x80090638: lbz      r0, 0x39(r3)
//   0x8009063c: cmpwi    r0, 0
//   0x80090640: bne      0x80090650
//   0x80090644: mr       r3, r4
//   0x80090648: li       r4, 1
//   0x8009064c: bl       0x800aac40
//

// TODO: Full decompilation requires Ghidra
