// Function at 0x800795d0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800795d0: stwu     r1, -0x20(r1)
//   0x800795d4: mflr     r0
//   0x800795d8: stw      r0, 0x24(r1)
//   0x800795dc: addi     r11, r1, 0x20
//   0x800795e0: bl       0x80020a3c
//   0x800795e4: lwz      r12, 0(r3)
//   0x800795e8: mr       r26, r3
//   0x800795ec: mr       r27, r4
//   0x800795f0: mr       r28, r5
//   0x800795f4: lwz      r12, 0x58(r12)
//   0x800795f8: mr       r29, r6
//   0x800795fc: mtctr    r12
//   0x80079600: bctrl    
//   0x80079604: cmpwi    r3, 0
//   0x80079608: beq      0x80079618
//   0x8007960c: cntlzw   r0, r28
//   0x80079610: srwi     r0, r0, 5
//   0x80079614: stb      r0, 0xe(r3)
//   0x80079618: lwz      r12, 0(r26)
//   0x8007961c: mr       r3, r26
//

// TODO: Full decompilation requires Ghidra
