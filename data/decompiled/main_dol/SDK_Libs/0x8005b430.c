// Function at 0x8005b430
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b430: stwu     r1, -0x10(r1)
//   0x8005b434: mflr     r0
//   0x8005b438: stw      r0, 0x14(r1)
//   0x8005b43c: lwz      r12, 0(r3)
//   0x8005b440: lwz      r12, 0x14(r12)
//   0x8005b444: mtctr    r12
//   0x8005b448: bctrl    
//   0x8005b44c: lwz      r0, 0x14(r1)
//   0x8005b450: addi     r3, r3, 4
//   0x8005b454: mtlr     r0
//   0x8005b458: addi     r1, r1, 0x10
//   0x8005b45c: blr      
//   0x8005b460: lis      r3, -0x7fdc
//   0x8005b464: addi     r3, r3, 0x72a0
//   0x8005b468: blr      
//

// TODO: Full decompilation requires Ghidra
