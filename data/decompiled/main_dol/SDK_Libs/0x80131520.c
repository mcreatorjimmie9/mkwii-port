// Function at 0x80131520
// Size: 152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80131520: stwu     r1, -0x10(r1)
//   0x80131524: mflr     r0
//   0x80131528: stw      r0, 0x14(r1)
//   0x8013152c: lwz      r3, -0x6628(r13)
//   0x80131530: cmpwi    r3, 0
//   0x80131534: beq      0x80131574
//   0x80131538: lwz      r12, 0(r3)
//   0x8013153c: cmpwi    r12, 0
//   0x80131540: beq      0x80131558
//   0x80131544: li       r3, 2
//   0x80131548: li       r4, 1
//   0x8013154c: li       r5, 0x800
//   0x80131550: mtctr    r12
//   0x80131554: bctrl    
//   0x80131558: lwz      r3, -0x6628(r13)
//   0x8013155c: lwz      r12, 4(r3)
//   0x80131560: cmpwi    r12, 0
//   0x80131564: beq      0x80131574
//   0x80131568: lwz      r3, -0x6624(r13)
//   0x8013156c: mtctr    r12
//

// TODO: Full decompilation requires Ghidra
