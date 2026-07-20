// Function at 0x80164758
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80164758: stwu     r1, -0x10(r1)
//   0x8016475c: mflr     r0
//   0x80164760: stw      r0, 0x14(r1)
//   0x80164764: lwz      r3, -0x7318(r13)
//   0x80164768: bl       0x80193a38
//   0x8016476c: cmpwi    r3, 0
//   0x80164770: beq      0x8016478c
//   0x80164774: lis      r3, -0x7fd8
//   0x80164778: addi     r3, r3, 0x4af0
//   0x8016477c: crclr    cr1eq
//   0x80164780: bl       0x801a2530
//   0x80164784: li       r3, 0
//   0x80164788: b        0x80164798
//   0x8016478c: li       r0, 0
//   0x80164790: li       r3, 1
//   0x80164794: stb      r0, -0x64db(r13)
//   0x80164798: lwz      r0, 0x14(r1)
//   0x8016479c: mtlr     r0
//   0x801647a0: addi     r1, r1, 0x10
//   0x801647a4: blr      
//

// TODO: Full decompilation requires Ghidra
