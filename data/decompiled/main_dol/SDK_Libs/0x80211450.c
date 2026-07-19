// Function at 0x80211450
// Size: 236 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80211450: stwu     r1, -0x20(r1)
//   0x80211454: mflr     r0
//   0x80211458: stw      r0, 0x24(r1)
//   0x8021145c: addi     r11, r1, 0x20
//   0x80211460: bl       0x80020a40
//   0x80211464: mr       r27, r3
//   0x80211468: mr       r28, r4
//   0x8021146c: bl       0x802133dc
//   0x80211470: lbz      r0, 4(r27)
//   0x80211474: cmpwi    r0, 0
//   0x80211478: beq      0x80211524
//   0x8021147c: cmpwi    r28, 0
//   0x80211480: mr       r30, r28
//   0x80211484: beq      0x8021148c
//   0x80211488: addi     r30, r28, 0x20
//   0x8021148c: lwz      r0, 0(r30)
//   0x80211490: addi     r29, r27, 0x6e4
//   0x80211494: stw      r0, 0x6d8(r27)
//   0x80211498: li       r31, 0
//   0x8021149c: lfs      f0, 0x34(r30)
//

// TODO: Full decompilation requires Ghidra
