// Function at 0x802448a4
// Size: 752 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x110 bytes
//
// Disassembly (first 20 instructions):
//   0x802448a4: stwu     r1, -0x110(r1)
//   0x802448a8: mflr     r0
//   0x802448ac: stw      r0, 0x114(r1)
//   0x802448b0: addi     r11, r1, 0x110
//   0x802448b4: bl       0x80020a2c
//   0x802448b8: lwz      r0, -0x6c44(r13)
//   0x802448bc: cmpwi    r0, -1
//   0x802448c0: beq      0x80244b7c
//   0x802448c4: cmpwi    r0, 0
//   0x802448c8: li       r5, -1
//   0x802448cc: bne      0x802448d8
//   0x802448d0: li       r5, 1
//   0x802448d4: b        0x802448e4
//   0x802448d8: cmpwi    r0, 1
//   0x802448dc: bne      0x802448e4
//   0x802448e0: li       r5, 0
//   0x802448e4: mulli    r26, r5, 0xc
//   0x802448e8: lis      r5, -0x7fc8
//   0x802448ec: addi     r5, r5, 0x7f8
//   0x802448f0: add      r31, r5, r26
//

// TODO: Full decompilation requires Ghidra
