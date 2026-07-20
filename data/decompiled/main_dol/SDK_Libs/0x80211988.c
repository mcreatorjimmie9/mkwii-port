// Function at 0x80211988
// Size: 108 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80211988: stwu     r1, -0x10(r1)
//   0x8021198c: mflr     r0
//   0x80211990: cmpwi    r3, 0
//   0x80211994: stw      r0, 0x14(r1)
//   0x80211998: stw      r31, 0xc(r1)
//   0x8021199c: mr       r31, r4
//   0x802119a0: stw      r30, 8(r1)
//   0x802119a4: mr       r30, r3
//   0x802119a8: beq      0x802119d8
//   0x802119ac: li       r4, 0
//   0x802119b0: bl       0x80211abc
//   0x802119b4: lwz      r3, 0x10(r30)
//   0x802119b8: lwz      r12, 0(r3)
//   0x802119bc: lwz      r12, 0x1c(r12)
//   0x802119c0: mtctr    r12
//   0x802119c4: bctrl    
//   0x802119c8: cmpwi    r31, 0
//   0x802119cc: ble      0x802119d8
//   0x802119d0: mr       r3, r30
//   0x802119d4: bl       0x80229a90
//

// TODO: Full decompilation requires Ghidra
