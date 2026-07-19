// Function at 0x80026210
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80026210: stwu     r1, -0x10(r1)
//   0x80026214: mflr     r0
//   0x80026218: stw      r0, 0x14(r1)
//   0x8002621c: stw      r31, 0xc(r1)
//   0x80026220: addi     r31, r4, 0x90
//   0x80026224: li       r4, 0
//   0x80026228: stw      r30, 8(r1)
//   0x8002622c: mr       r30, r5
//   0x80026230: b        0x80026244
//   0x80026234: lbz      r3, 0x8c(r3)
//   0x80026238: lbz      r0, 0x8c(r30)
//   0x8002623c: cmplw    r3, r0
//   0x80026240: ble      0x80026258
//   0x80026244: mr       r3, r31
//   0x80026248: bl       0x800af100
//   0x8002624c: cmpwi    r3, 0
//   0x80026250: mr       r4, r3
//   0x80026254: bne      0x80026234
//   0x80026258: mr       r3, r31
//   0x8002625c: bl       0x800af0e0
//

// TODO: Full decompilation requires Ghidra
