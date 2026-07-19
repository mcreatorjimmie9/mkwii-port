// Function at 0x801e0078
// Size: 332 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801e0078: stwu     r1, -0x20(r1)
//   0x801e007c: mflr     r0
//   0x801e0080: stw      r0, 0x24(r1)
//   0x801e0084: addi     r11, r1, 0x20
//   0x801e0088: bl       0x80020a40
//   0x801e008c: lwz      r30, 0x1c(r3)
//   0x801e0090: mr       r31, r3
//   0x801e0094: lwz      r6, -0x5f40(r13)
//   0x801e0098: mr       r27, r4
//   0x801e009c: cmpwi    r30, 0
//   0x801e00a0: mr       r28, r5
//   0x801e00a4: addi     r29, r6, 0x1800
//   0x801e00a8: bne      0x801e00b4
//   0x801e00ac: li       r3, -6
//   0x801e00b0: b        0x801e01ac
//   0x801e00b4: lwz      r0, 0x14(r3)
//   0x801e00b8: cmplw    r30, r0
//   0x801e00bc: bge      0x801e00cc
//   0x801e00c0: addi     r0, r30, -0x80
//   0x801e00c4: clrlwi.  r0, r0, 0x19
//

// TODO: Full decompilation requires Ghidra
