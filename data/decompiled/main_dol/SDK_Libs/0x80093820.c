// Function at 0x80093820
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80093820: stwu     r1, -0x20(r1)
//   0x80093824: mflr     r0
//   0x80093828: stw      r0, 0x24(r1)
//   0x8009382c: stw      r31, 0x1c(r1)
//   0x80093830: stw      r30, 0x18(r1)
//   0x80093834: mr       r30, r3
//   0x80093838: addi     r3, r3, 0x30
//   0x8009383c: bl       0x8012a0b4
//   0x80093840: addi     r0, r3, 0x87
//   0x80093844: addi     r3, r30, 0x88
//   0x80093848: rlwinm   r31, r0, 0, 0, 0x1a
//   0x8009384c: bl       0x8012ab3c
//   0x80093850: addi     r0, r3, 0x87
//   0x80093854: rlwinm   r3, r0, 0, 0, 0x1a
//   0x80093858: cmplw    r3, r31
//   0x8009385c: bge      0x80093864
//   0x80093860: mr       r3, r31
//   0x80093864: lwz      r4, 0x14(r30)
//   0x80093868: cmpwi    r4, 0
//   0x8009386c: bne      0x80093878
//

// TODO: Full decompilation requires Ghidra
