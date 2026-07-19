// Function at 0x800f2198
// Size: 200 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x330 bytes
//
// Disassembly (first 20 instructions):
//   0x800f2198: stwu     r1, -0x330(r1)
//   0x800f219c: mflr     r0
//   0x800f21a0: addi     r4, r3, 0xc
//   0x800f21a4: stw      r0, 0x334(r1)
//   0x800f21a8: li       r0, 0x64
//   0x800f21ac: addi     r5, r1, 4
//   0x800f21b0: stw      r31, 0x32c(r1)
//   0x800f21b4: mr       r31, r3
//   0x800f21b8: mtctr    r0
//   0x800f21bc: lwz      r3, 4(r4)
//   0x800f21c0: lwzu     r0, 8(r4)
//   0x800f21c4: stw      r3, 4(r5)
//   0x800f21c8: stwu     r0, 8(r5)
//   0x800f21cc: bdnz     0x800f21bc
//   0x800f21d0: addi     r3, r1, 8
//   0x800f21d4: bl       0x801aa134
//   0x800f21d8: lwz      r3, 0x320(r1)
//   0x800f21dc: cmpwi    r3, 0
//   0x800f21e0: beq      0x800f2204
//   0x800f21e4: beq      0x800f21fc
//

// TODO: Full decompilation requires Ghidra
