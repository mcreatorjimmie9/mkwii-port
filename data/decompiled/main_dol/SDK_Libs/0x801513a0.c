// Function at 0x801513a0
// Size: 404 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801513a0: stwu     r1, -0x20(r1)
//   0x801513a4: mflr     r0
//   0x801513a8: stw      r0, 0x24(r1)
//   0x801513ac: stw      r31, 0x1c(r1)
//   0x801513b0: mr       r31, r3
//   0x801513b4: stw      r30, 0x18(r1)
//   0x801513b8: li       r30, 0
//   0x801513bc: stw      r29, 0x14(r1)
//   0x801513c0: stw      r28, 0x10(r1)
//   0x801513c4: mr       r28, r4
//   0x801513c8: lbz      r5, 2(r3)
//   0x801513cc: lwz      r29, 0x6c(r3)
//   0x801513d0: cmplwi   r5, 1
//   0x801513d4: bne      0x8015144c
//   0x801513d8: lbz      r0, 0xc(r3)
//   0x801513dc: cmpwi    r0, 0
//   0x801513e0: beq      0x8015144c
//   0x801513e4: lis      r3, -0x7fcd
//   0x801513e8: addi     r3, r3, 0x57a8
//   0x801513ec: lbz      r0, 0x414(r3)
//

// TODO: Full decompilation requires Ghidra
