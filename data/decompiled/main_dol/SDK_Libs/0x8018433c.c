// Function at 0x8018433c
// Size: 484 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8018433c: stwu     r1, -0x20(r1)
//   0x80184340: mflr     r0
//   0x80184344: cmpwi    r4, 0
//   0x80184348: stw      r0, 0x24(r1)
//   0x8018434c: stw      r31, 0x1c(r1)
//   0x80184350: stw      r30, 0x18(r1)
//   0x80184354: stw      r29, 0x14(r1)
//   0x80184358: mr       r29, r4
//   0x8018435c: stw      r28, 0x10(r1)
//   0x80184360: mr       r28, r3
//   0x80184364: beq      0x801843ac
//   0x80184368: lwz      r4, 0x50(r3)
//   0x8018436c: lwz      r3, 0x58(r3)
//   0x80184370: rlwinm   r0, r4, 9, 0x17, 0x1a
//   0x80184374: srwi     r30, r4, 0x1c
//   0x80184378: add      r31, r3, r0
//   0x8018437c: b        0x80184398
//   0x80184380: mr       r3, r31
//   0x80184384: li       r4, 0
//   0x80184388: li       r5, 0x20
//

// TODO: Full decompilation requires Ghidra
