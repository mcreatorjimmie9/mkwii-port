// Function at 0x80223488
// Size: 248 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0xa0 bytes
//
// Disassembly (first 20 instructions):
//   0x80223488: stwu     r1, -0xa0(r1)
//   0x8022348c: mflr     r0
//   0x80223490: stw      r0, 0xa4(r1)
//   0x80223494: stfd     f31, 0x90(r1)
//   0x80223498: xscmpgedp vs31, f1, f0
//   0x8022349c: addi     r11, r1, 0x90
//   0x802234a0: bl       0x80020a40
//   0x802234a4: mr       r27, r3
//   0x802234a8: mr       r28, r4
//   0x802234ac: addi     r3, r3, 0x74
//   0x802234b0: bl       0x80037520
//   0x802234b4: cmpwi    r3, 0
//   0x802234b8: beq      0x80223560
//   0x802234bc: addi     r3, r27, 0x74
//   0x802234c0: bl       0x80037550
//   0x802234c4: bl       0x80026d00
//   0x802234c8: lfs      f31, -0x62c0(r2)
//   0x802234cc: clrlwi   r31, r3, 0x10
//   0x802234d0: li       r30, 0
//   0x802234d4: b        0x80223558
//

// TODO: Full decompilation requires Ghidra
