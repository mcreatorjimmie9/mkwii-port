// Function at 0x8007a930
// Size: 448 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8007a930: stwu     r1, -0x30(r1)
//   0x8007a934: mflr     r0
//   0x8007a938: stw      r0, 0x34(r1)
//   0x8007a93c: addi     r11, r1, 0x30
//   0x8007a940: bl       0x80020a30
//   0x8007a944: lwz      r25, 0x10(r3)
//   0x8007a948: mr       r31, r4
//   0x8007a94c: addi     r23, r13, -0x6a80
//   0x8007a950: cmpwi    r25, 0
//   0x8007a954: beq      0x8007a9a0
//   0x8007a958: lwz      r12, 0(r25)
//   0x8007a95c: mr       r3, r25
//   0x8007a960: lwz      r12, 0xc(r12)
//   0x8007a964: mtctr    r12
//   0x8007a968: bctrl    
//   0x8007a96c: b        0x8007a984
//   0x8007a970: cmplw    r3, r23
//   0x8007a974: bne      0x8007a980
//   0x8007a978: li       r0, 1
//   0x8007a97c: b        0x8007a990
//

// TODO: Full decompilation requires Ghidra
