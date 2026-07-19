// Function at 0x8000e0fc
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8000e0fc: stwu     r1, -0x20(r1)
//   0x8000e100: mflr     r0
//   0x8000e104: cmpwi    r3, 0
//   0x8000e108: stw      r0, 0x24(r1)
//   0x8000e10c: stw      r31, 0x1c(r1)
//   0x8000e110: stw      r30, 0x18(r1)
//   0x8000e114: stw      r29, 0x14(r1)
//   0x8000e118: mr       r29, r3
//   0x8000e11c: bne      0x8000e128
//   0x8000e120: li       r3, -1
//   0x8000e124: b        0x8000e19c
//   0x8000e128: lwz      r0, 4(r3)
//   0x8000e12c: rlwinm.  r0, r0, 0xa, 0x1d, 0x1f
//   0x8000e130: bne      0x8000e13c
//   0x8000e134: li       r3, 0
//   0x8000e138: b        0x8000e19c
//   0x8000e13c: bl       0x8000e1b8
//   0x8000e140: lwz      r12, 0x44(r29)
//   0x8000e144: mr       r30, r3
//   0x8000e148: lwz      r3, 0(r29)
//

// TODO: Full decompilation requires Ghidra
