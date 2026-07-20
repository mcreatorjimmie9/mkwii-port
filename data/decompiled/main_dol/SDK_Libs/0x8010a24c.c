// Function at 0x8010a24c
// Size: 212 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x8010a24c: stwu     r1, -0x40(r1)
//   0x8010a250: mflr     r0
//   0x8010a254: stw      r0, 0x44(r1)
//   0x8010a258: stw      r31, 0x3c(r1)
//   0x8010a25c: mr       r31, r6
//   0x8010a260: stw      r30, 0x38(r1)
//   0x8010a264: mr       r30, r3
//   0x8010a268: addi     r3, r1, 8
//   0x8010a26c: stw      r4, 8(r1)
//   0x8010a270: addi     r4, r1, 0xc
//   0x8010a274: stw      r5, 0xc(r1)
//   0x8010a278: bl       0x8010eba8
//   0x8010a27c: lwz      r3, 0xc(r1)
//   0x8010a280: cmpwi    r3, 0
//   0x8010a284: ble      0x8010a2b4
//   0x8010a288: bl       0x800f37c0
//   0x8010a28c: cmpwi    r3, 0
//   0x8010a290: stw      r3, 0x38(r30)
//   0x8010a294: bne      0x8010a2a0
//   0x8010a298: li       r3, 1
//

// TODO: Full decompilation requires Ghidra
