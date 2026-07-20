// Function at 0x80063bb0
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80063bb0: stwu     r1, -0x10(r1)
//   0x80063bb4: mflr     r0
//   0x80063bb8: lis      r4, -0x7fd5
//   0x80063bbc: mr       r5, r3
//   0x80063bc0: stw      r0, 0x14(r1)
//   0x80063bc4: addi     r4, r4, 0x3ef0
//   0x80063bc8: lwz      r4, 4(r4)
//   0x80063bcc: cmpwi    r4, 0
//   0x80063bd0: beq      0x80063be0
//   0x80063bd4: mulli    r0, r3, 0x24
//   0x80063bd8: add      r3, r4, r0
//   0x80063bdc: b        0x80063c64
//   0x80063be0: lbz      r0, -0x6ab0(r13)
//   0x80063be4: extsb.   r0, r0
//   0x80063be8: bne      0x80063bf4
//   0x80063bec: li       r0, 1
//   0x80063bf0: stb      r0, -0x6ab0(r13)
//   0x80063bf4: lis      r4, -0x7fd5
//   0x80063bf8: lis      r3, -0x7fd4
//   0x80063bfc: lwz      r4, 0x3ef0(r4)
//

// TODO: Full decompilation requires Ghidra
