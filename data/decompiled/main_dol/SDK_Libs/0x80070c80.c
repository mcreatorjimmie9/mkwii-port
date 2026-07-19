// Function at 0x80070c80
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x40 bytes
//
// Disassembly (first 20 instructions):
//   0x80070c80: stwu     r1, -0x40(r1)
//   0x80070c84: mflr     r0
//   0x80070c88: stw      r0, 0x44(r1)
//   0x80070c8c: addi     r11, r1, 0x40
//   0x80070c90: bl       0x80020a2c
//   0x80070c94: lwz      r9, 0(r5)
//   0x80070c98: mr       r25, r3
//   0x80070c9c: mr       r26, r5
//   0x80070ca0: mr       r27, r6
//   0x80070ca4: cmpwi    r9, 0
//   0x80070ca8: bne      0x80070cb4
//   0x80070cac: li       r3, 0
//   0x80070cb0: b        0x80070dfc
//   0x80070cb4: cmpwi    r6, 0
//   0x80070cb8: bne      0x80070cc4
//   0x80070cbc: li       r27, 1
//   0x80070cc0: b        0x80070cd0
//   0x80070cc4: cmpwi    r6, 0x10
//   0x80070cc8: ble      0x80070cd0
//   0x80070ccc: li       r27, 0x10
//

// TODO: Full decompilation requires Ghidra
