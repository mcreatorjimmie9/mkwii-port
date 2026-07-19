// Function at 0x80175274
// Size: 592 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80175274: stwu     r1, -0x10(r1)
//   0x80175278: mflr     r0
//   0x8017527c: stw      r0, 0x14(r1)
//   0x80175280: stw      r31, 0xc(r1)
//   0x80175284: lbz      r0, 0xcf(r3)
//   0x80175288: clrlwi.  r0, r0, 0x1f
//   0x8017528c: bne      0x80175298
//   0x80175290: li       r3, 0
//   0x80175294: b        0x80175360
//   0x80175298: lwz      r3, 0xc(r3)
//   0x8017529c: cmpwi    r3, 0
//   0x801752a0: bne      0x801752ac
//   0x801752a4: li       r3, 1
//   0x801752a8: b        0x80175360
//   0x801752ac: lbz      r0, 0xcf(r3)
//   0x801752b0: clrlwi.  r0, r0, 0x1f
//   0x801752b4: bne      0x801752c0
//   0x801752b8: li       r3, 0
//   0x801752bc: b        0x80175360
//   0x801752c0: lwz      r3, 0xc(r3)
//

// TODO: Full decompilation requires Ghidra
