// Function at 0x801268b4
// Size: 104 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x801268b4: stwu     r1, -0x10(r1)
//   0x801268b8: mflr     r0
//   0x801268bc: stw      r0, 0x14(r1)
//   0x801268c0: lwz      r0, -0x66d0(r13)
//   0x801268c4: cmplwi   r0, 2
//   0x801268c8: bne      0x801268f0
//   0x801268cc: li       r0, 0
//   0x801268d0: stw      r0, -0x66d0(r13)
//   0x801268d4: bl       0x80126598
//   0x801268d8: lwz      r12, -0x6700(r13)
//   0x801268dc: cmpwi    r12, 0
//   0x801268e0: beq      0x801268f8
//   0x801268e4: mtctr    r12
//   0x801268e8: bctrl    
//   0x801268ec: b        0x801268f8
//   0x801268f0: li       r0, 1
//   0x801268f4: stw      r0, -0x66d0(r13)
//   0x801268f8: lwz      r0, 0x14(r1)
//   0x801268fc: mtlr     r0
//   0x80126900: addi     r1, r1, 0x10
//

// TODO: Full decompilation requires Ghidra
