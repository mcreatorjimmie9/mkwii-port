// Function at 0x80077030
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80077030: stwu     r1, -0x10(r1)
//   0x80077034: mflr     r0
//   0x80077038: stw      r0, 0x14(r1)
//   0x8007703c: stw      r31, 0xc(r1)
//   0x80077040: mr       r31, r3
//   0x80077044: lwz      r3, -0x7e78(r13)
//   0x80077048: bl       0x801a0464
//   0x8007704c: cmpwi    r31, 0
//   0x80077050: beq      0x8007705c
//   0x80077054: bl       0x800b16f0
//   0x80077058: b        0x80077060
//   0x8007705c: bl       0x800b1750
//   0x80077060: li       r3, 4
//   0x80077064: oris     r3, r3, 4
//   0x80077068: mtspr    0x392, r3
//   0x8007706c: li       r3, 5
//   0x80077070: oris     r3, r3, 5
//   0x80077074: mtspr    0x393, r3
//   0x80077078: li       r3, 6
//   0x8007707c: oris     r3, r3, 6
//

// TODO: Full decompilation requires Ghidra
