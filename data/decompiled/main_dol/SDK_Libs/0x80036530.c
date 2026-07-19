// Function at 0x80036530
// Size: 144 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80036530: stwu     r1, -0x20(r1)
//   0x80036534: mflr     r0
//   0x80036538: stw      r0, 0x24(r1)
//   0x8003653c: stw      r31, 0x1c(r1)
//   0x80036540: li       r31, 0
//   0x80036544: stw      r30, 0x18(r1)
//   0x80036548: mr       r30, r5
//   0x8003654c: stw      r29, 0x14(r1)
//   0x80036550: mr       r29, r4
//   0x80036554: li       r4, 0
//   0x80036558: stw      r28, 0x10(r1)
//   0x8003655c: mr       r28, r3
//   0x80036560: b        0x8003657c
//   0x80036564: rlwinm   r5, r31, 2, 0xe, 0x1d
//   0x80036568: addi     r31, r31, 1
//   0x8003656c: clrlwi   r0, r31, 0x10
//   0x80036570: stwx     r3, r29, r5
//   0x80036574: cmpw     r0, r30
//   0x80036578: bge      0x80036590
//   0x8003657c: mr       r3, r28
//

// TODO: Full decompilation requires Ghidra
