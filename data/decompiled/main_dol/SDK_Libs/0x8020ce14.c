// Function at 0x8020ce14
// Size: 5708 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8020ce14: stwu     r1, -0x30(r1)
//   0x8020ce18: mflr     r0
//   0x8020ce1c: stw      r0, 0x34(r1)
//   0x8020ce20: addi     r11, r1, 0x30
//   0x8020ce24: bl       0x80020a34
//   0x8020ce28: cmplwi   r6, 0x1a
//   0x8020ce2c: mr       r27, r3
//   0x8020ce30: mr       r29, r4
//   0x8020ce34: mr       r28, r5
//   0x8020ce38: bge      0x8020cef4
//   0x8020ce3c: lis      r5, -0x7fc8
//   0x8020ce40: slwi     r0, r6, 4
//   0x8020ce44: addi     r5, r5, -0x1248
//   0x8020ce48: add      r5, r5, r0
//   0x8020ce4c: lwz      r12, 4(r5)
//   0x8020ce50: cmpwi    r12, 0
//   0x8020ce54: beq      0x8020ce68
//   0x8020ce58: mr       r5, r28
//   0x8020ce5c: mtctr    r12
//   0x8020ce60: bctrl    
//

// TODO: Full decompilation requires Ghidra
