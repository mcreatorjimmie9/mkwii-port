// Function at 0x80186498
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80186498: stwu     r1, -0x30(r1)
//   0x8018649c: mflr     r0
//   0x801864a0: stw      r0, 0x34(r1)
//   0x801864a4: addi     r11, r1, 0x30
//   0x801864a8: bl       0x80020a3c
//   0x801864ac: lwz      r0, 0x28(r3)
//   0x801864b0: mr       r26, r3
//   0x801864b4: mr       r27, r4
//   0x801864b8: cmpwi    r0, 0
//   0x801864bc: beq      0x801864d4
//   0x801864c0: mr       r3, r0
//   0x801864c4: lwz      r12, 0(r3)
//   0x801864c8: lwz      r12, 0x14(r12)
//   0x801864cc: mtctr    r12
//   0x801864d0: bctrl    
//   0x801864d4: lwz      r31, 0x20(r26)
//   0x801864d8: addi     r30, r26, 0x20
//   0x801864dc: li       r29, 0
//   0x801864e0: b        0x80186518
//   0x801864e4: cmpwi    r27, 0
//

// TODO: Full decompilation requires Ghidra
