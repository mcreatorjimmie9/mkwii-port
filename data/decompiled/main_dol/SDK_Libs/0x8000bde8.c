// Function at 0x8000bde8
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8000bde8: stwu     r1, -0x20(r1)
//   0x8000bdec: mflr     r0
//   0x8000bdf0: stw      r0, 0x24(r1)
//   0x8000bdf4: stw      r31, 0x1c(r1)
//   0x8000bdf8: li       r31, 0
//   0x8000bdfc: stw      r30, 0x18(r1)
//   0x8000be00: li       r30, 3
//   0x8000be04: stw      r29, 0x14(r1)
//   0x8000be08: lis      r29, -0x7fd9
//   0x8000be0c: addi     r29, r29, -0x3650
//   0x8000be10: b        0x8000be68
//   0x8000be14: lwz      r0, 4(r29)
//   0x8000be18: rlwinm.  r0, r0, 0xa, 0x1d, 0x1f
//   0x8000be1c: beq      0x8000be28
//   0x8000be20: mr       r3, r29
//   0x8000be24: bl       0x8000e0fc
//   0x8000be28: mr       r3, r29
//   0x8000be2c: lwz      r29, 0x4c(r29)
//   0x8000be30: lbz      r0, 0xc(r3)
//   0x8000be34: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
