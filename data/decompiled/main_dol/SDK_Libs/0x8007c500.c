// Function at 0x8007c500
// Size: 208 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8007c500: stwu     r1, -0x20(r1)
//   0x8007c504: mflr     r0
//   0x8007c508: stw      r0, 0x24(r1)
//   0x8007c50c: stw      r31, 0x1c(r1)
//   0x8007c510: stw      r30, 0x18(r1)
//   0x8007c514: mr       r30, r5
//   0x8007c518: stw      r29, 0x14(r1)
//   0x8007c51c: mr       r29, r3
//   0x8007c520: lwz      r8, 0xd8(r3)
//   0x8007c524: cmpwi    r8, 0
//   0x8007c528: bne      0x8007c534
//   0x8007c52c: li       r3, 0
//   0x8007c530: b        0x8007c5a8
//   0x8007c534: lhz      r3, 0xfc(r3)
//   0x8007c538: cntlzw   r0, r3
//   0x8007c53c: srwi     r3, r3, 1
//   0x8007c540: rlwinm   r7, r0, 0x1b, 0x1f, 0x1f
//   0x8007c544: addi     r0, r3, -1
//   0x8007c548: neg      r3, r7
//   0x8007c54c: clrlwi   r0, r0, 0x10
//

// TODO: Full decompilation requires Ghidra
