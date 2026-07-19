// Function at 0x8001b984
// Size: 308 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8001b984: stwu     r1, -0x30(r1)
//   0x8001b988: mflr     r0
//   0x8001b98c: stw      r0, 0x34(r1)
//   0x8001b990: stmw     r22, 8(r1)
//   0x8001b994: lwz      r3, -0x6bb8(r13)
//   0x8001b998: cmplwi   r3, 0x44
//   0x8001b99c: bgt      0x8001b9c8
//   0x8001b9a0: addi     r0, r3, 0x4000
//   0x8001b9a4: cmplwi   r0, 0x44
//   0x8001b9a8: ble      0x8001b9c8
//   0x8001b9ac: lis      r3, -0x7fd6
//   0x8001b9b0: addi     r3, r3, 0x21b8
//   0x8001b9b4: lwz      r0, 0x238(r3)
//   0x8001b9b8: clrlwi.  r0, r0, 0x1e
//   0x8001b9bc: beq      0x8001b9c8
//   0x8001b9c0: li       r3, 0x44
//   0x8001b9c4: b        0x8001b9d0
//   0x8001b9c8: lis      r3, -0x8000
//   0x8001b9cc: addi     r3, r3, 0x44
//   0x8001b9d0: lis      r31, -0x7fd9
//

// TODO: Full decompilation requires Ghidra
