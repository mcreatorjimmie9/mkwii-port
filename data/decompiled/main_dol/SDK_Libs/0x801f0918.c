// Function at 0x801f0918
// Size: 2128 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x20 bytes
//
// Disassembly (first 20 instructions):
//   0x801f0918: stwu     r1, -0x20(r1)
//   0x801f091c: mflr     r0
//   0x801f0920: cmpwi    cr1, r3, 0
//   0x801f0924: stw      r0, 0x24(r1)
//   0x801f0928: stw      r31, 0x1c(r1)
//   0x801f092c: stw      r30, 0x18(r1)
//   0x801f0930: mr       r30, r4
//   0x801f0934: stw      r29, 0x14(r1)
//   0x801f0938: mr       r29, r3
//   0x801f093c: beq      cr1, 0x801f0948
//   0x801f0940: cmpwi    r4, 0
//   0x801f0944: bne      0x801f0950
//   0x801f0948: li       r3, 1
//   0x801f094c: b        0x801f0e34
//   0x801f0950: li       r31, 0
//   0x801f0954: beq      cr1, 0x801f0978
//   0x801f0958: addic.   r0, r4, 0x4c
//   0x801f095c: beq      0x801f0978
//   0x801f0960: lbz      r0, 0(r3)
//   0x801f0964: stb      r0, 0x4c(r4)
//

// TODO: Full decompilation requires Ghidra
