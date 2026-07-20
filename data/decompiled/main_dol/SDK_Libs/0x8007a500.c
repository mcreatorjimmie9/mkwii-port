// Function at 0x8007a500
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8007a500: stwu     r1, -0x20(r1)
//   0x8007a504: mflr     r0
//   0x8007a508: stw      r0, 0x24(r1)
//   0x8007a50c: stw      r31, 0x1c(r1)
//   0x8007a510: lwz      r31, 4(r4)
//   0x8007a514: stw      r30, 0x18(r1)
//   0x8007a518: cmpwi    r31, 0
//   0x8007a51c: stw      r29, 0x14(r1)
//   0x8007a520: mr       r29, r5
//   0x8007a524: bne      0x8007a530
//   0x8007a528: li       r3, 0
//   0x8007a52c: b        0x8007a568
//   0x8007a530: lwz      r12, 0(r3)
//   0x8007a534: lwz      r12, 0x10(r12)
//   0x8007a538: mtctr    r12
//   0x8007a53c: bctrl    
//   0x8007a540: cmpwi    r3, 0
//   0x8007a544: mr       r30, r3
//   0x8007a548: beq      0x8007a564
//   0x8007a54c: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
