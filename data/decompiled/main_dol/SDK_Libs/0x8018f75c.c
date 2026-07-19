// Function at 0x8018f75c
// Size: 524 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8018f75c: stwu     r1, -0x30(r1)
//   0x8018f760: mflr     r0
//   0x8018f764: stw      r0, 0x34(r1)
//   0x8018f768: addi     r11, r1, 0x30
//   0x8018f76c: bl       0x80020a38
//   0x8018f770: lis      r27, -0x7fcc
//   0x8018f774: addi     r27, r27, 0x698
//   0x8018f778: bl       0x80124e34
//   0x8018f77c: cmpwi    r3, 0
//   0x8018f780: beq      0x8018f944
//   0x8018f784: lwz      r0, 0x6b8(r27)
//   0x8018f788: cmpwi    r0, 0
//   0x8018f78c: bne      0x8018f944
//   0x8018f790: addi     r5, r27, 0
//   0x8018f794: li       r3, -1
//   0x8018f798: stb      r3, 0(r5)
//   0x8018f79c: li       r0, 2
//   0x8018f7a0: addi     r4, r27, 0x10
//   0x8018f7a4: stb      r3, 1(r5)
//   0x8018f7a8: stb      r3, 2(r5)
//

// TODO: Full decompilation requires Ghidra
