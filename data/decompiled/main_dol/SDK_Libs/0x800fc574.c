// Function at 0x800fc574
// Size: 156 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800fc574: stwu     r1, -0x10(r1)
//   0x800fc578: mflr     r0
//   0x800fc57c: cmpwi    r3, 0
//   0x800fc580: stw      r0, 0x14(r1)
//   0x800fc584: beq      0x800fc594
//   0x800fc588: lwz      r6, 0(r3)
//   0x800fc58c: cmpwi    r6, 0
//   0x800fc590: bne      0x800fc59c
//   0x800fc594: li       r3, 2
//   0x800fc598: b        0x800fc600
//   0x800fc59c: lwz      r0, 0x108(r6)
//   0x800fc5a0: cmpwi    r0, 0
//   0x800fc5a4: beq      0x800fc5b0
//   0x800fc5a8: li       r3, 0
//   0x800fc5ac: b        0x800fc600
//   0x800fc5b0: lwz      r0, 0x1f4(r6)
//   0x800fc5b4: cmpwi    r0, 4
//   0x800fc5b8: bne      0x800fc5d0
//   0x800fc5bc: lis      r4, -0x7fd9
//   0x800fc5c0: addi     r4, r4, 0x6c5c
//

// TODO: Full decompilation requires Ghidra
