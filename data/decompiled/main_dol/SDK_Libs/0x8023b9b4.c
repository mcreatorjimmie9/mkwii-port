// Function at 0x8023b9b4
// Size: 788 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8023b9b4: stwu     r1, -0x20(r1)
//   0x8023b9b8: mflr     r0
//   0x8023b9bc: stw      r0, 0x24(r1)
//   0x8023b9c0: stmw     r26, 8(r1)
//   0x8023b9c4: mr       r27, r3
//   0x8023b9c8: mr       r28, r4
//   0x8023b9cc: mr       r29, r5
//   0x8023b9d0: li       r30, 0
//   0x8023b9d4: li       r31, 1
//   0x8023b9d8: b        0x8023bc84
//   0x8023b9dc: clrlwi   r3, r30, 0x10
//   0x8023b9e0: slw      r0, r31, r3
//   0x8023b9e4: and.     r0, r28, r0
//   0x8023b9e8: beq      0x8023bc80
//   0x8023b9ec: addi     r0, r3, -1
//   0x8023b9f0: cmplwi   r0, 1
//   0x8023b9f4: ble      0x8023ba40
//   0x8023b9f8: cmpwi    r3, 0
//   0x8023b9fc: beq      0x8023ba1c
//   0x8023ba00: cmpwi    r3, 3
//

// TODO: Full decompilation requires Ghidra
