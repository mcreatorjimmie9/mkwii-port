// Function at 0x8001af38
// Size: 204 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001af38: stwu     r1, -0x20(r1)
//   0x8001af3c: mflr     r0
//   0x8001af40: lis      r3, 0x3fe9
//   0x8001af44: lfd      f2, -0x79e8(r2)
//   0x8001af48: stfd     f1, 8(r1)
//   0x8001af4c: stw      r0, 0x24(r1)
//   0x8001af50: addi     r0, r3, 0x21fb
//   0x8001af54: lwz      r3, 8(r1)
//   0x8001af58: clrlwi   r3, r3, 1
//   0x8001af5c: cmpw     r3, r0
//   0x8001af60: bgt      0x8001af70
//   0x8001af64: li       r3, 0
//   0x8001af68: bl       0x8001a370
//   0x8001af6c: b        0x8001aff4
//   0x8001af70: lis      r0, 0x7ff0
//   0x8001af74: cmpw     r3, r0
//   0x8001af78: blt      0x8001af84
//   0x8001af7c: fsub     f1, f1, f1
//   0x8001af80: b        0x8001aff4
//   0x8001af84: addi     r3, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
