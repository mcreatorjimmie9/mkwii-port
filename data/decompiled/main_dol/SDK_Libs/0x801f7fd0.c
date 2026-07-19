// Function at 0x801f7fd0
// Size: 220 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801f7fd0: stwu     r1, -0x20(r1)
//   0x801f7fd4: mflr     r0
//   0x801f7fd8: addi     r5, r4, 1
//   0x801f7fdc: li       r7, 1
//   0x801f7fe0: stw      r0, 0x24(r1)
//   0x801f7fe4: stw      r31, 0x1c(r1)
//   0x801f7fe8: mr       r31, r4
//   0x801f7fec: b        0x801f7ff8
//   0x801f7ff0: addi     r7, r7, 1
//   0x801f7ff4: addi     r5, r5, 1
//   0x801f7ff8: lbz      r6, 0(r5)
//   0x801f7ffc: extsb    r0, r6
//   0x801f8000: cmpwi    r0, 0x7e
//   0x801f8004: beq      0x801f8018
//   0x801f8008: cmpwi    r0, 0
//   0x801f800c: beq      0x801f8018
//   0x801f8010: cmplwi   r7, 7
//   0x801f8014: blt      0x801f7ff0
//   0x801f8018: cmplwi   r7, 7
//   0x801f801c: bge      0x801f8094
//

// TODO: Full decompilation requires Ghidra
