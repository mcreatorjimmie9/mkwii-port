// Function at 0x800b22f0
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b22f0: stwu     r1, -0x10(r1)
//   0x800b22f4: mflr     r0
//   0x800b22f8: stw      r0, 0x14(r1)
//   0x800b22fc: stw      r31, 0xc(r1)
//   0x800b2300: mr       r31, r4
//   0x800b2304: stw      r30, 8(r1)
//   0x800b2308: mr       r30, r3
//   0x800b230c: lhz      r0, 0x18(r3)
//   0x800b2310: cmplw    r5, r0
//   0x800b2314: bne      0x800b2320
//   0x800b2318: lhz      r5, 0x1a(r3)
//   0x800b231c: b        0x800b2378
//   0x800b2320: sth      r5, 0x18(r3)
//   0x800b2324: lwz      r4, 0x14(r3)
//   0x800b2328: lwz      r4, 0x10(r4)
//   0x800b232c: b        0x800b2360
//   0x800b2330: lhz      r0, 0(r4)
//   0x800b2334: cmplw    r0, r5
//   0x800b2338: bgt      0x800b235c
//   0x800b233c: lhz      r0, 2(r4)
//

// TODO: Full decompilation requires Ghidra
