// Function at 0x8016f5a0
// Size: 140 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8016f5a0: stwu     r1, -0x10(r1)
//   0x8016f5a4: mflr     r0
//   0x8016f5a8: lfs      f0, -0x68b0(r2)
//   0x8016f5ac: stw      r0, 0x14(r1)
//   0x8016f5b0: fdivs    f1, f0, f1
//   0x8016f5b4: stw      r31, 0xc(r1)
//   0x8016f5b8: mr       r31, r3
//   0x8016f5bc: bl       0x80020918
//   0x8016f5c0: addi     r0, r31, -1
//   0x8016f5c4: clrlwi   r4, r3, 0x17
//   0x8016f5c8: slwi     r0, r0, 8
//   0x8016f5cc: divwu    r3, r0, r4
//   0x8016f5d0: cmplwi   r4, 0x80
//   0x8016f5d4: addi     r3, r3, 1
//   0x8016f5d8: ble      0x8016f608
//   0x8016f5dc: cmplwi   r4, 0x100
//   0x8016f5e0: bge      0x8016f608
//   0x8016f5e4: b        0x8016f5ec
//   0x8016f5e8: srwi     r4, r4, 1
//   0x8016f5ec: clrlwi.  r0, r4, 0x1f
//

// TODO: Full decompilation requires Ghidra
