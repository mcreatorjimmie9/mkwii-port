// Function at 0x8020b5d4
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020b5d4: stwu     r1, -0x10(r1)
//   0x8020b5d8: mflr     r0
//   0x8020b5dc: stw      r0, 0x14(r1)
//   0x8020b5e0: bl       0x8020b214
//   0x8020b5e4: cmpwi    r3, 0
//   0x8020b5e8: beq      0x8020b620
//   0x8020b5ec: lis      r3, -0x7fc8
//   0x8020b5f0: addi     r3, r3, -0x1690
//   0x8020b5f4: bl       0x8020b444
//   0x8020b5f8: cmpwi    r3, -1
//   0x8020b5fc: bne      0x8020b608
//   0x8020b600: li       r3, -1
//   0x8020b604: b        0x8020b624
//   0x8020b608: mulli    r0, r3, 0x12
//   0x8020b60c: lis      r3, -0x7fc8
//   0x8020b610: addi     r3, r3, -0x1680
//   0x8020b614: add      r3, r3, r0
//   0x8020b618: lbz      r3, 0x10(r3)
//   0x8020b61c: b        0x8020b624
//   0x8020b620: li       r3, -1
//

// TODO: Full decompilation requires Ghidra
