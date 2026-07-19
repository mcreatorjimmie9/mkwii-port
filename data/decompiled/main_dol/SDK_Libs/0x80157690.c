// Function at 0x80157690
// Size: 500 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80157690: stwu     r1, -0x20(r1)
//   0x80157694: mflr     r0
//   0x80157698: lis      r3, -0x7fcd
//   0x8015769c: stw      r0, 0x24(r1)
//   0x801576a0: addi     r3, r3, 0x5bc0
//   0x801576a4: stw      r31, 0x1c(r1)
//   0x801576a8: addi     r31, r3, 0x121c
//   0x801576ac: lhz      r0, 0x1222(r3)
//   0x801576b0: cmplwi   r0, 0x14
//   0x801576b4: bge      0x80157758
//   0x801576b8: mulli    r0, r0, 0x298
//   0x801576bc: li       r4, 0
//   0x801576c0: li       r5, 0x298
//   0x801576c4: add      r3, r31, r0
//   0x801576c8: addi     r3, r3, 8
//   0x801576cc: bl       0x80006038
//   0x801576d0: lhz      r4, 6(r31)
//   0x801576d4: cmpwi    r4, 0
//   0x801576d8: beq      0x801576f4
//   0x801576dc: addi     r0, r4, -1
//

// TODO: Full decompilation requires Ghidra
