// Function at 0x8010eba8
// Size: 100 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8010eba8: stwu     r1, -0x10(r1)
//   0x8010ebac: mflr     r0
//   0x8010ebb0: stw      r0, 0x14(r1)
//   0x8010ebb4: stw      r31, 0xc(r1)
//   0x8010ebb8: mr       r31, r4
//   0x8010ebbc: lwz      r5, 0(r3)
//   0x8010ebc0: cmpwi    r5, 0
//   0x8010ebc4: bne      0x8010ebdc
//   0x8010ebc8: addi     r5, r13, -0x76e8
//   0x8010ebcc: li       r0, 0
//   0x8010ebd0: stw      r5, 0(r3)
//   0x8010ebd4: stw      r0, 0(r4)
//   0x8010ebd8: b        0x8010ebf8
//   0x8010ebdc: lwz      r0, 0(r4)
//   0x8010ebe0: cmpwi    r0, -1
//   0x8010ebe4: bne      0x8010ebf8
//   0x8010ebe8: mr       r3, r5
//   0x8010ebec: bl       0x800206f4
//   0x8010ebf0: addi     r0, r3, 1
//   0x8010ebf4: stw      r0, 0(r31)
//

// TODO: Full decompilation requires Ghidra
