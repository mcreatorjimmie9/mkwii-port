// Function at 0x800791f0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800791f0: stwu     r1, -0x20(r1)
//   0x800791f4: mflr     r0
//   0x800791f8: stw      r0, 0x24(r1)
//   0x800791fc: stw      r31, 0x1c(r1)
//   0x80079200: stw      r30, 0x18(r1)
//   0x80079204: mr       r30, r3
//   0x80079208: stw      r29, 0x14(r1)
//   0x8007920c: mr       r29, r4
//   0x80079210: lwz      r12, 0(r3)
//   0x80079214: lwz      r12, 0x20(r12)
//   0x80079218: mtctr    r12
//   0x8007921c: bctrl    
//   0x80079220: lbz      r0, 0xbb(r30)
//   0x80079224: clrlwi.  r0, r0, 0x1f
//   0x80079228: bne      0x80079234
//   0x8007922c: clrlwi.  r0, r29, 0x1f
//   0x80079230: bne      0x80079260
//   0x80079234: lwzu     r31, 0x14(r30)
//   0x80079238: b        0x80079258
//   0x8007923c: lwz      r12, -4(r31)
//

// TODO: Full decompilation requires Ghidra
