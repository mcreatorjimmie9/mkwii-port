// Function at 0x8000a5e4
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8000a5e4: stwu     r1, -0x10(r1)
//   0x8000a5e8: mflr     r0
//   0x8000a5ec: cmpwi    r3, 0
//   0x8000a5f0: stw      r0, 0x14(r1)
//   0x8000a5f4: stw      r31, 0xc(r1)
//   0x8000a5f8: mr       r31, r4
//   0x8000a5fc: stw      r30, 8(r1)
//   0x8000a600: mr       r30, r3
//   0x8000a604: beq      0x8000a62c
//   0x8000a608: lis      r4, -0x7fd9
//   0x8000a60c: addi     r4, r4, -0x3660
//   0x8000a610: stw      r4, 0x54(r3)
//   0x8000a614: lwz      r3, 0x88(r3)
//   0x8000a618: bl       0x80229b5c
//   0x8000a61c: cmpwi    r31, 0
//   0x8000a620: ble      0x8000a62c
//   0x8000a624: mr       r3, r30
//   0x8000a628: bl       0x80229a90
//   0x8000a62c: mr       r3, r30
//   0x8000a630: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
