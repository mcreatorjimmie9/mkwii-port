// Function at 0x80242720
// Size: 260 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80242720: stwu     r1, -0x20(r1)
//   0x80242724: mflr     r0
//   0x80242728: cmpwi    r3, 0
//   0x8024272c: stw      r0, 0x24(r1)
//   0x80242730: stw      r31, 0x1c(r1)
//   0x80242734: stw      r30, 0x18(r1)
//   0x80242738: mr       r30, r3
//   0x8024273c: stw      r29, 0x14(r1)
//   0x80242740: mr       r29, r4
//   0x80242744: beq      0x80242784
//   0x80242748: li       r4, 0
//   0x8024274c: lis      r31, -0x7fc8
//   0x80242750: b        0x80242764
//   0x80242754: lwz      r0, 8(r3)
//   0x80242758: cmplw    r0, r30
//   0x8024275c: bne      0x80242764
//   0x80242760: b        0x8024277c
//   0x80242764: addi     r3, r31, 0x760
//   0x80242768: bl       0x800af0e0
//   0x8024276c: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
