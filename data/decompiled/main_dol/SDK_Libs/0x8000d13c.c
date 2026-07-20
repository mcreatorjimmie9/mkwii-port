// Function at 0x8000d13c
// Size: 1984 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x180 bytes
//
// Disassembly (first 20 instructions):
//   0x8000d13c: stwu     r1, -0x180(r1)
//   0x8000d140: mflr     r0
//   0x8000d144: stw      r0, 0x184(r1)
//   0x8000d148: stfd     f31, 0x170(r1)
//   0x8000d14c: xxsel    vs31, vs1, vs0, v5
//   0x8000d150: addi     r11, r1, 0x170
//   0x8000d154: bl       0x80020a20
//   0x8000d158: lbz      r0, 4(r3)
//   0x8000d15c: lis      r4, 0x4330
//   0x8000d160: stw      r4, 0x128(r1)
//   0x8000d164: mr       r27, r3
//   0x8000d168: cmpwi    r0, 0
//   0x8000d16c: stw      r4, 0x130(r1)
//   0x8000d170: bne      0x8000d198
//   0x8000d174: lbz      r0, 0(r3)
//   0x8000d178: extsb.   r0, r0
//   0x8000d17c: bne      0x8000d188
//   0x8000d180: lfd      f2, -0x7f68(r2)
//   0x8000d184: b        0x8000d18c
//   0x8000d188: lfd      f2, -0x7f60(r2)
//

// TODO: Full decompilation requires Ghidra
