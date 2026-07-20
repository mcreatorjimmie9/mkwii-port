// Function at 0x8001c800
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8001c800: stwu     r1, -0x20(r1)
//   0x8001c804: mflr     r0
//   0x8001c808: cmpwi    r5, 0
//   0x8001c80c: stw      r0, 0x24(r1)
//   0x8001c810: stw      r31, 0x1c(r1)
//   0x8001c814: li       r31, 0
//   0x8001c818: stw      r30, 0x18(r1)
//   0x8001c81c: mr       r30, r5
//   0x8001c820: stw      r29, 0x14(r1)
//   0x8001c824: mr       r29, r3
//   0x8001c828: bne      0x8001c834
//   0x8001c82c: li       r3, 0
//   0x8001c830: b        0x8001c874
//   0x8001c834: lwz      r6, 8(r3)
//   0x8001c838: lwz      r0, 4(r3)
//   0x8001c83c: subf     r0, r6, r0
//   0x8001c840: cmplw    r5, r0
//   0x8001c844: ble      0x8001c850
//   0x8001c848: li       r31, 0x302
//   0x8001c84c: mr       r30, r0
//

// TODO: Full decompilation requires Ghidra
