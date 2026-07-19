// Function at 0x800fee98
// Size: 220 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x800fee98: stwu     r1, -0x30(r1)
//   0x800fee9c: mflr     r0
//   0x800feea0: stw      r0, 0x34(r1)
//   0x800feea4: addi     r11, r1, 0x30
//   0x800feea8: bl       0x80020a38
//   0x800feeac: cmpwi    r5, 0
//   0x800feeb0: mr       r25, r3
//   0x800feeb4: mr       r26, r4
//   0x800feeb8: mr       r27, r5
//   0x800feebc: mr       r28, r6
//   0x800feec0: bne      0x800feecc
//   0x800feec4: li       r3, 0
//   0x800feec8: b        0x800fef5c
//   0x800feecc: lwz      r31, 8(r4)
//   0x800feed0: lwz      r30, 4(r4)
//   0x800feed4: lwz      r29, 0(r4)
//   0x800feed8: subf     r0, r31, r30
//   0x800feedc: cmpw     r0, r6
//   0x800feee0: bge      0x800fef28
//   0x800feee4: cmpwi    r6, 0x4000
//

// TODO: Full decompilation requires Ghidra
