// Function at 0x8023b06c
// Size: 440 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x8023b06c: stwu     r1, -0x20(r1)
//   0x8023b070: mflr     r0
//   0x8023b074: stw      r0, 0x24(r1)
//   0x8023b078: stw      r31, 0x1c(r1)
//   0x8023b07c: stw      r30, 0x18(r1)
//   0x8023b080: mr       r30, r4
//   0x8023b084: stw      r29, 0x14(r1)
//   0x8023b088: mr       r29, r3
//   0x8023b08c: mr       r3, r30
//   0x8023b090: lwz      r12, 0(r30)
//   0x8023b094: lwz      r12, 0x18(r12)
//   0x8023b098: mtctr    r12
//   0x8023b09c: bctrl    
//   0x8023b0a0: bl       0x8016e5b4
//   0x8023b0a4: bl       0x8016ea10
//   0x8023b0a8: lwz      r4, 0x24(r30)
//   0x8023b0ac: cmpwi    r4, 0
//   0x8023b0b0: beq      0x8023b0bc
//   0x8023b0b4: mr       r3, r29
//   0x8023b0b8: bl       0x8023b06c
//

// TODO: Full decompilation requires Ghidra
