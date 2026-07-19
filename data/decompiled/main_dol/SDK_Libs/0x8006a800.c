// Function at 0x8006a800
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006a800: stwu     r1, -0x10(r1)
//   0x8006a804: mflr     r0
//   0x8006a808: cmpwi    r4, 0
//   0x8006a80c: stw      r0, 0x14(r1)
//   0x8006a810: beq      0x8006a8c0
//   0x8006a814: lwz      r5, 0(r3)
//   0x8006a818: cmpwi    r5, 0
//   0x8006a81c: beq      0x8006a8c0
//   0x8006a820: lwz      r3, 0x70(r5)
//   0x8006a824: rlwinm.  r0, r3, 0, 0x19, 0x19
//   0x8006a828: beq      0x8006a85c
//   0x8006a82c: lfs      f0, 0xd0(r5)
//   0x8006a830: mr       r3, r4
//   0x8006a834: lfs      f1, 0xbc(r5)
//   0x8006a838: fneg     f6, f0
//   0x8006a83c: lfs      f2, 0xc0(r5)
//   0x8006a840: lfs      f3, 0xc4(r5)
//   0x8006a844: lfs      f4, 0xc8(r5)
//   0x8006a848: lfs      f5, 0xcc(r5)
//   0x8006a84c: lfs      f7, 0xd4(r5)
//

// TODO: Full decompilation requires Ghidra
