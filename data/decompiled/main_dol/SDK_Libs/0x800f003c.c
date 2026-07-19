// Function at 0x800f003c
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800f003c: stwu     r1, -0x20(r1)
//   0x800f0040: mflr     r0
//   0x800f0044: cmpwi    r3, 0
//   0x800f0048: stw      r0, 0x24(r1)
//   0x800f004c: stw      r31, 0x1c(r1)
//   0x800f0050: stw      r30, 0x18(r1)
//   0x800f0054: mr       r30, r4
//   0x800f0058: stw      r29, 0x14(r1)
//   0x800f005c: mr       r29, r3
//   0x800f0060: bne      0x800f006c
//   0x800f0064: li       r3, 0
//   0x800f0068: b        0x800f00c0
//   0x800f006c: lwz      r12, 0xc(r29)
//   0x800f0070: mr       r3, r30
//   0x800f0074: lwz      r4, 4(r29)
//   0x800f0078: mtctr    r12
//   0x800f007c: bctrl    
//   0x800f0080: lwz      r6, 0(r29)
//   0x800f0084: slwi     r31, r3, 2
//   0x800f0088: lwz      r5, 0x10(r29)
//

// TODO: Full decompilation requires Ghidra
