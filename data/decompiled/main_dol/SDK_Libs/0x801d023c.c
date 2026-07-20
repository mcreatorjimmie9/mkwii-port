// Function at 0x801d023c
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801d023c: stwu     r1, -0x10(r1)
//   0x801d0240: mflr     r0
//   0x801d0244: stw      r0, 0x14(r1)
//   0x801d0248: stw      r31, 0xc(r1)
//   0x801d024c: mr       r31, r3
//   0x801d0250: bl       0x801a650c
//   0x801d0254: extsb.   r0, r31
//   0x801d0258: blt      0x801d0278
//   0x801d025c: cmpwi    r0, 0x10
//   0x801d0260: bge      0x801d0278
//   0x801d0264: lis      r4, -0x7fcb
//   0x801d0268: slwi     r0, r0, 1
//   0x801d026c: addi     r4, r4, 0x1cc8
//   0x801d0270: lhzx     r31, r4, r0
//   0x801d0274: b        0x801d027c
//   0x801d0278: li       r31, 0
//   0x801d027c: bl       0x801a6534
//   0x801d0280: mr       r3, r31
//   0x801d0284: lwz      r31, 0xc(r1)
//   0x801d0288: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
