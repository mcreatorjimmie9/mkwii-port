// Function at 0x80181868
// Size: 488 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80181868: stwu     r1, -0x30(r1)
//   0x8018186c: mflr     r0
//   0x80181870: stw      r0, 0x34(r1)
//   0x80181874: addi     r11, r1, 0x30
//   0x80181878: bl       0x80020a34
//   0x8018187c: lwz      r12, 0(r3)
//   0x80181880: lis      r26, -0x7fcc
//   0x80181884: mr       r27, r3
//   0x80181888: mr       r24, r4
//   0x8018188c: lwz      r12, 0xc(r12)
//   0x80181890: addi     r26, r26, 0x638
//   0x80181894: mtctr    r12
//   0x80181898: bctrl    
//   0x8018189c: b        0x801818b4
//   0x801818a0: cmplw    r3, r26
//   0x801818a4: bne      0x801818b0
//   0x801818a8: li       r0, 1
//   0x801818ac: b        0x801818c0
//   0x801818b0: lwz      r3, 0(r3)
//   0x801818b4: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
