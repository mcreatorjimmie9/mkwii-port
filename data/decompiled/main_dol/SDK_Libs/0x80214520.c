// Function at 0x80214520
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80214520: stwu     r1, -0x10(r1)
//   0x80214524: mflr     r0
//   0x80214528: stw      r0, 0x14(r1)
//   0x8021452c: stw      r31, 0xc(r1)
//   0x80214530: mr       r31, r3
//   0x80214534: bl       0x80214550
//   0x80214538: mr       r3, r31
//   0x8021453c: lwz      r31, 0xc(r1)
//   0x80214540: lwz      r0, 0x14(r1)
//   0x80214544: mtlr     r0
//   0x80214548: addi     r1, r1, 0x10
//   0x8021454c: blr      
//   0x80214550: lfs      f1, -0x6500(r2)
//   0x80214554: stfs     f1, 0(r3)
//   0x80214558: fneg     f0, f1
//   0x8021455c: stfs     f1, 4(r3)
//   0x80214560: stfs     f0, 8(r3)
//   0x80214564: stfs     f0, 0xc(r3)
//   0x80214568: blr      
//   0x8021456c: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
