// Function at 0x8009e880
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8009e880: stwu     r1, -0x20(r1)
//   0x8009e884: mflr     r0
//   0x8009e888: lwz      r6, 0x28(r3)
//   0x8009e88c: stw      r0, 0x24(r1)
//   0x8009e890: stw      r31, 0x1c(r1)
//   0x8009e894: mr       r31, r5
//   0x8009e898: mr       r5, r6
//   0x8009e89c: stw      r30, 0x18(r1)
//   0x8009e8a0: mr       r30, r4
//   0x8009e8a4: stw      r29, 0x14(r1)
//   0x8009e8a8: mr       r29, r3
//   0x8009e8ac: lbz      r3, 0(r6)
//   0x8009e8b0: lwz      r4, 4(r6)
//   0x8009e8b4: bl       0x800ad010
//   0x8009e8b8: cmpwi    r3, 0
//   0x8009e8bc: bne      0x8009e8c8
//   0x8009e8c0: li       r3, 0
//   0x8009e8c4: b        0x8009e918
//   0x8009e8c8: lwz      r0, 0(r3)
//   0x8009e8cc: cmplw    r30, r0
//

// TODO: Full decompilation requires Ghidra
