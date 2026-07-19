// Function at 0x80050980
// Size: 704 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80050980: stwu     r1, -0x10(r1)
//   0x80050984: mflr     r0
//   0x80050988: cmpwi    r5, 0
//   0x8005098c: stw      r0, 0x14(r1)
//   0x80050990: beq      0x800509bc
//   0x80050994: cmplwi   r4, 8
//   0x80050998: bge      0x800509bc
//   0x8005099c: mulli    r0, r4, 0x34
//   0x800509a0: lwz      r3, 0(r3)
//   0x800509a4: mr       r4, r5
//   0x800509a8: add      r3, r3, r0
//   0x800509ac: addi     r3, r3, 0xac
//   0x800509b0: bl       0x80199c90
//   0x800509b4: li       r3, 1
//   0x800509b8: b        0x800509c0
//   0x800509bc: li       r3, 0
//   0x800509c0: lwz      r0, 0x14(r1)
//   0x800509c4: mtlr     r0
//   0x800509c8: addi     r1, r1, 0x10
//   0x800509cc: blr      
//

// TODO: Full decompilation requires Ghidra
