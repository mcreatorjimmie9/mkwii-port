// Function at 0x801691c0
// Size: 216 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801691c0: stwu     r1, -0x20(r1)
//   0x801691c4: mflr     r0
//   0x801691c8: stw      r0, 0x24(r1)
//   0x801691cc: stw      r31, 0x1c(r1)
//   0x801691d0: stw      r30, 0x18(r1)
//   0x801691d4: stw      r29, 0x14(r1)
//   0x801691d8: stw      r28, 0x10(r1)
//   0x801691dc: mr       r28, r3
//   0x801691e0: slwi     r0, r3, 6
//   0x801691e4: lis      r3, -0x7fcc
//   0x801691e8: addi     r3, r3, -0xd00
//   0x801691ec: add      r31, r3, r0
//   0x801691f0: bl       0x801a650c
//   0x801691f4: mr       r30, r3
//   0x801691f8: lwz      r0, 0xc(r31)
//   0x801691fc: rlwinm.  r0, r0, 0, 0x1b, 0x1b
//   0x80169200: bne      0x80169210
//   0x80169204: bl       0x801a6534
//   0x80169208: li       r3, 0
//   0x8016920c: b        0x80169278
//

// TODO: Full decompilation requires Ghidra
