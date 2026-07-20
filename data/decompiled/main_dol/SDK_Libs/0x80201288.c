// Function at 0x80201288
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80201288: stwu     r1, -0x10(r1)
//   0x8020128c: mflr     r0
//   0x80201290: stw      r0, 0x14(r1)
//   0x80201294: stw      r31, 0xc(r1)
//   0x80201298: mr       r31, r3
//   0x8020129c: stw      r30, 8(r1)
//   0x802012a0: li       r30, 0
//   0x802012a4: clrlwi   r0, r30, 0x10
//   0x802012a8: mulli    r0, r0, 0x28c
//   0x802012ac: add      r4, r31, r0
//   0x802012b0: lwz      r0, 0x40(r4)
//   0x802012b4: addi     r3, r4, 0x44
//   0x802012b8: rlwinm   r0, r0, 0, 0, 0x1c
//   0x802012bc: stw      r0, 0x40(r4)
//   0x802012c0: bl       0x801fd66c
//   0x802012c4: addi     r30, r30, 1
//   0x802012c8: cmplwi   r30, 5
//   0x802012cc: blt      0x802012a4
//   0x802012d0: lwz      r4, 0xcfc(r31)
//   0x802012d4: li       r0, 0
//

// TODO: Full decompilation requires Ghidra
