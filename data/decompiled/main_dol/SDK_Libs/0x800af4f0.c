// Function at 0x800af4f0
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x50 bytes
//
// Disassembly (first 20 instructions):
//   0x800af4f0: stwu     r1, -0x50(r1)
//   0x800af4f4: mflr     r0
//   0x800af4f8: stw      r0, 0x54(r1)
//   0x800af4fc: stfd     f31, 0x40(r1)
//   0x800af500: xsmaddmsp f31, f1, f0
//   0x800af504: stfd     f30, 0x30(r1)
//   0x800af508: xxsel    vs30, vs1, vs0, v0
//   0x800af50c: cmpwi    r4, 0xa
//   0x800af510: stw      r31, 0x2c(r1)
//   0x800af514: stw      r30, 0x28(r1)
//   0x800af518: stw      r29, 0x24(r1)
//   0x800af51c: mr       r29, r5
//   0x800af520: beq      0x800af530
//   0x800af524: cmpwi    r4, 9
//   0x800af528: beq      0x800af558
//   0x800af52c: b        0x800af5ec
//   0x800af530: lwz      r31, 0(r5)
//   0x800af534: lfs      f31, 8(r5)
//   0x800af538: lfs      f30, 0x30(r31)
//   0x800af53c: mr       r3, r31
//

// TODO: Full decompilation requires Ghidra
