// Function at 0x800af960
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800af960: stwu     r1, -0x10(r1)
//   0x800af964: mflr     r0
//   0x800af968: cmpwi    r3, 0
//   0x800af96c: stw      r0, 0x14(r1)
//   0x800af970: stw      r31, 0xc(r1)
//   0x800af974: mr       r31, r3
//   0x800af978: beq      0x800af988
//   0x800af97c: cmpwi    r4, 0
//   0x800af980: ble      0x800af988
//   0x800af984: bl       0x80229a90
//   0x800af988: mr       r3, r31
//   0x800af98c: lwz      r31, 0xc(r1)
//   0x800af990: lwz      r0, 0x14(r1)
//   0x800af994: mtlr     r0
//   0x800af998: addi     r1, r1, 0x10
//   0x800af99c: blr      
//

// TODO: Full decompilation requires Ghidra
