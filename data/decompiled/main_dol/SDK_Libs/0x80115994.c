// Function at 0x80115994
// Size: 468 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x420 bytes
//
// Disassembly (first 20 instructions):
//   0x80115994: stwu     r1, -0x420(r1)
//   0x80115998: mflr     r0
//   0x8011599c: stw      r0, 0x424(r1)
//   0x801159a0: stw      r31, 0x41c(r1)
//   0x801159a4: mr       r31, r3
//   0x801159a8: lwz      r0, 0x19c(r3)
//   0x801159ac: cmpwi    r0, 0
//   0x801159b0: bne      0x80115a10
//   0x801159b4: lwz      r12, 0x1b8(r3)
//   0x801159b8: cmpwi    r12, 0
//   0x801159bc: beq      0x801159e8
//   0x801159c0: addi     r4, r3, 0x190
//   0x801159c4: mtctr    r12
//   0x801159c8: bctrl    
//   0x801159cc: cmpwi    r3, 3
//   0x801159d0: bne      0x801159e8
//   0x801159d4: li       r3, 1
//   0x801159d8: li       r0, 0x11
//   0x801159dc: stw      r3, 0x120(r31)
//   0x801159e0: stw      r0, 0x3c(r31)
//

// TODO: Full decompilation requires Ghidra
