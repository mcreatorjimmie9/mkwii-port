// Function at 0x8005d220
// Size: 64 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x8005d220: stwu     r1, -0x10(r1)
//   0x8005d224: mflr     r0
//   0x8005d228: stw      r0, 0x14(r1)
//   0x8005d22c: lwz      r12, 0(r3)
//   0x8005d230: lwz      r12, 0x14(r12)
//   0x8005d234: mtctr    r12
//   0x8005d238: bctrl    
//   0x8005d23c: lwz      r0, 0x14(r1)
//   0x8005d240: addi     r3, r3, 4
//   0x8005d244: mtlr     r0
//   0x8005d248: addi     r1, r1, 0x10
//   0x8005d24c: blr      
//   0x8005d250: lis      r3, -0x7fdc
//   0x8005d254: addi     r3, r3, 0x7328
//   0x8005d258: blr      
//

// TODO: Full decompilation requires Ghidra
