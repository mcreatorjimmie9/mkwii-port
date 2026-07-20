// Function at 0x80176480
// Size: 84 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80176480: stwu     r1, -0x10(r1)
//   0x80176484: mflr     r0
//   0x80176488: stw      r0, 0x14(r1)
//   0x8017648c: stw      r31, 0xc(r1)
//   0x80176490: stw      r30, 8(r1)
//   0x80176494: mr       r30, r3
//   0x80176498: addi     r3, r3, 0x1a0
//   0x8017649c: bl       0x801a08c4
//   0x801764a0: li       r31, 0
//   0x801764a4: mr       r3, r30
//   0x801764a8: bl       0x801a08c4
//   0x801764ac: addi     r31, r31, 1
//   0x801764b0: addi     r30, r30, 0x68
//   0x801764b4: cmpwi    r31, 4
//   0x801764b8: blt      0x801764a4
//   0x801764bc: lwz      r0, 0x14(r1)
//   0x801764c0: lwz      r31, 0xc(r1)
//   0x801764c4: lwz      r30, 8(r1)
//   0x801764c8: mtlr     r0
//   0x801764cc: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
