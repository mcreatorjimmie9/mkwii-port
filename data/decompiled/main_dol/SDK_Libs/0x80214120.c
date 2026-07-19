// Function at 0x80214120
// Size: 164 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80214120: stwu     r1, -0x10(r1)
//   0x80214124: mflr     r0
//   0x80214128: stw      r0, 0x14(r1)
//   0x8021412c: lwz      r4, 0x1c(r3)
//   0x80214130: lwz      r0, 0(r4)
//   0x80214134: cmpwi    r0, 0
//   0x80214138: beq      0x8021419c
//   0x8021413c: lwz      r0, 0xc(r3)
//   0x80214140: cmpwi    r0, 0
//   0x80214144: beq      0x80214194
//   0x80214148: addic.   r0, r0, -1
//   0x8021414c: stw      r0, 0xc(r3)
//   0x80214150: beq      0x80214168
//   0x80214154: lfs      f1, 0x14(r3)
//   0x80214158: lfs      f0, 0x18(r3)
//   0x8021415c: fsubs    f0, f1, f0
//   0x80214160: stfs     f0, 0x14(r3)
//   0x80214164: b        0x80214170
//   0x80214168: lfs      f0, 0x10(r3)
//   0x8021416c: stfs     f0, 0x14(r3)
//

// TODO: Full decompilation requires Ghidra
