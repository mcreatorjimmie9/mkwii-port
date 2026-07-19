// Function at 0x801b1fd4
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801b1fd4: stwu     r1, -0x20(r1)
//   0x801b1fd8: mflr     r0
//   0x801b1fdc: li       r4, 0x1008
//   0x801b1fe0: li       r5, 0x10
//   0x801b1fe4: stw      r0, 0x24(r1)
//   0x801b1fe8: stw      r31, 0x1c(r1)
//   0x801b1fec: stw      r30, 0x18(r1)
//   0x801b1ff0: stw      r29, 0x14(r1)
//   0x801b1ff4: mr       r29, r3
//   0x801b1ff8: bl       0x801b0f20
//   0x801b1ffc: cmpwi    r3, 0
//   0x801b2000: beq      0x801b2070
//   0x801b2004: lwz      r3, 0(r29)
//   0x801b2008: addis    r0, r3, 1
//   0x801b200c: cmplwi   r0, 0xffff
//   0x801b2010: beq      0x801b2070
//   0x801b2014: rlwinm.  r4, r3, 0, 0, 7
//   0x801b2018: beq      0x801b2070
//   0x801b201c: addis    r0, r4, 0x100
//   0x801b2020: cmplwi   r0, 0
//

// TODO: Full decompilation requires Ghidra
