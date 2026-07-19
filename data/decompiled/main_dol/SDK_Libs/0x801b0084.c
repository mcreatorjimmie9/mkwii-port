// Function at 0x801b0084
// Size: 92 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801b0084: stwu     r1, -0x10(r1)
//   0x801b0088: mflr     r0
//   0x801b008c: stw      r0, 0x14(r1)
//   0x801b0090: stw      r31, 0xc(r1)
//   0x801b0094: mr       r31, r3
//   0x801b0098: bl       0x801a650c
//   0x801b009c: lis      r5, -0x8000
//   0x801b00a0: cmpwi    r31, 0
//   0x801b00a4: lbz      r4, 0x30e3(r5)
//   0x801b00a8: rlwinm   r0, r4, 0, 0x1a, 0x18
//   0x801b00ac: rlwinm   r31, r4, 0x1a, 0x1f, 0x1f
//   0x801b00b0: stb      r0, 0x30e3(r5)
//   0x801b00b4: beq      0x801b00c4
//   0x801b00b8: lbz      r0, 0x30e3(r5)
//   0x801b00bc: ori      r0, r0, 0x40
//   0x801b00c0: stb      r0, 0x30e3(r5)
//   0x801b00c4: bl       0x801a6534
//   0x801b00c8: mr       r3, r31
//   0x801b00cc: lwz      r31, 0xc(r1)
//   0x801b00d0: lwz      r0, 0x14(r1)
//

// TODO: Full decompilation requires Ghidra
