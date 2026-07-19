// Function at 0x80192544
// Size: 240 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80192544: stwu     r1, -0x10(r1)
//   0x80192548: mflr     r0
//   0x8019254c: lis      r4, -0x7fcc
//   0x80192550: stw      r0, 0x14(r1)
//   0x80192554: mulli    r0, r3, 0x4c
//   0x80192558: stw      r31, 0xc(r1)
//   0x8019255c: stw      r30, 8(r1)
//   0x80192560: lwz      r3, 0xd5c(r4)
//   0x80192564: add      r30, r3, r0
//   0x80192568: lwz      r31, 8(r30)
//   0x8019256c: cmpwi    r31, 0
//   0x80192570: beq      0x8019261c
//   0x80192574: lwz      r0, 0x20(r30)
//   0x80192578: cmpwi    r0, 0
//   0x8019257c: bne      0x801925c4
//   0x80192580: lwz      r3, 4(r30)
//   0x80192584: lhz      r0, 0x38(r3)
//   0x80192588: cmpwi    r0, 0
//   0x8019258c: bne      0x801925c4
//   0x80192590: lbz      r3, 0xc(r30)
//

// TODO: Full decompilation requires Ghidra
