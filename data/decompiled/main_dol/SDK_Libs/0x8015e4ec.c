// Function at 0x8015e4ec
// Size: 448 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8015e4ec: stwu     r1, -0x20(r1)
//   0x8015e4f0: mflr     r0
//   0x8015e4f4: stw      r0, 0x24(r1)
//   0x8015e4f8: addi     r11, r1, 0x20
//   0x8015e4fc: bl       0x80020a40
//   0x8015e500: cmpwi    r3, 0
//   0x8015e504: mr       r28, r4
//   0x8015e508: mr       r29, r5
//   0x8015e50c: bne      0x8015e518
//   0x8015e510: li       r3, 0
//   0x8015e514: b        0x8015e694
//   0x8015e518: lwz      r8, -0x65c0(r13)
//   0x8015e51c: mulli    r0, r3, 0xc
//   0x8015e520: lwz      r7, -0x65c4(r13)
//   0x8015e524: addi     r6, r8, 4
//   0x8015e528: lwzx     r3, r6, r0
//   0x8015e52c: lwzx     r0, r8, r0
//   0x8015e530: cmpwi    r3, 0
//   0x8015e534: clrlwi   r0, r0, 8
//   0x8015e538: add      r30, r7, r0
//

// TODO: Full decompilation requires Ghidra
