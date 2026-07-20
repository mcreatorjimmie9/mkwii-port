// Function at 0x801ddf40
// Size: 220 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801ddf40: stwu     r1, -0x10(r1)
//   0x801ddf44: mflr     r0
//   0x801ddf48: stw      r0, 0x14(r1)
//   0x801ddf4c: lwz      r6, 4(r3)
//   0x801ddf50: rlwinm.  r0, r6, 0, 0x17, 0x17
//   0x801ddf54: beq      0x801ddf60
//   0x801ddf58: rlwinm.  r0, r6, 0, 0x16, 0x16
//   0x801ddf5c: beq      0x801ddf68
//   0x801ddf60: li       r3, -7
//   0x801ddf64: b        0x801ddfb4
//   0x801ddf68: lwz      r0, 0xe4(r3)
//   0x801ddf6c: cmpwi    r0, 0
//   0x801ddf70: beq      0x801ddf7c
//   0x801ddf74: li       r3, -6
//   0x801ddf78: b        0x801ddfb4
//   0x801ddf7c: cmplwi   r5, 0x23
//   0x801ddf80: ble      0x801ddf8c
//   0x801ddf84: li       r3, -3
//   0x801ddf88: b        0x801ddfb4
//   0x801ddf8c: cmpwi    r4, 0
//

// TODO: Full decompilation requires Ghidra
