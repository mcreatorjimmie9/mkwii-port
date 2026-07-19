// Function at 0x8014cb1c
// Size: 408 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8014cb1c: stwu     r1, -0x30(r1)
//   0x8014cb20: mflr     r0
//   0x8014cb24: stw      r0, 0x34(r1)
//   0x8014cb28: addi     r11, r1, 0x30
//   0x8014cb2c: bl       0x80020a30
//   0x8014cb30: lis      r3, -0x7fcd
//   0x8014cb34: li       r26, 0
//   0x8014cb38: addi     r3, r3, 0x4fc0
//   0x8014cb3c: lhz      r4, 0x7b8(r3)
//   0x8014cb40: cmpwi    r4, 0
//   0x8014cb44: beq      0x8014cc9c
//   0x8014cb48: lbz      r0, 8(r3)
//   0x8014cb4c: cmpwi    r0, 0
//   0x8014cb50: beq      0x8014cb64
//   0x8014cb54: lbz      r0, 0x62(r3)
//   0x8014cb58: cmplwi   r0, 1
//   0x8014cb5c: bne      0x8014cb64
//   0x8014cb60: li       r26, 1
//   0x8014cb64: lbz      r0, 0x64(r3)
//   0x8014cb68: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
