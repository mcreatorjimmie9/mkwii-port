// Function at 0x8010f08c
// Size: 276 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8010f08c: stwu     r1, -0x10(r1)
//   0x8010f090: mflr     r0
//   0x8010f094: stw      r0, 0x14(r1)
//   0x8010f098: stw      r31, 0xc(r1)
//   0x8010f09c: mr       r31, r3
//   0x8010f0a0: bl       0x800f2428
//   0x8010f0a4: lwz      r0, 0(r31)
//   0x8010f0a8: cmpwi    r0, -1
//   0x8010f0ac: beq      0x8010f18c
//   0x8010f0b0: lwz      r4, 0xb8(r31)
//   0x8010f0b4: cmpwi    r4, 0
//   0x8010f0b8: ble      0x8010f118
//   0x8010f0bc: lwz      r0, 0xac(r31)
//   0x8010f0c0: subf     r0, r0, r3
//   0x8010f0c4: cmplwi   r0, 0x2710
//   0x8010f0c8: ble      0x8010f118
//   0x8010f0cc: cmpwi    r4, 4
//   0x8010f0d0: blt      0x8010f0fc
//   0x8010f0d4: lwz      r12, 0x9c(r31)
//   0x8010f0d8: li       r0, 0
//

// TODO: Full decompilation requires Ghidra
