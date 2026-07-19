// Function at 0x80211700
// Size: 212 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80211700: stwu     r1, -0x20(r1)
//   0x80211704: mflr     r0
//   0x80211708: li       r5, 0
//   0x8021170c: stw      r0, 0x24(r1)
//   0x80211710: addi     r4, r1, 8
//   0x80211714: stw      r31, 0x1c(r1)
//   0x80211718: mr       r31, r3
//   0x8021171c: addi     r3, r3, 0x60
//   0x80211720: bl       0x801a7384
//   0x80211724: cmpwi    r3, 0
//   0x80211728: beq      0x80211754
//   0x8021172c: lwz      r12, 0(r31)
//   0x80211730: mr       r3, r31
//   0x80211734: lwz      r4, 8(r1)
//   0x80211738: lwz      r12, 8(r12)
//   0x8021173c: mtctr    r12
//   0x80211740: bctrl    
//   0x80211744: mr       r4, r3
//   0x80211748: addi     r3, r31, 0xc0
//   0x8021174c: li       r5, 0
//

// TODO: Full decompilation requires Ghidra
