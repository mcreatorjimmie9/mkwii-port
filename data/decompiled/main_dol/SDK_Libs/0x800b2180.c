// Function at 0x800b2180
// Size: 80 bytes
// Category: SDK_Libs
// Calls: 0 functions
// Stack frame: 0x10 bytes
//
// Disassembly (first 20 instructions):
//   0x800b2180: stwu     r1, -0x10(r1)
//   0x800b2184: mflr     r0
//   0x800b2188: stw      r0, 0x14(r1)
//   0x800b218c: lwz      r12, 0(r3)
//   0x800b2190: lwz      r12, 0x4c(r12)
//   0x800b2194: mtctr    r12
//   0x800b2198: bctrl    
//   0x800b219c: srwi     r0, r3, 0x18
//   0x800b21a0: stb      r0, 8(r1)
//   0x800b21a4: rlwinm   r0, r3, 0x10, 0x18, 0x1f
//   0x800b21a8: stb      r0, 9(r1)
//   0x800b21ac: rlwinm   r0, r3, 0x18, 0x18, 0x1f
//   0x800b21b0: mr       r3, r0
//   0x800b21b4: stb      r0, 0xa(r1)
//   0x800b21b8: extsb    r3, r3
//   0x800b21bc: lwz      r0, 0x14(r1)
//   0x800b21c0: mtlr     r0
//   0x800b21c4: addi     r1, r1, 0x10
//   0x800b21c8: blr      
//

// TODO: Full decompilation requires Ghidra
