// Function at 0x8020b214
// Size: 960 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8020b214: stwu     r1, -0x30(r1)
//   0x8020b218: mflr     r0
//   0x8020b21c: stw      r0, 0x34(r1)
//   0x8020b220: addi     r11, r1, 0x30
//   0x8020b224: bl       0x80020a38
//   0x8020b228: mr       r30, r3
//   0x8020b22c: li       r4, 0
//   0x8020b230: b        0x8020b23c
//   0x8020b234: addi     r3, r3, 1
//   0x8020b238: addi     r4, r4, 1
//   0x8020b23c: lbz      r0, 0(r3)
//   0x8020b240: extsb.   r0, r0
//   0x8020b244: bne      0x8020b234
//   0x8020b248: cmplwi   r4, 8
//   0x8020b24c: bge      0x8020b324
//   0x8020b250: mr       r3, r30
//   0x8020b254: li       r28, 0
//   0x8020b258: b        0x8020b264
//   0x8020b25c: addi     r3, r3, 1
//   0x8020b260: addi     r28, r28, 1
//

// TODO: Full decompilation requires Ghidra
