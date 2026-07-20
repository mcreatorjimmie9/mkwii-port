// Function at 0x800794d0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800794d0: stwu     r1, -0x20(r1)
//   0x800794d4: mflr     r0
//   0x800794d8: stw      r0, 0x24(r1)
//   0x800794dc: addi     r11, r1, 0x20
//   0x800794e0: bl       0x80020a3c
//   0x800794e4: lwz      r12, 0(r3)
//   0x800794e8: mr       r26, r3
//   0x800794ec: mr       r27, r4
//   0x800794f0: mr       r28, r5
//   0x800794f4: lwz      r12, 0x54(r12)
//   0x800794f8: mr       r29, r6
//   0x800794fc: mtctr    r12
//   0x80079500: bctrl    
//   0x80079504: cmpwi    r3, 0
//   0x80079508: beq      0x80079518
//   0x8007950c: cntlzw   r0, r28
//   0x80079510: srwi     r0, r0, 5
//   0x80079514: stb      r0, 0xe(r3)
//   0x80079518: lwz      r12, 0(r26)
//   0x8007951c: mr       r3, r26
//

// TODO: Full decompilation requires Ghidra
