// Function at 0x80077770
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80077770: stwu     r1, -0x10(r1)
//   0x80077774: mflr     r0
//   0x80077778: stw      r0, 0x14(r1)
//   0x8007777c: stw      r31, 0xc(r1)
//   0x80077780: mr       r31, r3
//   0x80077784: addi     r3, r3, 4
//   0x80077788: bl       0x8016fe90
//   0x8007778c: lwz      r0, 0(r31)
//   0x80077790: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x80077794: ori      r0, r0, 1
//   0x80077798: stw      r0, 0(r31)
//   0x8007779c: lwz      r31, 0xc(r1)
//   0x800777a0: lwz      r0, 0x14(r1)
//   0x800777a4: mtlr     r0
//   0x800777a8: addi     r1, r1, 0x10
//   0x800777ac: blr      
//

// TODO: Full decompilation requires Ghidra
