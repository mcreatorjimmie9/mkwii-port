// Function at 0x80056240
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80056240: stwu     r1, -0x10(r1)
//   0x80056244: mflr     r0
//   0x80056248: lwz      r3, 0(r3)
//   0x8005624c: stw      r0, 0x14(r1)
//   0x80056250: lwz      r0, 0x10(r3)
//   0x80056254: cmpwi    r0, 0
//   0x80056258: beq      0x80056264
//   0x8005625c: add      r0, r3, r0
//   0x80056260: b        0x80056268
//   0x80056264: li       r0, 0
//   0x80056268: lis      r3, -0x7fd9
//   0x8005626c: stw      r0, 0xc(r1)
//   0x80056270: addi     r3, r3, -0x1aa0
//   0x80056274: addi     r4, r1, 8
//   0x80056278: stw      r3, 8(r1)
//   0x8005627c: addi     r3, r1, 0xc
//   0x80056280: bl       0x8004c030
//   0x80056284: neg      r0, r3
//   0x80056288: or       r0, r0, r3
//   0x8005628c: srwi     r3, r0, 0x1f
//

// TODO: Full decompilation requires Ghidra
