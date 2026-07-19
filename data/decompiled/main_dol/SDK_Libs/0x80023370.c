// Function at 0x80023370
// Size: 400 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x80023370: stwu     r1, -0x30(r1)
//   0x80023374: mflr     r0
//   0x80023378: stw      r0, 0x34(r1)
//   0x8002337c: addi     r11, r1, 0x30
//   0x80023380: bl       0x80020a30
//   0x80023384: lhz      r23, 0(r3)
//   0x80023388: lwz      r24, 4(r3)
//   0x8002338c: cmplwi   r23, 0x11
//   0x80023390: lwz      r26, 8(r3)
//   0x80023394: lwz      r27, 0xc(r3)
//   0x80023398: bge      0x800233ac
//   0x8002339c: lis      r3, -0x7fd6
//   0x800233a0: lwz      r0, 4(r24)
//   0x800233a4: addi     r3, r3, 0x2d38
//   0x800233a8: stw      r0, 0x33c(r3)
//   0x800233ac: lis      r25, -0x7fd6
//   0x800233b0: addi     r25, r25, 0x2d38
//   0x800233b4: lwz      r0, 0x340(r25)
//   0x800233b8: cmpwi    r0, 0
//   0x800233bc: beq      0x800233cc
//

// TODO: Full decompilation requires Ghidra
