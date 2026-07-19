// Function at 0x80240ca4
// Size: 64 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80240ca4: stwu     r1, -0x10(r1)
//   0x80240ca8: mflr     r0
//   0x80240cac: cmpwi    r3, 0
//   0x80240cb0: stw      r0, 0x14(r1)
//   0x80240cb4: stw      r31, 0xc(r1)
//   0x80240cb8: mr       r31, r3
//   0x80240cbc: beq      0x80240ccc
//   0x80240cc0: cmpwi    r4, 0
//   0x80240cc4: ble      0x80240ccc
//   0x80240cc8: bl       0x80229a90
//   0x80240ccc: mr       r3, r31
//   0x80240cd0: lwz      r31, 0xc(r1)
//   0x80240cd4: lwz      r0, 0x14(r1)
//   0x80240cd8: mtlr     r0
//   0x80240cdc: addi     r1, r1, 0x10
//   0x80240ce0: blr      
//

// TODO: Full decompilation requires Ghidra
