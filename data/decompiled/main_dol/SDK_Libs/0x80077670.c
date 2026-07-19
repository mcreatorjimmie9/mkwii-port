// Function at 0x80077670
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80077670: stwu     r1, -0x10(r1)
//   0x80077674: mflr     r0
//   0x80077678: stw      r0, 0x14(r1)
//   0x8007767c: stw      r31, 0xc(r1)
//   0x80077680: mr       r31, r3
//   0x80077684: addi     r3, r3, 4
//   0x80077688: bl       0x80170124
//   0x8007768c: lwz      r0, 0(r31)
//   0x80077690: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x80077694: ori      r0, r0, 1
//   0x80077698: stw      r0, 0(r31)
//   0x8007769c: lwz      r31, 0xc(r1)
//   0x800776a0: lwz      r0, 0x14(r1)
//   0x800776a4: mtlr     r0
//   0x800776a8: addi     r1, r1, 0x10
//   0x800776ac: blr      
//

// TODO: Full decompilation requires Ghidra
