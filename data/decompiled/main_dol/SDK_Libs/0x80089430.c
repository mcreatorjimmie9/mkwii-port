// Function at 0x80089430
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80089430: stwu     r1, -0x20(r1)
//   0x80089434: mflr     r0
//   0x80089438: stw      r0, 0x24(r1)
//   0x8008943c: addi     r11, r1, 0x20
//   0x80089440: bl       0x80020a3c
//   0x80089444: mr       r26, r3
//   0x80089448: mr       r27, r4
//   0x8008944c: bl       0x801a650c
//   0x80089450: mulli    r0, r27, 0xc
//   0x80089454: mr       r31, r3
//   0x80089458: add      r28, r26, r0
//   0x8008945c: lwzu     r0, 0xb4(r28)
//   0x80089460: cmpwi    r0, 0
//   0x80089464: bne      0x80089470
//   0x80089468: bl       0x801a6534
//   0x8008946c: b        0x8008950c
//   0x80089470: lwz      r30, 4(r28)
//   0x80089474: addi     r29, r28, 4
//   0x80089478: b        0x80089494
//   0x8008947c: lwz      r12, -4(r30)
//

// TODO: Full decompilation requires Ghidra
