// Function at 0x80126c74
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80126c74: stwu     r1, -0x10(r1)
//   0x80126c78: mflr     r0
//   0x80126c7c: stw      r0, 0x14(r1)
//   0x80126c80: stw      r31, 0xc(r1)
//   0x80126c84: lwz      r6, -0x66f8(r13)
//   0x80126c88: addic.   r31, r6, -0x24
//   0x80126c8c: bge      0x80126c98
//   0x80126c90: lwz      r0, -0x66f4(r13)
//   0x80126c94: add      r31, r31, r0
//   0x80126c98: lwz      r0, -0x66fc(r13)
//   0x80126c9c: subf.    r31, r0, r31
//   0x80126ca0: bge      0x80126cac
//   0x80126ca4: lwz      r0, -0x66f4(r13)
//   0x80126ca8: add      r31, r31, r0
//   0x80126cac: cmpw     r5, r31
//   0x80126cb0: ble      0x80126cb8
//   0x80126cb4: b        0x80126cbc
//   0x80126cb8: mr       r31, r5
//   0x80126cbc: mulli    r0, r3, 0x168
//   0x80126cc0: lis      r5, -0x7fd1
//

// TODO: Full decompilation requires Ghidra
