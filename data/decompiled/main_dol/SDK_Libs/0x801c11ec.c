// Function at 0x801c11ec
// Size: 416 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801c11ec: stwu     r1, -0x20(r1)
//   0x801c11f0: mflr     r0
//   0x801c11f4: stw      r0, 0x24(r1)
//   0x801c11f8: stw      r31, 0x1c(r1)
//   0x801c11fc: stw      r30, 0x18(r1)
//   0x801c1200: mr       r30, r4
//   0x801c1204: stw      r29, 0x14(r1)
//   0x801c1208: mr       r29, r3
//   0x801c120c: bl       0x801a650c
//   0x801c1210: lis      r4, -0x7fcb
//   0x801c1214: slwi     r0, r29, 2
//   0x801c1218: addi     r4, r4, -0x3a50
//   0x801c121c: mr       r31, r3
//   0x801c1220: lwzx     r4, r4, r0
//   0x801c1224: lbz      r0, 0x8c8(r4)
//   0x801c1228: cntlzw   r0, r0
//   0x801c122c: rlwinm   r0, r0, 0x1b, 0x18, 0x1f
//   0x801c1230: mulli    r0, r0, 0x60
//   0x801c1234: add      r3, r4, r0
//   0x801c1238: lbz      r0, 0xc9(r3)
//

// TODO: Full decompilation requires Ghidra
