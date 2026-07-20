// Function at 0x8021c964
// Size: 700 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8021c964: stwu     r1, -0x10(r1)
//   0x8021c968: mflr     r0
//   0x8021c96c: cmpwi    r3, 0
//   0x8021c970: stw      r0, 0x14(r1)
//   0x8021c974: stw      r31, 0xc(r1)
//   0x8021c978: mr       r31, r3
//   0x8021c97c: beq      0x8021c98c
//   0x8021c980: cmpwi    r4, 0
//   0x8021c984: ble      0x8021c98c
//   0x8021c988: bl       0x80229a90
//   0x8021c98c: mr       r3, r31
//   0x8021c990: lwz      r31, 0xc(r1)
//   0x8021c994: lwz      r0, 0x14(r1)
//   0x8021c998: mtlr     r0
//   0x8021c99c: addi     r1, r1, 0x10
//   0x8021c9a0: blr      
//   0x8021c9a4: stwu     r1, -0x30(r1)
//   0x8021c9a8: lhz      r0, 0x18(r3)
//   0x8021c9ac: clrlwi.  r0, r0, 0x1f
//   0x8021c9b0: beq      0x8021cc08
//

// TODO: Full decompilation requires Ghidra
