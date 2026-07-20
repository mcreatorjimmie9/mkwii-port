// Function at 0x8018656c
// Size: 120 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8018656c: stwu     r1, -0x10(r1)
//   0x80186570: mflr     r0
//   0x80186574: stw      r0, 0x14(r1)
//   0x80186578: stw      r31, 0xc(r1)
//   0x8018657c: mr       r31, r4
//   0x80186580: stw      r30, 8(r1)
//   0x80186584: mr       r30, r3
//   0x80186588: addi     r3, r3, 0x1c
//   0x8018658c: bl       0x80180148
//   0x80186590: cmpwi    r3, 0
//   0x80186594: beq      0x8018659c
//   0x80186598: b        0x801865cc
//   0x8018659c: lwz      r3, 0x28(r30)
//   0x801865a0: cmpwi    r3, 0
//   0x801865a4: beq      0x801865c8
//   0x801865a8: lwz      r12, 0(r3)
//   0x801865ac: mr       r4, r31
//   0x801865b0: lwz      r12, 0x20(r12)
//   0x801865b4: mtctr    r12
//   0x801865b8: bctrl    
//

// TODO: Full decompilation requires Ghidra
