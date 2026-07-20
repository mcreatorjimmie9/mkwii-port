// Function at 0x801fe518
// Size: 152 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801fe518: stwu     r1, -0x10(r1)
//   0x801fe51c: mflr     r0
//   0x801fe520: cmpwi    r3, 0
//   0x801fe524: stw      r0, 0x14(r1)
//   0x801fe528: bne      0x801fe534
//   0x801fe52c: li       r3, 0xa
//   0x801fe530: b        0x801fe5a0
//   0x801fe534: cmplwi   r4, 2
//   0x801fe538: blt      0x801fe54c
//   0x801fe53c: lwz      r6, 0x34(r3)
//   0x801fe540: addi     r0, r6, 2
//   0x801fe544: cmplw    r4, r0
//   0x801fe548: blt      0x801fe564
//   0x801fe54c: cmpwi    r4, 0
//   0x801fe550: beq      0x801fe564
//   0x801fe554: cmplwi   r4, 1
//   0x801fe558: beq      0x801fe564
//   0x801fe55c: li       r3, 0xe
//   0x801fe560: b        0x801fe5a0
//   0x801fe564: lhz      r6, 0(r3)
//

// TODO: Full decompilation requires Ghidra
