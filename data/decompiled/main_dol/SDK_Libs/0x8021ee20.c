// Function at 0x8021ee20
// Size: 204 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8021ee20: stwu     r1, -0x10(r1)
//   0x8021ee24: mflr     r0
//   0x8021ee28: cmpwi    r4, 0
//   0x8021ee2c: stw      r0, 0x14(r1)
//   0x8021ee30: stw      r31, 0xc(r1)
//   0x8021ee34: mr       r31, r4
//   0x8021ee38: stw      r30, 8(r1)
//   0x8021ee3c: mr       r30, r3
//   0x8021ee40: bne      0x8021ee64
//   0x8021ee44: lwz      r0, -0x6c48(r13)
//   0x8021ee48: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8021ee4c: bne      0x8021ee60
//   0x8021ee50: lhz      r0, 0x18(r3)
//   0x8021ee54: mr       r4, r30
//   0x8021ee58: rlwinm   r3, r0, 0x1e, 0x1f, 0x1f
//   0x8021ee5c: bl       0x802447dc
//   0x8021ee60: bl       0x80171070
//   0x8021ee64: lwz      r0, 0x1c(r30)
//   0x8021ee68: cmpwi    r0, 2
//   0x8021ee6c: bne      0x8021ee80
//

// TODO: Full decompilation requires Ghidra
