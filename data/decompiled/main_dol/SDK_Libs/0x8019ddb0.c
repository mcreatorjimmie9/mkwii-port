// Function at 0x8019ddb0
// Size: 464 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8019ddb0: stwu     r1, -0x10(r1)
//   0x8019ddb4: mflr     r0
//   0x8019ddb8: lis      r4, -0x7fd7
//   0x8019ddbc: li       r5, 9
//   0x8019ddc0: stw      r0, 0x14(r1)
//   0x8019ddc4: addi     r4, r4, -0x5864
//   0x8019ddc8: stw      r31, 0xc(r1)
//   0x8019ddcc: mr       r31, r3
//   0x8019ddd0: bl       0x80012858
//   0x8019ddd4: cmpwi    r3, 0
//   0x8019ddd8: bne      0x8019ddf0
//   0x8019dddc: lbz      r0, 9(r31)
//   0x8019dde0: extsb.   r0, r0
//   0x8019dde4: beq      0x8019ddf0
//   0x8019dde8: li       r3, 1
//   0x8019ddec: b        0x8019ddf4
//   0x8019ddf0: li       r3, 0
//   0x8019ddf4: lwz      r0, 0x14(r1)
//   0x8019ddf8: lwz      r31, 0xc(r1)
//   0x8019ddfc: mtlr     r0
//

// TODO: Full decompilation requires Ghidra
