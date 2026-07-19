// Function at 0x8006eff0
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8006eff0: stwu     r1, -0x10(r1)
//   0x8006eff4: mflr     r0
//   0x8006eff8: stw      r0, 0x14(r1)
//   0x8006effc: lwz      r12, 0(r3)
//   0x8006f000: lwz      r12, 0x14(r12)
//   0x8006f004: mtctr    r12
//   0x8006f008: bctrl    
//   0x8006f00c: lwz      r0, 0x14(r1)
//   0x8006f010: addi     r3, r3, 4
//   0x8006f014: mtlr     r0
//   0x8006f018: addi     r1, r1, 0x10
//   0x8006f01c: blr      
//   0x8006f020: lis      r3, -0x7fdc
//   0x8006f024: addi     r3, r3, 0x7c68
//   0x8006f028: blr      
//

// TODO: Full decompilation requires Ghidra
