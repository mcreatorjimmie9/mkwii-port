// Function at 0x8021eae8
// Size: 824 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8021eae8: stwu     r1, -0x10(r1)
//   0x8021eaec: mflr     r0
//   0x8021eaf0: cmpwi    r3, 0
//   0x8021eaf4: stw      r0, 0x14(r1)
//   0x8021eaf8: stw      r31, 0xc(r1)
//   0x8021eafc: mr       r31, r3
//   0x8021eb00: beq      0x8021eb10
//   0x8021eb04: cmpwi    r4, 0
//   0x8021eb08: ble      0x8021eb10
//   0x8021eb0c: bl       0x80229a90
//   0x8021eb10: mr       r3, r31
//   0x8021eb14: lwz      r31, 0xc(r1)
//   0x8021eb18: lwz      r0, 0x14(r1)
//   0x8021eb1c: mtlr     r0
//   0x8021eb20: addi     r1, r1, 0x10
//   0x8021eb24: blr      
//   0x8021eb28: lfs      f1, 0x58(r3)
//   0x8021eb2c: lfs      f0, 0x68(r3)
//   0x8021eb30: lfs      f2, 0x5c(r3)
//   0x8021eb34: fadds    f3, f1, f0
//

// TODO: Full decompilation requires Ghidra
