// Function at 0x801755d8
// Size: 272 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801755d8: stwu     r1, -0x20(r1)
//   0x801755dc: mflr     r0
//   0x801755e0: cmpwi    r4, 0xff
//   0x801755e4: stw      r0, 0x24(r1)
//   0x801755e8: stw      r31, 0x1c(r1)
//   0x801755ec: mr       r31, r4
//   0x801755f0: stw      r30, 0x18(r1)
//   0x801755f4: mr       r30, r3
//   0x801755f8: stw      r29, 0x14(r1)
//   0x801755fc: stw      r28, 0x10(r1)
//   0x80175600: beq      0x80175608
//   0x80175604: b        0x8017569c
//   0x80175608: lis      r4, -0x7fcc
//   0x8017560c: slwi     r0, r3, 2
//   0x80175610: addi     r4, r4, 0x5a0
//   0x80175614: lwzx     r29, r4, r0
//   0x80175618: lwz      r28, 0(r29)
//   0x8017561c: mr       r3, r28
//   0x80175620: bl       0x801c174c
//   0x80175624: cmpwi    r3, 0
//

// TODO: Full decompilation requires Ghidra
