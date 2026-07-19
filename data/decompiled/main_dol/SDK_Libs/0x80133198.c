// Function at 0x80133198
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x80133198: stwu     r1, -0x10(r1)
//   0x8013319c: mflr     r0
//   0x801331a0: lis      r4, -0x7fcd
//   0x801331a4: stw      r0, 0x14(r1)
//   0x801331a8: lwz      r12, 0x1b18(r4)
//   0x801331ac: addi     r4, r3, 8
//   0x801331b0: li       r3, 2
//   0x801331b4: mtctr    r12
//   0x801331b8: bctrl    
//   0x801331bc: li       r3, 0x110
//   0x801331c0: bl       0x8012eb14
//   0x801331c4: cmpwi    r3, 0
//   0x801331c8: beq      0x801331d8
//   0x801331cc: li       r0, 0x207
//   0x801331d0: sth      r0, 0(r3)
//   0x801331d4: bl       0x8013219c
//   0x801331d8: lwz      r0, 0x14(r1)
//   0x801331dc: mtlr     r0
//   0x801331e0: addi     r1, r1, 0x10
//   0x801331e4: blr      
//

// TODO: Full decompilation requires Ghidra
