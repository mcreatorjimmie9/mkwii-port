// Function at 0x8018d60c
// Size: 584 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x60 bytes
//
// Disassembly (first 20 instructions):
//   0x8018d60c: stwu     r1, -0x60(r1)
//   0x8018d610: mflr     r0
//   0x8018d614: stw      r0, 0x64(r1)
//   0x8018d618: stfd     f31, 0x50(r1)
//   0x8018d61c: xscmpgtdp vs31, f1, f0
//   0x8018d620: stfd     f30, 0x40(r1)
//   0x8018d624: xsmaddmsp f30, f1, f0
//   0x8018d628: addi     r11, r1, 0x40
//   0x8018d62c: bl       0x80020a40
//   0x8018d630: cmpwi    r5, 0xa
//   0x8018d634: mr       r27, r4
//   0x8018d638: mr       r28, r6
//   0x8018d63c: beq      0x8018d650
//   0x8018d640: bge      0x8018d818
//   0x8018d644: cmpwi    r5, 9
//   0x8018d648: bge      0x8018d6f8
//   0x8018d64c: b        0x8018d818
//   0x8018d650: lwz      r30, 0(r6)
//   0x8018d654: mr       r3, r30
//   0x8018d658: bl       0x8018c294
//

// TODO: Full decompilation requires Ghidra
