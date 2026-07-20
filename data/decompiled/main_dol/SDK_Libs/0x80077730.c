// Function at 0x80077730
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80077730: stwu     r1, -0x10(r1)
//   0x80077734: mflr     r0
//   0x80077738: stw      r0, 0x14(r1)
//   0x8007773c: stw      r31, 0xc(r1)
//   0x80077740: mr       r31, r3
//   0x80077744: addi     r3, r3, 4
//   0x80077748: bl       0x80170028
//   0x8007774c: lwz      r0, 0(r31)
//   0x80077750: rlwinm   r0, r0, 0, 0x1f, 0x1d
//   0x80077754: ori      r0, r0, 1
//   0x80077758: stw      r0, 0(r31)
//   0x8007775c: lwz      r31, 0xc(r1)
//   0x80077760: lwz      r0, 0x14(r1)
//   0x80077764: mtlr     r0
//   0x80077768: addi     r1, r1, 0x10
//   0x8007776c: blr      
//

// TODO: Full decompilation requires Ghidra
