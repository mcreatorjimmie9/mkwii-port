// Function at 0x80180698
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80180698: stwu     r1, -0x10(r1)
//   0x8018069c: mflr     r0
//   0x801806a0: li       r5, 0x14
//   0x801806a4: stw      r0, 0x14(r1)
//   0x801806a8: bl       0x80012858
//   0x801806ac: cntlzw   r0, r3
//   0x801806b0: srwi     r3, r0, 5
//   0x801806b4: lwz      r0, 0x14(r1)
//   0x801806b8: mtlr     r0
//   0x801806bc: addi     r1, r1, 0x10
//   0x801806c0: blr      
//   0x801806c4: lhz      r0, 4(r3)
//   0x801806c8: li       r4, 0
//   0x801806cc: cmplwi   r0, 0xfeff
//   0x801806d0: bne      0x801806e4
//   0x801806d4: lhz      r0, 6(r3)
//   0x801806d8: cmplwi   r0, 8
//   0x801806dc: bne      0x801806e4
//   0x801806e0: li       r4, 1
//   0x801806e4: mr       r3, r4
//

// TODO: Full decompilation requires Ghidra
