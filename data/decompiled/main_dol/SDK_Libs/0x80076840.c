// Function at 0x80076840
// Size: 864 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x80 bytes
//
// Disassembly (first 20 instructions):
//   0x80076840: stwu     r1, -0x80(r1)
//   0x80076844: mflr     r0
//   0x80076848: stw      r0, 0x84(r1)
//   0x8007684c: addi     r11, r1, 0x80
//   0x80076850: bl       0x80020a38
//   0x80076854: cmplwi   r4, 9
//   0x80076858: mr       r29, r3
//   0x8007685c: mr       r30, r5
//   0x80076860: mr       r31, r6
//   0x80076864: bge      0x80076888
//   0x80076868: addi     r5, r4, -1
//   0x8007686c: li       r6, 1
//   0x80076870: lwz      r0, 0xcc(r3)
//   0x80076874: slw      r5, r6, r5
//   0x80076878: and.     r0, r5, r0
//   0x8007687c: beq      0x80076888
//   0x80076880: li       r0, 1
//   0x80076884: b        0x8007688c
//   0x80076888: li       r0, 0
//   0x8007688c: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
