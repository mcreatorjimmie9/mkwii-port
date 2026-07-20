// Function at 0x80160f38
// Size: 576 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80160f38: stwu     r1, -0x10(r1)
//   0x80160f3c: mflr     r0
//   0x80160f40: stw      r0, 0x14(r1)
//   0x80160f44: stw      r31, 0xc(r1)
//   0x80160f48: stw      r30, 8(r1)
//   0x80160f4c: mr       r30, r3
//   0x80160f50: bl       0x801a650c
//   0x80160f54: lwz      r0, -0x65a0(r13)
//   0x80160f58: cmpwi    r0, 0
//   0x80160f5c: bne      0x80160f70
//   0x80160f60: lis      r4, -0x7fcc
//   0x80160f64: addi     r4, r4, -0xfc0
//   0x80160f68: stw      r30, 0x78(r4)
//   0x80160f6c: b        0x80160f8c
//   0x80160f70: lwz      r4, -0x65a0(r13)
//   0x80160f74: lis      r5, -0x7fcc
//   0x80160f78: addi     r5, r5, -0xfc0
//   0x80160f7c: addi     r0, r4, -1
//   0x80160f80: mulli    r0, r0, 0x14
//   0x80160f84: add      r4, r5, r0
//

// TODO: Full decompilation requires Ghidra
