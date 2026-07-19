// Function at 0x8008e000
// Size: 656 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8008e000: stwu     r1, -0x10(r1)
//   0x8008e004: mflr     r0
//   0x8008e008: cmpwi    r3, 0
//   0x8008e00c: stw      r0, 0x14(r1)
//   0x8008e010: stw      r31, 0xc(r1)
//   0x8008e014: mr       r31, r3
//   0x8008e018: beq      0x8008e028
//   0x8008e01c: cmpwi    r4, 0
//   0x8008e020: ble      0x8008e028
//   0x8008e024: bl       0x80229a90
//   0x8008e028: mr       r3, r31
//   0x8008e02c: lwz      r31, 0xc(r1)
//   0x8008e030: lwz      r0, 0x14(r1)
//   0x8008e034: mtlr     r0
//   0x8008e038: addi     r1, r1, 0x10
//   0x8008e03c: blr      
//   0x8008e040: lfs      f0, -0x7024(r2)
//   0x8008e044: lis      r8, -0x7fd9
//   0x8008e048: li       r7, 0
//   0x8008e04c: lfs      f1, -0x7028(r2)
//

// TODO: Full decompilation requires Ghidra
