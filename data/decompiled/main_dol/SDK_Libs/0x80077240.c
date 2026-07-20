// Function at 0x80077240
// Size: 368 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80077240: stwu     r1, -0x10(r1)
//   0x80077244: mflr     r0
//   0x80077248: cmplwi   r4, 9
//   0x8007724c: stw      r0, 0x14(r1)
//   0x80077250: stw      r31, 0xc(r1)
//   0x80077254: mr       r31, r3
//   0x80077258: bge      0x8007727c
//   0x8007725c: addi     r7, r4, -1
//   0x80077260: li       r8, 1
//   0x80077264: lwz      r0, 0xcc(r3)
//   0x80077268: slw      r7, r8, r7
//   0x8007726c: and.     r0, r7, r0
//   0x80077270: beq      0x8007727c
//   0x80077274: li       r0, 1
//   0x80077278: b        0x80077280
//   0x8007727c: li       r0, 0
//   0x80077280: cmpwi    r0, 0
//   0x80077284: bne      0x8007732c
//   0x80077288: cmplwi   r4, 5
//   0x8007728c: beq      0x800772a4
//

// TODO: Full decompilation requires Ghidra
