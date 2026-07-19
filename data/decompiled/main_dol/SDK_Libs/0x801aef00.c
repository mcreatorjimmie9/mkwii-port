// Function at 0x801aef00
// Size: 316 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801aef00: stwu     r1, -0x20(r1)
//   0x801aef04: mflr     r0
//   0x801aef08: lis      r5, -0x8000
//   0x801aef0c: stw      r0, 0x24(r1)
//   0x801aef10: stw      r31, 0x1c(r1)
//   0x801aef14: srw      r31, r5, r3
//   0x801aef18: stw      r30, 0x18(r1)
//   0x801aef1c: mr       r30, r3
//   0x801aef20: stw      r29, 0x14(r1)
//   0x801aef24: lwz      r0, -0x6244(r13)
//   0x801aef28: and.     r0, r0, r31
//   0x801aef2c: beq      0x801af020
//   0x801aef30: clrlwi.  r0, r4, 0x1c
//   0x801aef34: lwz      r6, -0x6250(r13)
//   0x801aef38: nor      r7, r31, r31
//   0x801aef3c: lwz      r5, -0x6254(r13)
//   0x801aef40: and      r6, r6, r7
//   0x801aef44: rlwinm   r4, r4, 0, 0, 0x17
//   0x801aef48: and      r0, r5, r7
//   0x801aef4c: stw      r6, -0x6250(r13)
//

// TODO: Full decompilation requires Ghidra
