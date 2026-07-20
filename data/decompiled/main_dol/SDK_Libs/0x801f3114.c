// Function at 0x801f3114
// Size: 320 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801f3114: stwu     r1, -0x10(r1)
//   0x801f3118: mflr     r0
//   0x801f311c: cmpwi    r3, 0
//   0x801f3120: stw      r0, 0x14(r1)
//   0x801f3124: stw      r31, 0xc(r1)
//   0x801f3128: mr       r31, r4
//   0x801f312c: stw      r30, 8(r1)
//   0x801f3130: bne      0x801f313c
//   0x801f3134: li       r3, 1
//   0x801f3138: b        0x801f323c
//   0x801f313c: clrlwi   r8, r3, 0x18
//   0x801f3140: rlwinm   r0, r3, 0, 0x10, 0x17
//   0x801f3144: cmplwi   r8, 0x1a
//   0x801f3148: bge      0x801f3154
//   0x801f314c: cmplwi   r0, 0x400
//   0x801f3150: beq      0x801f315c
//   0x801f3154: li       r0, 1
//   0x801f3158: b        0x801f31e8
//   0x801f315c: mulli    r4, r8, 0x2c
//   0x801f3160: lis      r5, -0x7fcb
//

// TODO: Full decompilation requires Ghidra
