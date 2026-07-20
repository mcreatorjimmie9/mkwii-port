// Function at 0x8010dbe4
// Size: 188 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8010dbe4: stwu     r1, -0x10(r1)
//   0x8010dbe8: mflr     r0
//   0x8010dbec: stw      r0, 0x14(r1)
//   0x8010dbf0: stw      r31, 0xc(r1)
//   0x8010dbf4: mr       r31, r3
//   0x8010dbf8: stw      r30, 8(r1)
//   0x8010dbfc: mr       r30, r4
//   0x8010dc00: lwz      r5, 8(r3)
//   0x8010dc04: lhz      r8, 0x66(r3)
//   0x8010dc08: lwz      r6, 0x44(r5)
//   0x8010dc0c: lwz      r5, 0(r4)
//   0x8010dc10: rlwinm   r0, r8, 0x18, 0x18, 0x1f
//   0x8010dc14: lwz      r7, 0x50(r3)
//   0x8010dc18: add      r5, r5, r6
//   0x8010dc1c: addi     r5, r5, 5
//   0x8010dc20: stbx     r0, r7, r5
//   0x8010dc24: addi     r5, r5, 1
//   0x8010dc28: stbx     r8, r7, r5
//   0x8010dc2c: lwz      r6, 0x50(r3)
//   0x8010dc30: lwz      r0, 0(r4)
//

// TODO: Full decompilation requires Ghidra
