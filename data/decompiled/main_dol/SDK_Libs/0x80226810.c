// Function at 0x80226810
// Size: 112 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80226810: stwu     r1, -0x10(r1)
//   0x80226814: mflr     r0
//   0x80226818: stw      r0, 0x14(r1)
//   0x8022681c: stw      r31, 0xc(r1)
//   0x80226820: stw      r30, 8(r1)
//   0x80226824: mr       r30, r3
//   0x80226828: bl       0x80229750
//   0x8022682c: lwz      r12, 0(r30)
//   0x80226830: mr       r31, r3
//   0x80226834: mr       r3, r30
//   0x80226838: li       r4, -1
//   0x8022683c: lwz      r12, 8(r12)
//   0x80226840: mtctr    r12
//   0x80226844: bctrl    
//   0x80226848: cmpwi    r31, 0
//   0x8022684c: beq      0x80226868
//   0x80226850: lwz      r12, 0(r31)
//   0x80226854: mr       r3, r31
//   0x80226858: mr       r4, r30
//   0x8022685c: lwz      r12, 0x18(r12)
//

// TODO: Full decompilation requires Ghidra
