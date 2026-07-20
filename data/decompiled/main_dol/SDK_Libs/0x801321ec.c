// Function at 0x801321ec
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801321ec: stwu     r1, -0x10(r1)
//   0x801321f0: mflr     r0
//   0x801321f4: stw      r0, 0x14(r1)
//   0x801321f8: stw      r31, 0xc(r1)
//   0x801321fc: lis      r31, -0x7fcd
//   0x80132200: addi     r31, r31, 0x1a58
//   0x80132204: stw      r30, 8(r1)
//   0x80132208: li       r30, 0
//   0x8013220c: lwz      r3, 0(r31)
//   0x80132210: cmpwi    r3, 0
//   0x80132214: beq      0x8013222c
//   0x80132218: lwz      r12, 4(r3)
//   0x8013221c: cmpwi    r12, 0
//   0x80132220: beq      0x8013222c
//   0x80132224: mtctr    r12
//   0x80132228: bctrl    
//   0x8013222c: addi     r30, r30, 1
//   0x80132230: addi     r31, r31, 4
//   0x80132234: cmpwi    r30, 0x1a
//   0x80132238: blt      0x8013220c
//

// TODO: Full decompilation requires Ghidra
