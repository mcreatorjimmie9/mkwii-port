// Function at 0x8005b200
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005b200: stwu     r1, -0x10(r1)
//   0x8005b204: mflr     r0
//   0x8005b208: stw      r0, 0x14(r1)
//   0x8005b20c: lwz      r12, 0(r3)
//   0x8005b210: lwz      r12, 0x14(r12)
//   0x8005b214: mtctr    r12
//   0x8005b218: bctrl    
//   0x8005b21c: lwz      r0, 0x14(r1)
//   0x8005b220: addi     r3, r3, 4
//   0x8005b224: mtlr     r0
//   0x8005b228: addi     r1, r1, 0x10
//   0x8005b22c: blr      
//   0x8005b230: lis      r3, -0x7fdc
//   0x8005b234: addi     r3, r3, 0x72d8
//   0x8005b238: blr      
//

// TODO: Full decompilation requires Ghidra
