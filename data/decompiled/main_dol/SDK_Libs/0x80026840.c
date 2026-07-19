// Function at 0x80026840
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x1020 bytes
//
// Disassembly (first 20 instructions):
//   0x80026840: stwu     r1, -0x1020(r1)
//   0x80026844: mflr     r0
//   0x80026848: stw      r0, 0x1024(r1)
//   0x8002684c: addi     r4, r1, 8
//   0x80026850: stw      r31, 0x101c(r1)
//   0x80026854: stw      r30, 0x1018(r1)
//   0x80026858: stw      r29, 0x1014(r1)
//   0x8002685c: li       r29, 0
//   0x80026860: stw      r28, 0x1010(r1)
//   0x80026864: lhz      r5, 0x2c(r3)
//   0x80026868: addi     r3, r3, 0x24
//   0x8002686c: bl       0x80036530
//   0x80026870: addi     r30, r1, 8
//   0x80026874: clrlwi   r31, r3, 0x10
//   0x80026878: li       r28, 0
//   0x8002687c: b        0x80026894
//   0x80026880: rlwinm   r0, r28, 2, 0xe, 0x1d
//   0x80026884: lwzx     r3, r30, r0
//   0x80026888: bl       0x80027be0
//   0x8002688c: add      r29, r29, r3
//

// TODO: Full decompilation requires Ghidra
