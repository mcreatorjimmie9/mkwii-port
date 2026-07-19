// Function at 0x8000ddf4
// Size: 776 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x8000ddf4: stwu     r1, -0x30(r1)
//   0x8000ddf8: mflr     r0
//   0x8000ddfc: stw      r0, 0x34(r1)
//   0x8000de00: stmw     r25, 0x14(r1)
//   0x8000de04: mr       r27, r4
//   0x8000de08: mr       r28, r6
//   0x8000de0c: mr       r26, r3
//   0x8000de10: mr       r25, r5
//   0x8000de14: li       r4, 0
//   0x8000de18: mr       r3, r28
//   0x8000de1c: bl       0x80014a78
//   0x8000de20: cmpwi    r3, 0
//   0x8000de24: bne      0x8000de34
//   0x8000de28: mr       r3, r28
//   0x8000de2c: li       r4, -1
//   0x8000de30: bl       0x80014a78
//   0x8000de34: mullw.   r30, r27, r25
//   0x8000de38: beq      0x8000de54
//   0x8000de3c: lbz      r0, 0xa(r28)
//   0x8000de40: cmpwi    r0, 0
//

// TODO: Full decompilation requires Ghidra
