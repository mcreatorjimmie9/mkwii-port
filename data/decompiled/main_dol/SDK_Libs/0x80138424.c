// Function at 0x80138424
// Size: 512 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x80138424: stwu     r1, -0x20(r1)
//   0x80138428: mflr     r0
//   0x8013842c: stw      r0, 0x24(r1)
//   0x80138430: stw      r31, 0x1c(r1)
//   0x80138434: stw      r30, 0x18(r1)
//   0x80138438: lis      r30, -0x7fd8
//   0x8013843c: addi     r30, r30, -0xe20
//   0x80138440: stw      r29, 0x14(r1)
//   0x80138444: mr       r29, r4
//   0x80138448: stw      r28, 0x10(r1)
//   0x8013844c: mr       r28, r3
//   0x80138450: bl       0x8013b0f0
//   0x80138454: lhz      r4, 0(r29)
//   0x80138458: mr       r31, r3
//   0x8013845c: cmpwi    r4, 0
//   0x80138460: beq      0x8013857c
//   0x80138464: clrlwi.  r0, r4, 0x1f
//   0x80138468: beq      0x801384a4
//   0x8013846c: lbz      r0, 0(r3)
//   0x80138470: rlwinm.  r0, r0, 0, 0x1a, 0x1a
//

// TODO: Full decompilation requires Ghidra
