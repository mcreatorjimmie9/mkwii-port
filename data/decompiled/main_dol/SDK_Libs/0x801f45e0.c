// Function at 0x801f45e0
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f45e0: stwu     r1, -0x10(r1)
//   0x801f45e4: mflr     r0
//   0x801f45e8: cmpwi    r3, 0
//   0x801f45ec: stw      r0, 0x14(r1)
//   0x801f45f0: bne      0x801f45fc
//   0x801f45f4: li       r3, 1
//   0x801f45f8: b        0x801f4610
//   0x801f45fc: bl       0x801f2be0
//   0x801f4600: neg      r0, r3
//   0x801f4604: or       r0, r0, r3
//   0x801f4608: srawi    r0, r0, 0x1f
//   0x801f460c: and      r3, r3, r0
//   0x801f4610: lwz      r0, 0x14(r1)
//   0x801f4614: mtlr     r0
//   0x801f4618: addi     r1, r1, 0x10
//   0x801f461c: blr      
//

// TODO: Full decompilation requires Ghidra
