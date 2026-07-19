// Function at 0x8004b320
// Size: 288 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8004b320: stwu     r1, -0x10(r1)
//   0x8004b324: mflr     r0
//   0x8004b328: stw      r0, 0x14(r1)
//   0x8004b32c: stw      r31, 0xc(r1)
//   0x8004b330: mr       r31, r4
//   0x8004b334: stw      r30, 8(r1)
//   0x8004b338: mr       r30, r3
//   0x8004b33c: lwz      r6, 0(r4)
//   0x8004b340: lhz      r7, 0x42(r6)
//   0x8004b344: add      r6, r5, r7
//   0x8004b348: lwz      r6, 4(r6)
//   0x8004b34c: b        0x8004b358
//   0x8004b350: add      r6, r6, r7
//   0x8004b354: lwz      r6, 4(r6)
//   0x8004b358: cmpwi    r6, 0
//   0x8004b35c: beq      0x8004b36c
//   0x8004b360: lwz      r0, 0xc(r6)
//   0x8004b364: cmpwi    r0, 1
//   0x8004b368: bne      0x8004b350
//   0x8004b36c: cmpwi    r6, 0
//

// TODO: Full decompilation requires Ghidra
