// Function at 0x80135ef0
// Size: 104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80135ef0: stwu     r1, -0x10(r1)
//   0x80135ef4: mflr     r0
//   0x80135ef8: cmpwi    r4, 0
//   0x80135efc: stw      r0, 0x14(r1)
//   0x80135f00: beq      0x80135f10
//   0x80135f04: lhz      r0, 6(r4)
//   0x80135f08: clrlwi   r3, r0, 0x18
//   0x80135f0c: b        0x80135f14
//   0x80135f10: lbz      r3, 0x16(r3)
//   0x80135f14: li       r0, 6
//   0x80135f18: stb      r3, 9(r1)
//   0x80135f1c: stb      r0, 8(r1)
//   0x80135f20: bl       0x80147cb8
//   0x80135f24: clrlwi.  r0, r3, 0x18
//   0x80135f28: beq      0x80135f48
//   0x80135f2c: lis      r5, -0x7fcd
//   0x80135f30: addi     r4, r1, 8
//   0x80135f34: addi     r5, r5, 0x1cc8
//   0x80135f38: li       r3, 3
//   0x80135f3c: lwz      r12, 0x224(r5)
//

// TODO: Full decompilation requires Ghidra
