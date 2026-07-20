// Function at 0x8001c598
// Size: 132 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8001c598: stwu     r1, -0x10(r1)
//   0x8001c59c: mflr     r0
//   0x8001c5a0: stw      r0, 0x14(r1)
//   0x8001c5a4: lhz      r0, -0x6ba0(r13)
//   0x8001c5a8: cmpwi    r0, 0
//   0x8001c5ac: bne      0x8001c5b4
//   0x8001c5b0: li       r0, 1
//   0x8001c5b4: sth      r0, 0x12(r3)
//   0x8001c5b8: clrlwi   r4, r0, 0x10
//   0x8001c5bc: addi     r0, r4, 1
//   0x8001c5c0: sth      r0, -0x6ba0(r13)
//   0x8001c5c4: lwz      r4, 4(r3)
//   0x8001c5c8: addi     r3, r3, 0xc
//   0x8001c5cc: bl       0x8001bddc
//   0x8001c5d0: cmpwi    r3, 0
//   0x8001c5d4: mr       r4, r3
//   0x8001c5d8: beq      0x8001c5e8
//   0x8001c5dc: lis      r3, -0x7fd9
//   0x8001c5e0: addi     r3, r3, -0x28d8
//   0x8001c5e4: bl       0x801a2530
//

// TODO: Full decompilation requires Ghidra
