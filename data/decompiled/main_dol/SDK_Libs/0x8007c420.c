// Function at 0x8007c420
// Size: 224 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8007c420: stwu     r1, -0x20(r1)
//   0x8007c424: mflr     r0
//   0x8007c428: stw      r0, 0x24(r1)
//   0x8007c42c: stw      r31, 0x1c(r1)
//   0x8007c430: stw      r30, 0x18(r1)
//   0x8007c434: mr       r30, r5
//   0x8007c438: stw      r29, 0x14(r1)
//   0x8007c43c: mr       r29, r4
//   0x8007c440: stw      r28, 0x10(r1)
//   0x8007c444: mr       r28, r3
//   0x8007c448: mr       r3, r29
//   0x8007c44c: bl       0x80016e38
//   0x8007c450: lwz      r6, 0xd8(r28)
//   0x8007c454: cmpwi    r6, 0
//   0x8007c458: bne      0x8007c464
//   0x8007c45c: li       r3, 0
//   0x8007c460: b        0x8007c4dc
//   0x8007c464: lhz      r4, 0xfc(r28)
//   0x8007c468: cntlzw   r0, r4
//   0x8007c46c: srwi     r4, r4, 1
//

// TODO: Full decompilation requires Ghidra
