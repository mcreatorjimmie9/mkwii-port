// Function at 0x8020c514
// Size: 124 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8020c514: stwu     r1, -0x10(r1)
//   0x8020c518: mflr     r0
//   0x8020c51c: stw      r0, 0x14(r1)
//   0x8020c520: stw      r31, 0xc(r1)
//   0x8020c524: stw      r30, 8(r1)
//   0x8020c528: mr       r30, r4
//   0x8020c52c: bl       0x80208ec4
//   0x8020c530: cmpwi    r3, 0
//   0x8020c534: li       r31, -1
//   0x8020c538: beq      0x8020c574
//   0x8020c53c: lwz      r4, 0(r3)
//   0x8020c540: cmpwi    r4, 0
//   0x8020c544: beq      0x8020c574
//   0x8020c548: lwz      r0, 8(r4)
//   0x8020c54c: cmpwi    r0, 0
//   0x8020c550: bne      0x8020c570
//   0x8020c554: bl       0x80208e64
//   0x8020c558: cmpwi    r3, -1
//   0x8020c55c: beq      0x8020c574
//   0x8020c560: mr       r4, r30
//

// TODO: Full decompilation requires Ghidra
