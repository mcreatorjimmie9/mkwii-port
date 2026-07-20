// Function at 0x80079150
// Size: 160 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80079150: stwu     r1, -0x20(r1)
//   0x80079154: mflr     r0
//   0x80079158: stw      r0, 0x24(r1)
//   0x8007915c: stw      r31, 0x1c(r1)
//   0x80079160: stw      r30, 0x18(r1)
//   0x80079164: mr       r30, r3
//   0x80079168: stw      r29, 0x14(r1)
//   0x8007916c: mr       r29, r4
//   0x80079170: lbz      r0, 0xbb(r3)
//   0x80079174: clrlwi.  r0, r0, 0x1f
//   0x80079178: beq      0x800791b8
//   0x8007917c: lwz      r12, 0(r3)
//   0x80079180: lwz      r12, 0x18(r12)
//   0x80079184: mtctr    r12
//   0x80079188: bctrl    
//   0x8007918c: lwzu     r31, 0x14(r30)
//   0x80079190: b        0x800791b0
//   0x80079194: lwz      r12, -4(r31)
//   0x80079198: addi     r3, r31, -4
//   0x8007919c: mr       r4, r29
//

// TODO: Full decompilation requires Ghidra
