// Function at 0x80020604
// Size: 128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80020604: stwu     r1, -0x20(r1)
//   0x80020608: mflr     r0
//   0x8002060c: cmpwi    r3, 0
//   0x80020610: stw      r0, 0x24(r1)
//   0x80020614: stmw     r26, 8(r1)
//   0x80020618: mr       r26, r3
//   0x8002061c: mr       r27, r4
//   0x80020620: beq      0x80020670
//   0x80020624: cmpwi    r4, 0
//   0x80020628: beq      0x80020668
//   0x8002062c: lwz      r29, -0x10(r3)
//   0x80020630: li       r31, 0
//   0x80020634: lwz      r30, -0xc(r3)
//   0x80020638: mullw    r0, r29, r30
//   0x8002063c: add      r28, r3, r0
//   0x80020640: b        0x80020660
//   0x80020644: subf     r28, r29, r28
//   0x80020648: mr       r12, r27
//   0x8002064c: mr       r3, r28
//   0x80020650: li       r4, -1
//

// TODO: Full decompilation requires Ghidra
