// Function at 0x80124ca4
// Size: 316 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80124ca4: stwu     r1, -0x10(r1)
//   0x80124ca8: mflr     r0
//   0x80124cac: stw      r0, 0x14(r1)
//   0x80124cb0: stw      r31, 0xc(r1)
//   0x80124cb4: mr       r31, r5
//   0x80124cb8: stw      r30, 8(r1)
//   0x80124cbc: mr       r30, r3
//   0x80124cc0: bl       0x801247f4
//   0x80124cc4: cmpwi    r3, 0
//   0x80124cc8: lwz      r5, 4(r30)
//   0x80124ccc: blt      0x80124ce0
//   0x80124cd0: mulli    r4, r3, 0xc
//   0x80124cd4: lwzx     r0, r5, r4
//   0x80124cd8: rlwinm.  r0, r0, 0, 0, 7
//   0x80124cdc: bne      0x80124ce8
//   0x80124ce0: li       r3, 0
//   0x80124ce4: b        0x80124d08
//   0x80124ce8: addi     r0, r3, 1
//   0x80124cec: stw      r3, 4(r31)
//   0x80124cf0: add      r4, r5, r4
//

// TODO: Full decompilation requires Ghidra
