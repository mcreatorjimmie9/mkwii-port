// Function at 0x800a10e0
// Size: 992 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x1250 bytes
//
// Disassembly (first 20 instructions):
//   0x800a10e0: stwu     r1, -0x1250(r1)
//   0x800a10e4: mflr     r0
//   0x800a10e8: stw      r0, 0x1254(r1)
//   0x800a10ec: addi     r11, r1, 0x1250
//   0x800a10f0: bl       0x80020a3c
//   0x800a10f4: mr       r31, r3
//   0x800a10f8: li       r26, 0
//   0x800a10fc: li       r27, 0
//   0x800a1100: b        0x800a1118
//   0x800a1104: lwz      r0, 0x34(r31)
//   0x800a1108: add      r3, r0, r27
//   0x800a110c: bl       0x800a33b0
//   0x800a1110: addi     r27, r27, 0x5c
//   0x800a1114: addi     r26, r26, 1
//   0x800a1118: lwz      r0, 0x30(r31)
//   0x800a111c: cmplw    r26, r0
//   0x800a1120: blt      0x800a1104
//   0x800a1124: lwz      r0, 0x3c(r31)
//   0x800a1128: cmplwi   r0, 2
//   0x800a112c: blt      0x800a1244
//

// TODO: Full decompilation requires Ghidra
