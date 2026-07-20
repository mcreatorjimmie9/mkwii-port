// Function at 0x800632e0
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800632e0: stwu     r1, -0x10(r1)
//   0x800632e4: mflr     r0
//   0x800632e8: stw      r0, 0x14(r1)
//   0x800632ec: stw      r31, 0xc(r1)
//   0x800632f0: stw      r30, 8(r1)
//   0x800632f4: lwz      r0, 0(r3)
//   0x800632f8: cmpwi    r0, 0
//   0x800632fc: beq      0x80063358
//   0x80063300: lbz      r5, -0x6ac0(r13)
//   0x80063304: lis      r30, -0x7fd5
//   0x80063308: li       r0, 0
//   0x8006330c: lbz      r4, 0x3cc0(r30)
//   0x80063310: stb      r0, -0x6ac0(r13)
//   0x80063314: bl       0x800517b0
//   0x80063318: addi     r31, r30, 0x3cc0
//   0x8006331c: lwz      r3, 8(r31)
//   0x80063320: rlwinm.  r0, r3, 0, 0x1d, 0x1d
//   0x80063324: beq      0x80063358
//   0x80063328: clrlwi   r0, r3, 0x1e
//   0x8006332c: cmplwi   r0, 3
//

// TODO: Full decompilation requires Ghidra
