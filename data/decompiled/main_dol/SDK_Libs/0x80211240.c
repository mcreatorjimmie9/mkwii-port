// Function at 0x80211240
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80211240: stwu     r1, -0x10(r1)
//   0x80211244: mflr     r0
//   0x80211248: cmpwi    r3, 0
//   0x8021124c: stw      r0, 0x14(r1)
//   0x80211250: stw      r31, 0xc(r1)
//   0x80211254: mr       r31, r3
//   0x80211258: beq      0x80211268
//   0x8021125c: cmpwi    r4, 0
//   0x80211260: ble      0x80211268
//   0x80211264: bl       0x80229a90
//   0x80211268: mr       r3, r31
//   0x8021126c: lwz      r31, 0xc(r1)
//   0x80211270: lwz      r0, 0x14(r1)
//   0x80211274: mtlr     r0
//   0x80211278: addi     r1, r1, 0x10
//   0x8021127c: blr      
//

// TODO: Full decompilation requires Ghidra
