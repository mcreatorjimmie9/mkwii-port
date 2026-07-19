// Function at 0x801def84
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801def84: stwu     r1, -0x20(r1)
//   0x801def88: mflr     r0
//   0x801def8c: stw      r0, 0x24(r1)
//   0x801def90: stw      r31, 0x1c(r1)
//   0x801def94: bl       0x801daf1c
//   0x801def98: lwz      r4, -0x5f28(r13)
//   0x801def9c: mr       r31, r3
//   0x801defa0: cmpwi    r4, 0
//   0x801defa4: bne      0x801defb0
//   0x801defa8: li       r3, 0
//   0x801defac: b        0x801df00c
//   0x801defb0: addic.   r0, r4, -1
//   0x801defb4: stw      r0, -0x5f28(r13)
//   0x801defb8: ble      0x801defc4
//   0x801defbc: li       r3, 0
//   0x801defc0: b        0x801df00c
//   0x801defc4: addi     r3, r13, -0x5f28
//   0x801defc8: addi     r4, r1, 8
//   0x801defcc: lwz      r3, 4(r3)
//   0x801defd0: bl       0x801dfe80
//

// TODO: Full decompilation requires Ghidra
