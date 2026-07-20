// Function at 0x801f48a0
// Size: 256 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x30 bytes
//
// Disassembly (first 20 instructions):
//   0x801f48a0: stwu     r1, -0x30(r1)
//   0x801f48a4: mflr     r0
//   0x801f48a8: stw      r0, 0x34(r1)
//   0x801f48ac: addi     r11, r1, 0x30
//   0x801f48b0: bl       0x80020a40
//   0x801f48b4: cmpwi    r4, 0
//   0x801f48b8: mr       r30, r3
//   0x801f48bc: mr       r31, r4
//   0x801f48c0: beq      0x801f4984
//   0x801f48c4: lhz      r0, 0(r4)
//   0x801f48c8: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x801f48cc: beq      0x801f4984
//   0x801f48d0: lwz      r8, 0x18(r4)
//   0x801f48d4: addis    r0, r8, 1
//   0x801f48d8: cmplwi   r0, 0xffff
//   0x801f48dc: beq      0x801f4984
//   0x801f48e0: lwz      r29, 0xc(r4)
//   0x801f48e4: addi     r7, r1, 8
//   0x801f48e8: lbz      r9, 0x20(r3)
//   0x801f48ec: lwz      r6, 4(r4)
//

// TODO: Full decompilation requires Ghidra
