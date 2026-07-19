// Function at 0x801f4524
// Size: 96 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f4524: stwu     r1, -0x10(r1)
//   0x801f4528: mflr     r0
//   0x801f452c: cmpwi    r4, 0
//   0x801f4530: stw      r0, 0x14(r1)
//   0x801f4534: bne      0x801f4540
//   0x801f4538: li       r3, 1
//   0x801f453c: b        0x801f455c
//   0x801f4540: li       r0, 0
//   0x801f4544: stw      r0, 0(r4)
//   0x801f4548: bl       0x801f1540
//   0x801f454c: neg      r0, r3
//   0x801f4550: or       r0, r0, r3
//   0x801f4554: srawi    r0, r0, 0x1f
//   0x801f4558: and      r3, r3, r0
//   0x801f455c: lwz      r0, 0x14(r1)
//   0x801f4560: mtlr     r0
//   0x801f4564: addi     r1, r1, 0x10
//   0x801f4568: blr      
//   0x801f456c: cmpwi    r3, 0
//   0x801f4570: bne      0x801f457c
//

// TODO: Full decompilation requires Ghidra
