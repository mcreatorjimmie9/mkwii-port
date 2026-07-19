// Function at 0x801daf1c
// Size: 232 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801daf1c: stwu     r1, -0x10(r1)
//   0x801daf20: mflr     r0
//   0x801daf24: stw      r0, 0x14(r1)
//   0x801daf28: stw      r31, 0xc(r1)
//   0x801daf2c: li       r31, 0
//   0x801daf30: stw      r30, 8(r1)
//   0x801daf34: mr       r30, r3
//   0x801daf38: lwz      r0, 4(r3)
//   0x801daf3c: cmplwi   r0, 9
//   0x801daf40: beq      0x801daf4c
//   0x801daf44: cmplwi   r0, 0x109
//   0x801daf48: bne      0x801daf60
//   0x801daf4c: mr       r3, r30
//   0x801daf50: bl       0x801dbef0
//   0x801daf54: li       r0, 0
//   0x801daf58: mr       r31, r3
//   0x801daf5c: stw      r0, -0x5f54(r13)
//   0x801daf60: lwz      r0, 4(r30)
//   0x801daf64: rlwinm.  r0, r0, 0, 0x17, 0x17
//   0x801daf68: beq      0x801dafd8
//

// TODO: Full decompilation requires Ghidra
