// Function at 0x8021406c
// Size: 180 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8021406c: stwu     r1, -0x20(r1)
//   0x80214070: mflr     r0
//   0x80214074: stw      r0, 0x24(r1)
//   0x80214078: stw      r31, 0x1c(r1)
//   0x8021407c: mr       r31, r4
//   0x80214080: stw      r30, 0x18(r1)
//   0x80214084: mr       r30, r3
//   0x80214088: lfs      f0, 0x14(r3)
//   0x8021408c: fcmpu    cr0, f0, f1
//   0x80214090: beq      0x802140ec
//   0x80214094: cmpwi    r4, 0
//   0x80214098: stfs     f1, 0x10(r3)
//   0x8021409c: stw      r4, 0xc(r3)
//   0x802140a0: bne      0x802140c8
//   0x802140a4: lwz      r12, 0(r3)
//   0x802140a8: stfs     f1, 0x14(r3)
//   0x802140ac: cmpwi    r12, 0
//   0x802140b0: beq      0x802140ec
//   0x802140b4: frsp     f1, f1
//   0x802140b8: lwz      r3, 4(r3)
//

// TODO: Full decompilation requires Ghidra
