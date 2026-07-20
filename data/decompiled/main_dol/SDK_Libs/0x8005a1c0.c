// Function at 0x8005a1c0
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005a1c0: stwu     r1, -0x10(r1)
//   0x8005a1c4: mflr     r0
//   0x8005a1c8: stw      r0, 0x14(r1)
//   0x8005a1cc: stw      r31, 0xc(r1)
//   0x8005a1d0: li       r31, 0
//   0x8005a1d4: stw      r30, 8(r1)
//   0x8005a1d8: mr       r30, r3
//   0x8005a1dc: b        0x8005a1fc
//   0x8005a1e0: lwz      r12, 0(r30)
//   0x8005a1e4: mr       r3, r30
//   0x8005a1e8: mr       r4, r31
//   0x8005a1ec: lwz      r12, 0x40(r12)
//   0x8005a1f0: mtctr    r12
//   0x8005a1f4: bctrl    
//   0x8005a1f8: addi     r31, r31, 1
//   0x8005a1fc: lwz      r0, 0x18(r30)
//   0x8005a200: cmpw     r31, r0
//   0x8005a204: blt      0x8005a1e0
//   0x8005a208: lwz      r0, 0x14(r1)
//   0x8005a20c: lwz      r31, 0xc(r1)
//

// TODO: Full decompilation requires Ghidra
