// Function at 0x80134388
// Size: 568 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80134388: stwu     r1, -0x20(r1)
//   0x8013438c: mflr     r0
//   0x80134390: cmpwi    r3, 0
//   0x80134394: stw      r0, 0x24(r1)
//   0x80134398: stw      r31, 0x1c(r1)
//   0x8013439c: stw      r30, 0x18(r1)
//   0x801343a0: stw      r29, 0x14(r1)
//   0x801343a4: bne      0x801344fc
//   0x801343a8: lwz      r3, -0x73dc(r13)
//   0x801343ac: li       r7, 1
//   0x801343b0: lbz      r9, 1(r3)
//   0x801343b4: b        0x801344ec
//   0x801343b8: clrlwi   r8, r7, 0x18
//   0x801343bc: rlwinm   r0, r7, 2, 0x16, 0x1d
//   0x801343c0: subf     r0, r8, r0
//   0x801343c4: add      r8, r3, r0
//   0x801343c8: lbz      r0, 1(r8)
//   0x801343cc: cmplw    r5, r0
//   0x801343d0: beq      0x801343dc
//   0x801343d4: cmplwi   r0, 0xff
//

// TODO: Full decompilation requires Ghidra
