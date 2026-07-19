// Function at 0x800272e0
// Size: 304 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x800272e0: stwu     r1, -0x20(r1)
//   0x800272e4: mflr     r0
//   0x800272e8: stw      r0, 0x24(r1)
//   0x800272ec: addi     r11, r1, 0x20
//   0x800272f0: bl       0x80020a40
//   0x800272f4: cmpwi    r4, 0
//   0x800272f8: mr       r27, r3
//   0x800272fc: mr       r28, r4
//   0x80027300: mr       r31, r5
//   0x80027304: mr       r30, r6
//   0x80027308: bne      0x80027314
//   0x8002730c: li       r3, 0
//   0x80027310: b        0x800273ec
//   0x80027314: lwz      r0, 8(r4)
//   0x80027318: rlwinm.  r0, r0, 0, 1, 1
//   0x8002731c: bne      0x80027328
//   0x80027320: li       r3, 0
//   0x80027324: b        0x800273ec
//   0x80027328: lwz      r3, 0(r3)
//   0x8002732c: lwz      r12, 0(r3)
//

// TODO: Full decompilation requires Ghidra
