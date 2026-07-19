// Function at 0x80017cb4
// Size: 276 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80017cb4: stwu     r1, -0x20(r1)
//   0x80017cb8: mflr     r0
//   0x80017cbc: stw      r0, 0x24(r1)
//   0x80017cc0: stfd     f31, 0x18(r1)
//   0x80017cc4: stfd     f1, 8(r1)
//   0x80017cc8: lis      r0, 0x10
//   0x80017ccc: li       r4, 0
//   0x80017cd0: lwz      r5, 8(r1)
//   0x80017cd4: lwz      r3, 0xc(r1)
//   0x80017cd8: cmpw     r5, r0
//   0x80017cdc: bge      0x80017d38
//   0x80017ce0: clrlwi   r0, r5, 1
//   0x80017ce4: or.      r0, r0, r3
//   0x80017ce8: bne      0x80017d04
//   0x80017cec: lfd      f1, -0x7d00(r2)
//   0x80017cf0: li       r0, 0x21
//   0x80017cf4: lfd      f0, -0x6bc8(r13)
//   0x80017cf8: stw      r0, -0x6be8(r13)
//   0x80017cfc: fdiv     f1, f1, f0
//   0x80017d00: b        0x80017db4
//

// TODO: Full decompilation requires Ghidra
