// Function at 0x801f4584
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f4584: stwu     r1, -0x10(r1)
//   0x801f4588: mflr     r0
//   0x801f458c: cmpwi    r3, 0
//   0x801f4590: stw      r0, 0x14(r1)
//   0x801f4594: bne      0x801f45a0
//   0x801f4598: li       r3, 1
//   0x801f459c: b        0x801f45d0
//   0x801f45a0: cmpwi    r5, 0
//   0x801f45a4: bne      0x801f45b0
//   0x801f45a8: li       r3, 1
//   0x801f45ac: b        0x801f45d0
//   0x801f45b0: li       r0, 0
//   0x801f45b4: clrlwi   r4, r4, 0x10
//   0x801f45b8: stw      r0, 0(r5)
//   0x801f45bc: bl       0x801f2abc
//   0x801f45c0: neg      r0, r3
//   0x801f45c4: or       r0, r0, r3
//   0x801f45c8: srawi    r0, r0, 0x1f
//   0x801f45cc: and      r3, r3, r0
//   0x801f45d0: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
