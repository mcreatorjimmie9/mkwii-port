// Function at 0x80244010
// Size: 232 bytes
// Category: Data_RW
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80244010: stwu     r1, -0x10(r1)
//   0x80244014: mflr     r0
//   0x80244018: stw      r0, 0x14(r1)
//   0x8024401c: stw      r31, 0xc(r1)
//   0x80244020: mr       r31, r3
//   0x80244024: lwz      r0, 8(r3)
//   0x80244028: rlwinm.  r0, r0, 0, 0x1e, 0x1e
//   0x8024402c: beq      0x80244044
//   0x80244030: lwz      r3, 4(r3)
//   0x80244034: lwz      r12, 0(r3)
//   0x80244038: lwz      r12, 0x10(r12)
//   0x8024403c: mtctr    r12
//   0x80244040: bctrl    
//   0x80244044: lwz      r0, 8(r31)
//   0x80244048: rlwinm   r0, r0, 0, 0, 0x1d
//   0x8024404c: stw      r0, 8(r31)
//   0x80244050: lwz      r31, 0xc(r1)
//   0x80244054: lwz      r0, 0x14(r1)
//   0x80244058: mtlr     r0
//   0x8024405c: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
