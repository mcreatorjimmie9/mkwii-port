// Function at 0x801ddee4
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801ddee4: stwu     r1, -0x10(r1)
//   0x801ddee8: mflr     r0
//   0x801ddeec: stw      r0, 0x14(r1)
//   0x801ddef0: lwz      r5, 4(r3)
//   0x801ddef4: rlwinm.  r0, r5, 0, 0x17, 0x17
//   0x801ddef8: beq      0x801ddf04
//   0x801ddefc: rlwinm.  r0, r5, 0, 0x16, 0x16
//   0x801ddf00: beq      0x801ddf0c
//   0x801ddf04: li       r3, -7
//   0x801ddf08: b        0x801ddf30
//   0x801ddf0c: lwz      r0, 0xdc(r3)
//   0x801ddf10: cmpwi    r0, 0
//   0x801ddf14: beq      0x801ddf20
//   0x801ddf18: li       r3, -6
//   0x801ddf1c: b        0x801ddf30
//   0x801ddf20: li       r5, 0x4a
//   0x801ddf24: addi     r3, r3, 0xd8
//   0x801ddf28: bl       0x801dc91c
//   0x801ddf2c: li       r3, 0
//   0x801ddf30: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
