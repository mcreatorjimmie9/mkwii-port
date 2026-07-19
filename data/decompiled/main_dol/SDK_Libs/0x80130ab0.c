// Function at 0x80130ab0
// Size: 412 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80130ab0: stwu     r1, -0x20(r1)
//   0x80130ab4: mflr     r0
//   0x80130ab8: stw      r0, 0x24(r1)
//   0x80130abc: stw      r31, 0x1c(r1)
//   0x80130ac0: stw      r30, 0x18(r1)
//   0x80130ac4: lis      r30, -0x7fcd
//   0x80130ac8: addi     r30, r30, -0x1ea0
//   0x80130acc: stw      r29, 0x14(r1)
//   0x80130ad0: mr       r29, r4
//   0x80130ad4: stw      r28, 0x10(r1)
//   0x80130ad8: lbz      r0, 0x29(r30)
//   0x80130adc: cmplwi   r0, 2
//   0x80130ae0: beq      0x80130b00
//   0x80130ae4: mr       r3, r29
//   0x80130ae8: bl       0x8012ed9c
//   0x80130aec: lbz      r3, 0x1d(r30)
//   0x80130af0: bl       0x8012f918
//   0x80130af4: li       r0, 0xff
//   0x80130af8: stb      r0, 0x1d(r30)
//   0x80130afc: b        0x80130c2c
//

// TODO: Full decompilation requires Ghidra
