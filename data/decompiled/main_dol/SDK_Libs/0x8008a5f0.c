// Function at 0x8008a5f0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008a5f0: stwu     r1, -0x10(r1)
//   0x8008a5f4: mflr     r0
//   0x8008a5f8: stw      r0, 0x14(r1)
//   0x8008a5fc: stw      r31, 0xc(r1)
//   0x8008a600: mr       r31, r4
//   0x8008a604: stw      r30, 8(r1)
//   0x8008a608: mr       r30, r3
//   0x8008a60c: bl       0x801a650c
//   0x8008a610: lwz      r4, 0(r30)
//   0x8008a614: cmpwi    r4, 0
//   0x8008a618: bne      0x8008a624
//   0x8008a61c: bl       0x801a6534
//   0x8008a620: b        0x8008a638
//   0x8008a624: sth      r31, 0xfe(r4)
//   0x8008a628: lwz      r0, 4(r30)
//   0x8008a62c: oris     r0, r0, 0x80
//   0x8008a630: stw      r0, 4(r30)
//   0x8008a634: bl       0x801a6534
//   0x8008a638: lwz      r0, 0x14(r1)
//   0x8008a63c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
