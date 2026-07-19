// Function at 0x8005d450
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d450: stwu     r1, -0x10(r1)
//   0x8005d454: mflr     r0
//   0x8005d458: stw      r0, 0x14(r1)
//   0x8005d45c: lwz      r12, 0(r3)
//   0x8005d460: lwz      r12, 0x14(r12)
//   0x8005d464: mtctr    r12
//   0x8005d468: bctrl    
//   0x8005d46c: lwz      r0, 0x14(r1)
//   0x8005d470: addi     r3, r3, 4
//   0x8005d474: mtlr     r0
//   0x8005d478: addi     r1, r1, 0x10
//   0x8005d47c: blr      
//   0x8005d480: lis      r3, -0x7fdc
//   0x8005d484: addi     r3, r3, 0x7300
//   0x8005d488: blr      
//

// TODO: Full decompilation requires Ghidra
