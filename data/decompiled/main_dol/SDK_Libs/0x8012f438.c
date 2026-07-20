// Function at 0x8012f438
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8012f438: stwu     r1, -0x10(r1)
//   0x8012f43c: mflr     r0
//   0x8012f440: stw      r0, 0x14(r1)
//   0x8012f444: stw      r31, 0xc(r1)
//   0x8012f448: stw      r30, 8(r1)
//   0x8012f44c: mr       r30, r3
//   0x8012f450: bl       0x801301e8
//   0x8012f454: cmpwi    r30, 0
//   0x8012f458: beq      0x8012f468
//   0x8012f45c: lhz      r0, 8(r30)
//   0x8012f460: cmpwi    r0, 0
//   0x8012f464: bne      0x8012f474
//   0x8012f468: bl       0x801301c4
//   0x8012f46c: li       r3, 0
//   0x8012f470: b        0x8012f4c0
//   0x8012f474: lwz      r31, 0(r30)
//   0x8012f478: lwz      r3, -8(r31)
//   0x8012f47c: cmpwi    r3, 0
//   0x8012f480: beq      0x8012f490
//   0x8012f484: addi     r0, r3, 8
//

// TODO: Full decompilation requires Ghidra
