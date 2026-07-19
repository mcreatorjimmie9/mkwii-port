// Function at 0x8013be6c
// Size: 152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8013be6c: stwu     r1, -0x10(r1)
//   0x8013be70: mflr     r0
//   0x8013be74: cmpwi    r3, 0
//   0x8013be78: stw      r0, 0x14(r1)
//   0x8013be7c: stw      r31, 0xc(r1)
//   0x8013be80: mr       r31, r3
//   0x8013be84: beq      0x8013be98
//   0x8013be88: cmplwi   r3, 1
//   0x8013be8c: beq      0x8013be98
//   0x8013be90: li       r3, 5
//   0x8013be94: b        0x8013bef0
//   0x8013be98: lis      r3, -0x7fcd
//   0x8013be9c: addi     r3, r3, 0x1ef8
//   0x8013bea0: lbz      r0, 0x643(r3)
//   0x8013bea4: rlwinm.  r0, r0, 0, 0x19, 0x19
//   0x8013bea8: bne      0x8013beb4
//   0x8013beac: li       r3, 4
//   0x8013beb0: b        0x8013bef0
//   0x8013beb4: bl       0x8013a260
//   0x8013beb8: clrlwi.  r0, r3, 0x18
//

// TODO: Full decompilation requires Ghidra
