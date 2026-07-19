// Function at 0x80063620
// Size: 432 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80063620: stwu     r1, -0x20(r1)
//   0x80063624: mflr     r0
//   0x80063628: stw      r0, 0x24(r1)
//   0x8006362c: addi     r11, r1, 0x20
//   0x80063630: bl       0x80020a40
//   0x80063634: lwz      r0, 0(r3)
//   0x80063638: lis      r31, -0x7fd5
//   0x8006363c: mr       r30, r3
//   0x80063640: cmpwi    r0, 0
//   0x80063644: addi     r31, r31, 0x3cc0
//   0x80063648: beq      0x800637ac
//   0x8006364c: lwz      r3, 0xc(r31)
//   0x80063650: lbz      r27, 0(r31)
//   0x80063654: rlwinm.  r0, r3, 0, 0x1e, 0x1e
//   0x80063658: beq      0x800636e8
//   0x8006365c: clrlwi.  r0, r3, 0x1f
//   0x80063660: bne      0x800636e8
//   0x80063664: cmpwi    r27, 0
//   0x80063668: beq      0x800636e8
//   0x8006366c: addi     r29, r31, 0xc
//

// TODO: Full decompilation requires Ghidra
